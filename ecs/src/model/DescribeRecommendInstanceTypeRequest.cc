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

#include <alibabacloud/ecs/model/DescribeRecommendInstanceTypeRequest.h>

using AlibabaCloud::Ecs::Model::DescribeRecommendInstanceTypeRequest;

DescribeRecommendInstanceTypeRequest::DescribeRecommendInstanceTypeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeRecommendInstanceType")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRecommendInstanceTypeRequest::~DescribeRecommendInstanceTypeRequest()
{}

long DescribeRecommendInstanceTypeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRecommendInstanceTypeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeRecommendInstanceTypeRequest::getInstancePpsRx()const
{
	return instancePpsRx_;
}

void DescribeRecommendInstanceTypeRequest::setInstancePpsRx(int instancePpsRx)
{
	instancePpsRx_ = instancePpsRx;
	setParameter("InstancePpsRx", std::to_string(instancePpsRx));
}

float DescribeRecommendInstanceTypeRequest::getMemory()const
{
	return memory_;
}

void DescribeRecommendInstanceTypeRequest::setMemory(float memory)
{
	memory_ = memory;
	setParameter("Memory", std::to_string(memory));
}

int DescribeRecommendInstanceTypeRequest::getInstancePpsTx()const
{
	return instancePpsTx_;
}

void DescribeRecommendInstanceTypeRequest::setInstancePpsTx(int instancePpsTx)
{
	instancePpsTx_ = instancePpsTx;
	setParameter("InstancePpsTx", std::to_string(instancePpsTx));
}

std::string DescribeRecommendInstanceTypeRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void DescribeRecommendInstanceTypeRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized);
}

std::string DescribeRecommendInstanceTypeRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeRecommendInstanceTypeRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

std::string DescribeRecommendInstanceTypeRequest::getScene()const
{
	return scene_;
}

void DescribeRecommendInstanceTypeRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

int DescribeRecommendInstanceTypeRequest::getInstanceBandwidthTx()const
{
	return instanceBandwidthTx_;
}

void DescribeRecommendInstanceTypeRequest::setInstanceBandwidthTx(int instanceBandwidthTx)
{
	instanceBandwidthTx_ = instanceBandwidthTx;
	setParameter("InstanceBandwidthTx", std::to_string(instanceBandwidthTx));
}

int DescribeRecommendInstanceTypeRequest::getCores()const
{
	return cores_;
}

void DescribeRecommendInstanceTypeRequest::setCores(int cores)
{
	cores_ = cores;
	setParameter("Cores", std::to_string(cores));
}

int DescribeRecommendInstanceTypeRequest::getInstanceBandwidthRx()const
{
	return instanceBandwidthRx_;
}

void DescribeRecommendInstanceTypeRequest::setInstanceBandwidthRx(int instanceBandwidthRx)
{
	instanceBandwidthRx_ = instanceBandwidthRx;
	setParameter("InstanceBandwidthRx", std::to_string(instanceBandwidthRx));
}

std::string DescribeRecommendInstanceTypeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRecommendInstanceTypeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeRecommendInstanceTypeRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void DescribeRecommendInstanceTypeRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setParameter("SystemDiskCategory", systemDiskCategory);
}

std::string DescribeRecommendInstanceTypeRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeRecommendInstanceTypeRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string DescribeRecommendInstanceTypeRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeRecommendInstanceTypeRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

float DescribeRecommendInstanceTypeRequest::getMaxPrice()const
{
	return maxPrice_;
}

void DescribeRecommendInstanceTypeRequest::setMaxPrice(float maxPrice)
{
	maxPrice_ = maxPrice;
	setParameter("MaxPrice", std::to_string(maxPrice));
}

std::string DescribeRecommendInstanceTypeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRecommendInstanceTypeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRecommendInstanceTypeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRecommendInstanceTypeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::vector<std::string> DescribeRecommendInstanceTypeRequest::getInstanceTypeFamily()const
{
	return instanceTypeFamily_;
}

void DescribeRecommendInstanceTypeRequest::setInstanceTypeFamily(const std::vector<std::string>& instanceTypeFamily)
{
	instanceTypeFamily_ = instanceTypeFamily;
	for(int dep1 = 0; dep1!= instanceTypeFamily.size(); dep1++) {
		setParameter("InstanceTypeFamily."+ std::to_string(dep1), instanceTypeFamily.at(dep1));
	}
}

long DescribeRecommendInstanceTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRecommendInstanceTypeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRecommendInstanceTypeRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void DescribeRecommendInstanceTypeRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setParameter("SpotStrategy", spotStrategy);
}

std::string DescribeRecommendInstanceTypeRequest::getPriorityStrategy()const
{
	return priorityStrategy_;
}

void DescribeRecommendInstanceTypeRequest::setPriorityStrategy(const std::string& priorityStrategy)
{
	priorityStrategy_ = priorityStrategy;
	setParameter("PriorityStrategy", priorityStrategy);
}

std::string DescribeRecommendInstanceTypeRequest::getInstanceFamilyLevel()const
{
	return instanceFamilyLevel_;
}

void DescribeRecommendInstanceTypeRequest::setInstanceFamilyLevel(const std::string& instanceFamilyLevel)
{
	instanceFamilyLevel_ = instanceFamilyLevel;
	setParameter("InstanceFamilyLevel", instanceFamilyLevel);
}

std::string DescribeRecommendInstanceTypeRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeRecommendInstanceTypeRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

