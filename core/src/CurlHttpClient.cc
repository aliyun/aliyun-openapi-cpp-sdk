/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "CurlHttpClient.h"
#include <cassert>
#include <sstream>
#include <vector>

using namespace AlibabaCloud;

namespace
{
	size_t recvBody(char *ptr, size_t size, size_t nmemb, void *userdata)
	{
		HttpResponse *response = static_cast<HttpResponse*>(userdata);
		response->setBody(ptr, nmemb);
		return nmemb * size;
	}

	size_t recvHeaders(char *buffer, size_t size, size_t nitems, void *userdata)
	{
		HttpResponse *response = static_cast<HttpResponse*>(userdata);
		std::string line(buffer);
		auto pos = line.find(':');
		if (pos != line.npos)
		{
			std::string name = line.substr(0, pos);
			std::string value = line.substr(pos + 2);
			size_t p = 0;
			if ((p = value.rfind('\r')) != value.npos)
				value[p] = '\0';
			response->setHeader(name, value);
		}
		return nitems * size;
	}

	void setCUrlProxy(CURL *curlHandle, const NetworkProxy &proxy)
	{
		if (proxy.type() == NetworkProxy::Type::None)
			return;

		long type;
		switch (proxy.type())
		{
		case NetworkProxy::Type::Socks5:
			type = CURLPROXY_SOCKS5;
			break;
		case NetworkProxy::Type::Http:
		default:
			type = CURLPROXY_HTTP;
			break;
		}
		curl_easy_setopt(curlHandle, CURLOPT_PROXYTYPE, type);

		std::ostringstream out;
		out << proxy.hostName() << ":" << proxy.port();
		curl_easy_setopt(curlHandle, CURLOPT_PROXY, out.str().c_str());

		if (!proxy.user().empty()) {
			out.clear();
			out << proxy.user() << ":" << proxy.password();
			curl_easy_setopt(curlHandle, CURLOPT_PROXYUSERPWD, out.str().c_str());
		}
	}
}

CurlHttpClient::CurlHttpClient() :
	HttpClient(),
	curlHandle_(curl_easy_init())
{
}

CurlHttpClient::~CurlHttpClient()
{
	curl_easy_cleanup(curlHandle_);
}

HttpClient::HttpResponseOutcome CurlHttpClient::makeRequest(const HttpRequest &request)
{
	curl_easy_reset(curlHandle_);
	HttpResponse response(request);
	std::string url = request.url().toString();
	switch (request.method())
	{
	case HttpRequest::Method::Get:
		break;
	case HttpRequest::Method::Put:
		curl_easy_setopt(curlHandle_, CURLOPT_UPLOAD, 1L);
		break;
	default:
		break;
	}
	curl_easy_setopt(curlHandle_, CURLOPT_URL, url.c_str());
	curl_easy_setopt(curlHandle_, CURLOPT_SSL_VERIFYPEER, 1L);
	curl_easy_setopt(curlHandle_, CURLOPT_SSL_VERIFYHOST, 2L);
	curl_easy_setopt(curlHandle_, CURLOPT_HEADERDATA, &response);
	curl_easy_setopt(curlHandle_, CURLOPT_HEADERFUNCTION, recvHeaders);

	curl_slist *list = nullptr;
	auto headers = request.headers();
	for (const auto &p : headers)
	{
		std::string str = p.first;
		str.append(": ").append(p.second);
		list = curl_slist_append(list, str.c_str());
	}
	curl_easy_setopt(curlHandle_, CURLOPT_HTTPHEADER, list);
	curl_easy_setopt(curlHandle_, CURLOPT_WRITEDATA, &response);
	curl_easy_setopt(curlHandle_, CURLOPT_WRITEFUNCTION, recvBody);
	setCUrlProxy(curlHandle_, proxy());

	CURLcode res = curl_easy_perform(curlHandle_);
	if (res == CURLE_OK) {
		long response_code;
		curl_easy_getinfo(curlHandle_, CURLINFO_RESPONSE_CODE, &response_code);
		response.setStatusCode(response_code);
		return HttpResponseOutcome(response);
	}
	
	return HttpResponseOutcome(Error("NetworkError", "Failed to connect to host or proxy."));
}
