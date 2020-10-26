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

#include <alibabacloud/ess/model/ModifyScalingGroupRequest.h>

using AlibabaCloud::Ess::Model::ModifyScalingGroupRequest;

ModifyScalingGroupRequest::ModifyScalingGroupRequest() :
	RpcServiceRequest("ess", "2014-08-28", "ModifyScalingGroup")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyScalingGroupRequest::~ModifyScalingGroupRequest()
{}

long ModifyScalingGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyScalingGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyScalingGroupRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void ModifyScalingGroupRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::vector<std::string> ModifyScalingGroupRequest::getVSwitchIds()const
{
	return vSwitchIds_;
}

void ModifyScalingGroupRequest::setVSwitchIds(const std::vector<std::string>& vSwitchIds)
{
	vSwitchIds_ = vSwitchIds;
	for(int dep1 = 0; dep1!= vSwitchIds.size(); dep1++) {
		setParameter("VSwitchIds."+ std::to_string(dep1), vSwitchIds.at(dep1));
	}
}

std::string ModifyScalingGroupRequest::getActiveScalingConfigurationId()const
{
	return activeScalingConfigurationId_;
}

void ModifyScalingGroupRequest::setActiveScalingConfigurationId(const std::string& activeScalingConfigurationId)
{
	activeScalingConfigurationId_ = activeScalingConfigurationId;
	setParameter("ActiveScalingConfigurationId", activeScalingConfigurationId);
}

int ModifyScalingGroupRequest::getOnDemandBaseCapacity()const
{
	return onDemandBaseCapacity_;
}

void ModifyScalingGroupRequest::setOnDemandBaseCapacity(int onDemandBaseCapacity)
{
	onDemandBaseCapacity_ = onDemandBaseCapacity;
	setParameter("OnDemandBaseCapacity", std::to_string(onDemandBaseCapacity));
}

std::string ModifyScalingGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyScalingGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ModifyScalingGroupRequest::getOnDemandPercentageAboveBaseCapacity()const
{
	return onDemandPercentageAboveBaseCapacity_;
}

void ModifyScalingGroupRequest::setOnDemandPercentageAboveBaseCapacity(int onDemandPercentageAboveBaseCapacity)
{
	onDemandPercentageAboveBaseCapacity_ = onDemandPercentageAboveBaseCapacity;
	setParameter("OnDemandPercentageAboveBaseCapacity", std::to_string(onDemandPercentageAboveBaseCapacity));
}

bool ModifyScalingGroupRequest::getSpotInstanceRemedy()const
{
	return spotInstanceRemedy_;
}

void ModifyScalingGroupRequest::setSpotInstanceRemedy(bool spotInstanceRemedy)
{
	spotInstanceRemedy_ = spotInstanceRemedy;
	setParameter("SpotInstanceRemedy", spotInstanceRemedy ? "true" : "false");
}

bool ModifyScalingGroupRequest::getScaleOutAmountCheck()const
{
	return scaleOutAmountCheck_;
}

void ModifyScalingGroupRequest::setScaleOutAmountCheck(bool scaleOutAmountCheck)
{
	scaleOutAmountCheck_ = scaleOutAmountCheck;
	setParameter("ScaleOutAmountCheck", scaleOutAmountCheck ? "true" : "false");
}

int ModifyScalingGroupRequest::getDefaultCooldown()const
{
	return defaultCooldown_;
}

void ModifyScalingGroupRequest::setDefaultCooldown(int defaultCooldown)
{
	defaultCooldown_ = defaultCooldown;
	setParameter("DefaultCooldown", std::to_string(defaultCooldown));
}

std::string ModifyScalingGroupRequest::getRemovalPolicy1()const
{
	return removalPolicy1_;
}

void ModifyScalingGroupRequest::setRemovalPolicy1(const std::string& removalPolicy1)
{
	removalPolicy1_ = removalPolicy1;
	setParameter("RemovalPolicy1", removalPolicy1);
}

std::string ModifyScalingGroupRequest::getRemovalPolicy2()const
{
	return removalPolicy2_;
}

void ModifyScalingGroupRequest::setRemovalPolicy2(const std::string& removalPolicy2)
{
	removalPolicy2_ = removalPolicy2;
	setParameter("RemovalPolicy2", removalPolicy2);
}

std::string ModifyScalingGroupRequest::getHealthCheckType()const
{
	return healthCheckType_;
}

void ModifyScalingGroupRequest::setHealthCheckType(const std::string& healthCheckType)
{
	healthCheckType_ = healthCheckType;
	setParameter("HealthCheckType", healthCheckType);
}

std::string ModifyScalingGroupRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void ModifyScalingGroupRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setParameter("LaunchTemplateId", launchTemplateId);
}

int ModifyScalingGroupRequest::getDesiredCapacity()const
{
	return desiredCapacity_;
}

void ModifyScalingGroupRequest::setDesiredCapacity(int desiredCapacity)
{
	desiredCapacity_ = desiredCapacity;
	setParameter("DesiredCapacity", std::to_string(desiredCapacity));
}

std::string ModifyScalingGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyScalingGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyScalingGroupRequest::getScalingGroupName()const
{
	return scalingGroupName_;
}

void ModifyScalingGroupRequest::setScalingGroupName(const std::string& scalingGroupName)
{
	scalingGroupName_ = scalingGroupName;
	setParameter("ScalingGroupName", scalingGroupName);
}

std::string ModifyScalingGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyScalingGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

bool ModifyScalingGroupRequest::getCompensateWithOnDemand()const
{
	return compensateWithOnDemand_;
}

void ModifyScalingGroupRequest::setCompensateWithOnDemand(bool compensateWithOnDemand)
{
	compensateWithOnDemand_ = compensateWithOnDemand;
	setParameter("CompensateWithOnDemand", compensateWithOnDemand ? "true" : "false");
}

int ModifyScalingGroupRequest::getSpotInstancePools()const
{
	return spotInstancePools_;
}

void ModifyScalingGroupRequest::setSpotInstancePools(int spotInstancePools)
{
	spotInstancePools_ = spotInstancePools;
	setParameter("SpotInstancePools", std::to_string(spotInstancePools));
}

int ModifyScalingGroupRequest::getMinSize()const
{
	return minSize_;
}

void ModifyScalingGroupRequest::setMinSize(int minSize)
{
	minSize_ = minSize;
	setParameter("MinSize", std::to_string(minSize));
}

bool ModifyScalingGroupRequest::getGroupDeletionProtection()const
{
	return groupDeletionProtection_;
}

void ModifyScalingGroupRequest::setGroupDeletionProtection(bool groupDeletionProtection)
{
	groupDeletionProtection_ = groupDeletionProtection;
	setParameter("GroupDeletionProtection", groupDeletionProtection ? "true" : "false");
}

long ModifyScalingGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyScalingGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyScalingGroupRequest::getLaunchTemplateVersion()const
{
	return launchTemplateVersion_;
}

void ModifyScalingGroupRequest::setLaunchTemplateVersion(const std::string& launchTemplateVersion)
{
	launchTemplateVersion_ = launchTemplateVersion;
	setParameter("LaunchTemplateVersion", launchTemplateVersion);
}

int ModifyScalingGroupRequest::getMaxSize()const
{
	return maxSize_;
}

void ModifyScalingGroupRequest::setMaxSize(int maxSize)
{
	maxSize_ = maxSize;
	setParameter("MaxSize", std::to_string(maxSize));
}

