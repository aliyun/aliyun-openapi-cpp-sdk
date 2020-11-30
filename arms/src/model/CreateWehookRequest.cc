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

#include <alibabacloud/arms/model/CreateWehookRequest.h>

using AlibabaCloud::ARMS::Model::CreateWehookRequest;

CreateWehookRequest::CreateWehookRequest() :
	RpcServiceRequest("arms", "2019-08-08", "CreateWehook")
{
	setMethod(HttpRequest::Method::Post);
}

CreateWehookRequest::~CreateWehookRequest()
{}

std::string CreateWehookRequest::getHttpHeaders()const
{
	return httpHeaders_;
}

void CreateWehookRequest::setHttpHeaders(const std::string& httpHeaders)
{
	httpHeaders_ = httpHeaders;
	setParameter("HttpHeaders", httpHeaders);
}

std::string CreateWehookRequest::getMethod()const
{
	return method_;
}

void CreateWehookRequest::setMethod(const std::string& method)
{
	method_ = method;
	setParameter("Method", method);
}

std::string CreateWehookRequest::getHttpParams()const
{
	return httpParams_;
}

void CreateWehookRequest::setHttpParams(const std::string& httpParams)
{
	httpParams_ = httpParams;
	setParameter("HttpParams", httpParams);
}

std::string CreateWehookRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void CreateWehookRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

std::string CreateWehookRequest::getBody()const
{
	return body_;
}

void CreateWehookRequest::setBody(const std::string& body)
{
	body_ = body;
	setParameter("Body", body);
}

std::string CreateWehookRequest::getUrl()const
{
	return url_;
}

void CreateWehookRequest::setUrl(const std::string& url)
{
	url_ = url;
	setParameter("Url", url);
}

std::string CreateWehookRequest::getContactName()const
{
	return contactName_;
}

void CreateWehookRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setParameter("ContactName", contactName);
}

std::string CreateWehookRequest::getRegionId()const
{
	return regionId_;
}

void CreateWehookRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

