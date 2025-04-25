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

#ifndef ALIBABACLOUD_ESS_MODEL_SCALEWITHADJUSTMENTREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_SCALEWITHADJUSTMENTREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT ScaleWithAdjustmentRequest : public RpcServiceRequest {
public:
	struct LifecycleHookContext {
		bool disableLifecycleHook;
		std::string string;
		std::vector<std::string> ignoredLifecycleHookIds;
	};
	struct Allocation {
		int count;
	};
	struct Overrides {
		float memory;
		struct ContainerOverrideItem {
			float memory;
			std::string string;
			std::vector<std::string> arg;
			struct EnvironmentVarItem {
				std::string value;
				std::string key;
			};
			EnvironmentVarItem environmentVarItem;
			std::vector<EnvironmentVarItem> environmentVar;
			std::string name;
			float cpu;
			std::string string;
			std::vector<std::string> command;
		};
		ContainerOverrideItem containerOverrideItem;
		std::vector<ContainerOverrideItem> containerOverride;
		float cpu;
		struct CustomLimitPrioritiesItem {
			std::string vSwitchId;
			std::string instanceType;
		};
		CustomLimitPrioritiesItem customLimitPrioritiesItem;
		std::vector<CustomLimitPrioritiesItem> customLimitPriorities;
	};
	ScaleWithAdjustmentRequest();
	~ScaleWithAdjustmentRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getScalingGroupId() const;
	void setScalingGroupId(const std::string &scalingGroupId);
	LifecycleHookContext getLifecycleHookContext() const;
	void setLifecycleHookContext(const LifecycleHookContext &lifecycleHookContext);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::vector<std::string> getInstanceType() const;
	void setInstanceType(const std::vector<std::string> &instanceType);
	bool getSyncActivity() const;
	void setSyncActivity(bool syncActivity);
	std::vector<Allocation> getAllocation() const;
	void setAllocation(const std::vector<Allocation> &allocation);
	int getAdjustmentValue() const;
	void setAdjustmentValue(int adjustmentValue);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getActivityMetadata() const;
	void setActivityMetadata(const std::string &activityMetadata);
	std::string getAdjustmentType() const;
	void setAdjustmentType(const std::string &adjustmentType);
	bool getParallelTask() const;
	void setParallelTask(bool parallelTask);
	Overrides getOverrides() const;
	void setOverrides(const Overrides &overrides);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);
	std::vector<std::string> getVSwitchId() const;
	void setVSwitchId(const std::vector<std::string> &vSwitchId);
	int getMinAdjustmentMagnitude() const;
	void setMinAdjustmentMagnitude(int minAdjustmentMagnitude);

private:
	std::string clientToken_;
	std::string scalingGroupId_;
	LifecycleHookContext lifecycleHookContext_;
	std::string accessKeyId_;
	std::vector<std::string> instanceType_;
	bool syncActivity_;
	std::vector<Allocation> allocation_;
	int adjustmentValue_;
	std::string resourceOwnerAccount_;
	std::string activityMetadata_;
	std::string adjustmentType_;
	bool parallelTask_;
	Overrides overrides_;
	long ownerId_;
	std::string spotStrategy_;
	std::vector<std::string> vSwitchId_;
	int minAdjustmentMagnitude_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_SCALEWITHADJUSTMENTREQUEST_H_
