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
{
	setMethod(HttpRequest::Method::Post);
}

CreateScalingGroupRequest::~CreateScalingGroupRequest()
{}

std::vector<std::string> CreateScalingGroupRequest::getVSwitchIds()const
{
	return vSwitchIds_;
}

void CreateScalingGroupRequest::setVSwitchIds(const std::vector<std::string>& vSwitchIds)
{
	vSwitchIds_ = vSwitchIds;
	for(int dep1 = 0; dep1!= vSwitchIds.size(); dep1++) {
		setCoreParameter("VSwitchIds."+ std::to_string(dep1), vSwitchIds.at(dep1));
	}
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

int CreateScalingGroupRequest::getDefaultCooldown()const
{
	return defaultCooldown_;
}

void CreateScalingGroupRequest::setDefaultCooldown(int defaultCooldown)
{
	defaultCooldown_ = defaultCooldown;
	setCoreParameter("DefaultCooldown", std::to_string(defaultCooldown));
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

int CreateScalingGroupRequest::getDesiredCapacity()const
{
	return desiredCapacity_;
}

void CreateScalingGroupRequest::setDesiredCapacity(int desiredCapacity)
{
	desiredCapacity_ = desiredCapacity;
	setCoreParameter("DesiredCapacity", std::to_string(desiredCapacity));
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

std::string CreateScalingGroupRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateScalingGroupRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string CreateScalingGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateScalingGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
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
	for(int dep1 = 0; dep1!= lifecycleHook.size(); dep1++) {
		auto lifecycleHookObj = lifecycleHook.at(dep1);
		std::string lifecycleHookObjStr = "LifecycleHook." + std::to_string(dep1);
		setCoreParameter(lifecycleHookObjStr + ".DefaultResult", lifecycleHookObj.defaultResult);
		setCoreParameter(lifecycleHookObjStr + ".LifecycleHookName", lifecycleHookObj.lifecycleHookName);
		setCoreParameter(lifecycleHookObjStr + ".HeartbeatTimeout", std::to_string(lifecycleHookObj.heartbeatTimeout));
		setCoreParameter(lifecycleHookObjStr + ".NotificationArn", lifecycleHookObj.notificationArn);
		setCoreParameter(lifecycleHookObjStr + ".NotificationMetadata", lifecycleHookObj.notificationMetadata);
		setCoreParameter(lifecycleHookObjStr + ".LifecycleTransition", lifecycleHookObj.lifecycleTransition);
	}
}

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

std::string CreateScalingGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateScalingGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
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

bool CreateScalingGroupRequest::getGroupDeletionProtection()const
{
	return groupDeletionProtection_;
}

void CreateScalingGroupRequest::setGroupDeletionProtection(bool groupDeletionProtection)
{
	groupDeletionProtection_ = groupDeletionProtection;
	setCoreParameter("GroupDeletionProtection", groupDeletionProtection ? "true" : "false");
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

std::vector<CreateScalingGroupRequest::VServerGroup> CreateScalingGroupRequest::getVServerGroup()const
{
	return vServerGroup_;
}

void CreateScalingGroupRequest::setVServerGroup(const std::vector<VServerGroup>& vServerGroup)
{
	vServerGroup_ = vServerGroup;
	for(int dep1 = 0; dep1!= vServerGroup.size(); dep1++) {
		auto vServerGroupObj = vServerGroup.at(dep1);
		std::string vServerGroupObjStr = "VServerGroup." + std::to_string(dep1);
		setCoreParameter(vServerGroupObjStr + ".LoadBalancerId", vServerGroupObj.loadBalancerId);
		for(int dep2 = 0; dep2!= vServerGroupObj.vServerGroupAttribute.size(); dep2++) {
			auto vServerGroupAttributeObj = vServerGroupObj.vServerGroupAttribute.at(dep2);
			std::string vServerGroupAttributeObjStr = vServerGroupObjStr + "VServerGroupAttribute." + std::to_string(dep2);
			setCoreParameter(vServerGroupAttributeObjStr + ".VServerGroupId", vServerGroupAttributeObj.vServerGroupId);
			setCoreParameter(vServerGroupAttributeObjStr + ".Port", std::to_string(vServerGroupAttributeObj.port));
			setCoreParameter(vServerGroupAttributeObjStr + ".Weight", std::to_string(vServerGroupAttributeObj.weight));
		}
	}
}

