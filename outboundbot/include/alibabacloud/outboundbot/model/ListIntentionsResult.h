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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTINTENTIONSRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTINTENTIONSRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ListIntentionsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct IntentListItem
					{
						struct UserSayItem
						{
							struct Data1
							{
								std::string slotId;
								std::string text;
							};
							bool strict;
							std::string fromId;
							std::string id;
							std::vector<UserSayItem::Data1> userSayData;
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
							struct Tag
							{
								std::string userSayId;
								std::string value;
							};
							struct FeedbackFunction
							{
								struct SwitchItem
								{
									std::string type;
									std::string label;
									std::string value;
									std::string id;
									std::string name;
								};
								std::string function;
								std::string aliyunFunction;
								std::string type;
								std::vector<FeedbackFunction::SwitchItem> _switch;
								std::string description;
								std::string params;
								std::string endPoint;
								std::string code;
								std::string name;
								std::string aliyunService;
							};
							bool isArray;
							std::string feedbackType;
							bool isInteractive;
							bool isNecessary;
							std::string value;
							std::vector<SlotItem::FeedbackFunction> feedbackFunctions;
							int lifeSpan;
							std::vector<std::string> question;
							std::string id;
							bool isEncrypt;
							std::vector<SlotItem::Tag> tags;
							std::string name;
						};
						long tableId;
						int type;
						std::vector<IntentListItem::UserSayItem> userSay;
						long botId;
						std::string language;
						std::vector<std::string> alias;
						std::vector<IntentListItem::SlotItem> slot;
						std::string dialogId;
						long id;
						std::vector<IntentListItem::RuleCheckItem> ruleCheck;
						std::string botName;
						std::string name;
					};
					std::string message;
					std::string botId;
					std::vector<IntentListItem> intentList;
					bool success;
				};


				ListIntentionsResult();
				explicit ListIntentionsResult(const std::string &payload);
				~ListIntentionsResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTINTENTIONSRESULT_H_