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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTHISTORICALSKILLGROUPREPORTRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTHISTORICALSKILLGROUPREPORTRESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT ListHistoricalSkillGroupReportResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Items
					{
						struct Inbound
						{
							long callsAbandonedInQueue;
							float serviceLevel20;
							long totalWorkTime;
							long callsRinged;
							long totalHoldTime;
							long callsAbandoned;
							long callsOffered;
							long maxRingTime;
							long callsHold;
							float satisfactionIndex;
							long maxAbandonedInRingTime;
							long totalRingTime;
							float handleRate;
							float averageAbandonedInQueueTime;
							long callsAbandonedInRinging;
							float averageWaitTime;
							long totalTalkTime;
							long totalAbandonedInRingTime;
							long callsQueued;
							long maxTalkTime;
							long totalAbandonTime;
							float averageTalkTime;
							long callsConsulted;
							long maxAbandonedInQueueTime;
							long satisfactionSurveysOffered;
							long callsHandled;
							long maxWaitTime;
							long satisfactionSurveysResponded;
							long callsTransferred;
							float averageRingTime;
							long maxAbandonTime;
							long totalWaitTime;
							float averageAbandonTime;
							float averageAbandonedInRingTime;
							float averageWorkTime;
							long totalAbandonedInQueueTime;
							long maxWorkTime;
							float abandonRate;
						};
						struct Outbound
						{
							long totalDialingTime;
							long totalWorkTime;
							long totalHoldTime;
							long satisfactionSurveysOffered;
							float satisfactionIndex;
							long satisfactionSurveysResponded;
							float averageDialingTime;
							long callsAnswered;
							long callsDialed;
							long totalTalkTime;
							long maxDialingTime;
							long maxTalkTime;
							float averageWorkTime;
							long maxWorkTime;
							float answerRate;
							float averageTalkTime;
						};
						struct Overall
						{
							long totalReadyTime;
							long totalBreakTime;
							long totalCalls;
							long totalWorkTime;
							long totalHoldTime;
							long satisfactionSurveysOffered;
							float satisfactionIndex;
							float averageBreakTime;
							long satisfactionSurveysResponded;
							long totalTalkTime;
							float averageReadyTime;
							long totalLoggedInTime;
							long maxTalkTime;
							float averageWorkTime;
							long maxReadyTime;
							long maxBreakTime;
							long maxWorkTime;
							float averageTalkTime;
							float occupancyRate;
						};
						Outbound outbound;
						Overall overall;
						std::string skillGroupName;
						std::string skillGroupId;
						Inbound inbound;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<Items> list;
				};


				ListHistoricalSkillGroupReportResult();
				explicit ListHistoricalSkillGroupReportResult(const std::string &payload);
				~ListHistoricalSkillGroupReportResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTHISTORICALSKILLGROUPREPORTRESULT_H_