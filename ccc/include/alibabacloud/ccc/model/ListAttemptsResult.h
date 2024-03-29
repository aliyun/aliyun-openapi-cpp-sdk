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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTATTEMPTSRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTATTEMPTSRESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT ListAttemptsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct AttemptList
					{
						std::string callee;
						long dialTime;
						std::string attemptId;
						std::string instanceId;
						long agentEstablishedTime;
						std::string queueId;
						std::string caseId;
						long dialDuration;
						long queueDuration;
						std::string contactId;
						long ivrDuration;
						long enqueueTime;
						long agentRingDuration;
						long assignAgentTime;
						std::string campaignId;
						std::string caller;
						long customerReleasedTime;
						std::string agentId;
						long customerEstablishedTime;
						long enterIvrTime;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<AttemptList> list;
				};


				ListAttemptsResult();
				explicit ListAttemptsResult(const std::string &payload);
				~ListAttemptsResult();
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
#endif // !ALIBABACLOUD_CCC_MODEL_LISTATTEMPTSRESULT_H_