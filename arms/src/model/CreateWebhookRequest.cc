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

#include <alibabacloud/arms/model/CreateWebhookRequest.h>

using AlibabaCloud::ARMS::Model::CreateWebhookRequest;

CreateWebhookRequest::CreateWebhookRequest() :
	RpcServiceRequest("arms", "2019-08-08", "CreateWebhook")
{
	setMethod(HttpRequest::Method::Post);
}

CreateWebhookRequest::~CreateWebhookRequest()
{}

std::string CreateWebhookRequest::getHttpHeaders()const
{
	return httpHeaders_;
}

void CreateWebhookRequest::setHttpHeaders(const std::string& httpHeaders)
{
	httpHeaders_ = httpHeaders;
	setParameter("HttpHeaders", httpHeaders);
}

std::string CreateWebhookRequest::getMethod()const
{
	return method_;
}

void CreateWebhookRequest::setMethod(const std::string& method)
{
	method_ = method;
	setParameter("Method", method);
}

std::string CreateWebhookRequest::getHttpParams()const
{
	return httpParams_;
}

void CreateWebhookRequest::setHttpParams(const std::string& httpParams)
{
	httpParams_ = httpParams;
	setParameter("HttpParams", httpParams);
}

std::string CreateWebhookRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void CreateWebhookRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

std::string CreateWebhookRequest::getBody()const
{
	return body_;
}

void CreateWebhookRequest::setBody(const std::string& body)
{
	body_ = body;
	setParameter("Body", body);
}

std::string CreateWebhookRequest::getUrl()const
{
	return url_;
}

void CreateWebhookRequest::setUrl(const std::string& url)
{
	url_ = url;
	setParameter("Url", url);
}

std::string CreateWebhookRequest::getContactName()const
{
	return contactName_;
}

void CreateWebhookRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setParameter("ContactName", contactName);
}

std::string CreateWebhookRequest::getRegionId()const
{
	return regionId_;
}

void CreateWebhookRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

