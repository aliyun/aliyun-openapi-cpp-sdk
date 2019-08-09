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

#ifndef ALIBABACLOUD_CCC_MODEL_GETINSTANCESUMMARYREPORTBYINTERVALRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_GETINSTANCESUMMARYREPORTBYINTERVALRESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT GetInstanceSummaryReportByIntervalResult : public ServiceResult
			{
			public:
				struct InstanceTimeIntervalReport
				{
					struct InstanceSummaryReport
					{
						struct Overall
						{
							long totalReadyTime;
							long totalCalls;
							long totalBreakTime;
							long totalWorkTime;
							long satisfactionSurveysOffered;
							float satisfactionIndex;
							long satisfactionSurveysResponded;
							long totalTalkTime;
							long averageReadyTime;
							long totalLoggedInTime;
							long maxTalkTime;
							long maxReadyTime;
							long averageWorkTime;
							long maxWorkTime;
							float occupancyRate;
							long averageTalkTime;
						};
						struct Inbound
						{
							long callsAbandonedInQueue;
							float serviceLevel20;
							long totalWorkTime;
							long callsIncomingLine;
							long satisfactionSurveysOffered;
							long callsOffered;
							long maxRingTime;
							float satisfactionIndex;
							long callsIncomingQueue;
							long callsIncomingIVR;
							long callsHandled;
							long totalRingTime;
							long satisfactionSurveysResponded;
							float handleRate;
							long averageRingTime;
							long totalTalkTime;
							std::string maxTalkTime;
							long averageWorkTime;
							long maxWorkTime;
							long averageTalkTime;
							long callsAbandonedInIVR;
						};
						struct Outbound
						{
							long totalDialingTime;
							long totalWorkTime;
							long satisfactionSurveysOffered;
							float satisfactionIndex;
							long satisfactionSurveysResponded;
							long averageDialingTime;
							long callsAnswered;
							long callsDialed;
							long totalTalkTime;
							long maxDialingTime;
							long maxTalkTime;
							long averageWorkTime;
							long maxWorkTime;
							float answerRate;
							long averageTalkTime;
						};
						Overall overall;
						Outbound outbound;
						std::string instanceId;
						Inbound inbound;
						std::string timestamp;
					};
					std::string instanceId;
					std::vector<InstanceSummaryReport> intervalList;
				};


				GetInstanceSummaryReportByIntervalResult();
				explicit GetInstanceSummaryReportByIntervalResult(const std::string &payload);
				~GetInstanceSummaryReportByIntervalResult();
				InstanceTimeIntervalReport getInstanceTimeIntervalReport()const;
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				InstanceTimeIntervalReport instanceTimeIntervalReport_;
				std::string message_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_GETINSTANCESUMMARYREPORTBYINTERVALRESULT_H_