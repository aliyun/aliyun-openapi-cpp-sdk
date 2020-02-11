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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEAUTOPROVISIONINGGROUPREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEAUTOPROVISIONINGGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT CreateAutoProvisioningGroupRequest : public RpcServiceRequest
			{
			public:
				struct LaunchTemplateConfig
				{
					std::string instanceType;
					double maxPrice;
					std::string vSwitchId;
					double weightedCapacity;
					int priority;
				};

			public:
				CreateAutoProvisioningGroupRequest();
				~CreateAutoProvisioningGroupRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAutoProvisioningGroupType()const;
				void setAutoProvisioningGroupType(const std::string& autoProvisioningGroupType);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				bool getTerminateInstancesWithExpiration()const;
				void setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getSpotAllocationStrategy()const;
				void setSpotAllocationStrategy(const std::string& spotAllocationStrategy);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getTerminateInstances()const;
				void setTerminateInstances(bool terminateInstances);
				std::string getPayAsYouGoAllocationStrategy()const;
				void setPayAsYouGoAllocationStrategy(const std::string& payAsYouGoAllocationStrategy);
				std::string getDefaultTargetCapacityType()const;
				void setDefaultTargetCapacityType(const std::string& defaultTargetCapacityType);
				std::string getExcessCapacityTerminationPolicy()const;
				void setExcessCapacityTerminationPolicy(const std::string& excessCapacityTerminationPolicy);
				std::vector<LaunchTemplateConfig> getLaunchTemplateConfig()const;
				void setLaunchTemplateConfig(const std::vector<LaunchTemplateConfig>& launchTemplateConfig);
				std::string getValidUntil()const;
				void setValidUntil(const std::string& validUntil);
				std::string getSpotInstanceInterruptionBehavior()const;
				void setSpotInstanceInterruptionBehavior(const std::string& spotInstanceInterruptionBehavior);
				std::string getLaunchTemplateId()const;
				void setLaunchTemplateId(const std::string& launchTemplateId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getSpotInstancePoolsToUseCount()const;
				void setSpotInstancePoolsToUseCount(int spotInstancePoolsToUseCount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getLaunchTemplateVersion()const;
				void setLaunchTemplateVersion(const std::string& launchTemplateVersion);
				std::string getPayAsYouGoTargetCapacity()const;
				void setPayAsYouGoTargetCapacity(const std::string& payAsYouGoTargetCapacity);
				std::string getTotalTargetCapacity()const;
				void setTotalTargetCapacity(const std::string& totalTargetCapacity);
				std::string getSpotTargetCapacity()const;
				void setSpotTargetCapacity(const std::string& spotTargetCapacity);
				std::string getValidFrom()const;
				void setValidFrom(const std::string& validFrom);
				std::string getAutoProvisioningGroupName()const;
				void setAutoProvisioningGroupName(const std::string& autoProvisioningGroupName);
				float getMaxSpotPrice()const;
				void setMaxSpotPrice(float maxSpotPrice);

            private:
				long resourceOwnerId_;
				std::string autoProvisioningGroupType_;
				std::string description_;
				bool terminateInstancesWithExpiration_;
				std::string resourceGroupId_;
				std::string spotAllocationStrategy_;
				std::string regionId_;
				bool terminateInstances_;
				std::string payAsYouGoAllocationStrategy_;
				std::string defaultTargetCapacityType_;
				std::string excessCapacityTerminationPolicy_;
				std::vector<LaunchTemplateConfig> launchTemplateConfig_;
				std::string validUntil_;
				std::string spotInstanceInterruptionBehavior_;
				std::string launchTemplateId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				int spotInstancePoolsToUseCount_;
				long ownerId_;
				std::string launchTemplateVersion_;
				std::string payAsYouGoTargetCapacity_;
				std::string totalTargetCapacity_;
				std::string spotTargetCapacity_;
				std::string validFrom_;
				std::string autoProvisioningGroupName_;
				float maxSpotPrice_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEAUTOPROVISIONINGGROUPREQUEST_H_