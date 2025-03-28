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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBESECURITYGROUPSRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBESECURITYGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeSecurityGroupsResult : public ServiceResult
			{
			public:
				struct SecurityGroup
				{
					int instanceCount;
					std::string description;
					std::string securityGroupName;
					std::string securityGroupId;
					std::string creationTime;
					std::vector<std::string> networkInterfaceIds;
					std::vector<std::string> instanceIds;
				};


				DescribeSecurityGroupsResult();
				explicit DescribeSecurityGroupsResult(const std::string &payload);
				~DescribeSecurityGroupsResult();
				std::vector<SecurityGroup> getSecurityGroups()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SecurityGroup> securityGroups_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBESECURITYGROUPSRESULT_H_