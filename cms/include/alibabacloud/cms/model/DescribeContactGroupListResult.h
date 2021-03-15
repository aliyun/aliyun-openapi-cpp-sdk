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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBECONTACTGROUPLISTRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBECONTACTGROUPLISTRESULT_H_

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
			class ALIBABACLOUD_CMS_EXPORT DescribeContactGroupListResult : public ServiceResult
			{
			public:
				struct ContactGroup
				{
					std::string describe;
					std::vector<std::string> contacts;
					long createTime;
					long updateTime;
					bool enabledWeeklyReport;
					bool enableSubscribed;
					std::string name;
				};


				DescribeContactGroupListResult();
				explicit DescribeContactGroupListResult(const std::string &payload);
				~DescribeContactGroupListResult();
				std::vector<ContactGroup> getContactGroupList()const;
				std::vector<std::string> getContactGroups()const;
				std::string getMessage()const;
				int getTotal()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ContactGroup> contactGroupList_;
				std::vector<std::string> contactGroups_;
				std::string message_;
				int total_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBECONTACTGROUPLISTRESULT_H_