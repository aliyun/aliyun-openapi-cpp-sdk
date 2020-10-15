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

#include <alibabacloud/arms/model/UpdateWebhookRequest.h>

using AlibabaCloud::ARMS::Model::UpdateWebhookRequest;

UpdateWebhookRequest::UpdateWebhookRequest() :
	RpcServiceRequest("arms", "2019-08-08", "UpdateWebhook")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateWebhookRequest::~UpdateWebhookRequest()
{}

std::string UpdateWebhookRequest::getHeaders()const
{
	return headers_;
}

void UpdateWebhookRequest::setHeaders(const std::string& headers)
{
	headers_ = headers;
	setParameter("Headers", headers);
}

std::string UpdateWebhookRequest::getMethod()const
{
	return method_;
}

void UpdateWebhookRequest::setMethod(const std::string& method)
{
	method_ = method;
	setParameter("Method", method);
}

long UpdateWebhookRequest::getContactId()const
{
	return contactId_;
}

void UpdateWebhookRequest::setContactId(long contactId)
{
	contactId_ = contactId;
	setParameter("ContactId", std::to_string(contactId));
}

std::string UpdateWebhookRequest::getParams()const
{
	return params_;
}

void UpdateWebhookRequest::setParams(const std::string& params)
{
	params_ = params;
	setParameter("Params", params);
}

std::string UpdateWebhookRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void UpdateWebhookRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

std::string UpdateWebhookRequest::getBody()const
{
	return body_;
}

void UpdateWebhookRequest::setBody(const std::string& body)
{
	body_ = body;
	setParameter("Body", body);
}

std::string UpdateWebhookRequest::getUrl()const
{
	return url_;
}

void UpdateWebhookRequest::setUrl(const std::string& url)
{
	url_ = url;
	setParameter("Url", url);
}

std::string UpdateWebhookRequest::getContactName()const
{
	return contactName_;
}

void UpdateWebhookRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setParameter("ContactName", contactName);
}

std::string UpdateWebhookRequest::getRegionId()const
{
	return regionId_;
}

void UpdateWebhookRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

