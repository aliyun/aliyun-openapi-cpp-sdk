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

#include <alibabacloud/rds/model/EvaluateDedicatedHostInstanceResourceRequest.h>

using AlibabaCloud::Rds::Model::EvaluateDedicatedHostInstanceResourceRequest;

EvaluateDedicatedHostInstanceResourceRequest::EvaluateDedicatedHostInstanceResourceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "EvaluateDedicatedHostInstanceResource")
{
	setMethod(HttpRequest::Method::Post);
}

EvaluateDedicatedHostInstanceResourceRequest::~EvaluateDedicatedHostInstanceResourceRequest()
{}

long EvaluateDedicatedHostInstanceResourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void EvaluateDedicatedHostInstanceResourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string EvaluateDedicatedHostInstanceResourceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void EvaluateDedicatedHostInstanceResourceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string EvaluateDedicatedHostInstanceResourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void EvaluateDedicatedHostInstanceResourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string EvaluateDedicatedHostInstanceResourceRequest::getRegionId()const
{
	return regionId_;
}

void EvaluateDedicatedHostInstanceResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string EvaluateDedicatedHostInstanceResourceRequest::getEngine()const
{
	return engine_;
}

void EvaluateDedicatedHostInstanceResourceRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string EvaluateDedicatedHostInstanceResourceRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void EvaluateDedicatedHostInstanceResourceRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

std::string EvaluateDedicatedHostInstanceResourceRequest::getInstanceClassNames()const
{
	return instanceClassNames_;
}

void EvaluateDedicatedHostInstanceResourceRequest::setInstanceClassNames(const std::string& instanceClassNames)
{
	instanceClassNames_ = instanceClassNames;
	setParameter("InstanceClassNames", instanceClassNames);
}

std::string EvaluateDedicatedHostInstanceResourceRequest::getDiskSize()const
{
	return diskSize_;
}

void EvaluateDedicatedHostInstanceResourceRequest::setDiskSize(const std::string& diskSize)
{
	diskSize_ = diskSize;
	setParameter("DiskSize", diskSize);
}

std::string EvaluateDedicatedHostInstanceResourceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void EvaluateDedicatedHostInstanceResourceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long EvaluateDedicatedHostInstanceResourceRequest::getOwnerId()const
{
	return ownerId_;
}

void EvaluateDedicatedHostInstanceResourceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string EvaluateDedicatedHostInstanceResourceRequest::getDiskType()const
{
	return diskType_;
}

void EvaluateDedicatedHostInstanceResourceRequest::setDiskType(const std::string& diskType)
{
	diskType_ = diskType;
	setParameter("DiskType", diskType);
}

