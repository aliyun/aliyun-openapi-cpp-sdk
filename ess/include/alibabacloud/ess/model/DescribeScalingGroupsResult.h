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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGGROUPSRESULT_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeScalingGroupsResult : public ServiceResult
			{
			public:
				struct ScalingGroup
				{
					struct CapacityOptions
					{
						int onDemandBaseCapacity;
						bool compensateWithOnDemand;
						int onDemandPercentageAboveBaseCapacity;
						bool spotAutoReplaceOnDemand;
						std::string priceComparisonMode;
					};
					struct VServerGroup
					{
						struct VServerGroupAttribute
						{
							std::string vServerGroupId;
							int port;
							int weight;
						};
						std::string loadBalancerId;
						std::vector<VServerGroup::VServerGroupAttribute> vServerGroupAttributes;
					};
					struct LaunchTemplateOverride
					{
						int weightedCapacity;
						float spotPriceLimit;
						std::string instanceType;
					};
					struct AlbServerGroup
					{
						std::string albServerGroupId;
						int port;
						int weight;
					};
					struct ServerGroup
					{
						std::string type;
						int port;
						std::string serverGroupId;
						int weight;
					};
					struct LoadBalancerConfig
					{
						std::string loadBalancerId;
						int weight;
					};
					struct Tag
					{
						std::string tagKey;
						bool propagate;
						std::string tagValue;
					};
					struct DBInstance
					{
						std::string type;
						std::string dBInstanceId;
						std::vector<std::string> securityGroupIds;
					};
					bool spotInstanceRemedy;
					std::string resourceGroupId;
					std::vector<ScalingGroup::ServerGroup> serverGroups;
					std::string activeScalingConfigurationId;
					int desiredCapacity;
					std::vector<ScalingGroup::AlbServerGroup> albServerGroups;
					int onDemandBaseCapacity;
					std::vector<std::string> removalPolicies;
					std::vector<ScalingGroup::LaunchTemplateOverride> launchTemplateOverrides;
					std::vector<ScalingGroup::Tag> tags;
					std::vector<std::string> suspendedProcesses;
					int removingCapacity;
					std::vector<std::string> vSwitchIds;
					std::string scalingGroupId;
					int pendingCapacity;
					std::string vSwitchId;
					std::vector<std::string> loadBalancerIds;
					int spotInstancePools;
					std::string launchTemplateId;
					std::string customPolicyARN;
					std::vector<ScalingGroup::LoadBalancerConfig> loadBalancerConfigs;
					int spotCapacity;
					std::string scalingGroupName;
					bool scaleOutAmountCheck;
					int defaultCooldown;
					std::string vpcId;
					std::string groupType;
					std::string creationTime;
					std::string launchTemplateVersion;
					std::string multiAZPolicy;
					int stoppedCapacity;
					std::string currentHostName;
					CapacityOptions capacityOptions;
					std::vector<std::string> dBInstanceIds;
					std::string healthCheckType;
					bool compensateWithOnDemand;
					int onDemandPercentageAboveBaseCapacity;
					std::string modificationTime;
					std::string lifecycleState;
					int totalInstanceCount;
					std::vector<std::string> healthCheckTypes;
					std::string allocationStrategy;
					bool weighted;
					int initCapacity;
					int pendingWaitCapacity;
					int totalCapacity;
					int removingWaitCapacity;
					bool isElasticStrengthInAlarm;
					std::string spotAllocationStrategy;
					int protectedCapacity;
					int standbyCapacity;
					std::string scalingPolicy;
					bool groupDeletionProtection;
					int maxSize;
					bool enableDesiredCapacity;
					int minSize;
					int activeCapacity;
					bool azBalance;
					bool systemSuspended;
					std::string monitorGroupId;
					std::vector<ScalingGroup::VServerGroup> vServerGroups;
					std::string regionId;
					std::vector<ScalingGroup::DBInstance> dBInstances;
					int maxInstanceLifetime;
					int stopInstanceTimeout;
				};


				DescribeScalingGroupsResult();
				explicit DescribeScalingGroupsResult(const std::string &payload);
				~DescribeScalingGroupsResult();
				int getTotalCount()const;
				std::vector<ScalingGroup> getScalingGroups()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<ScalingGroup> scalingGroups_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGGROUPSRESULT_H_