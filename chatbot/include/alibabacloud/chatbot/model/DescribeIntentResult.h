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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEINTENTRESULT_H_
#define ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEINTENTRESULT_H_

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
			class ALIBABACLOUD_CHATBOT_EXPORT DescribeIntentResult : public ServiceResult
			{
			public:
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


				DescribeIntentResult();
				explicit DescribeIntentResult(const std::string &payload);
				~DescribeIntentResult();
				std::string getModifyTime()const;
				std::string getCreateTime()const;
				long getDialogId()const;
				std::string getCreateUserId()const;
				std::string getCreateUserName()const;
				long getIntentId()const;
				std::string getName()const;
				std::string getType()const;
				std::vector<UserSayItem> getUserSay()const;
				std::string getModifyUserId()const;
				std::string getModifyUserName()const;
				std::vector<SlotItem> getSlot()const;
				std::vector<RuleCheckItem> getRuleCheck()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string modifyTime_;
				std::string createTime_;
				long dialogId_;
				std::string createUserId_;
				std::string createUserName_;
				long intentId_;
				std::string name_;
				std::string type_;
				std::vector<UserSayItem> userSay_;
				std::string modifyUserId_;
				std::string modifyUserName_;
				std::vector<SlotItem> slot_;
				std::vector<RuleCheckItem> ruleCheck_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEINTENTRESULT_H_