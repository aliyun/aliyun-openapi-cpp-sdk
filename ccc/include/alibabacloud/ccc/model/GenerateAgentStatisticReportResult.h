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

#ifndef ALIBABACLOUD_CCC_MODEL_GENERATEAGENTSTATISTICREPORTRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_GENERATEAGENTSTATISTICREPORTRESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT GenerateAgentStatisticReportResult : public ServiceResult
			{
			public:
				struct DataList
				{
					struct GenerateAgentStatistic
					{
						struct Inbound
						{
							long totalWorkTime;
							long totalHoldTime;
							long averageHoldTime;
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
							long maxHoldTime;
						};
						struct Outbound
						{
							long totalDialingTime;
							long totalWorkTime;
							long totalHoldTime;
							long averageHoldTime;
							long satisfactionSurveysOffered;
							float satisfactionIndex;
							long satisfactionSurveysResponded;
							long averageDialingTime;
							long callsAnswered;
							long totalTalkTime;
							long callsDialed;
							long totalDialingTime1;
							long maxDialingTime;
							long maxTalkTime;
							long averageWorkTime;
							long maxWorkTime;
							long averageTalkTime;
							long maxHoldTime;
							float answerRate;
						};
						struct Overall
						{
							long totalCalls;
							long totalWorkTime;
							long totalHoldTime;
							long averageHoldTime;
							long satisfactionSurveysOffered;
							float satisfactionIndex;
							long satisfactionSurveysResponded;
							long totalTalkTime;
							long maxTalkTime;
							long averageWorkTime;
							long maxWorkTime;
							long averageTalkTime;
							long maxHoldTime;
						};
						long totalReadyTime;
						Overall overall;
						std::string loginName;
						std::string skillGroupIds;
						long totalBreakTime;
						std::string instanceId;
						std::string recordDate;
						Inbound inbound;
						Outbound outbound;
						long averageReadyTime;
						std::string skillGroupNames;
						long totalLoggedInTime;
						std::string agentId;
						std::string agentName;
						long maxReadyTime;
						float occupancyRate;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<GenerateAgentStatistic> list;
				};


				GenerateAgentStatisticReportResult();
				explicit GenerateAgentStatisticReportResult(const std::string &payload);
				~GenerateAgentStatisticReportResult();
				DataList getDataList()const;
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				DataList dataList_;
				std::string message_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_GENERATEAGENTSTATISTICREPORTRESULT_H_