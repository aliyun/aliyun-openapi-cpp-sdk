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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGINSTANCESRESULT_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGINSTANCESRESULT_H_

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
			class ALIBABACLOUD_ESS_EXPORT DescribeScalingInstancesResult : public ServiceResult
			{
			public:
				struct ScalingInstance
				{
					int loadBalancerWeight;
					std::string createdTime;
					std::string privateIpAddress;
					std::string zoneId;
					std::string instanceId;
					std::string scalingActivityId;
					std::string scalingGroupId;
					std::string healthStatus;
					std::string launchTemplateId;
					std::string lifecycleState;
					std::string scalingInstanceId;
					std::string creationType;
					int weightedCapacity;
					std::string warmupState;
					std::string creationTime;
					std::string launchTemplateVersion;
					bool entrusted;
					std::string scalingConfigurationId;
					std::string instanceType;
					std::string spotStrategy;
				};


				DescribeScalingInstancesResult();
				explicit DescribeScalingInstancesResult(const std::string &payload);
				~DescribeScalingInstancesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ScalingInstance> getScalingInstances()const;
				int getTotalSpotCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ScalingInstance> scalingInstances_;
				int totalSpotCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGINSTANCESRESULT_H_