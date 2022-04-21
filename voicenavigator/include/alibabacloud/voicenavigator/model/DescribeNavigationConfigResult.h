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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBENAVIGATIONCONFIGRESULT_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBENAVIGATIONCONFIGRESULT_H_

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
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT DescribeNavigationConfigResult : public ServiceResult
			{
			public:
				struct RepeatingConfig
				{
					std::vector<std::string> utterances;
				};
				struct AskingBackConfig
				{
					std::vector<std::string> negativeFeedbackUtterances;
					bool enableNegativeFeedback;
					std::string negativeFeedbackAction;
					bool enabled;
					std::string negativeFeedbackActionParams;
					std::string prompt;
					std::string negativeFeedbackPrompt;
				};
				struct SilenceTimeoutConfig
				{
					std::string finalActionParams;
					std::string intentTrigger;
					long timeout;
					std::string sourceType;
					std::string prompt;
					std::string finalPrompt;
					std::string finalAction;
					int threshold;
				};
				struct GreetingConfig
				{
					std::string greetingWords;
					std::string intentTrigger;
					std::string sourceType;
				};
				struct UnrecognizingConfig
				{
					std::string finalActionParams;
					std::string prompt;
					std::string finalPrompt;
					std::string finalAction;
					int threshold;
				};
				struct ComplainingConfig
				{
					std::string finalActionParams;
					std::vector<std::string> utterances1;
					std::string prompt;
					std::string finalAction;
				};


				DescribeNavigationConfigResult();
				explicit DescribeNavigationConfigResult(const std::string &payload);
				~DescribeNavigationConfigResult();
				RepeatingConfig getRepeatingConfig()const;
				AskingBackConfig getAskingBackConfig()const;
				SilenceTimeoutConfig getSilenceTimeoutConfig()const;
				GreetingConfig getGreetingConfig()const;
				UnrecognizingConfig getUnrecognizingConfig()const;
				ComplainingConfig getComplainingConfig()const;

			protected:
				void parse(const std::string &payload);
			private:
				RepeatingConfig repeatingConfig_;
				AskingBackConfig askingBackConfig_;
				SilenceTimeoutConfig silenceTimeoutConfig_;
				GreetingConfig greetingConfig_;
				UnrecognizingConfig unrecognizingConfig_;
				ComplainingConfig complainingConfig_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBENAVIGATIONCONFIGRESULT_H_