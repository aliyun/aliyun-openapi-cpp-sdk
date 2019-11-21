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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_UPDATEINTENTREQUEST_H_
#define ALIBABACLOUD_CHATBOT_MODEL_UPDATEINTENTREQUEST_H_

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
			class ALIBABACLOUD_CHATBOT_EXPORT UpdateIntentRequest : public RpcServiceRequest
			{

			public:
				UpdateIntentRequest();
				~UpdateIntentRequest();

				std::string getIntentDefinition()const;
				void setIntentDefinition(const std::string& intentDefinition);
				long getIntentId()const;
				void setIntentId(long intentId);

            private:
				std::string intentDefinition_;
				long intentId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CHATBOT_MODEL_UPDATEINTENTREQUEST_H_