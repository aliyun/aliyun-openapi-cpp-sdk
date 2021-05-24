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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTHISTORICALAGENTREPORTRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTHISTORICALAGENTREPORTRESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT ListHistoricalAgentReportResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Items
					{
						struct Inbound
						{
							long callsConsulted;
							long totalWorkTime;
							long totalHoldTime;
							float averageHoldTime;
							long satisfactionSurveysOffered;
							long callsOffered;
							long maxRingTime;
							long callsHold;
							float satisfactionIndex;
							long callsHandled;
							long satisfactionSurveysResponded;
							long totalRingTime;
							float handleRate;
							long callsTransferred;
							float averageRingTime;
							long totalTalkTime;
							long maxTalkTime;
							float averageWorkTime;
							long maxWorkTime;
							float averageTalkTime;
							long maxHoldTime;
						};
						struct Outbound
						{
							long totalDialingTime;
							long totalWorkTime;
							long totalHoldTime;
							float averageHoldTime;
							long callsDialedSuccess;
							long satisfactionSurveysOffered;
							long callsHold;
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
							long maxHoldTime;
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
						std::string agentId;
						std::string agentName;
						Inbound inbound;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<Items> list;
				};


				ListHistoricalAgentReportResult();
				explicit ListHistoricalAgentReportResult(const std::string &payload);
				~ListHistoricalAgentReportResult();
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
#endif // !ALIBABACLOUD_CCC_MODEL_LISTHISTORICALAGENTREPORTRESULT_H_