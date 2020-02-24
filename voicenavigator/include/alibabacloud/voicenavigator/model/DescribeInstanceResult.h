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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBEINSTANCERESULT_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBEINSTANCERESULT_H_

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
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT DescribeInstanceResult : public ServiceResult
			{
			public:


				DescribeInstanceResult();
				explicit DescribeInstanceResult(const std::string &payload);
				~DescribeInstanceResult();
				std::string getStatus()const;
				long getModifyTime()const;
				std::string getDescription()const;
				std::string getInstanceId()const;
				long getConcurrency()const;
				std::vector<std::string> getApplicableOperations()const;
				std::string getModifyUserName()const;
				std::string getNluServiceType()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				long modifyTime_;
				std::string description_;
				std::string instanceId_;
				long concurrency_;
				std::vector<std::string> applicableOperations_;
				std::string modifyUserName_;
				std::string nluServiceType_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBEINSTANCERESULT_H_