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

#include <alibabacloud/cdn/model/SetOptimizeConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetOptimizeConfigRequest;

SetOptimizeConfigRequest::SetOptimizeConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetOptimizeConfig")
{}

SetOptimizeConfigRequest::~SetOptimizeConfigRequest()
{}

std::string SetOptimizeConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetOptimizeConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string SetOptimizeConfigRequest::getEnable()const
{
	return enable_;
}

void SetOptimizeConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setCoreParameter("Enable", std::to_string(enable));
}

std::string SetOptimizeConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetOptimizeConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

long SetOptimizeConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetOptimizeConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

