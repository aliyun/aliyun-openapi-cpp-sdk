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

#ifndef ALIBABACLOUD_CCC_MODEL_GETPREDICTIVEJOBGROUPRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_GETPREDICTIVEJOBGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT GetPredictiveJobGroupResult : public ServiceResult
			{
			public:
				struct JobGroup
				{
					struct Progress
					{
						struct KeyValuePair
						{
							std::string value;
							std::string key;
						};
						std::string status;
						std::vector<KeyValuePair> categories;
						long startTime;
						int duration;
						int totalCompleted;
						int totalNotAnswered;
						int totalJobs;
					};
					struct Strategy
					{
						struct TimeFrame
						{
							std::string endTime;
							std::string beginTime;
						};
						std::vector<TimeFrame> workingTime;
						int minAttemptInterval;
						long endTime;
						long startTime;
						std::string strategyId;
						int maxAttemptsPerDay;
					};
					Progress progress;
					std::string jobGroupId;
					std::string description;
					std::string skillGroupName;
					std::string instanceId;
					long creationTime;
					Strategy strategy;
					long ratio;
					std::string skillGroupId;
					std::string name;
				};


				GetPredictiveJobGroupResult();
				explicit GetPredictiveJobGroupResult(const std::string &payload);
				~GetPredictiveJobGroupResult();
				JobGroup getJobGroup()const;
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				JobGroup jobGroup_;
				std::string message_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_GETPREDICTIVEJOBGROUPRESULT_H_