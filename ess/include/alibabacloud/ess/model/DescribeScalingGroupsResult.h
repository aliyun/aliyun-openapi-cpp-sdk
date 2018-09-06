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
					std::string activeScalingConfigurationId;
					std::string lifecycleState;
					std::string modificationTime;
					std::vector<std::string> removalPolicies;
					int pendingWaitCapacity;
					int totalCapacity;
					int removingWaitCapacity;
					int protectedCapacity;
					int standbyCapacity;
					int removingCapacity;
					std::vector<std::string> vSwitchIds;
					int pendingCapacity;
					std::string scalingGroupId;
					std::string vSwitchId;
					std::vector<std::string> loadBalancerIds;
					std::string launchTemplateId;
					int maxSize;
					std::string scalingGroupName;
					int activeCapacity;
					int minSize;
					int defaultCooldown;
					std::string vpcId;
					std::string launchTemplateVersion;
					std::string creationTime;
					std::string multiAZPolicy;
					std::string regionId;
					std::vector<std::string> dBInstanceIds;
					std::string healthCheckType;
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