<<<<<<< HEAD
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

#include <alibabacloud/ecs/model/ModifyInstanceSpecRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceSpecRequest;

ModifyInstanceSpecRequest::ModifyInstanceSpecRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceSpec")
{}

ModifyInstanceSpecRequest::~ModifyInstanceSpecRequest()
{}

long ModifyInstanceSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyInstanceSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceSpecRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyInstanceSpecRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

bool ModifyInstanceSpecRequest::getAllowMigrateAcrossZone()const
{
	return allowMigrateAcrossZone_;
}

void ModifyInstanceSpecRequest::setAllowMigrateAcrossZone(bool allowMigrateAcrossZone)
{
	allowMigrateAcrossZone_ = allowMigrateAcrossZone;
	setCoreParameter("AllowMigrateAcrossZone", allowMigrateAcrossZone ? "true" : "false");
}

std::string ModifyInstanceSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int ModifyInstanceSpecRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void ModifyInstanceSpecRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setCoreParameter("InternetMaxBandwidthOut", std::to_string(internetMaxBandwidthOut));
}

long ModifyInstanceSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int ModifyInstanceSpecRequest::getTemporaryInternetMaxBandwidthOut()const
{
	return temporaryInternetMaxBandwidthOut_;
}

void ModifyInstanceSpecRequest::setTemporaryInternetMaxBandwidthOut(int temporaryInternetMaxBandwidthOut)
{
	temporaryInternetMaxBandwidthOut_ = temporaryInternetMaxBandwidthOut;
	setCoreParameter("TemporaryInternetMaxBandwidthOut", std::to_string(temporaryInternetMaxBandwidthOut));
}

std::string ModifyInstanceSpecRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void ModifyInstanceSpecRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setCoreParameter("SystemDiskCategory", systemDiskCategory);
}

std::string ModifyInstanceSpecRequest::getTemporaryStartTime()const
{
	return temporaryStartTime_;
}

void ModifyInstanceSpecRequest::setTemporaryStartTime(const std::string& temporaryStartTime)
{
	temporaryStartTime_ = temporaryStartTime;
	setCoreParameter("TemporaryStartTime", temporaryStartTime);
}

std::string ModifyInstanceSpecRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifyInstanceSpecRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

bool ModifyInstanceSpecRequest::getAsync()const
{
	return async_;
}

void ModifyInstanceSpecRequest::setAsync(bool async)
{
	async_ = async;
	setCoreParameter("Async", async ? "true" : "false");
}

std::string ModifyInstanceSpecRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceSpecRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyInstanceSpecRequest::getInstanceType()const
{
	return instanceType_;
}

void ModifyInstanceSpecRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string ModifyInstanceSpecRequest::getTemporaryEndTime()const
{
	return temporaryEndTime_;
}

void ModifyInstanceSpecRequest::setTemporaryEndTime(const std::string& temporaryEndTime)
{
	temporaryEndTime_ = temporaryEndTime;
	setCoreParameter("TemporaryEndTime", temporaryEndTime);
}

int ModifyInstanceSpecRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void ModifyInstanceSpecRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setCoreParameter("InternetMaxBandwidthIn", std::to_string(internetMaxBandwidthIn));
}

=======
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

#include <alibabacloud/ecs/model/ModifyInstanceSpecRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceSpecRequest;

ModifyInstanceSpecRequest::ModifyInstanceSpecRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceSpec")
{}

ModifyInstanceSpecRequest::~ModifyInstanceSpecRequest()
{}

long ModifyInstanceSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyInstanceSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceSpecRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyInstanceSpecRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

bool ModifyInstanceSpecRequest::getAllowMigrateAcrossZone()const
{
	return allowMigrateAcrossZone_;
}

void ModifyInstanceSpecRequest::setAllowMigrateAcrossZone(bool allowMigrateAcrossZone)
{
	allowMigrateAcrossZone_ = allowMigrateAcrossZone;
	setCoreParameter("AllowMigrateAcrossZone", allowMigrateAcrossZone ? "true" : "false");
}

std::string ModifyInstanceSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int ModifyInstanceSpecRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void ModifyInstanceSpecRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setCoreParameter("InternetMaxBandwidthOut", std::to_string(internetMaxBandwidthOut));
}

long ModifyInstanceSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int ModifyInstanceSpecRequest::getTemporaryInternetMaxBandwidthOut()const
{
	return temporaryInternetMaxBandwidthOut_;
}

void ModifyInstanceSpecRequest::setTemporaryInternetMaxBandwidthOut(int temporaryInternetMaxBandwidthOut)
{
	temporaryInternetMaxBandwidthOut_ = temporaryInternetMaxBandwidthOut;
	setCoreParameter("TemporaryInternetMaxBandwidthOut", std::to_string(temporaryInternetMaxBandwidthOut));
}

std::string ModifyInstanceSpecRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void ModifyInstanceSpecRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setCoreParameter("SystemDiskCategory", systemDiskCategory);
}

std::string ModifyInstanceSpecRequest::getTemporaryStartTime()const
{
	return temporaryStartTime_;
}

void ModifyInstanceSpecRequest::setTemporaryStartTime(const std::string& temporaryStartTime)
{
	temporaryStartTime_ = temporaryStartTime;
	setCoreParameter("TemporaryStartTime", temporaryStartTime);
}

std::string ModifyInstanceSpecRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifyInstanceSpecRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

bool ModifyInstanceSpecRequest::getAsync()const
{
	return async_;
}

void ModifyInstanceSpecRequest::setAsync(bool async)
{
	async_ = async;
	setCoreParameter("Async", async ? "true" : "false");
}

std::string ModifyInstanceSpecRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceSpecRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyInstanceSpecRequest::getInstanceType()const
{
	return instanceType_;
}

void ModifyInstanceSpecRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string ModifyInstanceSpecRequest::getTemporaryEndTime()const
{
	return temporaryEndTime_;
}

void ModifyInstanceSpecRequest::setTemporaryEndTime(const std::string& temporaryEndTime)
{
	temporaryEndTime_ = temporaryEndTime;
	setCoreParameter("TemporaryEndTime", temporaryEndTime);
}

int ModifyInstanceSpecRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void ModifyInstanceSpecRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setCoreParameter("InternetMaxBandwidthIn", std::to_string(internetMaxBandwidthIn));
}

>>>>>>> master
