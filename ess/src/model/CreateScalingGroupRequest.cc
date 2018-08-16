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

std::string CreateScalingGroupRequest::getMultiAZPolicy()const
{
	return multiAZPolicy_;
}

void CreateScalingGroupRequest::setMultiAZPolicy(const std::string& multiAZPolicy)
{
	multiAZPolicy_ = multiAZPolicy;
	setParameter("MultiAZPolicy", multiAZPolicy);
}

std::string CreateScalingGroupRequest::getDBInstanceIds()const
{
	return dBInstanceIds_;
}

void CreateScalingGroupRequest::setDBInstanceIds(const std::string& dBInstanceIds)
{
	dBInstanceIds_ = dBInstanceIds;
	setParameter("DBInstanceIds", dBInstanceIds);
}

std::string CreateScalingGroupRequest::getLoadBalancerIds()const
{
	return loadBalancerIds_;
}

void CreateScalingGroupRequest::setLoadBalancerIds(const std::string& loadBalancerIds)
{
	loadBalancerIds_ = loadBalancerIds;
	setParameter("LoadBalancerIds", loadBalancerIds);
}

std::string CreateScalingGroupRequest::getHealthCheckType()const
{
	return healthCheckType_;
}

void CreateScalingGroupRequest::setHealthCheckType(const std::string& healthCheckType)
{
	healthCheckType_ = healthCheckType;
	setParameter("HealthCheckType", healthCheckType);
}

std::string CreateScalingGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateScalingGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateScalingGroupRequest::getScalingGroupName()const
{
	return scalingGroupName_;
}

void CreateScalingGroupRequest::setScalingGroupName(const std::string& scalingGroupName)
{
	scalingGroupName_ = scalingGroupName;
	setParameter("ScalingGroupName", scalingGroupName);
}

std::vector<std::string> CreateScalingGroupRequest::getVSwitchIds()const
{
	return vSwitchIds_;
}

void CreateScalingGroupRequest::setVSwitchIds(const std::vector<std::string>& vSwitchIds)
{
	vSwitchIds_ = vSwitchIds;
	for(int i = 0; i!= vSwitchIds.size(); i++)
		setParameter("VSwitchIds."+ std::to_string(i), vSwitchIds.at(i));
}

std::string CreateScalingGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateScalingGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int CreateScalingGroupRequest::getMinSize()const
{
	return minSize_;
}

void CreateScalingGroupRequest::setMinSize(int minSize)
{
	minSize_ = minSize;
	setParameter("MinSize", std::to_string(minSize));
}

long CreateScalingGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateScalingGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateScalingGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateScalingGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateScalingGroupRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateScalingGroupRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateScalingGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateScalingGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int CreateScalingGroupRequest::getMaxSize()const
{
	return maxSize_;
}

void CreateScalingGroupRequest::setMaxSize(int maxSize)
{
	maxSize_ = maxSize;
	setParameter("MaxSize", std::to_string(maxSize));
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
		setParameter(str + ".DefaultResult", obj.defaultResult);
		setParameter(str + ".LifecycleHookName", obj.lifecycleHookName);
		setParameter(str + ".HeartbeatTimeout", std::to_string(obj.heartbeatTimeout));
		setParameter(str + ".NotificationArn", obj.notificationArn);
		setParameter(str + ".NotificationMetadata", obj.notificationMetadata);
		setParameter(str + ".LifecycleTransition", obj.lifecycleTransition);
	}
}

int CreateScalingGroupRequest::getDefaultCooldown()const
{
	return defaultCooldown_;
}

void CreateScalingGroupRequest::setDefaultCooldown(int defaultCooldown)
{
	defaultCooldown_ = defaultCooldown;
	setParameter("DefaultCooldown", std::to_string(defaultCooldown));
}

std::string CreateScalingGroupRequest::getRemovalPolicy1()const
{
	return removalPolicy1_;
}

void CreateScalingGroupRequest::setRemovalPolicy1(const std::string& removalPolicy1)
{
	removalPolicy1_ = removalPolicy1;
	setParameter("RemovalPolicy1", removalPolicy1);
}

std::string CreateScalingGroupRequest::getRemovalPolicy2()const
{
	return removalPolicy2_;
}

void CreateScalingGroupRequest::setRemovalPolicy2(const std::string& removalPolicy2)
{
	removalPolicy2_ = removalPolicy2;
	setParameter("RemovalPolicy2", removalPolicy2);
}

