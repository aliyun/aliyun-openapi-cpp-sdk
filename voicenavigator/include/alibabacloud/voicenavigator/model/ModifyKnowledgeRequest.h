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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYKNOWLEDGEREQUEST_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYKNOWLEDGEREQUEST_H_

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
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT ModifyKnowledgeRequest : public RpcServiceRequest
			{

			public:
				ModifyKnowledgeRequest();
				~ModifyKnowledgeRequest();

				std::string getUserUtterance()const;
				void setUserUtterance(const std::string& userUtterance);
				bool getInterruptible()const;
				void setInterruptible(bool interruptible);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getNavigationScriptId()const;
				void setNavigationScriptId(const std::string& navigationScriptId);
				std::string getAnswer()const;
				void setAnswer(const std::string& answer);
				std::vector<std::string> getSimilarUtterances()const;
				void setSimilarUtterances(const std::vector<std::string>& similarUtterances);

            private:
				std::string userUtterance_;
				bool interruptible_;
				std::string instanceId_;
				std::string navigationScriptId_;
				std::string answer_;
				std::vector<std::string> similarUtterances_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYKNOWLEDGEREQUEST_H_