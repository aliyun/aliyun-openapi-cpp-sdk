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
{}

ModifyScalingGroupRequest::~ModifyScalingGroupRequest()
{}

long ModifyScalingGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyScalingGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyScalingGroupRequest::getHealthCheckType()const
{
	return healthCheckType_;
}

void ModifyScalingGroupRequest::setHealthCheckType(const std::string& healthCheckType)
{
	healthCheckType_ = healthCheckType;
	setCoreParameter("HealthCheckType", std::to_string(healthCheckType));
}

std::string ModifyScalingGroupRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void ModifyScalingGroupRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setCoreParameter("LaunchTemplateId", std::to_string(launchTemplateId));
}

std::string ModifyScalingGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyScalingGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyScalingGroupRequest::getScalingGroupName()const
{
	return scalingGroupName_;
}

void ModifyScalingGroupRequest::setScalingGroupName(const std::string& scalingGroupName)
{
	scalingGroupName_ = scalingGroupName;
	setCoreParameter("ScalingGroupName", std::to_string(scalingGroupName));
}

std::string ModifyScalingGroupRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void ModifyScalingGroupRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", std::to_string(scalingGroupId));
}

std::vector<std::string> ModifyScalingGroupRequest::getVSwitchIds()const
{
	return vSwitchIds_;
}

void ModifyScalingGroupRequest::setVSwitchIds(const std::vector<std::string>& vSwitchIds)
{
	vSwitchIds_ = vSwitchIds;
	for(int i = 0; i!= vSwitchIds.size(); i++)
		setCoreParameter("VSwitchIds."+ std::to_string(i), std::to_string(vSwitchIds.at(i)));
}

std::string ModifyScalingGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyScalingGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int ModifyScalingGroupRequest::getSpotInstancePools()const
{
	return spotInstancePools_;
}

void ModifyScalingGroupRequest::setSpotInstancePools(int spotInstancePools)
{
	spotInstancePools_ = spotInstancePools;
	setCoreParameter("SpotInstancePools", spotInstancePools);
}

std::string ModifyScalingGroupRequest::getActiveScalingConfigurationId()const
{
	return activeScalingConfigurationId_;
}

void ModifyScalingGroupRequest::setActiveScalingConfigurationId(const std::string& activeScalingConfigurationId)
{
	activeScalingConfigurationId_ = activeScalingConfigurationId;
	setCoreParameter("ActiveScalingConfigurationId", std::to_string(activeScalingConfigurationId));
}

int ModifyScalingGroupRequest::getMinSize()const
{
	return minSize_;
}

void ModifyScalingGroupRequest::setMinSize(int minSize)
{
	minSize_ = minSize;
	setCoreParameter("MinSize", minSize);
}

long ModifyScalingGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyScalingGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyScalingGroupRequest::getLaunchTemplateVersion()const
{
	return launchTemplateVersion_;
}

void ModifyScalingGroupRequest::setLaunchTemplateVersion(const std::string& launchTemplateVersion)
{
	launchTemplateVersion_ = launchTemplateVersion;
	setCoreParameter("LaunchTemplateVersion", std::to_string(launchTemplateVersion));
}

int ModifyScalingGroupRequest::getOnDemandBaseCapacity()const
{
	return onDemandBaseCapacity_;
}

void ModifyScalingGroupRequest::setOnDemandBaseCapacity(int onDemandBaseCapacity)
{
	onDemandBaseCapacity_ = onDemandBaseCapacity;
	setCoreParameter("OnDemandBaseCapacity", onDemandBaseCapacity);
}

std::string ModifyScalingGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyScalingGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

int ModifyScalingGroupRequest::getOnDemandPercentageAboveBaseCapacity()const
{
	return onDemandPercentageAboveBaseCapacity_;
}

void ModifyScalingGroupRequest::setOnDemandPercentageAboveBaseCapacity(int onDemandPercentageAboveBaseCapacity)
{
	onDemandPercentageAboveBaseCapacity_ = onDemandPercentageAboveBaseCapacity;
	setCoreParameter("OnDemandPercentageAboveBaseCapacity", onDemandPercentageAboveBaseCapacity);
}

bool ModifyScalingGroupRequest::getSpotInstanceRemedy()const
{
	return spotInstanceRemedy_;
}

void ModifyScalingGroupRequest::setSpotInstanceRemedy(bool spotInstanceRemedy)
{
	spotInstanceRemedy_ = spotInstanceRemedy;
	setCoreParameter("SpotInstanceRemedy", spotInstanceRemedy ? "true" : "false");
}

int ModifyScalingGroupRequest::getMaxSize()const
{
	return maxSize_;
}

void ModifyScalingGroupRequest::setMaxSize(int maxSize)
{
	maxSize_ = maxSize;
	setCoreParameter("MaxSize", maxSize);
}

int ModifyScalingGroupRequest::getDefaultCooldown()const
{
	return defaultCooldown_;
}

void ModifyScalingGroupRequest::setDefaultCooldown(int defaultCooldown)
{
	defaultCooldown_ = defaultCooldown;
	setCoreParameter("DefaultCooldown", defaultCooldown);
}

std::string ModifyScalingGroupRequest::getRemovalPolicy1()const
{
	return removalPolicy1_;
}

void ModifyScalingGroupRequest::setRemovalPolicy1(const std::string& removalPolicy1)
{
	removalPolicy1_ = removalPolicy1;
	setCoreParameter("RemovalPolicy1", std::to_string(removalPolicy1));
}

std::string ModifyScalingGroupRequest::getRemovalPolicy2()const
{
	return removalPolicy2_;
}

void ModifyScalingGroupRequest::setRemovalPolicy2(const std::string& removalPolicy2)
{
	removalPolicy2_ = removalPolicy2;
	setCoreParameter("RemovalPolicy2", std::to_string(removalPolicy2));
}

