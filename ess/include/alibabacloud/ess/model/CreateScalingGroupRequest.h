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

#ifndef ALIBABACLOUD_ESS_MODEL_CREATESCALINGGROUPREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_CREATESCALINGGROUPREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT CreateScalingGroupRequest : public RpcServiceRequest {
public:
	struct Tag {
		bool propagate;
		std::string value;
		std::string key;
	};
	struct ServerGroup {
		std::string serverGroupId;
		int port;
		int weight;
		std::string type;
	};
	struct LaunchTemplateOverride {
		int weightedCapacity;
		std::string instanceType;
		float spotPriceLimit;
	};
	struct CapacityOptions {
		bool compensateWithOnDemand;
		std::string priceComparisonMode;
		int onDemandBaseCapacity;
		bool spotAutoReplaceOnDemand;
		int onDemandPercentageAboveBaseCapacity;
	};
	struct AlbServerGroup {
		std::string albServerGroupId;
		int port;
		int weight;
	};
	struct LifecycleHook {
		std::string defaultResult;
		std::string lifecycleHookName;
		int heartbeatTimeout;
		std::string notificationArn;
		std::string notificationMetadata;
		std::string lifecycleTransition;
	};
	struct SystemTag {
		std::string scope;
		std::string value;
		std::string key;
		bool spread;
	};
	struct LoadBalancerConfig {
		std::string loadBalancerId;
		int weight;
	};
	struct DBInstance {
		std::string dBInstanceId;
		std::string type;
		std::string attachMode;
	};
	struct VServerGroup {
		std::string loadBalancerId;
		struct VServerGroupAttribute {
			std::string vServerGroupId;
			int port;
			int weight;
		};
		std::vector<VServerGroupAttribute> vServerGroupAttribute;
	};
	CreateScalingGroupRequest();
	~CreateScalingGroupRequest();
	bool getAzBalance() const;
	void setAzBalance(bool azBalance);
	std::vector<std::string> getVSwitchIds() const;
	void setVSwitchIds(const std::vector<std::string> &vSwitchIds);
	int getMaxInstanceLifetime() const;
	void setMaxInstanceLifetime(int maxInstanceLifetime);
	bool getSpotInstanceRemedy() const;
	void setSpotInstanceRemedy(bool spotInstanceRemedy);
	bool getScaleOutAmountCheck() const;
	void setScaleOutAmountCheck(bool scaleOutAmountCheck);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getGroupType() const;
	void setGroupType(const std::string &groupType);
	bool getSyncAlarmRuleToCms() const;
	void setSyncAlarmRuleToCms(bool syncAlarmRuleToCms);
	std::string getCustomPolicyARN() const;
	void setCustomPolicyARN(const std::string &customPolicyARN);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	int getStopInstanceTimeout() const;
	void setStopInstanceTimeout(int stopInstanceTimeout);
	int getDefaultCooldown() const;
	void setDefaultCooldown(int defaultCooldown);
	std::vector<std::string> getHealthCheckTypes() const;
	void setHealthCheckTypes(const std::vector<std::string> &healthCheckTypes);
	std::string getContainerGroupId() const;
	void setContainerGroupId(const std::string &containerGroupId);
	std::string getMultiAZPolicy() const;
	void setMultiAZPolicy(const std::string &multiAZPolicy);
	std::string getDBInstanceIds() const;
	void setDBInstanceIds(const std::string &dBInstanceIds);
	std::string getLaunchTemplateId() const;
	void setLaunchTemplateId(const std::string &launchTemplateId);
	int getDesiredCapacity() const;
	void setDesiredCapacity(int desiredCapacity);
	std::vector<ServerGroup> getServerGroup() const;
	void setServerGroup(const std::vector<ServerGroup> &serverGroup);
	std::vector<LaunchTemplateOverride> getLaunchTemplateOverride() const;
	void setLaunchTemplateOverride(const std::vector<LaunchTemplateOverride> &launchTemplateOverride);
	bool getCompensateWithOnDemand() const;
	void setCompensateWithOnDemand(bool compensateWithOnDemand);
	CapacityOptions getCapacityOptions() const;
	void setCapacityOptions(const CapacityOptions &capacityOptions);
	int getMinSize() const;
	void setMinSize(int minSize);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<AlbServerGroup> getAlbServerGroup() const;
	void setAlbServerGroup(const std::vector<AlbServerGroup> &albServerGroup);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getMaxSize() const;
	void setMaxSize(int maxSize);
	std::vector<LifecycleHook> getLifecycleHook() const;
	void setLifecycleHook(const std::vector<LifecycleHook> &lifecycleHook);
	std::string getLoadBalancerIds() const;
	void setLoadBalancerIds(const std::string &loadBalancerIds);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<SystemTag> getSystemTag() const;
	void setSystemTag(const std::vector<SystemTag> &systemTag);
	std::vector<LoadBalancerConfig> getLoadBalancerConfig() const;
	void setLoadBalancerConfig(const std::vector<LoadBalancerConfig> &loadBalancerConfig);
	int getOnDemandBaseCapacity() const;
	void setOnDemandBaseCapacity(int onDemandBaseCapacity);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	int getOnDemandPercentageAboveBaseCapacity() const;
	void setOnDemandPercentageAboveBaseCapacity(int onDemandPercentageAboveBaseCapacity);
	std::string getSpotAllocationStrategy() const;
	void setSpotAllocationStrategy(const std::string &spotAllocationStrategy);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRemovalPolicy1() const;
	void setRemovalPolicy1(const std::string &removalPolicy1);
	std::string getRemovalPolicy2() const;
	void setRemovalPolicy2(const std::string &removalPolicy2);
	std::string getRemovalPolicy3() const;
	void setRemovalPolicy3(const std::string &removalPolicy3);
	std::string getHealthCheckType() const;
	void setHealthCheckType(const std::string &healthCheckType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getScalingGroupName() const;
	void setScalingGroupName(const std::string &scalingGroupName);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getSpotInstancePools() const;
	void setSpotInstancePools(int spotInstancePools);
	std::vector<DBInstance> getDBInstance() const;
	void setDBInstance(const std::vector<DBInstance> &dBInstance);
	bool getGroupDeletionProtection() const;
	void setGroupDeletionProtection(bool groupDeletionProtection);
	std::string getLaunchTemplateVersion() const;
	void setLaunchTemplateVersion(const std::string &launchTemplateVersion);
	std::string getScalingPolicy() const;
	void setScalingPolicy(const std::string &scalingPolicy);
	std::string getAllocationStrategy() const;
	void setAllocationStrategy(const std::string &allocationStrategy);
	std::vector<VServerGroup> getVServerGroup() const;
	void setVServerGroup(const std::vector<VServerGroup> &vServerGroup);

private:
	bool azBalance_;
	std::vector<std::string> vSwitchIds_;
	int maxInstanceLifetime_;
	bool spotInstanceRemedy_;
	bool scaleOutAmountCheck_;
	std::string resourceGroupId_;
	std::string groupType_;
	bool syncAlarmRuleToCms_;
	std::string customPolicyARN_;
	std::vector<Tag> tag_;
	int stopInstanceTimeout_;
	int defaultCooldown_;
	std::vector<std::string> healthCheckTypes_;
	std::string containerGroupId_;
	std::string multiAZPolicy_;
	std::string dBInstanceIds_;
	std::string launchTemplateId_;
	int desiredCapacity_;
	std::vector<ServerGroup> serverGroup_;
	std::vector<LaunchTemplateOverride> launchTemplateOverride_;
	bool compensateWithOnDemand_;
	CapacityOptions capacityOptions_;
	int minSize_;
	long ownerId_;
	std::vector<AlbServerGroup> albServerGroup_;
	std::string vSwitchId_;
	std::string instanceId_;
	int maxSize_;
	std::vector<LifecycleHook> lifecycleHook_;
	std::string loadBalancerIds_;
	std::string clientToken_;
	std::vector<SystemTag> systemTag_;
	std::vector<LoadBalancerConfig> loadBalancerConfig_;
	int onDemandBaseCapacity_;
	std::string accessKeyId_;
	int onDemandPercentageAboveBaseCapacity_;
	std::string spotAllocationStrategy_;
	std::string regionId_;
	std::string removalPolicy1_;
	std::string removalPolicy2_;
	std::string removalPolicy3_;
	std::string healthCheckType_;
	std::string resourceOwnerAccount_;
	std::string scalingGroupName_;
	std::string ownerAccount_;
	int spotInstancePools_;
	std::vector<DBInstance> dBInstance_;
	bool groupDeletionProtection_;
	std::string launchTemplateVersion_;
	std::string scalingPolicy_;
	std::string allocationStrategy_;
	std::vector<VServerGroup> vServerGroup_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_CREATESCALINGGROUPREQUEST_H_
