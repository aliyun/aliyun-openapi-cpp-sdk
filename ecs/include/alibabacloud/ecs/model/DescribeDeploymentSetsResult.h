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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEDEPLOYMENTSETSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEDEPLOYMENTSETSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeDeploymentSetsResult : public ServiceResult
			{
			public:
				struct DeploymentSet
				{
					struct Capacity
					{
						int usedAmount;
						std::string zoneId;
						int availableAmount;
					};
					std::string deploymentSetId;
					std::string deploymentSetDescription;
					int instanceAmount;
					int groupCount;
					std::string creationTime;
					std::string strategy;
					std::string deploymentSetName;
					std::vector<DeploymentSet::Capacity> capacities;
					std::string domain;
					std::string granularity;
					std::vector<std::string> instanceIds;
					std::string deploymentStrategy;
				};


				DescribeDeploymentSetsResult();
				explicit DescribeDeploymentSetsResult(const std::string &payload);
				~DescribeDeploymentSetsResult();
				int getTotalCount()const;
				int getPageSize()const;
				std::vector<DeploymentSet> getDeploymentSets()const;
				int getPageNumber()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				std::vector<DeploymentSet> deploymentSets_;
				int pageNumber_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDEPLOYMENTSETSRESULT_H_