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

#include <alibabacloud/cdn/model/SetForceRedirectConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetForceRedirectConfigRequest;

SetForceRedirectConfigRequest::SetForceRedirectConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetForceRedirectConfig")
{}

SetForceRedirectConfigRequest::~SetForceRedirectConfigRequest()
{}

std::string SetForceRedirectConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetForceRedirectConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetForceRedirectConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetForceRedirectConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SetForceRedirectConfigRequest::getRedirectType()const
{
	return redirectType_;
}

void SetForceRedirectConfigRequest::setRedirectType(const std::string& redirectType)
{
	redirectType_ = redirectType;
	setCoreParameter("RedirectType", redirectType);
}

long SetForceRedirectConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetForceRedirectConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

