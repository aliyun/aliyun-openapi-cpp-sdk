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

#ifndef ALIBABACLOUD_ARMS_MODEL_SEARCHALERTCONTACTGROUPRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_SEARCHALERTCONTACTGROUPRESULT_H_

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
			class ALIBABACLOUD_ARMS_EXPORT SearchAlertContactGroupResult : public ServiceResult
			{
			public:
				struct ContactGroup
				{
					struct Contact
					{
						std::string email;
						std::string userId;
						std::string phone;
						long createTime;
						long updateTime;
						long contactId;
						std::string dingRobot;
						std::string contactName;
						bool systemNoc;
					};
					long contactGroupId;
					std::vector<ContactGroup::Contact> contacts;
					std::string contactGroupName;
					std::string userId;
					long createTime;
					long updateTime;
				};


				SearchAlertContactGroupResult();
				explicit SearchAlertContactGroupResult(const std::string &payload);
				~SearchAlertContactGroupResult();
				std::vector<ContactGroup> getContactGroups()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ContactGroup> contactGroups_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_SEARCHALERTCONTACTGROUPRESULT_H_