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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTCONVERSATIONSWITHUNRECOGNIZEDINTENTSRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTCONVERSATIONSWITHUNRECOGNIZEDINTENTSRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ListConversationsWithUnrecognizedIntentsResult : public ServiceResult
			{
			public:
				struct ConversationsWithUnrecognizedIntent
				{
					struct Contact
					{
						std::string role;
						std::string honorific;
						std::string referenceId;
						std::string state;
						std::string phoneNumber;
						std::string contactId;
						std::string contactName;
						std::string jobId;
					};
					struct ConversationDetail
					{
						std::string script;
						std::string nodeId;
						std::string id;
						long timestamp;
						std::string speaker;
					};
					std::string conversationsWithUnrecognizedIntentId;
					std::vector<ConversationsWithUnrecognizedIntent::ConversationDetail> conversation;
					std::string jobId;
					Contact contact;
				};


				ListConversationsWithUnrecognizedIntentsResult();
				explicit ListConversationsWithUnrecognizedIntentsResult(const std::string &payload);
				~ListConversationsWithUnrecognizedIntentsResult();
				std::string getMessage()const;
				std::vector<ConversationsWithUnrecognizedIntent> getConversationsWithUnrecognizedIntents()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<ConversationsWithUnrecognizedIntent> conversationsWithUnrecognizedIntents_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTCONVERSATIONSWITHUNRECOGNIZEDINTENTSRESULT_H_