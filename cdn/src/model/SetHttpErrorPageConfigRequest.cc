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

#include <alibabacloud/cdn/model/SetHttpErrorPageConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetHttpErrorPageConfigRequest;

SetHttpErrorPageConfigRequest::SetHttpErrorPageConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetHttpErrorPageConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SetHttpErrorPageConfigRequest::~SetHttpErrorPageConfigRequest()
{}

std::string SetHttpErrorPageConfigRequest::getPageUrl()const
{
	return pageUrl_;
}

void SetHttpErrorPageConfigRequest::setPageUrl(const std::string& pageUrl)
{
	pageUrl_ = pageUrl;
	setParameter("PageUrl", pageUrl);
}

std::string SetHttpErrorPageConfigRequest::getErrorCode()const
{
	return errorCode_;
}

void SetHttpErrorPageConfigRequest::setErrorCode(const std::string& errorCode)
{
	errorCode_ = errorCode;
	setParameter("ErrorCode", errorCode);
}

std::string SetHttpErrorPageConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetHttpErrorPageConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long SetHttpErrorPageConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetHttpErrorPageConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long SetHttpErrorPageConfigRequest::getConfigId()const
{
	return configId_;
}

void SetHttpErrorPageConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setParameter("ConfigId", std::to_string(configId));
}

