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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTSKILLGROUPSTATESRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTSKILLGROUPSTATESRESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT ListSkillGroupStatesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct RealTimeSkillGroupState
					{
						long breakingAgents;
						long waitingCallsLevel20;
						std::string instanceId;
						long waitingCallsLevel10;
						long readyAgents;
						long waitingCallsLevel30;
						std::string skillGroupId;
						long workingAgents;
						long inboundTalkingAgents;
						long outboundScenarioReadyAgents;
						long averageWaitingTime;
						long talkingAgents;
						std::string skillGroupName;
						long loggedInAgents;
						long waitingCalls;
						long longestCall;
						long outboundTalkingAgents;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<RealTimeSkillGroupState> list;
				};


				ListSkillGroupStatesResult();
				explicit ListSkillGroupStatesResult(const std::string &payload);
				~ListSkillGroupStatesResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTSKILLGROUPSTATESRESULT_H_