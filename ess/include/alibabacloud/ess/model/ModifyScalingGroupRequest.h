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

#ifndef ALIBABACLOUD_ESS_MODEL_MODIFYSCALINGGROUPREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_MODIFYSCALINGGROUPREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT ModifyScalingGroupRequest : public RpcServiceRequest {
public:
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
	ModifyScalingGroupRequest();
	~ModifyScalingGroupRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	bool getAzBalance() const;
	void setAzBalance(bool azBalance);
	std::vector<std::string> getVSwitchIds() const;
	void setVSwitchIds(const std::vector<std::string> &vSwitchIds);
	int getMaxInstanceLifetime() const;
	void setMaxInstanceLifetime(int maxInstanceLifetime);
	std::string getActiveScalingConfigurationId() const;
	void setActiveScalingConfigurationId(const std::string &activeScalingConfigurationId);
	bool getSpotInstanceRemedy() const;
	void setSpotInstanceRemedy(bool spotInstanceRemedy);
	bool getScaleOutAmountCheck() const;
	void setScaleOutAmountCheck(bool scaleOutAmountCheck);
	std::string getCustomPolicyARN() const;
	void setCustomPolicyARN(const std::string &customPolicyARN);
	int getStopInstanceTimeout() const;
	void setStopInstanceTimeout(int stopInstanceTimeout);
	int getDefaultCooldown() const;
	void setDefaultCooldown(int defaultCooldown);
	std::vector<std::string> getHealthCheckTypes() const;
	void setHealthCheckTypes(const std::vector<std::string> &healthCheckTypes);
	std::string getMultiAZPolicy() const;
	void setMultiAZPolicy(const std::string &multiAZPolicy);
	std::string getLaunchTemplateId() const;
	void setLaunchTemplateId(const std::string &launchTemplateId);
	int getDesiredCapacity() const;
	void setDesiredCapacity(int desiredCapacity);
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
	int getMaxSize() const;
	void setMaxSize(int maxSize);
	std::string getScalingGroupId() const;
	void setScalingGroupId(const std::string &scalingGroupId);
	int getOnDemandBaseCapacity() const;
	void setOnDemandBaseCapacity(int onDemandBaseCapacity);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	int getOnDemandPercentageAboveBaseCapacity() const;
	void setOnDemandPercentageAboveBaseCapacity(int onDemandPercentageAboveBaseCapacity);
	std::string getSpotAllocationStrategy() const;
	void setSpotAllocationStrategy(const std::string &spotAllocationStrategy);
	bool getDisableDesiredCapacity() const;
	void setDisableDesiredCapacity(bool disableDesiredCapacity);
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
	bool getGroupDeletionProtection() const;
	void setGroupDeletionProtection(bool groupDeletionProtection);
	std::string getLaunchTemplateVersion() const;
	void setLaunchTemplateVersion(const std::string &launchTemplateVersion);
	std::string getScalingPolicy() const;
	void setScalingPolicy(const std::string &scalingPolicy);
	std::string getAllocationStrategy() const;
	void setAllocationStrategy(const std::string &allocationStrategy);

private:
	long resourceOwnerId_;
	bool azBalance_;
	std::vector<std::string> vSwitchIds_;
	int maxInstanceLifetime_;
	std::string activeScalingConfigurationId_;
	bool spotInstanceRemedy_;
	bool scaleOutAmountCheck_;
	std::string customPolicyARN_;
	int stopInstanceTimeout_;
	int defaultCooldown_;
	std::vector<std::string> healthCheckTypes_;
	std::string multiAZPolicy_;
	std::string launchTemplateId_;
	int desiredCapacity_;
	std::vector<LaunchTemplateOverride> launchTemplateOverride_;
	bool compensateWithOnDemand_;
	CapacityOptions capacityOptions_;
	int minSize_;
	long ownerId_;
	int maxSize_;
	std::string scalingGroupId_;
	int onDemandBaseCapacity_;
	std::string accessKeyId_;
	int onDemandPercentageAboveBaseCapacity_;
	std::string spotAllocationStrategy_;
	bool disableDesiredCapacity_;
	std::string removalPolicy1_;
	std::string removalPolicy2_;
	std::string removalPolicy3_;
	std::string healthCheckType_;
	std::string resourceOwnerAccount_;
	std::string scalingGroupName_;
	std::string ownerAccount_;
	int spotInstancePools_;
	bool groupDeletionProtection_;
	std::string launchTemplateVersion_;
	std::string scalingPolicy_;
	std::string allocationStrategy_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_MODIFYSCALINGGROUPREQUEST_H_
