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

#ifndef ALIBABACLOUD_ALB_MODEL_GETLISTENERHEALTHSTATUSRESULT_H_
#define ALIBABACLOUD_ALB_MODEL_GETLISTENERHEALTHSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alb/AlbExport.h>

namespace AlibabaCloud
{
	namespace Alb
	{
		namespace Model
		{
			class ALIBABACLOUD_ALB_EXPORT GetListenerHealthStatusResult : public ServiceResult
			{
			public:
				struct ListenerHealthStatusModel
				{
					struct ServerGroupHealthStatusModel
					{
						struct BackendServerHealthStatusModel
						{
							struct Reason
							{
								std::string expectedResponse;
								std::string actualResponse;
								std::string reasonCode;
							};
							std::string status;
							std::string serverId;
							int port;
							std::string serverIp;
							Reason reason;
						};
						std::string actionType;
						std::vector<ServerGroupHealthStatusModel::BackendServerHealthStatusModel> nonNormalServers;
						std::string serverGroupId;
						std::string healthCheckEnabled;
					};
					int listenerPort;
					std::vector<ListenerHealthStatusModel::ServerGroupHealthStatusModel> serverGroupInfos;
					std::string listenerProtocol;
					std::string listenerId;
				};
				struct RuleHealthStatusModel
				{
					struct ServerGroupHealthStatusModel2
					{
						struct NonNormalServer
						{
							struct Reason4
							{
								std::string expectedResponse;
								std::string actualResponse;
								std::string reasonCode;
							};
							std::string status;
							std::string serverId;
							Reason4 reason4;
							int port;
							std::string serverIp;
						};
						std::string actionType;
						std::string serverGroupId;
						std::string healthCheckEnabled;
						std::vector<ServerGroupHealthStatusModel2::NonNormalServer> nonNormalServers3;
					};
					std::vector<RuleHealthStatusModel::ServerGroupHealthStatusModel2> serverGroupInfos1;
					std::string ruleId;
				};


				GetListenerHealthStatusResult();
				explicit GetListenerHealthStatusResult(const std::string &payload);
				~GetListenerHealthStatusResult();
				std::vector<RuleHealthStatusModel> getRuleHealthStatus()const;
				std::vector<ListenerHealthStatusModel> getListenerHealthStatus()const;
				std::string getNextToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<RuleHealthStatusModel> ruleHealthStatus_;
				std::vector<ListenerHealthStatusModel> listenerHealthStatus_;
				std::string nextToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALB_MODEL_GETLISTENERHEALTHSTATUSRESULT_H_