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

#include <alibabacloud/r-kvstore/model/RestartInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::RestartInstanceRequest;

RestartInstanceRequest::RestartInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "RestartInstance")
{}

RestartInstanceRequest::~RestartInstanceRequest()
{}

long RestartInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RestartInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RestartInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void RestartInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string RestartInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void RestartInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string RestartInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RestartInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RestartInstanceRequest::getRegionId()const
{
	return regionId_;
}

void RestartInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RestartInstanceRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void RestartInstanceRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setCoreParameter("EffectiveTime", effectiveTime);
}

std::string RestartInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RestartInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long RestartInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RestartInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RestartInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestartInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

