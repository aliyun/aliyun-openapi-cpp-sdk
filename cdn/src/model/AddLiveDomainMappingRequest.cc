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

#include <alibabacloud/cdn/model/AddLiveDomainMappingRequest.h>

using AlibabaCloud::Cdn::Model::AddLiveDomainMappingRequest;

AddLiveDomainMappingRequest::AddLiveDomainMappingRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "AddLiveDomainMapping")
{}

AddLiveDomainMappingRequest::~AddLiveDomainMappingRequest()
{}

std::string AddLiveDomainMappingRequest::getPullDomain()const
{
	return pullDomain_;
}

void AddLiveDomainMappingRequest::setPullDomain(const std::string& pullDomain)
{
	pullDomain_ = pullDomain;
	setCoreParameter("PullDomain", pullDomain);
}

std::string AddLiveDomainMappingRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddLiveDomainMappingRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string AddLiveDomainMappingRequest::getPushDomain()const
{
	return pushDomain_;
}

void AddLiveDomainMappingRequest::setPushDomain(const std::string& pushDomain)
{
	pushDomain_ = pushDomain;
	setCoreParameter("PushDomain", pushDomain);
}

long AddLiveDomainMappingRequest::getOwnerId()const
{
	return ownerId_;
}

void AddLiveDomainMappingRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

