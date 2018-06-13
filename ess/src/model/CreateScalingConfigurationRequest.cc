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

#include <alibabacloud/ess/model/CreateScalingConfigurationRequest.h>

using AlibabaCloud::Ess::Model::CreateScalingConfigurationRequest;

CreateScalingConfigurationRequest::CreateScalingConfigurationRequest() :
	RpcServiceRequest("ess", "2014-08-28", "CreateScalingConfiguration")
{}

CreateScalingConfigurationRequest::~CreateScalingConfigurationRequest()
{}

int CreateScalingConfigurationRequest::getDataDisk3Size()const
{
	return dataDisk3Size_;
}

void CreateScalingConfigurationRequest::setDataDisk3Size(int dataDisk3Size)
{
	dataDisk3Size_ = dataDisk3Size;
	setParameter("DataDisk3Size", std::to_string(dataDisk3Size));
}

std::string CreateScalingConfigurationRequest::getImageId()const
{
	return imageId_;
}

void CreateScalingConfigurationRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string CreateScalingConfigurationRequest::getDataDisk1SnapshotId()const
{
	return dataDisk1SnapshotId_;
}

void CreateScalingConfigurationRequest::setDataDisk1SnapshotId(const std::string& dataDisk1SnapshotId)
{
	dataDisk1SnapshotId_ = dataDisk1SnapshotId;
	setParameter("DataDisk1SnapshotId", dataDisk1SnapshotId);
}

std::string CreateScalingConfigurationRequest::getDataDisk3Category()const
{
	return dataDisk3Category_;
}

void CreateScalingConfigurationRequest::setDataDisk3Category(const std::string& dataDisk3Category)
{
	dataDisk3Category_ = dataDisk3Category;
	setParameter("DataDisk3Category", dataDisk3Category);
}

std::string CreateScalingConfigurationRequest::getDataDisk1Device()const
{
	return dataDisk1Device_;
}

void CreateScalingConfigurationRequest::setDataDisk1Device(const std::string& dataDisk1Device)
{
	dataDisk1Device_ = dataDisk1Device;
	setParameter("DataDisk1Device", dataDisk1Device);
}

std::string CreateScalingConfigurationRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void CreateScalingConfigurationRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string CreateScalingConfigurationRequest::getDataDisk2Device()const
{
	return dataDisk2Device_;
}

void CreateScalingConfigurationRequest::setDataDisk2Device(const std::string& dataDisk2Device)
{
	dataDisk2Device_ = dataDisk2Device;
	setParameter("DataDisk2Device", dataDisk2Device);
}

std::vector<std::string> CreateScalingConfigurationRequest::getInstanceTypes()const
{
	return instanceTypes_;
}

void CreateScalingConfigurationRequest::setInstanceTypes(const std::vector<std::string>& instanceTypes)
{
	instanceTypes_ = instanceTypes;
	for(int i = 0; i!= instanceTypes.size(); i++)
		setParameter("InstanceTypes."+ std::to_string(i), instanceTypes.at(i));
}

std::string CreateScalingConfigurationRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void CreateScalingConfigurationRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized);
}

std::string CreateScalingConfigurationRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateScalingConfigurationRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

int CreateScalingConfigurationRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void CreateScalingConfigurationRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setParameter("InternetMaxBandwidthOut", std::to_string(internetMaxBandwidthOut));
}

std::string CreateScalingConfigurationRequest::getSecurityEnhancementStrategy()const
{
	return securityEnhancementStrategy_;
}

void CreateScalingConfigurationRequest::setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy)
{
	securityEnhancementStrategy_ = securityEnhancementStrategy;
	setParameter("SecurityEnhancementStrategy", securityEnhancementStrategy);
}

std::string CreateScalingConfigurationRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateScalingConfigurationRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

std::vector<CreateScalingConfigurationRequest::SpotPriceLimit> CreateScalingConfigurationRequest::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

void CreateScalingConfigurationRequest::setSpotPriceLimit(const std::vector<SpotPriceLimit>& spotPriceLimit)
{
	spotPriceLimit_ = spotPriceLimit;
	int i = 0;
	for(int i = 0; i!= spotPriceLimit.size(); i++)	{
		auto obj = spotPriceLimit.at(i);
		std::string str ="SpotPriceLimit."+ std::to_string(i);
		setParameter(str + ".InstanceType", obj.instanceType);
		setParameter(str + ".PriceLimit", std::to_string(obj.priceLimit));
	}
}

std::string CreateScalingConfigurationRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void CreateScalingConfigurationRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setParameter("SystemDiskCategory", systemDiskCategory);
}

std::string CreateScalingConfigurationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateScalingConfigurationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateScalingConfigurationRequest::getUserData()const
{
	return userData_;
}

void CreateScalingConfigurationRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string CreateScalingConfigurationRequest::getDataDisk4Category()const
{
	return dataDisk4Category_;
}

void CreateScalingConfigurationRequest::setDataDisk4Category(const std::string& dataDisk4Category)
{
	dataDisk4Category_ = dataDisk4Category;
	setParameter("DataDisk4Category", dataDisk4Category);
}

std::string CreateScalingConfigurationRequest::getDataDisk2SnapshotId()const
{
	return dataDisk2SnapshotId_;
}

void CreateScalingConfigurationRequest::setDataDisk2SnapshotId(const std::string& dataDisk2SnapshotId)
{
	dataDisk2SnapshotId_ = dataDisk2SnapshotId;
	setParameter("DataDisk2SnapshotId", dataDisk2SnapshotId);
}

int CreateScalingConfigurationRequest::getDataDisk4Size()const
{
	return dataDisk4Size_;
}

void CreateScalingConfigurationRequest::setDataDisk4Size(int dataDisk4Size)
{
	dataDisk4Size_ = dataDisk4Size;
	setParameter("DataDisk4Size", std::to_string(dataDisk4Size));
}

std::string CreateScalingConfigurationRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateScalingConfigurationRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string CreateScalingConfigurationRequest::getDataDisk2Category()const
{
	return dataDisk2Category_;
}

void CreateScalingConfigurationRequest::setDataDisk2Category(const std::string& dataDisk2Category)
{
	dataDisk2Category_ = dataDisk2Category;
	setParameter("DataDisk2Category", dataDisk2Category);
}

int CreateScalingConfigurationRequest::getDataDisk1Size()const
{
	return dataDisk1Size_;
}

void CreateScalingConfigurationRequest::setDataDisk1Size(int dataDisk1Size)
{
	dataDisk1Size_ = dataDisk1Size;
	setParameter("DataDisk1Size", std::to_string(dataDisk1Size));
}

std::string CreateScalingConfigurationRequest::getDataDisk3SnapshotId()const
{
	return dataDisk3SnapshotId_;
}

void CreateScalingConfigurationRequest::setDataDisk3SnapshotId(const std::string& dataDisk3SnapshotId)
{
	dataDisk3SnapshotId_ = dataDisk3SnapshotId;
	setParameter("DataDisk3SnapshotId", dataDisk3SnapshotId);
}

std::string CreateScalingConfigurationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateScalingConfigurationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateScalingConfigurationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateScalingConfigurationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int CreateScalingConfigurationRequest::getDataDisk2Size()const
{
	return dataDisk2Size_;
}

void CreateScalingConfigurationRequest::setDataDisk2Size(int dataDisk2Size)
{
	dataDisk2Size_ = dataDisk2Size;
	setParameter("DataDisk2Size", std::to_string(dataDisk2Size));
}

std::string CreateScalingConfigurationRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void CreateScalingConfigurationRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setParameter("RamRoleName", ramRoleName);
}

long CreateScalingConfigurationRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateScalingConfigurationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateScalingConfigurationRequest::getScalingConfigurationName()const
{
	return scalingConfigurationName_;
}

void CreateScalingConfigurationRequest::setScalingConfigurationName(const std::string& scalingConfigurationName)
{
	scalingConfigurationName_ = scalingConfigurationName;
	setParameter("ScalingConfigurationName", scalingConfigurationName);
}

std::string CreateScalingConfigurationRequest::getTags()const
{
	return tags_;
}

void CreateScalingConfigurationRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string CreateScalingConfigurationRequest::getDataDisk2DeleteWithInstance()const
{
	return dataDisk2DeleteWithInstance_;
}

void CreateScalingConfigurationRequest::setDataDisk2DeleteWithInstance(const std::string& dataDisk2DeleteWithInstance)
{
	dataDisk2DeleteWithInstance_ = dataDisk2DeleteWithInstance;
	setParameter("DataDisk2DeleteWithInstance", dataDisk2DeleteWithInstance);
}

std::string CreateScalingConfigurationRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void CreateScalingConfigurationRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setParameter("SpotStrategy", spotStrategy);
}

std::string CreateScalingConfigurationRequest::getDataDisk1Category()const
{
	return dataDisk1Category_;
}

void CreateScalingConfigurationRequest::setDataDisk1Category(const std::string& dataDisk1Category)
{
	dataDisk1Category_ = dataDisk1Category;
	setParameter("DataDisk1Category", dataDisk1Category);
}

std::string CreateScalingConfigurationRequest::getDataDisk3DeleteWithInstance()const
{
	return dataDisk3DeleteWithInstance_;
}

void CreateScalingConfigurationRequest::setDataDisk3DeleteWithInstance(const std::string& dataDisk3DeleteWithInstance)
{
	dataDisk3DeleteWithInstance_ = dataDisk3DeleteWithInstance;
	setParameter("DataDisk3DeleteWithInstance", dataDisk3DeleteWithInstance);
}

int CreateScalingConfigurationRequest::getLoadBalancerWeight()const
{
	return loadBalancerWeight_;
}

void CreateScalingConfigurationRequest::setLoadBalancerWeight(int loadBalancerWeight)
{
	loadBalancerWeight_ = loadBalancerWeight;
	setParameter("LoadBalancerWeight", std::to_string(loadBalancerWeight));
}

std::string CreateScalingConfigurationRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateScalingConfigurationRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

int CreateScalingConfigurationRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void CreateScalingConfigurationRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string CreateScalingConfigurationRequest::getDataDisk4SnapshotId()const
{
	return dataDisk4SnapshotId_;
}

void CreateScalingConfigurationRequest::setDataDisk4SnapshotId(const std::string& dataDisk4SnapshotId)
{
	dataDisk4SnapshotId_ = dataDisk4SnapshotId;
	setParameter("DataDisk4SnapshotId", dataDisk4SnapshotId);
}

std::string CreateScalingConfigurationRequest::getDataDisk4Device()const
{
	return dataDisk4Device_;
}

void CreateScalingConfigurationRequest::setDataDisk4Device(const std::string& dataDisk4Device)
{
	dataDisk4Device_ = dataDisk4Device;
	setParameter("DataDisk4Device", dataDisk4Device);
}

std::string CreateScalingConfigurationRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateScalingConfigurationRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string CreateScalingConfigurationRequest::getDataDisk3Device()const
{
	return dataDisk3Device_;
}

void CreateScalingConfigurationRequest::setDataDisk3Device(const std::string& dataDisk3Device)
{
	dataDisk3Device_ = dataDisk3Device;
	setParameter("DataDisk3Device", dataDisk3Device);
}

std::string CreateScalingConfigurationRequest::getDataDisk4DeleteWithInstance()const
{
	return dataDisk4DeleteWithInstance_;
}

void CreateScalingConfigurationRequest::setDataDisk4DeleteWithInstance(const std::string& dataDisk4DeleteWithInstance)
{
	dataDisk4DeleteWithInstance_ = dataDisk4DeleteWithInstance;
	setParameter("DataDisk4DeleteWithInstance", dataDisk4DeleteWithInstance);
}

int CreateScalingConfigurationRequest::getInternetMaxBandwidthIn()const
{
	return internetMaxBandwidthIn_;
}

void CreateScalingConfigurationRequest::setInternetMaxBandwidthIn(int internetMaxBandwidthIn)
{
	internetMaxBandwidthIn_ = internetMaxBandwidthIn;
	setParameter("InternetMaxBandwidthIn", std::to_string(internetMaxBandwidthIn));
}

std::string CreateScalingConfigurationRequest::getDataDisk1DeleteWithInstance()const
{
	return dataDisk1DeleteWithInstance_;
}

void CreateScalingConfigurationRequest::setDataDisk1DeleteWithInstance(const std::string& dataDisk1DeleteWithInstance)
{
	dataDisk1DeleteWithInstance_ = dataDisk1DeleteWithInstance;
	setParameter("DataDisk1DeleteWithInstance", dataDisk1DeleteWithInstance);
}

