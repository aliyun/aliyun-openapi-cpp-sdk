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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYASKINGBACKCONFIGREQUEST_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYASKINGBACKCONFIGREQUEST_H_

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
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT ModifyAskingBackConfigRequest : public RpcServiceRequest
			{

			public:
				ModifyAskingBackConfigRequest();
				~ModifyAskingBackConfigRequest();

				std::string getNegativeFeedbackPrompt()const;
				void setNegativeFeedbackPrompt(const std::string& negativeFeedbackPrompt);
				std::string getNegativeFeedbackAction()const;
				void setNegativeFeedbackAction(const std::string& negativeFeedbackAction);
				bool getEnabled()const;
				void setEnabled(bool enabled);
				bool getEnableNegativeFeedback()const;
				void setEnableNegativeFeedback(bool enableNegativeFeedback);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getPrompt()const;
				void setPrompt(const std::string& prompt);
				std::vector<std::string> getNegativeFeedbackUtterances()const;
				void setNegativeFeedbackUtterances(const std::vector<std::string>& negativeFeedbackUtterances);
				std::string getNegativeFeedbackActionParams()const;
				void setNegativeFeedbackActionParams(const std::string& negativeFeedbackActionParams);

            private:
				std::string negativeFeedbackPrompt_;
				std::string negativeFeedbackAction_;
				bool enabled_;
				bool enableNegativeFeedback_;
				std::string instanceId_;
				std::string prompt_;
				std::vector<std::string> negativeFeedbackUtterances_;
				std::string negativeFeedbackActionParams_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYASKINGBACKCONFIGREQUEST_H_