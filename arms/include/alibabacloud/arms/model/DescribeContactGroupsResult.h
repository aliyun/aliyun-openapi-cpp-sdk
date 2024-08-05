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

#ifndef ALIBABACLOUD_ARMS_MODEL_DESCRIBECONTACTGROUPSRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_DESCRIBECONTACTGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT DescribeContactGroupsResult : public ServiceResult
			{
			public:
				struct PageBean
				{
					struct ContactGroups
					{
						struct ContactsItem
						{
							std::string email;
							std::string phone;
							std::string dingRobotUrl;
							long armsContactId;
							std::string webhook;
							float contactId;
							std::string contactName;
						};
						float contactGroupId;
						std::vector<ContactGroups::ContactsItem> contacts;
						std::string contactGroupName;
						long armsContactGroupId;
					};
					std::vector<ContactGroups> alertContactGroups;
					long size;
					long total;
					long page;
				};


				DescribeContactGroupsResult();
				explicit DescribeContactGroupsResult(const std::string &payload);
				~DescribeContactGroupsResult();
				PageBean getPageBean()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageBean pageBean_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_DESCRIBECONTACTGROUPSRESULT_H_