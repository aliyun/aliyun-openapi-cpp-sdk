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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTJOBGROUPSWITHSCENARIORESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTJOBGROUPSWITHSCENARIORESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ListJobGroupsWithScenarioResult : public ServiceResult
			{
			public:
				struct JobGroups
				{
					struct JobGroup
					{
						struct Strategy
						{
							struct TimeFrame
							{
								std::string endTime;
								std::string beginTime;
							};
							std::vector<TimeFrame> workingTime;
							bool isTemplate;
							std::string description;
							std::string repeatBy;
							int minAttemptInterval;
							long endTime;
							std::string strategyId;
							long startTime;
							std::string followUpStrategy;
							std::string type;
							std::string strategyName;
							std::string customized;
							int maxAttemptsPerDay;
							std::string routingStrategy;
							std::vector<std::string> repeatDays;
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
							long startTime;
							int duration;
							int totalCompleted;
							int totalNotAnswered;
							int totalJobs;
						};
						Progress progress;
						std::string jobGroupId;
						std::string scenarioId;
						std::string jobGroupName;
						long creationTime;
						Strategy strategy;
						std::string jobFilePath;
						std::string scenarioName;
						std::string jobGroupDescription;
						std::vector<std::string> callingNumbers;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<JobGroup> list;
				};


				ListJobGroupsWithScenarioResult();
				explicit ListJobGroupsWithScenarioResult(const std::string &payload);
				~ListJobGroupsWithScenarioResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				JobGroups getJobGroups()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::string code_;
				JobGroups jobGroups_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTJOBGROUPSWITHSCENARIORESULT_H_