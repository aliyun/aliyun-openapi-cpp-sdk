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
	RpcServiceRequest("cdn", "2014-11-11", "SetHttpErrorPageConfig")
{}

SetHttpErrorPageConfigRequest::~SetHttpErrorPageConfigRequest()
{}

std::string SetHttpErrorPageConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetHttpErrorPageConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetHttpErrorPageConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetHttpErrorPageConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SetHttpErrorPageConfigRequest::getPageUrl()const
{
	return pageUrl_;
}

void SetHttpErrorPageConfigRequest::setPageUrl(const std::string& pageUrl)
{
	pageUrl_ = pageUrl;
	setCoreParameter("PageUrl", pageUrl);
}

long SetHttpErrorPageConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetHttpErrorPageConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SetHttpErrorPageConfigRequest::getErrorCode()const
{
	return errorCode_;
}

void SetHttpErrorPageConfigRequest::setErrorCode(const std::string& errorCode)
{
	errorCode_ = errorCode;
	setCoreParameter("ErrorCode", errorCode);
}

