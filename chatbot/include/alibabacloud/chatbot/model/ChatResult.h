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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_CHATRESULT_H_
#define ALIBABACLOUD_CHATBOT_MODEL_CHATRESULT_H_

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
			class ALIBABACLOUD_CHATBOT_EXPORT ChatResult : public ServiceResult
			{
			public:
				struct Message
				{
					struct Text
					{
						std::string intentName;
						std::string content;
						std::string answerSource;
						std::string metaData;
						std::string externalFlags;
					};
					struct Knowledge
					{
						std::string content;
						std::string answerSource;
						std::string title;
						std::string summary;
						std::string id;
					};
					struct Recommend
					{
						std::string answerSource;
						std::string content;
						std::string title;
						std::string summary;
						std::string knowledgeId;
					};
					std::string type;
					Text text;
					std::vector<Message::Recommend> recommends;
					Knowledge knowledge;
				};


				ChatResult();
				explicit ChatResult(const std::string &payload);
				~ChatResult();
				std::vector<Message> getMessages()const;
				std::string getTag()const;
				std::string getSessionId()const;
				std::string getMessageId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Message> messages_;
				std::string tag_;
				std::string sessionId_;
				std::string messageId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_CHATRESULT_H_