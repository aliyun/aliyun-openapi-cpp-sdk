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

#include <alibabacloud/ecs/model/DescribePriceRequest.h>

using AlibabaCloud::Ecs::Model::DescribePriceRequest;

DescribePriceRequest::DescribePriceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribePrice")
{}

DescribePriceRequest::~DescribePriceRequest()
{}

std::string DescribePriceRequest::getDataDisk3PerformanceLevel()const
{
	return dataDisk3PerformanceLevel_;
}

void DescribePriceRequest::setDataDisk3PerformanceLevel(const std::string& dataDisk3PerformanceLevel)
{
	dataDisk3PerformanceLevel_ = dataDisk3PerformanceLevel;
	setCoreParameter("DataDisk3PerformanceLevel", std::to_string(dataDisk3PerformanceLevel));
}

int DescribePriceRequest::getDataDisk3Size()const
{
	return dataDisk3Size_;
}

void DescribePriceRequest::setDataDisk3Size(int dataDisk3Size)
{
	dataDisk3Size_ = dataDisk3Size;
	setCoreParameter("DataDisk3Size", dataDisk3Size);
}

long DescribePriceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribePriceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribePriceRequest::getImageId()const
{
	return imageId_;
}

void DescribePriceRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", std::to_string(imageId));
}

std::string DescribePriceRequest::getDataDisk3Category()const
{
	return dataDisk3Category_;
}

void DescribePriceRequest::setDataDisk3Category(const std::string& dataDisk3Category)
{
	dataDisk3Category_ = dataDisk3Category;
	setCoreParameter("DataDisk3Category", std::to_string(dataDisk3Category));
}

std::string DescribePriceRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void DescribePriceRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setCoreParameter("IoOptimized", std::to_string(ioOptimized));
}

int DescribePriceRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void DescribePriceRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setCoreParameter("InternetMaxBandwidthOut", internetMaxBandwidthOut);
}

std::string DescribePriceRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void DescribePriceRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setCoreParameter("SystemDiskCategory", std::to_string(systemDiskCategory));
}

std::string DescribePriceRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribePriceRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string DescribePriceRequest::getSystemDiskPerformanceLevel()const
{
	return systemDiskPerformanceLevel_;
}

void DescribePriceRequest::setSystemDiskPerformanceLevel(const std::string& systemDiskPerformanceLevel)
{
	systemDiskPerformanceLevel_ = systemDiskPerformanceLevel;
	setCoreParameter("SystemDiskPerformanceLevel", std::to_string(systemDiskPerformanceLevel));
}

std::string DescribePriceRequest::getDataDisk4Category()const
{
	return dataDisk4Category_;
}

void DescribePriceRequest::setDataDisk4Category(const std::string& dataDisk4Category)
{
	dataDisk4Category_ = dataDisk4Category;
	setCoreParameter("DataDisk4Category", std::to_string(dataDisk4Category));
}

std::string DescribePriceRequest::getDataDisk4PerformanceLevel()const
{
	return dataDisk4PerformanceLevel_;
}

void DescribePriceRequest::setDataDisk4PerformanceLevel(const std::string& dataDisk4PerformanceLevel)
{
	dataDisk4PerformanceLevel_ = dataDisk4PerformanceLevel;
	setCoreParameter("DataDisk4PerformanceLevel", std::to_string(dataDisk4PerformanceLevel));
}

std::string DescribePriceRequest::getRegionId()const
{
	return regionId_;
}

void DescribePriceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int DescribePriceRequest::getDataDisk4Size()const
{
	return dataDisk4Size_;
}

void DescribePriceRequest::setDataDisk4Size(int dataDisk4Size)
{
	dataDisk4Size_ = dataDisk4Size;
	setCoreParameter("DataDisk4Size", dataDisk4Size);
}

std::string DescribePriceRequest::getPriceUnit()const
{
	return priceUnit_;
}

void DescribePriceRequest::setPriceUnit(const std::string& priceUnit)
{
	priceUnit_ = priceUnit;
	setCoreParameter("PriceUnit", std::to_string(priceUnit));
}

std::string DescribePriceRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribePriceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", std::to_string(instanceType));
}

std::string DescribePriceRequest::getDataDisk2Category()const
{
	return dataDisk2Category_;
}

void DescribePriceRequest::setDataDisk2Category(const std::string& dataDisk2Category)
{
	dataDisk2Category_ = dataDisk2Category;
	setCoreParameter("DataDisk2Category", std::to_string(dataDisk2Category));
}

int DescribePriceRequest::getDataDisk1Size()const
{
	return dataDisk1Size_;
}

void DescribePriceRequest::setDataDisk1Size(int dataDisk1Size)
{
	dataDisk1Size_ = dataDisk1Size;
	setCoreParameter("DataDisk1Size", dataDisk1Size);
}

int DescribePriceRequest::getPeriod()const
{
	return period_;
}

void DescribePriceRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

int DescribePriceRequest::getAmount()const
{
	return amount_;
}

void DescribePriceRequest::setAmount(int amount)
{
	amount_ = amount;
	setCoreParameter("Amount", amount);
}

std::string DescribePriceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribePriceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribePriceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribePriceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int DescribePriceRequest::getDataDisk2Size()const
{
	return dataDisk2Size_;
}

void DescribePriceRequest::setDataDisk2Size(int dataDisk2Size)
{
	dataDisk2Size_ = dataDisk2Size;
	setCoreParameter("DataDisk2Size", dataDisk2Size);
}

std::string DescribePriceRequest::getDataDisk1PerformanceLevel()const
{
	return dataDisk1PerformanceLevel_;
}

void DescribePriceRequest::setDataDisk1PerformanceLevel(const std::string& dataDisk1PerformanceLevel)
{
	dataDisk1PerformanceLevel_ = dataDisk1PerformanceLevel;
	setCoreParameter("DataDisk1PerformanceLevel", std::to_string(dataDisk1PerformanceLevel));
}

long DescribePriceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePriceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribePriceRequest::getResourceType()const
{
	return resourceType_;
}

void DescribePriceRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", std::to_string(resourceType));
}

std::string DescribePriceRequest::getDataDisk1Category()const
{
	return dataDisk1Category_;
}

void DescribePriceRequest::setDataDisk1Category(const std::string& dataDisk1Category)
{
	dataDisk1Category_ = dataDisk1Category;
	setCoreParameter("DataDisk1Category", std::to_string(dataDisk1Category));
}

std::string DescribePriceRequest::getDataDisk2PerformanceLevel()const
{
	return dataDisk2PerformanceLevel_;
}

void DescribePriceRequest::setDataDisk2PerformanceLevel(const std::string& dataDisk2PerformanceLevel)
{
	dataDisk2PerformanceLevel_ = dataDisk2PerformanceLevel;
	setCoreParameter("DataDisk2PerformanceLevel", std::to_string(dataDisk2PerformanceLevel));
}

int DescribePriceRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void DescribePriceRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setCoreParameter("SystemDiskSize", systemDiskSize);
}

std::string DescribePriceRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void DescribePriceRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", std::to_string(internetChargeType));
}

std::string DescribePriceRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void DescribePriceRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setCoreParameter("InstanceNetworkType", std::to_string(instanceNetworkType));
}

