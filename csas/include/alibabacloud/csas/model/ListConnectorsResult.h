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

#ifndef ALIBABACLOUD_CSAS_MODEL_LISTCONNECTORSRESULT_H_
#define ALIBABACLOUD_CSAS_MODEL_LISTCONNECTORSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/csas/CsasExport.h>

namespace AlibabaCloud
{
	namespace Csas
	{
		namespace Model
		{
			class ALIBABACLOUD_CSAS_EXPORT ListConnectorsResult : public ServiceResult
			{
			public:
				struct Connector
				{
					struct UpgradeTime
					{
						std::string start;
						std::string end;
					};
					struct Application
					{
						std::string applicationName;
						std::string applicationId;
					};
					struct ConnectorClient
					{
						std::string publicIp;
						std::string hostname;
						std::string devTag;
						std::string connectionStatus;
					};
					std::string status;
					std::vector<Connector::Application> applications;
					std::vector<Connector::ConnectorClient> connectorClients;
					std::string createTime;
					std::string regionId;
					UpgradeTime upgradeTime;
					std::string switchStatus;
					std::string connectorId;
					std::string name;
				};


				ListConnectorsResult();
				explicit ListConnectorsResult(const std::string &payload);
				~ListConnectorsResult();
				std::vector<Connector> getConnectors()const;
				int getTotalNum()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Connector> connectors_;
				int totalNum_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSAS_MODEL_LISTCONNECTORSRESULT_H_