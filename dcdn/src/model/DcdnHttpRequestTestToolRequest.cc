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

#include <alibabacloud/dcdn/model/DcdnHttpRequestTestToolRequest.h>

using AlibabaCloud::Dcdn::Model::DcdnHttpRequestTestToolRequest;

DcdnHttpRequestTestToolRequest::DcdnHttpRequestTestToolRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DcdnHttpRequestTestTool")
{
	setMethod(HttpRequest::Method::Post);
}

DcdnHttpRequestTestToolRequest::~DcdnHttpRequestTestToolRequest()
{}

std::string DcdnHttpRequestTestToolRequest::getProxyIp()const
{
	return proxyIp_;
}

void DcdnHttpRequestTestToolRequest::setProxyIp(const std::string& proxyIp)
{
	proxyIp_ = proxyIp;
	setBodyParameter("ProxyIp", proxyIp);
}

std::string DcdnHttpRequestTestToolRequest::getScheme()const
{
	return scheme_;
}

void DcdnHttpRequestTestToolRequest::setScheme(const std::string& scheme)
{
	scheme_ = scheme;
	setBodyParameter("Scheme", scheme);
}

std::string DcdnHttpRequestTestToolRequest::getBody()const
{
	return body_;
}

void DcdnHttpRequestTestToolRequest::setBody(const std::string& body)
{
	body_ = body;
	setBodyParameter("Body", body);
}

std::string DcdnHttpRequestTestToolRequest::getHost()const
{
	return host_;
}

void DcdnHttpRequestTestToolRequest::setHost(const std::string& host)
{
	host_ = host;
	setBodyParameter("Host", host);
}

std::string DcdnHttpRequestTestToolRequest::getMethod()const
{
	return method_;
}

void DcdnHttpRequestTestToolRequest::setMethod(const std::string& method)
{
	method_ = method;
	setBodyParameter("Method", method);
}

long DcdnHttpRequestTestToolRequest::getOwnerId()const
{
	return ownerId_;
}

void DcdnHttpRequestTestToolRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DcdnHttpRequestTestToolRequest::getUri()const
{
	return uri_;
}

void DcdnHttpRequestTestToolRequest::setUri(const std::string& uri)
{
	uri_ = uri;
	setBodyParameter("Uri", uri);
}

std::string DcdnHttpRequestTestToolRequest::getArgs()const
{
	return args_;
}

void DcdnHttpRequestTestToolRequest::setArgs(const std::string& args)
{
	args_ = args;
	setBodyParameter("Args", args);
}

std::string DcdnHttpRequestTestToolRequest::getHeader()const
{
	return header_;
}

void DcdnHttpRequestTestToolRequest::setHeader(const std::string& header)
{
	header_ = header;
	setBodyParameter("Header", header);
}

