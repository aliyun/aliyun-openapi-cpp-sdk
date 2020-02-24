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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBECONVERSATIONRESULT_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBECONVERSATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/voicenavigator/VoiceNavigatorExport.h>

namespace AlibabaCloud
{
	namespace VoiceNavigator
	{
		namespace Model
		{
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT DescribeConversationResult : public ServiceResult
			{
			public:


				DescribeConversationResult();
				explicit DescribeConversationResult(const std::string &payload);
				~DescribeConversationResult();
				int getEffectiveAnswerCount()const;
				std::string getConversationId()const;
				bool getTransferredToAgent()const;
				long getEndTime()const;
				long getBeginTime()const;
				std::string getSkillGroupId()const;
				std::string getCallingNumber()const;
				int getUserUtteranceCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				int effectiveAnswerCount_;
				std::string conversationId_;
				bool transferredToAgent_;
				long endTime_;
				long beginTime_;
				std::string skillGroupId_;
				std::string callingNumber_;
				int userUtteranceCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBECONVERSATIONRESULT_H_