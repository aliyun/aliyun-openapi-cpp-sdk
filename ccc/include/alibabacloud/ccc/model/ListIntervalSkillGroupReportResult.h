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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTINTERVALSKILLGROUPREPORTRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTINTERVALSKILLGROUPREPORTRESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT ListIntervalSkillGroupReportResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct Inbound
					{
						float serviceLevel20;
						long callsAbandonedInQueue;
						long totalWorkTime;
						long totalHoldTime;
						long callsRinged;
						float averageHoldTime;
						long callsAbandoned;
						long maxRingTime;
						long callsOffered;
						float satisfactionIndex;
						long callsHold;
						long maxAbandonedInRingTime;
						long totalRingTime;
						float handleRate;
						float averageAbandonedInQueueTime;
						float averageWaitTime;
						long totalTalkTime;
						long totalAbandonedInRingTime;
						long callsQueued;
						long maxTalkTime;
						float satisfactionRate;
						long callsAttendedTransferOut;
						long totalAbandonTime;
						long maxHoldTime;
						float averageTalkTime;
						long maxAbandonedInQueueTime;
						long callsTimeout;
						long satisfactionSurveysOffered;
						long callsAbandonedInRing;
						long callsOverflow;
						long callsHandled;
						long maxWaitTime;
						long satisfactionSurveysResponded;
						long callsAttendedTransferIn;
						float averageRingTime;
						long maxAbandonTime;
						long totalWaitTime;
						float averageAbandonTime;
						float averageAbandonedInRingTime;
						float averageWorkTime;
						long callsBlindTransferOut;
						long totalAbandonedInQueueTime;
						long maxWorkTime;
						long callsBlindTransferIn;
						float abandonRate;
					};
					struct Outbound
					{
						long totalDialingTime;
						long totalWorkTime;
						long totalHoldTime;
						long callsRinged;
						float averageHoldTime;
						long maxRingTime;
						float satisfactionIndex;
						long callsHold;
						long totalRingTime;
						float averageDialingTime;
						long callsAnswered;
						long callsDialed;
						long totalTalkTime;
						long maxDialingTime;
						long maxTalkTime;
						float satisfactionRate;
						long callsAttendedTransferOut;
						float answerRate;
						long maxHoldTime;
						float averageTalkTime;
						long satisfactionSurveysOffered;
						long satisfactionSurveysResponded;
						long callsAttendedTransferIn;
						float averageRingTime;
						float averageWorkTime;
						long callsBlindTransferOut;
						long maxWorkTime;
						long callsBlindTransferIn;
					};
					struct Overall
					{
						long totalReadyTime;
						long totalBreakTime;
						long totalCalls;
						long totalWorkTime;
						long totalHoldTime;
						long satisfactionSurveysOffered;
						float averageHoldTime;
						float satisfactionIndex;
						float averageBreakTime;
						long satisfactionSurveysResponded;
						long totalTalkTime;
						float averageReadyTime;
						long totalLoggedInTime;
						long maxTalkTime;
						float satisfactionRate;
						float averageWorkTime;
						long maxReadyTime;
						long maxWorkTime;
						long maxBreakTime;
						float occupancyRate;
						long maxHoldTime;
						float averageTalkTime;
					};
					Outbound outbound;
					Overall overall;
					Inbound inbound;
					long statsTime;
				};


				ListIntervalSkillGroupReportResult();
				explicit ListIntervalSkillGroupReportResult(const std::string &payload);
				~ListIntervalSkillGroupReportResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::vector<DataItem> getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::vector<DataItem> data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTINTERVALSKILLGROUPREPORTRESULT_H_