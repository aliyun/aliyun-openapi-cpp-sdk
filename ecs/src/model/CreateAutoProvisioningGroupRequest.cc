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

long CreateAutoProvisioningGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateAutoProvisioningGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
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

std::string CreateAutoProvisioningGroupRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateAutoProvisioningGroupRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
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

std::string CreateAutoProvisioningGroupRequest::getValidUntil()const
{
	return validUntil_;
}

void CreateAutoProvisioningGroupRequest::setValidUntil(const std::string& validUntil)
{
	validUntil_ = validUntil;
	setParameter("ValidUntil", validUntil);
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

std::string CreateAutoProvisioningGroupRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void CreateAutoProvisioningGroupRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setParameter("LaunchTemplateId", launchTemplateId);
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

long CreateAutoProvisioningGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateAutoProvisioningGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
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

float CreateAutoProvisioningGroupRequest::getMaxSpotPrice()const
{
	return maxSpotPrice_;
}

void CreateAutoProvisioningGroupRequest::setMaxSpotPrice(float maxSpotPrice)
{
	maxSpotPrice_ = maxSpotPrice;
	setParameter("MaxSpotPrice", std::to_string(maxSpotPrice));
}

