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

#include <alibabacloud/ecs/model/DescribeAvailableResourceRequest.h>

using AlibabaCloud::Ecs::Model::DescribeAvailableResourceRequest;

DescribeAvailableResourceRequest::DescribeAvailableResourceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeAvailableResource")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAvailableResourceRequest::~DescribeAvailableResourceRequest()
{}

long DescribeAvailableResourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAvailableResourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

float DescribeAvailableResourceRequest::getMemory()const
{
	return memory_;
}

void DescribeAvailableResourceRequest::setMemory(float memory)
{
	memory_ = memory;
	setCoreParameter("Memory", std::to_string(memory));
}

std::string DescribeAvailableResourceRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void DescribeAvailableResourceRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", ioOptimized);
}

std::string DescribeAvailableResourceRequest::getDataDiskCategory()const
{
	return dataDiskCategory_;
}

void DescribeAvailableResourceRequest::setDataDiskCategory(const std::string& dataDiskCategory)
{
	dataDiskCategory_ = dataDiskCategory;
	setCoreParameter("DataDiskCategory", dataDiskCategory);
}

int DescribeAvailableResourceRequest::getCores()const
{
	return cores_;
}

void DescribeAvailableResourceRequest::setCores(int cores)
{
	cores_ = cores;
	setCoreParameter("Cores", std::to_string(cores));
}

std::string DescribeAvailableResourceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAvailableResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeAvailableResourceRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void DescribeAvailableResourceRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setCoreParameter("SystemDiskCategory", systemDiskCategory);
}

std::string DescribeAvailableResourceRequest::getScope()const
{
	return scope_;
}

void DescribeAvailableResourceRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setCoreParameter("Scope", scope);
}

std::string DescribeAvailableResourceRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeAvailableResourceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string DescribeAvailableResourceRequest::getNetworkCategory()const
{
	return networkCategory_;
}

void DescribeAvailableResourceRequest::setNetworkCategory(const std::string& networkCategory)
{
	networkCategory_ = networkCategory;
	setCoreParameter("NetworkCategory", networkCategory);
}

std::string DescribeAvailableResourceRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeAvailableResourceRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

std::string DescribeAvailableResourceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAvailableResourceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAvailableResourceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAvailableResourceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeAvailableResourceRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void DescribeAvailableResourceRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setCoreParameter("DedicatedHostId", dedicatedHostId);
}

long DescribeAvailableResourceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAvailableResourceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeAvailableResourceRequest::getSpotDuration()const
{
	return spotDuration_;
}

void DescribeAvailableResourceRequest::setSpotDuration(int spotDuration)
{
	spotDuration_ = spotDuration;
	setCoreParameter("SpotDuration", std::to_string(spotDuration));
}

std::string DescribeAvailableResourceRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeAvailableResourceRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::string DescribeAvailableResourceRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void DescribeAvailableResourceRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setCoreParameter("SpotStrategy", spotStrategy);
}

std::string DescribeAvailableResourceRequest::getDestinationResource()const
{
	return destinationResource_;
}

void DescribeAvailableResourceRequest::setDestinationResource(const std::string& destinationResource)
{
	destinationResource_ = destinationResource;
	setCoreParameter("DestinationResource", destinationResource);
}

std::string DescribeAvailableResourceRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeAvailableResourceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

