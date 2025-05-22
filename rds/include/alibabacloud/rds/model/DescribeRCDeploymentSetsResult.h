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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCDEPLOYMENTSETSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCDEPLOYMENTSETSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeRCDeploymentSetsResult : public ServiceResult
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
					struct Tag
					{
						std::string resourceId;
						std::string tagKey;
						std::string resourceType;
						std::string tagValue;
					};
					int groupCount;
					std::string createTime;
					std::vector<DeploymentSet::Capacity> capacities;
					std::string granularity;
					std::string deploymentStrategy;
					std::string deploymentSetId;
					std::string deploymentSetDescription;
					int instanceAmount;
					std::string strategy;
					std::string deploymentSetName;
					std::string domain;
					std::vector<std::string> instanceIds;
					std::vector<DeploymentSet::Tag> tags;
				};


				DescribeRCDeploymentSetsResult();
				explicit DescribeRCDeploymentSetsResult(const std::string &payload);
				~DescribeRCDeploymentSetsResult();
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
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCDEPLOYMENTSETSRESULT_H_