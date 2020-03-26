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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_QUERYBOTSRESULT_H_
#define ALIBABACLOUD_CHATBOT_MODEL_QUERYBOTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/chatbot/ChatbotExport.h>

namespace AlibabaCloud
{
	namespace Chatbot
	{
		namespace Model
		{
			class ALIBABACLOUD_CHATBOT_EXPORT QueryBotsResult : public ServiceResult
			{
			public:
				struct Bot
				{
					std::string languageCode;
					std::string timeZone;
					std::string introduction;
					std::string instanceId;
					std::string createTime;
					std::string avatar;
					std::string name;
				};


				QueryBotsResult();
				explicit QueryBotsResult(const std::string &payload);
				~QueryBotsResult();
				int getTotalCount()const;
				std::vector<Bot> getBots()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<Bot> bots_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_QUERYBOTSRESULT_H_