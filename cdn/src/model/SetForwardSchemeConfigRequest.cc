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

#include <alibabacloud/cdn/model/SetForwardSchemeConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetForwardSchemeConfigRequest;

SetForwardSchemeConfigRequest::SetForwardSchemeConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetForwardSchemeConfig")
{}

SetForwardSchemeConfigRequest::~SetForwardSchemeConfigRequest()
{}

std::string SetForwardSchemeConfigRequest::getSchemeOrigin()const
{
	return schemeOrigin_;
}

void SetForwardSchemeConfigRequest::setSchemeOrigin(const std::string& schemeOrigin)
{
	schemeOrigin_ = schemeOrigin;
	setCoreParameter("SchemeOrigin", schemeOrigin);
}

std::string SetForwardSchemeConfigRequest::getSchemeOriginPort()const
{
	return schemeOriginPort_;
}

void SetForwardSchemeConfigRequest::setSchemeOriginPort(const std::string& schemeOriginPort)
{
	schemeOriginPort_ = schemeOriginPort;
	setCoreParameter("SchemeOriginPort", schemeOriginPort);
}

std::string SetForwardSchemeConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetForwardSchemeConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetForwardSchemeConfigRequest::getEnable()const
{
	return enable_;
}

void SetForwardSchemeConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string SetForwardSchemeConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetForwardSchemeConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long SetForwardSchemeConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetForwardSchemeConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

