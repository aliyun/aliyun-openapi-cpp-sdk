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

#ifndef ALIBABACLOUD_ESS_MODEL_ENABLESCALINGGROUPREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_ENABLESCALINGGROUPREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT EnableScalingGroupRequest : public RpcServiceRequest {
public:
	struct LaunchTemplateOverride {
		int weightedCapacity;
		std::string instanceType;
	};
	EnableScalingGroupRequest();
	~EnableScalingGroupRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getScalingGroupId() const;
	void setScalingGroupId(const std::string &scalingGroupId);
	std::string getActiveScalingConfigurationId() const;
	void setActiveScalingConfigurationId(const std::string &activeScalingConfigurationId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getLaunchTemplateId() const;
	void setLaunchTemplateId(const std::string &launchTemplateId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::vector<LaunchTemplateOverride> getLaunchTemplateOverride() const;
	void setLaunchTemplateOverride(const std::vector<LaunchTemplateOverride> &launchTemplateOverride);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getLaunchTemplateVersion() const;
	void setLaunchTemplateVersion(const std::string &launchTemplateVersion);
	std::vector<std::string> getInstanceId() const;
	void setInstanceId(const std::vector<std::string> &instanceId);
	std::vector<int> getLoadBalancerWeight() const;
	void setLoadBalancerWeight(const std::vector<int> &loadBalancerWeight);

private:
	long resourceOwnerId_;
	std::string scalingGroupId_;
	std::string activeScalingConfigurationId_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string launchTemplateId_;
	std::string resourceOwnerAccount_;
	std::vector<LaunchTemplateOverride> launchTemplateOverride_;
	std::string ownerAccount_;
	long ownerId_;
	std::string launchTemplateVersion_;
	std::vector<std::string> instanceId_;
	std::vector<int> loadBalancerWeight_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_ENABLESCALINGGROUPREQUEST_H_
