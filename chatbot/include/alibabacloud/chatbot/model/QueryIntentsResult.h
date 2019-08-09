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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_QUERYINTENTSRESULT_H_
#define ALIBABACLOUD_CHATBOT_MODEL_QUERYINTENTSRESULT_H_

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
			class ALIBABACLOUD_CHATBOT_EXPORT QueryIntentsResult : public ServiceResult
			{
			public:
				struct Intent
				{
					struct UserSayItem
					{
						struct DataItem
						{
							std::string slotId;
							std::string text;
						};
						bool strict;
						std::string userSayId;
						std::vector<UserSayItem::DataItem> data;
					};
					struct RuleCheckItem
					{
						std::vector<std::string> warning;
						bool strict;
						std::vector<std::string> error;
						std::string text;
					};
					struct SlotItem
					{
						struct TagsItem
						{
							std::string userSayId;
							std::string value;
						};
						std::string slotId;
						bool isArray;
						bool isNecessary;
						std::string value;
						int lifeSpan;
						std::vector<std::string> question;
						std::vector<SlotItem::TagsItem> tags;
						std::string name;
					};
					std::string modifyTime;
					std::vector<Intent::UserSayItem> userSay;
					std::string modifyUserId;
					std::string createTime;
					std::string modifyUserName;
					std::vector<Intent::SlotItem> slot;
					std::string createUserId;
					std::vector<Intent::RuleCheckItem> ruleCheck;
					std::string createUserName;
					long intentId;
					std::string name;
				};


				QueryIntentsResult();
				explicit QueryIntentsResult(const std::string &payload);
				~QueryIntentsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Intent> getIntents()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Intent> intents_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_QUERYINTENTSRESULT_H_