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

#ifndef ALIBABACLOUD_NAS_MODEL_DESCRIBEACCESSGROUPSRESULT_H_
#define ALIBABACLOUD_NAS_MODEL_DESCRIBEACCESSGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nas/NASExport.h>

namespace AlibabaCloud
{
	namespace NAS
	{
		namespace Model
		{
			class ALIBABACLOUD_NAS_EXPORT DescribeAccessGroupsResult : public ServiceResult
			{
			public:
				struct AccessGroup
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					int ruleCount;
					std::string accessGroupType;
					std::string description;
					std::string accessGroupName;
					std::string createTime;
					std::string fileSystemType;
					std::string regionId;
					int mountTargetCount;
					std::vector<AccessGroup::Tag> tags;
				};


				DescribeAccessGroupsResult();
				explicit DescribeAccessGroupsResult(const std::string &payload);
				~DescribeAccessGroupsResult();
				std::vector<AccessGroup> getAccessGroups()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AccessGroup> accessGroups_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NAS_MODEL_DESCRIBEACCESSGROUPSRESULT_H_