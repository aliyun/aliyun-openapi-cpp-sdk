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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTLEGACYAGENTEVENTLOGSRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTLEGACYAGENTEVENTLOGSRESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT ListLegacyAgentEventLogsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct AgentEventLog
					{
						std::string connId;
						std::string transferNumber;
						std::string callDir;
						std::string agentDropCall;
						std::string callId;
						std::string callType;
						bool outboundScenario;
						std::string statisticDate;
						std::string callMode;
						std::string calleeId;
						std::string targetSelect;
						std::string tenantId;
						std::string phoneNo;
						std::string groupNo;
						std::string event;
						std::string agentNo;
						std::string callerId;
						std::string targetRequest;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<AgentEventLog> list;
				};


				ListLegacyAgentEventLogsResult();
				explicit ListLegacyAgentEventLogsResult(const std::string &payload);
				~ListLegacyAgentEventLogsResult();
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
#endif // !ALIBABACLOUD_CCC_MODEL_LISTLEGACYAGENTEVENTLOGSRESULT_H_