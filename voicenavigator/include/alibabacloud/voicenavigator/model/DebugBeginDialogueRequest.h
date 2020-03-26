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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_DEBUGBEGINDIALOGUEREQUEST_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_DEBUGBEGINDIALOGUEREQUEST_H_

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
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT DebugBeginDialogueRequest : public RpcServiceRequest
			{

			public:
				DebugBeginDialogueRequest();
				~DebugBeginDialogueRequest();

				std::string getConversationId()const;
				void setConversationId(const std::string& conversationId);
				std::string getInitialContext()const;
				void setInitialContext(const std::string& initialContext);
				std::string getCallingNumber()const;
				void setCallingNumber(const std::string& callingNumber);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getCalledNumber()const;
				void setCalledNumber(const std::string& calledNumber);

            private:
				std::string conversationId_;
				std::string initialContext_;
				std::string callingNumber_;
				std::string instanceId_;
				std::string calledNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_DEBUGBEGINDIALOGUEREQUEST_H_