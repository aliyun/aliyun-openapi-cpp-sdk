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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTAGENTSUMMARYREPORTSSINCEMIDNIGHTRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTAGENTSUMMARYREPORTSSINCEMIDNIGHTRESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT ListAgentSummaryReportsSinceMidnightResult : public ServiceResult
			{
			public:
				struct PagedAgentSummaryReport
				{
					struct AgentSummaryReport
					{
						struct Overall
						{
							long totalReadyTime;
							long totalBreakTime;
							long totalCalls;
							long totalWorkTime;
							long satisfactionSurveysOffered;
							long oneTransferCalls;
							float satisfactionIndex;
							long satisfactionSurveysResponded;
							long totalTalkTime;
							long averageReadyTime;
							long totalLoggedInTime;
							long maxTalkTime;
							long averageWorkTime;
							long maxReadyTime;
							long maxWorkTime;
							float occupancyRate;
							long averageTalkTime;
						};
						struct Inbound
						{
							float serviceLevel20;
							long totalWorkTime;
							long satisfactionSurveysOffered;
							long callsOffered;
							long maxRingTime;
							float satisfactionIndex;
							long callsHandled;
							long satisfactionSurveysResponded;
							long totalRingTime;
							float handleRate;
							long totalTalkTime;
							long averageRingTime;
							long maxTalkTime;
							long averageWorkTime;
							long maxWorkTime;
							long averageTalkTime;
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
							long totalTalkTime;
							long callsDialed;
							long maxDialingTime;
							long maxTalkTime;
							long averageWorkTime;
							std::string maxWorkTime;
							float answerRate;
							long averageTalkTime;
						};
						Overall overall;
						Outbound outbound;
						std::string loginName;
						std::string skillGroupIds;
						std::string instanceId;
						std::string skillGroupNames;
						std::string agentId;
						std::string agentName;
						Inbound inbound;
						std::string timestamp;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<AgentSummaryReport> list;
				};


				ListAgentSummaryReportsSinceMidnightResult();
				explicit ListAgentSummaryReportsSinceMidnightResult(const std::string &payload);
				~ListAgentSummaryReportsSinceMidnightResult();
				std::string getMessage()const;
				PagedAgentSummaryReport getPagedAgentSummaryReport()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				PagedAgentSummaryReport pagedAgentSummaryReport_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTAGENTSUMMARYREPORTSSINCEMIDNIGHTRESULT_H_