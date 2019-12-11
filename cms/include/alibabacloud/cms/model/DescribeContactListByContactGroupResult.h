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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBECONTACTLISTBYCONTACTGROUPRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBECONTACTLISTBYCONTACTGROUPRESULT_H_

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
			class ALIBABACLOUD_CMS_EXPORT DescribeContactListByContactGroupResult : public ServiceResult
			{
			public:
				struct Contact
				{
					struct Channels
					{
						std::string mail;
						std::string aliIM;
						std::string dingWebHook;
						std::string sMS;
					};
					std::string desc;
					long createTime;
					long updateTime;
					Channels channels;
					std::string name;
				};


				DescribeContactListByContactGroupResult();
				explicit DescribeContactListByContactGroupResult(const std::string &payload);
				~DescribeContactListByContactGroupResult();
				std::vector<Contact> getContacts()const;
				std::string getMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Contact> contacts_;
				std::string message_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBECONTACTLISTBYCONTACTGROUPRESULT_H_