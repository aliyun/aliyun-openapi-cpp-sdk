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

#include <alibabacloud/ecs/model/CreateAutoProvisioningGroupRequest.h>

using AlibabaCloud::Ecs::Model::CreateAutoProvisioningGroupRequest;

CreateAutoProvisioningGroupRequest::CreateAutoProvisioningGroupRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateAutoProvisioningGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAutoProvisioningGroupRequest::~CreateAutoProvisioningGroupRequest()
{}

std::vector<CreateAutoProvisioningGroupRequest::LaunchConfigurationDataDisk> CreateAutoProvisioningGroupRequest::getLaunchConfigurationDataDisk()const
{
	return launchConfigurationDataDisk_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationDataDisk(const std::vector<LaunchConfigurationDataDisk>& launchConfigurationDataDisk)
{
	launchConfigurationDataDisk_ = launchConfigurationDataDisk;
	for(int dep1 = 0; dep1!= launchConfigurationDataDisk.size(); dep1++) {
		auto launchConfigurationDataDiskObj = launchConfigurationDataDisk.at(dep1);
		std::string launchConfigurationDataDiskObjStr = "LaunchConfiguration.DataDisk." + std::to_string(dep1 + 1);
		setParameter(launchConfigurationDataDiskObjStr + ".Size", std::to_string(launchConfigurationDataDiskObj.size));
		setParameter(launchConfigurationDataDiskObjStr + ".Category", launchConfigurationDataDiskObj.category);
		setParameter(launchConfigurationDataDiskObjStr + ".PerformanceLevel", launchConfigurationDataDiskObj.performanceLevel);
	}
}

long CreateAutoProvisioningGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateAutoProvisioningGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationSystemDiskCategory()const
{
	return launchConfigurationSystemDiskCategory_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSystemDiskCategory(const std::string& launchConfigurationSystemDiskCategory)
{
	launchConfigurationSystemDiskCategory_ = launchConfigurationSystemDiskCategory;
	setParameter("LaunchConfigurationSystemDiskCategory", launchConfigurationSystemDiskCategory);
}

std::string CreateAutoProvisioningGroupRequest::getAutoProvisioningGroupType()const
{
	return autoProvisioningGroupType_;
}

void CreateAutoProvisioningGroupRequest::setAutoProvisioningGroupType(const std::string& autoProvisioningGroupType)
{
	autoProvisioningGroupType_ = autoProvisioningGroupType;
	setParameter("AutoProvisioningGroupType", autoProvisioningGroupType);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationSystemDiskPerformanceLevel()const
{
	return launchConfigurationSystemDiskPerformanceLevel_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSystemDiskPerformanceLevel(const std::string& launchConfigurationSystemDiskPerformanceLevel)
{
	launchConfigurationSystemDiskPerformanceLevel_ = launchConfigurationSystemDiskPerformanceLevel;
	setParameter("LaunchConfigurationSystemDiskPerformanceLevel", launchConfigurationSystemDiskPerformanceLevel);
}

std::string CreateAutoProvisioningGroupRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateAutoProvisioningGroupRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationImageId()const
{
	return launchConfigurationImageId_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationImageId(const std::string& launchConfigurationImageId)
{
	launchConfigurationImageId_ = launchConfigurationImageId;
	setParameter("LaunchConfigurationImageId", launchConfigurationImageId);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationResourceGroupId()const
{
	return launchConfigurationResourceGroupId_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationResourceGroupId(const std::string& launchConfigurationResourceGroupId)
{
	launchConfigurationResourceGroupId_ = launchConfigurationResourceGroupId;
	setParameter("LaunchConfigurationResourceGroupId", launchConfigurationResourceGroupId);
}

std::string CreateAutoProvisioningGroupRequest::getPayAsYouGoAllocationStrategy()const
{
	return payAsYouGoAllocationStrategy_;
}

void CreateAutoProvisioningGroupRequest::setPayAsYouGoAllocationStrategy(const std::string& payAsYouGoAllocationStrategy)
{
	payAsYouGoAllocationStrategy_ = payAsYouGoAllocationStrategy;
	setParameter("PayAsYouGoAllocationStrategy", payAsYouGoAllocationStrategy);
}

std::string CreateAutoProvisioningGroupRequest::getDefaultTargetCapacityType()const
{
	return defaultTargetCapacityType_;
}

void CreateAutoProvisioningGroupRequest::setDefaultTargetCapacityType(const std::string& defaultTargetCapacityType)
{
	defaultTargetCapacityType_ = defaultTargetCapacityType;
	setParameter("DefaultTargetCapacityType", defaultTargetCapacityType);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationKeyPairName()const
{
	return launchConfigurationKeyPairName_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationKeyPairName(const std::string& launchConfigurationKeyPairName)
{
	launchConfigurationKeyPairName_ = launchConfigurationKeyPairName;
	setParameter("LaunchConfigurationKeyPairName", launchConfigurationKeyPairName);
}

std::vector<CreateAutoProvisioningGroupRequest::SystemDiskConfig> CreateAutoProvisioningGroupRequest::getSystemDiskConfig()const
{
	return systemDiskConfig_;
}

void CreateAutoProvisioningGroupRequest::setSystemDiskConfig(const std::vector<SystemDiskConfig>& systemDiskConfig)
{
	systemDiskConfig_ = systemDiskConfig;
	for(int dep1 = 0; dep1!= systemDiskConfig.size(); dep1++) {
		auto systemDiskConfigObj = systemDiskConfig.at(dep1);
		std::string systemDiskConfigObjStr = "SystemDiskConfig." + std::to_string(dep1 + 1);
		setParameter(systemDiskConfigObjStr + ".DiskCategory", systemDiskConfigObj.diskCategory);
	}
}

std::vector<CreateAutoProvisioningGroupRequest::DataDiskConfig> CreateAutoProvisioningGroupRequest::getDataDiskConfig()const
{
	return dataDiskConfig_;
}

void CreateAutoProvisioningGroupRequest::setDataDiskConfig(const std::vector<DataDiskConfig>& dataDiskConfig)
{
	dataDiskConfig_ = dataDiskConfig;
	for(int dep1 = 0; dep1!= dataDiskConfig.size(); dep1++) {
		auto dataDiskConfigObj = dataDiskConfig.at(dep1);
		std::string dataDiskConfigObjStr = "DataDiskConfig." + std::to_string(dep1 + 1);
		setParameter(dataDiskConfigObjStr + ".DiskCategory", dataDiskConfigObj.diskCategory);
	}
}

std::string CreateAutoProvisioningGroupRequest::getValidUntil()const
{
	return validUntil_;
}

void CreateAutoProvisioningGroupRequest::setValidUntil(const std::string& validUntil)
{
	validUntil_ = validUntil;
	setParameter("ValidUntil", validUntil);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void CreateAutoProvisioningGroupRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setParameter("LaunchTemplateId", launchTemplateId);
}

long CreateAutoProvisioningGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateAutoProvisioningGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int CreateAutoProvisioningGroupRequest::getLaunchConfigurationSystemDiskSize()const
{
	return launchConfigurationSystemDiskSize_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSystemDiskSize(int launchConfigurationSystemDiskSize)
{
	launchConfigurationSystemDiskSize_ = launchConfigurationSystemDiskSize;
	setParameter("LaunchConfigurationSystemDiskSize", std::to_string(launchConfigurationSystemDiskSize));
}

int CreateAutoProvisioningGroupRequest::getLaunchConfigurationInternetMaxBandwidthOut()const
{
	return launchConfigurationInternetMaxBandwidthOut_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationInternetMaxBandwidthOut(int launchConfigurationInternetMaxBandwidthOut)
{
	launchConfigurationInternetMaxBandwidthOut_ = launchConfigurationInternetMaxBandwidthOut;
	setParameter("LaunchConfigurationInternetMaxBandwidthOut", std::to_string(launchConfigurationInternetMaxBandwidthOut));
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationHostName()const
{
	return launchConfigurationHostName_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationHostName(const std::string& launchConfigurationHostName)
{
	launchConfigurationHostName_ = launchConfigurationHostName;
	setParameter("LaunchConfigurationHostName", launchConfigurationHostName);
}

float CreateAutoProvisioningGroupRequest::getMaxSpotPrice()const
{
	return maxSpotPrice_;
}

void CreateAutoProvisioningGroupRequest::setMaxSpotPrice(float maxSpotPrice)
{
	maxSpotPrice_ = maxSpotPrice;
	setParameter("MaxSpotPrice", std::to_string(maxSpotPrice));
}

bool CreateAutoProvisioningGroupRequest::getLaunchConfigurationPasswordInherit()const
{
	return launchConfigurationPasswordInherit_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationPasswordInherit(bool launchConfigurationPasswordInherit)
{
	launchConfigurationPasswordInherit_ = launchConfigurationPasswordInherit;
	setParameter("LaunchConfigurationPasswordInherit", launchConfigurationPasswordInherit ? "true" : "false");
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationSecurityGroupId()const
{
	return launchConfigurationSecurityGroupId_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSecurityGroupId(const std::string& launchConfigurationSecurityGroupId)
{
	launchConfigurationSecurityGroupId_ = launchConfigurationSecurityGroupId;
	setParameter("LaunchConfigurationSecurityGroupId", launchConfigurationSecurityGroupId);
}

std::string CreateAutoProvisioningGroupRequest::getDescription()const
{
	return description_;
}

void CreateAutoProvisioningGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

bool CreateAutoProvisioningGroupRequest::getTerminateInstancesWithExpiration()const
{
	return terminateInstancesWithExpiration_;
}

void CreateAutoProvisioningGroupRequest::setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration)
{
	terminateInstancesWithExpiration_ = terminateInstancesWithExpiration;
	setParameter("TerminateInstancesWithExpiration", terminateInstancesWithExpiration ? "true" : "false");
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationUserData()const
{
	return launchConfigurationUserData_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationUserData(const std::string& launchConfigurationUserData)
{
	launchConfigurationUserData_ = launchConfigurationUserData;
	setParameter("LaunchConfigurationUserData", launchConfigurationUserData);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationCreditSpecification()const
{
	return launchConfigurationCreditSpecification_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationCreditSpecification(const std::string& launchConfigurationCreditSpecification)
{
	launchConfigurationCreditSpecification_ = launchConfigurationCreditSpecification;
	setParameter("LaunchConfigurationCreditSpecification", launchConfigurationCreditSpecification);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationInstanceName()const
{
	return launchConfigurationInstanceName_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationInstanceName(const std::string& launchConfigurationInstanceName)
{
	launchConfigurationInstanceName_ = launchConfigurationInstanceName;
	setParameter("LaunchConfigurationInstanceName", launchConfigurationInstanceName);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationInstanceDescription()const
{
	return launchConfigurationInstanceDescription_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationInstanceDescription(const std::string& launchConfigurationInstanceDescription)
{
	launchConfigurationInstanceDescription_ = launchConfigurationInstanceDescription;
	setParameter("LaunchConfigurationInstanceDescription", launchConfigurationInstanceDescription);
}

std::string CreateAutoProvisioningGroupRequest::getSpotAllocationStrategy()const
{
	return spotAllocationStrategy_;
}

void CreateAutoProvisioningGroupRequest::setSpotAllocationStrategy(const std::string& spotAllocationStrategy)
{
	spotAllocationStrategy_ = spotAllocationStrategy;
	setParameter("SpotAllocationStrategy", spotAllocationStrategy);
}

std::string CreateAutoProvisioningGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateAutoProvisioningGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateAutoProvisioningGroupRequest::getTerminateInstances()const
{
	return terminateInstances_;
}

void CreateAutoProvisioningGroupRequest::setTerminateInstances(bool terminateInstances)
{
	terminateInstances_ = terminateInstances;
	setParameter("TerminateInstances", terminateInstances ? "true" : "false");
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationSystemDiskName()const
{
	return launchConfigurationSystemDiskName_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSystemDiskName(const std::string& launchConfigurationSystemDiskName)
{
	launchConfigurationSystemDiskName_ = launchConfigurationSystemDiskName;
	setParameter("LaunchConfigurationSystemDiskName", launchConfigurationSystemDiskName);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationSystemDiskDescription()const
{
	return launchConfigurationSystemDiskDescription_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSystemDiskDescription(const std::string& launchConfigurationSystemDiskDescription)
{
	launchConfigurationSystemDiskDescription_ = launchConfigurationSystemDiskDescription;
	setParameter("LaunchConfigurationSystemDiskDescription", launchConfigurationSystemDiskDescription);
}

std::string CreateAutoProvisioningGroupRequest::getExcessCapacityTerminationPolicy()const
{
	return excessCapacityTerminationPolicy_;
}

void CreateAutoProvisioningGroupRequest::setExcessCapacityTerminationPolicy(const std::string& excessCapacityTerminationPolicy)
{
	excessCapacityTerminationPolicy_ = excessCapacityTerminationPolicy;
	setParameter("ExcessCapacityTerminationPolicy", excessCapacityTerminationPolicy);
}

std::vector<CreateAutoProvisioningGroupRequest::LaunchTemplateConfig> CreateAutoProvisioningGroupRequest::getLaunchTemplateConfig()const
{
	return launchTemplateConfig_;
}

void CreateAutoProvisioningGroupRequest::setLaunchTemplateConfig(const std::vector<LaunchTemplateConfig>& launchTemplateConfig)
{
	launchTemplateConfig_ = launchTemplateConfig;
	for(int dep1 = 0; dep1!= launchTemplateConfig.size(); dep1++) {
		auto launchTemplateConfigObj = launchTemplateConfig.at(dep1);
		std::string launchTemplateConfigObjStr = "LaunchTemplateConfig." + std::to_string(dep1 + 1);
		setParameter(launchTemplateConfigObjStr + ".InstanceType", launchTemplateConfigObj.instanceType);
		setParameter(launchTemplateConfigObjStr + ".MaxPrice", std::to_string(launchTemplateConfigObj.maxPrice));
		setParameter(launchTemplateConfigObjStr + ".VSwitchId", launchTemplateConfigObj.vSwitchId);
		setParameter(launchTemplateConfigObjStr + ".WeightedCapacity", std::to_string(launchTemplateConfigObj.weightedCapacity));
		setParameter(launchTemplateConfigObjStr + ".Priority", std::to_string(launchTemplateConfigObj.priority));
	}
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationRamRoleName()const
{
	return launchConfigurationRamRoleName_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationRamRoleName(const std::string& launchConfigurationRamRoleName)
{
	launchConfigurationRamRoleName_ = launchConfigurationRamRoleName;
	setParameter("LaunchConfigurationRamRoleName", launchConfigurationRamRoleName);
}

int CreateAutoProvisioningGroupRequest::getLaunchConfigurationInternetMaxBandwidthIn()const
{
	return launchConfigurationInternetMaxBandwidthIn_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationInternetMaxBandwidthIn(int launchConfigurationInternetMaxBandwidthIn)
{
	launchConfigurationInternetMaxBandwidthIn_ = launchConfigurationInternetMaxBandwidthIn;
	setParameter("LaunchConfigurationInternetMaxBandwidthIn", std::to_string(launchConfigurationInternetMaxBandwidthIn));
}

std::string CreateAutoProvisioningGroupRequest::getSpotInstanceInterruptionBehavior()const
{
	return spotInstanceInterruptionBehavior_;
}

void CreateAutoProvisioningGroupRequest::setSpotInstanceInterruptionBehavior(const std::string& spotInstanceInterruptionBehavior)
{
	spotInstanceInterruptionBehavior_ = spotInstanceInterruptionBehavior;
	setParameter("SpotInstanceInterruptionBehavior", spotInstanceInterruptionBehavior);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationSecurityEnhancementStrategy()const
{
	return launchConfigurationSecurityEnhancementStrategy_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationSecurityEnhancementStrategy(const std::string& launchConfigurationSecurityEnhancementStrategy)
{
	launchConfigurationSecurityEnhancementStrategy_ = launchConfigurationSecurityEnhancementStrategy;
	setParameter("LaunchConfigurationSecurityEnhancementStrategy", launchConfigurationSecurityEnhancementStrategy);
}

std::vector<CreateAutoProvisioningGroupRequest::LaunchConfigurationTag> CreateAutoProvisioningGroupRequest::getLaunchConfigurationTag()const
{
	return launchConfigurationTag_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationTag(const std::vector<LaunchConfigurationTag>& launchConfigurationTag)
{
	launchConfigurationTag_ = launchConfigurationTag;
	for(int dep1 = 0; dep1!= launchConfigurationTag.size(); dep1++) {
		auto launchConfigurationTagObj = launchConfigurationTag.at(dep1);
		std::string launchConfigurationTagObjStr = "LaunchConfiguration.Tag." + std::to_string(dep1 + 1);
		setParameter(launchConfigurationTagObjStr + ".Key", launchConfigurationTagObj.key);
		setParameter(launchConfigurationTagObjStr + ".Value", launchConfigurationTagObj.value);
	}
}

std::string CreateAutoProvisioningGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateAutoProvisioningGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateAutoProvisioningGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateAutoProvisioningGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int CreateAutoProvisioningGroupRequest::getSpotInstancePoolsToUseCount()const
{
	return spotInstancePoolsToUseCount_;
}

void CreateAutoProvisioningGroupRequest::setSpotInstancePoolsToUseCount(int spotInstancePoolsToUseCount)
{
	spotInstancePoolsToUseCount_ = spotInstancePoolsToUseCount;
	setParameter("SpotInstancePoolsToUseCount", std::to_string(spotInstancePoolsToUseCount));
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationInternetChargeType()const
{
	return launchConfigurationInternetChargeType_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationInternetChargeType(const std::string& launchConfigurationInternetChargeType)
{
	launchConfigurationInternetChargeType_ = launchConfigurationInternetChargeType;
	setParameter("LaunchConfigurationInternetChargeType", launchConfigurationInternetChargeType);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchTemplateVersion()const
{
	return launchTemplateVersion_;
}

void CreateAutoProvisioningGroupRequest::setLaunchTemplateVersion(const std::string& launchTemplateVersion)
{
	launchTemplateVersion_ = launchTemplateVersion;
	setParameter("LaunchTemplateVersion", launchTemplateVersion);
}

std::string CreateAutoProvisioningGroupRequest::getLaunchConfigurationIoOptimized()const
{
	return launchConfigurationIoOptimized_;
}

void CreateAutoProvisioningGroupRequest::setLaunchConfigurationIoOptimized(const std::string& launchConfigurationIoOptimized)
{
	launchConfigurationIoOptimized_ = launchConfigurationIoOptimized;
	setParameter("LaunchConfigurationIoOptimized", launchConfigurationIoOptimized);
}

std::string CreateAutoProvisioningGroupRequest::getPayAsYouGoTargetCapacity()const
{
	return payAsYouGoTargetCapacity_;
}

void CreateAutoProvisioningGroupRequest::setPayAsYouGoTargetCapacity(const std::string& payAsYouGoTargetCapacity)
{
	payAsYouGoTargetCapacity_ = payAsYouGoTargetCapacity;
	setParameter("PayAsYouGoTargetCapacity", payAsYouGoTargetCapacity);
}

std::string CreateAutoProvisioningGroupRequest::getTotalTargetCapacity()const
{
	return totalTargetCapacity_;
}

void CreateAutoProvisioningGroupRequest::setTotalTargetCapacity(const std::string& totalTargetCapacity)
{
	totalTargetCapacity_ = totalTargetCapacity;
	setParameter("TotalTargetCapacity", totalTargetCapacity);
}

std::string CreateAutoProvisioningGroupRequest::getSpotTargetCapacity()const
{
	return spotTargetCapacity_;
}

void CreateAutoProvisioningGroupRequest::setSpotTargetCapacity(const std::string& spotTargetCapacity)
{
	spotTargetCapacity_ = spotTargetCapacity;
	setParameter("SpotTargetCapacity", spotTargetCapacity);
}

std::string CreateAutoProvisioningGroupRequest::getValidFrom()const
{
	return validFrom_;
}

void CreateAutoProvisioningGroupRequest::setValidFrom(const std::string& validFrom)
{
	validFrom_ = validFrom;
	setParameter("ValidFrom", validFrom);
}

std::string CreateAutoProvisioningGroupRequest::getAutoProvisioningGroupName()const
{
	return autoProvisioningGroupName_;
}

void CreateAutoProvisioningGroupRequest::setAutoProvisioningGroupName(const std::string& autoProvisioningGroupName)
{
	autoProvisioningGroupName_ = autoProvisioningGroupName;
	setParameter("AutoProvisioningGroupName", autoProvisioningGroupName);
}

