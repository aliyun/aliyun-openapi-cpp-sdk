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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_GETCONTACTWHITELISTRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_GETCONTACTWHITELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/outboundbot/OutboundBotExport.h>

namespace AlibabaCloud
{
	namespace OutboundBot
	{
		namespace Model
		{
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT GetContactWhiteListResult : public ServiceResult
			{
			public:
				struct ContactWhitelistList
				{
					struct ContactWhitelistList1
					{
						std::string instanceId;
						long creationTime;
						std::string phoneNumber;
						std::string _operator;
						std::string creator;
						std::string contactWhiteListId;
						std::string remark;
						std::string name;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<ContactWhitelistList1> list;
				};


				GetContactWhiteListResult();
				explicit GetContactWhiteListResult(const std::string &payload);
				~GetContactWhiteListResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				ContactWhitelistList getContactWhitelistList()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				ContactWhitelistList contactWhitelistList_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_GETCONTACTWHITELISTRESULT_H_