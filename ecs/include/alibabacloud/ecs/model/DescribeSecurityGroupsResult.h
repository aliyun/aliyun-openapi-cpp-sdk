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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBESECURITYGROUPSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBESECURITYGROUPSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeSecurityGroupsResult : public ServiceResult
			{
			public:
				struct SecurityGroup
				{
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					int ruleCount;
					int ecsCount;
					std::string description;
					std::string securityGroupName;
					std::string resourceGroupId;
					bool serviceManaged;
					std::string securityGroupId;
					std::string securityGroupType;
					int availableInstanceAmount;
					long serviceID;
					std::string vpcId;
					int groupToGroupRuleCount;
					std::string creationTime;
					std::vector<SecurityGroup::Tag> tags;
				};


				DescribeSecurityGroupsResult();
				explicit DescribeSecurityGroupsResult(const std::string &payload);
				~DescribeSecurityGroupsResult();
				std::vector<SecurityGroup> getSecurityGroups()const;
				int getTotalCount()const;
				std::string getNextToken()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SecurityGroup> securityGroups_;
				int totalCount_;
				std::string nextToken_;
				int pageSize_;
				int pageNumber_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBESECURITYGROUPSRESULT_H_