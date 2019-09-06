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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEFLEETREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEFLEETREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT CreateFleetRequest : public RpcServiceRequest
			{
				struct LaunchTemplateConfig
				{
					std::string instanceType;
					double maxPrice;
					std::string vSwitchId;
					double weightedCapacity;
					int priority;
				};

			public:
				CreateFleetRequest();
				~CreateFleetRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getFleetType()const;
				void setFleetType(const std::string& fleetType);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				bool getTerminateInstancesWithExpiration()const;
				void setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration);
				std::string getOnDemandTargetCapacity()const;
				void setOnDemandTargetCapacity(const std::string& onDemandTargetCapacity);
				std::string getFleetName()const;
				void setFleetName(const std::string& fleetName);
				std::string getSpotAllocationStrategy()const;
				void setSpotAllocationStrategy(const std::string& spotAllocationStrategy);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getTerminateInstances()const;
				void setTerminateInstances(bool terminateInstances);
				std::string getDefaultTargetCapacityType()const;
				void setDefaultTargetCapacityType(const std::string& defaultTargetCapacityType);
				std::string getExcessCapacityTerminationPolicy()const;
				void setExcessCapacityTerminationPolicy(const std::string& excessCapacityTerminationPolicy);
				std::vector<LaunchTemplateConfig> getLaunchTemplateConfig()const;
				void setLaunchTemplateConfig(const std::vector<LaunchTemplateConfig>& launchTemplateConfig);
				std::string getValidUntil()const;
				void setValidUntil(const std::string& validUntil);
				std::string getFillGapWithOnDemand()const;
				void setFillGapWithOnDemand(const std::string& fillGapWithOnDemand);
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
				std::string getTotalTargetCapacity()const;
				void setTotalTargetCapacity(const std::string& totalTargetCapacity);
				std::string getOnDemandAllocationStrategy()const;
				void setOnDemandAllocationStrategy(const std::string& onDemandAllocationStrategy);
				std::string getSpotTargetCapacity()const;
				void setSpotTargetCapacity(const std::string& spotTargetCapacity);
				std::string getValidFrom()const;
				void setValidFrom(const std::string& validFrom);
				float getMaxSpotPrice()const;
				void setMaxSpotPrice(float maxSpotPrice);

            private:
				long resourceOwnerId_;
				std::string fleetType_;
				std::string description_;
				bool terminateInstancesWithExpiration_;
				std::string onDemandTargetCapacity_;
				std::string fleetName_;
				std::string spotAllocationStrategy_;
				std::string regionId_;
				bool terminateInstances_;
				std::string defaultTargetCapacityType_;
				std::string excessCapacityTerminationPolicy_;
				std::vector<LaunchTemplateConfig> launchTemplateConfig_;
				std::string validUntil_;
				std::string fillGapWithOnDemand_;
				std::string spotInstanceInterruptionBehavior_;
				std::string launchTemplateId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				int spotInstancePoolsToUseCount_;
				long ownerId_;
				std::string launchTemplateVersion_;
				std::string totalTargetCapacity_;
				std::string onDemandAllocationStrategy_;
				std::string spotTargetCapacity_;
				std::string validFrom_;
				float maxSpotPrice_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEFLEETREQUEST_H_