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

#include <alibabacloud/r-kvstore/model/FlushExpireKeysRequest.h>

using AlibabaCloud::R_kvstore::Model::FlushExpireKeysRequest;

FlushExpireKeysRequest::FlushExpireKeysRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "FlushExpireKeys")
{
	setMethod(HttpRequest::Method::Post);
}

FlushExpireKeysRequest::~FlushExpireKeysRequest()
{}

long FlushExpireKeysRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void FlushExpireKeysRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string FlushExpireKeysRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void FlushExpireKeysRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string FlushExpireKeysRequest::getSecurityToken()const
{
	return securityToken_;
}

void FlushExpireKeysRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string FlushExpireKeysRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void FlushExpireKeysRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setCoreParameter("EffectiveTime", effectiveTime);
}

std::string FlushExpireKeysRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void FlushExpireKeysRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string FlushExpireKeysRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void FlushExpireKeysRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long FlushExpireKeysRequest::getOwnerId()const
{
	return ownerId_;
}

void FlushExpireKeysRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string FlushExpireKeysRequest::getInstanceId()const
{
	return instanceId_;
}

void FlushExpireKeysRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

