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

#ifndef ALIBABACLOUD_CCC_MODEL_GETHISTORICALINSTANCEREPORTRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_GETHISTORICALINSTANCEREPORTRESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT GetHistoricalInstanceReportResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Inbound
					{
						float serviceLevel20;
						long totalWorkTime;
						long totalHoldTime;
						long callsRinged;
						long maxAbandonedInIVRTime;
						long callsOffered;
						float satisfactionIndex;
						long callsHold;
						long totalRingTime;
						float handleRate;
						float averageAbandonedInQueueTime;
						long totalTalkTime;
						float averageWaitTime;
						long totalAbandonedInRingTime;
						long callsQueuingOverflow;
						long totalAbandonTime;
						long callsQueuingFailed;
						long callsBlindTransferred;
						long maxAbandonedInQueueTime;
						long satisfactionSurveysOffered;
						long callsAbandonedInRing;
						long callsAttendedTransferred;
						float averageRingTime;
						float abandonRate;
						long callsIVRException;
						long callsAbandonedInQueue;
						float averageHoldTime;
						long callsAbandoned;
						long maxRingTime;
						long maxAbandonedInRingTime;
						long totalAbandonedInIVRTime;
						long callsForwardToOutsideNumber;
						long callsQueued;
						long maxTalkTime;
						float averageAbandonedInIVRTime;
						float satisfactionRate;
						long callsQueuingTimeout;
						float averageTalkTime;
						long maxHoldTime;
						long callsAbandonedInIVR;
						long callsAbandonedInVoiceNavigator;
						long callsVoicemail;
						long callsHandled;
						long maxWaitTime;
						long satisfactionSurveysResponded;
						long maxAbandonTime;
						long totalWaitTime;
						float averageAbandonTime;
						float averageAbandonedInRingTime;
						float averageWorkTime;
						long totalAbandonedInQueueTime;
						long maxWorkTime;
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
						int callsHold;
						long totalRingTime;
						float averageDialingTime;
						long callsAnswered;
						long callsDialed;
						long totalTalkTime;
						long maxDialingTime;
						long maxTalkTime;
						float satisfactionRate;
						float answerRate;
						long maxHoldTime;
						float averageTalkTime;
						long callsBlindTransferred;
						long satisfactionSurveysOffered;
						long satisfactionSurveysResponded;
						long callsAttendedTransferred;
						float averageRingTime;
						float averageWorkTime;
						long maxWorkTime;
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
				};


				GetHistoricalInstanceReportResult();
				explicit GetHistoricalInstanceReportResult(const std::string &payload);
				~GetHistoricalInstanceReportResult();
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
#endif // !ALIBABACLOUD_CCC_MODEL_GETHISTORICALINSTANCEREPORTRESULT_H_