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

#include <alibabacloud/cdn/model/SetErrorPageConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetErrorPageConfigRequest;

SetErrorPageConfigRequest::SetErrorPageConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetErrorPageConfig")
{}

SetErrorPageConfigRequest::~SetErrorPageConfigRequest()
{}

std::string SetErrorPageConfigRequest::getPageType()const
{
	return pageType_;
}

void SetErrorPageConfigRequest::setPageType(const std::string& pageType)
{
	pageType_ = pageType;
	setCoreParameter("PageType", pageType);
}

std::string SetErrorPageConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetErrorPageConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetErrorPageConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetErrorPageConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SetErrorPageConfigRequest::getCustomPageUrl()const
{
	return customPageUrl_;
}

void SetErrorPageConfigRequest::setCustomPageUrl(const std::string& customPageUrl)
{
	customPageUrl_ = customPageUrl;
	setCoreParameter("CustomPageUrl", customPageUrl);
}

long SetErrorPageConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetErrorPageConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

