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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTSKILLGROUPSUMMARYREPORTSSINCEMIDNIGHTRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTSKILLGROUPSUMMARYREPORTSSINCEMIDNIGHTRESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT ListSkillGroupSummaryReportsSinceMidnightResult : public ServiceResult
			{
			public:
				struct PagedSkillGroupSummaryReport
				{
					struct SkillGroupSummaryReport
					{
						struct Overall
						{
							long totalReadyTime;
							long totalBreakTime;
							long totalCalls;
							long totalWorkTime;
							long satisfactionSurveysOffered;
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
							long abandonedInQueueOfQueueCount;
							long answeredByAgentOfQueueCount;
							long giveUpByAgentOfQueueCount;
							long maxRingTime;
							long callsOffered;
							float satisfactionIndex;
							long totalRingTime;
							float handleRate;
							long callsServiceLevel30;
							long totalTalkTime;
							long callsServiceLevel10;
							long overFlowInQueueOfQueueCount;
							std::string maxTalkTime;
							long callsAttendedTransferOut;
							long averageTalkTime;
							long answeredByAgentOfQueueWaitTimeDuration;
							long satisfactionSurveysOffered;
							long queueWaitTimeDuration;
							long callsHandled;
							long satisfactionSurveysResponded;
							long queueMaxWaitTimeDuration;
							long callsServiceLevel20;
							long averageRingTime;
							long answeredByAgentOfQueueMaxWaitTimeDuration;
							long averageWorkTime;
							long callsBlindTransferOut;
							long maxWorkTime;
							long inComingQueueOfQueueCount;
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
							std::string callsServiceLevel30;
							long totalTalkTime;
							long callsDialed;
							long maxDialingTime;
							long maxTalkTime;
							long averageWorkTime;
							long maxWorkTime;
							float answerRate;
							long averageTalkTime;
						};
						Overall overall;
						Outbound outbound;
						std::string skillGroupName;
						std::string instanceId;
						std::string skillGroupId;
						Inbound inbound;
						std::string timestamp;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<SkillGroupSummaryReport> list;
				};


				ListSkillGroupSummaryReportsSinceMidnightResult();
				explicit ListSkillGroupSummaryReportsSinceMidnightResult(const std::string &payload);
				~ListSkillGroupSummaryReportsSinceMidnightResult();
				PagedSkillGroupSummaryReport getPagedSkillGroupSummaryReport()const;
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				PagedSkillGroupSummaryReport pagedSkillGroupSummaryReport_;
				std::string message_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTSKILLGROUPSUMMARYREPORTSSINCEMIDNIGHTRESULT_H_