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

#include <alibabacloud/ess/model/CreateScalingGroupRequest.h>

using AlibabaCloud::Ess::Model::CreateScalingGroupRequest;

CreateScalingGroupRequest::CreateScalingGroupRequest() :
	RpcServiceRequest("ess", "2014-08-28", "CreateScalingGroup")
{}

CreateScalingGroupRequest::~CreateScalingGroupRequest()
{}

std::string CreateScalingGroupRequest::getLoadBalancerIds()const
{
	return loadBalancerIds_;
}

void CreateScalingGroupRequest::setLoadBalancerIds(const std::string& loadBalancerIds)
{
	loadBalancerIds_ = loadBalancerIds;
	setCoreParameter("LoadBalancerIds", loadBalancerIds);
}

std::string CreateScalingGroupRequest::getClientToken()const
{
	return clientToken_;
}

void CreateScalingGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::vector<std::string> CreateScalingGroupRequest::getVSwitchIds()const
{
	return vSwitchIds_;
}

void CreateScalingGroupRequest::setVSwitchIds(const std::vector<std::string>& vSwitchIds)
{
	vSwitchIds_ = vSwitchIds;
	for(int i = 0; i!= vSwitchIds.size(); i++)
		setCoreParameter("VSwitchIds."+ std::to_string(i), vSwitchIds.at(i));
}

int CreateScalingGroupRequest::getOnDemandBaseCapacity()const
{
	return onDemandBaseCapacity_;
}

void CreateScalingGroupRequest::setOnDemandBaseCapacity(int onDemandBaseCapacity)
{
	onDemandBaseCapacity_ = onDemandBaseCapacity;
	setCoreParameter("OnDemandBaseCapacity", std::to_string(onDemandBaseCapacity));
}

std::string CreateScalingGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateScalingGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int CreateScalingGroupRequest::getOnDemandPercentageAboveBaseCapacity()const
{
	return onDemandPercentageAboveBaseCapacity_;
}

void CreateScalingGroupRequest::setOnDemandPercentageAboveBaseCapacity(int onDemandPercentageAboveBaseCapacity)
{
	onDemandPercentageAboveBaseCapacity_ = onDemandPercentageAboveBaseCapacity;
	setCoreParameter("OnDemandPercentageAboveBaseCapacity", std::to_string(onDemandPercentageAboveBaseCapacity));
}

bool CreateScalingGroupRequest::getSpotInstanceRemedy()const
{
	return spotInstanceRemedy_;
}

void CreateScalingGroupRequest::setSpotInstanceRemedy(bool spotInstanceRemedy)
{
	spotInstanceRemedy_ = spotInstanceRemedy;
	setCoreParameter("SpotInstanceRemedy", spotInstanceRemedy ? "true" : "false");
}

std::string CreateScalingGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateScalingGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int CreateScalingGroupRequest::getDefaultCooldown()const
{
	return defaultCooldown_;
}

void CreateScalingGroupRequest::setDefaultCooldown(int defaultCooldown)
{
	defaultCooldown_ = defaultCooldown;
	setCoreParameter("DefaultCooldown", std::to_string(defaultCooldown));
}

std::string CreateScalingGroupRequest::getRemovalPolicy1()const
{
	return removalPolicy1_;
}

void CreateScalingGroupRequest::setRemovalPolicy1(const std::string& removalPolicy1)
{
	removalPolicy1_ = removalPolicy1;
	setCoreParameter("RemovalPolicy1", removalPolicy1);
}

std::string CreateScalingGroupRequest::getRemovalPolicy2()const
{
	return removalPolicy2_;
}

void CreateScalingGroupRequest::setRemovalPolicy2(const std::string& removalPolicy2)
{
	removalPolicy2_ = removalPolicy2;
	setCoreParameter("RemovalPolicy2", removalPolicy2);
}

std::string CreateScalingGroupRequest::getMultiAZPolicy()const
{
	return multiAZPolicy_;
}

void CreateScalingGroupRequest::setMultiAZPolicy(const std::string& multiAZPolicy)
{
	multiAZPolicy_ = multiAZPolicy;
	setCoreParameter("MultiAZPolicy", multiAZPolicy);
}

std::string CreateScalingGroupRequest::getDBInstanceIds()const
{
	return dBInstanceIds_;
}

void CreateScalingGroupRequest::setDBInstanceIds(const std::string& dBInstanceIds)
{
	dBInstanceIds_ = dBInstanceIds;
	setCoreParameter("DBInstanceIds", dBInstanceIds);
}

std::string CreateScalingGroupRequest::getLaunchTemplateId()const
{
	return launchTemplateId_;
}

void CreateScalingGroupRequest::setLaunchTemplateId(const std::string& launchTemplateId)
{
	launchTemplateId_ = launchTemplateId;
	setCoreParameter("LaunchTemplateId", launchTemplateId);
}

std::string CreateScalingGroupRequest::getHealthCheckType()const
{
	return healthCheckType_;
}

void CreateScalingGroupRequest::setHealthCheckType(const std::string& healthCheckType)
{
	healthCheckType_ = healthCheckType;
	setCoreParameter("HealthCheckType", healthCheckType);
}

std::string CreateScalingGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateScalingGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateScalingGroupRequest::getScalingGroupName()const
{
	return scalingGroupName_;
}

void CreateScalingGroupRequest::setScalingGroupName(const std::string& scalingGroupName)
{
	scalingGroupName_ = scalingGroupName;
	setCoreParameter("ScalingGroupName", scalingGroupName);
}

std::string CreateScalingGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateScalingGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int CreateScalingGroupRequest::getSpotInstancePools()const
{
	return spotInstancePools_;
}

void CreateScalingGroupRequest::setSpotInstancePools(int spotInstancePools)
{
	spotInstancePools_ = spotInstancePools;
	setCoreParameter("SpotInstancePools", std::to_string(spotInstancePools));
}

int CreateScalingGroupRequest::getMinSize()const
{
	return minSize_;
}

void CreateScalingGroupRequest::setMinSize(int minSize)
{
	minSize_ = minSize;
	setCoreParameter("MinSize", std::to_string(minSize));
}

long CreateScalingGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateScalingGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateScalingGroupRequest::getLaunchTemplateVersion()const
{
	return launchTemplateVersion_;
}

void CreateScalingGroupRequest::setLaunchTemplateVersion(const std::string& launchTemplateVersion)
{
	launchTemplateVersion_ = launchTemplateVersion;
	setCoreParameter("LaunchTemplateVersion", launchTemplateVersion);
}

std::string CreateScalingGroupRequest::getScalingPolicy()const
{
	return scalingPolicy_;
}

void CreateScalingGroupRequest::setScalingPolicy(const std::string& scalingPolicy)
{
	scalingPolicy_ = scalingPolicy;
	setCoreParameter("ScalingPolicy", scalingPolicy);
}

std::string CreateScalingGroupRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateScalingGroupRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

int CreateScalingGroupRequest::getMaxSize()const
{
	return maxSize_;
}

void CreateScalingGroupRequest::setMaxSize(int maxSize)
{
	maxSize_ = maxSize;
	setCoreParameter("MaxSize", std::to_string(maxSize));
}

std::vector<CreateScalingGroupRequest::LifecycleHook> CreateScalingGroupRequest::getLifecycleHook()const
{
	return lifecycleHook_;
}

void CreateScalingGroupRequest::setLifecycleHook(const std::vector<LifecycleHook>& lifecycleHook)
{
	lifecycleHook_ = lifecycleHook;
	int i = 0;
	for(int i = 0; i!= lifecycleHook.size(); i++)	{
		auto obj = lifecycleHook.at(i);
		std::string str ="LifecycleHook."+ std::to_string(i);
		setCoreParameter(str + ".DefaultResult", obj.defaultResult);
		setCoreParameter(str + ".LifecycleHookName", obj.lifecycleHookName);
		setCoreParameter(str + ".HeartbeatTimeout", std::to_string(obj.heartbeatTimeout));
		setCoreParameter(str + ".NotificationArn", obj.notificationArn);
		setCoreParameter(str + ".NotificationMetadata", obj.notificationMetadata);
		setCoreParameter(str + ".LifecycleTransition", obj.lifecycleTransition);
	}
}

std::vector<CreateScalingGroupRequest::VServerGroup> CreateScalingGroupRequest::getVServerGroup()const
{
	return vServerGroup_;
}

void CreateScalingGroupRequest::setVServerGroup(const std::vector<VServerGroup>& vServerGroup)
{
	vServerGroup_ = vServerGroup;
	int i = 0;
	for(int i = 0; i!= vServerGroup.size(); i++)	{
		auto obj = vServerGroup.at(i);
		std::string str ="VServerGroup."+ std::to_string(i);
		setCoreParameter(str + ".LoadBalancerId", obj.loadBalancerId);
		setCoreParameter(str + ".VServerGroupAttribute", std::to_string(obj.vServerGroupAttribute));
	}
}

