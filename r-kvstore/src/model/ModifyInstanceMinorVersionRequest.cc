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

#include <alibabacloud/r-kvstore/model/ModifyInstanceMinorVersionRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceMinorVersionRequest;

ModifyInstanceMinorVersionRequest::ModifyInstanceMinorVersionRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceMinorVersion")
{}

ModifyInstanceMinorVersionRequest::~ModifyInstanceMinorVersionRequest()
{}

long ModifyInstanceMinorVersionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceMinorVersionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyInstanceMinorVersionRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceMinorVersionRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyInstanceMinorVersionRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyInstanceMinorVersionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyInstanceMinorVersionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceMinorVersionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceMinorVersionRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceMinorVersionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyInstanceMinorVersionRequest::getMinorversion()const
{
	return minorversion_;
}

void ModifyInstanceMinorVersionRequest::setMinorversion(const std::string& minorversion)
{
	minorversion_ = minorversion;
	setCoreParameter("Minorversion", minorversion);
}

std::string ModifyInstanceMinorVersionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceMinorVersionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyInstanceMinorVersionRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceMinorVersionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyInstanceMinorVersionRequest::getEffectTime()const
{
	return effectTime_;
}

void ModifyInstanceMinorVersionRequest::setEffectTime(const std::string& effectTime)
{
	effectTime_ = effectTime;
	setCoreParameter("EffectTime", effectTime);
}

std::string ModifyInstanceMinorVersionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyInstanceMinorVersionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

