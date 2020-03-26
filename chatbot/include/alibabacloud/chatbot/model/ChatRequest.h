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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_CHATREQUEST_H_
#define ALIBABACLOUD_CHATBOT_MODEL_CHATREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/chatbot/ChatbotExport.h>

namespace AlibabaCloud
{
	namespace Chatbot
	{
		namespace Model
		{
			class ALIBABACLOUD_CHATBOT_EXPORT ChatRequest : public RpcServiceRequest
			{

			public:
				ChatRequest();
				~ChatRequest();

				bool getRecommend()const;
				void setRecommend(bool recommend);
				std::string getSessionId()const;
				void setSessionId(const std::string& sessionId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getIntentName()const;
				void setIntentName(const std::string& intentName);
				std::string getSenderNick()const;
				void setSenderNick(const std::string& senderNick);
				std::vector<std::string> getPerspective()const;
				void setPerspective(const std::vector<std::string>& perspective);
				std::string getTag()const;
				void setTag(const std::string& tag);
				std::string getUtterance()const;
				void setUtterance(const std::string& utterance);
				int getRecommendNum()const;
				void setRecommendNum(int recommendNum);
				std::string getKnowledgeId()const;
				void setKnowledgeId(const std::string& knowledgeId);
				std::string getSenderId()const;
				void setSenderId(const std::string& senderId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);

            private:
				bool recommend_;
				std::string sessionId_;
				std::string accessKeyId_;
				std::string intentName_;
				std::string senderNick_;
				std::vector<std::string> perspective_;
				std::string tag_;
				std::string utterance_;
				int recommendNum_;
				std::string knowledgeId_;
				std::string senderId_;
				std::string instanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_CHATREQUEST_H_