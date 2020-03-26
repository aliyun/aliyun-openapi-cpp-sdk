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

#include <alibabacloud/live/model/AddLiveDomainMappingRequest.h>

using AlibabaCloud::Live::Model::AddLiveDomainMappingRequest;

AddLiveDomainMappingRequest::AddLiveDomainMappingRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddLiveDomainMapping")
{
	setMethod(HttpRequest::Method::Post);
}

AddLiveDomainMappingRequest::~AddLiveDomainMappingRequest()
{}

long AddLiveDomainMappingRequest::getOwnerId()const
{
	return ownerId_;
}

void AddLiveDomainMappingRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddLiveDomainMappingRequest::getPullDomain()const
{
	return pullDomain_;
}

void AddLiveDomainMappingRequest::setPullDomain(const std::string& pullDomain)
{
	pullDomain_ = pullDomain;
	setParameter("PullDomain", pullDomain);
}

std::string AddLiveDomainMappingRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddLiveDomainMappingRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string AddLiveDomainMappingRequest::getPushDomain()const
{
	return pushDomain_;
}

void AddLiveDomainMappingRequest::setPushDomain(const std::string& pushDomain)
{
	pushDomain_ = pushDomain;
	setParameter("PushDomain", pushDomain);
}

