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

#include <alibabacloud/r-kvstore/model/ModifyDedicatedInstanceSpecRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyDedicatedInstanceSpecRequest;

ModifyDedicatedInstanceSpecRequest::ModifyDedicatedInstanceSpecRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyDedicatedInstanceSpec")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDedicatedInstanceSpecRequest::~ModifyDedicatedInstanceSpecRequest()
{}

long ModifyDedicatedInstanceSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDedicatedInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDedicatedInstanceSpecRequest::getInstanceClass()const
{
	return instanceClass_;
}

void ModifyDedicatedInstanceSpecRequest::setInstanceClass(const std::string& instanceClass)
{
	instanceClass_ = instanceClass;
	setCoreParameter("InstanceClass", instanceClass);
}

std::string ModifyDedicatedInstanceSpecRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDedicatedInstanceSpecRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDedicatedInstanceSpecRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDedicatedInstanceSpecRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyDedicatedInstanceSpecRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDedicatedInstanceSpecRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyDedicatedInstanceSpecRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void ModifyDedicatedInstanceSpecRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setCoreParameter("EffectiveTime", effectiveTime);
}

std::string ModifyDedicatedInstanceSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDedicatedInstanceSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDedicatedInstanceSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDedicatedInstanceSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDedicatedInstanceSpecRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyDedicatedInstanceSpecRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

long ModifyDedicatedInstanceSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDedicatedInstanceSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDedicatedInstanceSpecRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyDedicatedInstanceSpecRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyDedicatedInstanceSpecRequest::getZoneId()const
{
	return zoneId_;
}

void ModifyDedicatedInstanceSpecRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

bool ModifyDedicatedInstanceSpecRequest::getForceUpgrade()const
{
	return forceUpgrade_;
}

void ModifyDedicatedInstanceSpecRequest::setForceUpgrade(bool forceUpgrade)
{
	forceUpgrade_ = forceUpgrade;
	setCoreParameter("ForceUpgrade", forceUpgrade ? "true" : "false");
}

