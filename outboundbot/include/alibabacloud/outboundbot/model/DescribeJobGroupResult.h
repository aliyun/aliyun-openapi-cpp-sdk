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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBEJOBGROUPRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBEJOBGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/outboundbot/OutboundBotExport.h>

namespace AlibabaCloud
{
	namespace OutboundBot
	{
		namespace Model
		{
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT DescribeJobGroupResult : public ServiceResult
			{
			public:
				struct JobGroup
				{
					struct ExportProgress
					{
						std::string status;
						std::string progress;
						std::string fileHttpUrl;
					};
					struct Progress
					{
						struct KeyValuePair
						{
							std::string value;
							std::string key;
						};
						std::string status;
						std::vector<KeyValuePair> categories;
						int failed;
						long startTime;
						int duration;
						int scheduling;
						int cancelled;
						int totalCompleted;
						std::vector<KeyValuePair> briefs;
						int executing;
						int totalNotAnswered;
						int totalJobs;
						int paused;
					};
					struct Strategy
					{
						struct TimeFrame
						{
							std::string endTime;
							std::string beginTime;
						};
						std::vector<TimeFrame> workingTime;
						bool isTemplate;
						int minAttemptInterval;
						std::string repeatBy;
						long endTime;
						long startTime;
						std::string strategyId;
						std::string followUpStrategy;
						std::string type;
						std::string strategyName;
						std::string customized;
						std::string strategyDescription;
						int maxAttemptsPerDay;
						std::string routingStrategy;
						std::vector<std::string> repeatDays;
					};
					struct RecallStrategy
					{
						bool outOfServiceIgnore;
						bool emptyNumberIgnore;
						bool inArrearsIgnore;
					};
					struct Result
					{
						int unrecognizedNum;
						int finishedNum;
						int noInteractNum;
						int clientHangupNum;
						int timeoutHangupNum;
					};
					std::string status;
					std::string modifyTime;
					Progress progress;
					std::string scenarioId;
					std::string jobDataParsingTaskId;
					std::string jobGroupName;
					std::string scriptVersion;
					std::string priority;
					std::string scriptId;
					std::string jobGroupDescription;
					Result result;
					long ringingDuration;
					long minConcurrency;
					std::string jobGroupId;
					std::string scriptName;
					long creationTime;
					Strategy strategy;
					std::string jobFilePath;
					ExportProgress exportProgress;
					RecallStrategy recallStrategy;
					std::vector<std::string> callingNumbers;
				};


				DescribeJobGroupResult();
				explicit DescribeJobGroupResult(const std::string &payload);
				~DescribeJobGroupResult();
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
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBEJOBGROUPRESULT_H_