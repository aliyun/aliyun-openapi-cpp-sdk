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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBEREDIRECTIONRESULT_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBEREDIRECTIONRESULT_H_

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
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT DescribeRedirectionResult : public ServiceResult
			{
			public:


				DescribeRedirectionResult();
				explicit DescribeRedirectionResult(const std::string &payload);
				~DescribeRedirectionResult();
				std::string getCategoryId()const;
				bool getInterruptible()const;
				std::string getRedirectionTarget()const;
				std::vector<std::string> getSimilarUtterances()const;
				std::string getRedirectionType()const;
				std::string getInstanceId()const;
				std::string getUserUtterance()const;
				std::string getPrompt()const;
				std::string getNavigationScriptId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string categoryId_;
				bool interruptible_;
				std::string redirectionTarget_;
				std::vector<std::string> similarUtterances_;
				std::string redirectionType_;
				std::string instanceId_;
				std::string userUtterance_;
				std::string prompt_;
				std::string navigationScriptId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBEREDIRECTIONRESULT_H_