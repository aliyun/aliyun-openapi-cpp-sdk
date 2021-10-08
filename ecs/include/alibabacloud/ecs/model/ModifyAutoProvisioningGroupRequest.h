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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYAUTOPROVISIONINGGROUPREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYAUTOPROVISIONINGGROUPREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyAutoProvisioningGroupRequest : public RpcServiceRequest {
public:
	struct LaunchTemplateConfig {
		std::string vSwitchId;
		double maxPrice;
		int priority;
		std::string instanceType;
		double weightedCapacity;
	};
	ModifyAutoProvisioningGroupRequest();
	~ModifyAutoProvisioningGroupRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	bool getTerminateInstancesWithExpiration() const;
	void setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDefaultTargetCapacityType() const;
	void setDefaultTargetCapacityType(const std::string &defaultTargetCapacityType);
	std::string getExcessCapacityTerminationPolicy() const;
	void setExcessCapacityTerminationPolicy(const std::string &excessCapacityTerminationPolicy);
	std::vector<LaunchTemplateConfig> getLaunchTemplateConfig() const;
	void setLaunchTemplateConfig(const std::vector<LaunchTemplateConfig> &launchTemplateConfig);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getAutoProvisioningGroupId() const;
	void setAutoProvisioningGroupId(const std::string &autoProvisioningGroupId);
	std::string getPayAsYouGoTargetCapacity() const;
	void setPayAsYouGoTargetCapacity(const std::string &payAsYouGoTargetCapacity);
	std::string getTotalTargetCapacity() const;
	void setTotalTargetCapacity(const std::string &totalTargetCapacity);
	std::string getSpotTargetCapacity() const;
	void setSpotTargetCapacity(const std::string &spotTargetCapacity);
	float getMaxSpotPrice() const;
	void setMaxSpotPrice(float maxSpotPrice);
	std::string getAutoProvisioningGroupName() const;
	void setAutoProvisioningGroupName(const std::string &autoProvisioningGroupName);

private:
	long resourceOwnerId_;
	bool terminateInstancesWithExpiration_;
	std::string regionId_;
	std::string defaultTargetCapacityType_;
	std::string excessCapacityTerminationPolicy_;
	std::vector<LaunchTemplateConfig> launchTemplateConfig_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string autoProvisioningGroupId_;
	std::string payAsYouGoTargetCapacity_;
	std::string totalTargetCapacity_;
	std::string spotTargetCapacity_;
	float maxSpotPrice_;
	std::string autoProvisioningGroupName_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYAUTOPROVISIONINGGROUPREQUEST_H_
