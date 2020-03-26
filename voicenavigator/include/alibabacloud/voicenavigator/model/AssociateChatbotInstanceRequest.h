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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_ASSOCIATECHATBOTINSTANCEREQUEST_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_ASSOCIATECHATBOTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/voicenavigator/VoiceNavigatorExport.h>

namespace AlibabaCloud
{
	namespace VoiceNavigator
	{
		namespace Model
		{
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT AssociateChatbotInstanceRequest : public RpcServiceRequest
			{

			public:
				AssociateChatbotInstanceRequest();
				~AssociateChatbotInstanceRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getChatbotInstanceId()const;
				void setChatbotInstanceId(const std::string& chatbotInstanceId);
				std::string getChatbotName()const;
				void setChatbotName(const std::string& chatbotName);

            private:
				std::string instanceId_;
				std::string chatbotInstanceId_;
				std::string chatbotName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_ASSOCIATECHATBOTINSTANCEREQUEST_H_