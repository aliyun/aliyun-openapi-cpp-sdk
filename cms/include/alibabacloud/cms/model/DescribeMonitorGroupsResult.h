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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORGROUPSRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT DescribeMonitorGroupsResult : public ServiceResult
			{
			public:
				struct Resource
				{
					struct ContactGroup
					{
						std::string name;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string groupName;
					std::vector<Resource::ContactGroup> contactGroups;
					std::string dynamicTagRuleId;
					long gmtModified;
					std::string groupFounderTagValue;
					long groupId;
					std::string serviceId;
					std::string type;
					long gmtCreate;
					std::string bindUrl;
					std::string groupFounderTagKey;
					std::vector<std::string> templateIds;
					std::vector<Resource::Tag> tags;
				};


				DescribeMonitorGroupsResult();
				explicit DescribeMonitorGroupsResult(const std::string &payload);
				~DescribeMonitorGroupsResult();
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getTotal()const;
				std::vector<Resource> getResources()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int pageSize_;
				int pageNumber_;
				int total_;
				std::vector<Resource> resources_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORGROUPSRESULT_H_