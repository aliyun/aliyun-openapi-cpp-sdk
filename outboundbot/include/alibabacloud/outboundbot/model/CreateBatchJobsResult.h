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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEBATCHJOBSRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEBATCHJOBSRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT CreateBatchJobsResult : public ServiceResult
			{
			public:
				struct BatchJob
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
					std::string scenarioId;
					std::string batchJobId;
					std::string jobGroupName;
					long creationTime;
					Strategy strategy;
					std::string jobFilePath;
					std::string jobGroupDescription;
					std::vector<std::string> callingNumbers;
				};


				CreateBatchJobsResult();
				explicit CreateBatchJobsResult(const std::string &payload);
				~CreateBatchJobsResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				BatchJob getBatchJob()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				BatchJob batchJob_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_CREATEBATCHJOBSRESULT_H_