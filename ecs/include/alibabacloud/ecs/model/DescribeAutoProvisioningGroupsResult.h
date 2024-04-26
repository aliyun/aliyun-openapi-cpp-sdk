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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOPROVISIONINGGROUPSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOPROVISIONINGGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeAutoProvisioningGroupsResult : public ServiceResult
			{
			public:
				struct AutoProvisioningGroup
				{
					struct SpotOptions
					{
						std::string allocationStrategy;
						std::string instanceInterruptionBehavior;
						int instancePoolsToUseCount;
					};
					struct PayAsYouGoOptions
					{
						std::string allocationStrategy;
					};
					struct TargetCapacitySpecification
					{
						std::string defaultTargetCapacityType;
						float totalTargetCapacity;
						float spotTargetCapacity;
						float payAsYouGoTargetCapacity;
					};
					struct LaunchTemplateConfig
					{
						float weightedCapacity;
						float priority;
						std::string vSwitchId;
						float maxPrice;
						std::string instanceType;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string status;
					TargetCapacitySpecification targetCapacitySpecification;
					std::string autoProvisioningGroupName;
					std::string excessCapacityTerminationPolicy;
					std::string resourceGroupId;
					PayAsYouGoOptions payAsYouGoOptions;
					SpotOptions spotOptions;
					std::string launchTemplateId;
					std::vector<AutoProvisioningGroup::LaunchTemplateConfig> launchTemplateConfigs;
					std::string autoProvisioningGroupType;
					bool terminateInstancesWithExpiration;
					std::string validUntil;
					std::string state;
					std::string autoProvisioningGroupId;
					std::string creationTime;
					std::string launchTemplateVersion;
					std::string validFrom;
					float maxSpotPrice;
					std::string regionId;
					bool terminateInstances;
					std::vector<AutoProvisioningGroup::Tag> tags;
				};


				DescribeAutoProvisioningGroupsResult();
				explicit DescribeAutoProvisioningGroupsResult(const std::string &payload);
				~DescribeAutoProvisioningGroupsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<AutoProvisioningGroup> getAutoProvisioningGroups()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<AutoProvisioningGroup> autoProvisioningGroups_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOPROVISIONINGGROUPSRESULT_H_