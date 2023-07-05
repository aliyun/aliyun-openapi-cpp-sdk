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

#ifndef ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTCONNECTIONSRESULT_H_
#define ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTCONNECTIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/privatelink/PrivatelinkExport.h>

namespace AlibabaCloud
{
	namespace Privatelink
	{
		namespace Model
		{
			class ALIBABACLOUD_PRIVATELINK_EXPORT ListVpcEndpointConnectionsResult : public ServiceResult
			{
			public:
				struct Connection
				{
					struct Zone
					{
						std::string connectionStringId;
						long connectionId;
						std::string zoneId;
						std::string eniId;
						std::string resourceId;
						std::string statusInfo;
						std::string vSwitchId;
						std::string replacedResourceId;
						std::string zoneStatus;
						std::string zoneDomain;
						std::string replacedEniId;
					};
					long endpointOwnerId;
					std::string modifiedTime;
					std::string resourceGroupId;
					bool resourceOwner;
					int bandwidth;
					std::string endpointId;
					std::string endpointVpcId;
					std::string connectionStatus;
					std::vector<Connection::Zone> zones;
					std::string serviceId;
				};


				ListVpcEndpointConnectionsResult();
				explicit ListVpcEndpointConnectionsResult(const std::string &payload);
				~ListVpcEndpointConnectionsResult();
				std::vector<Connection> getConnections()const;
				std::string getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Connection> connections_;
				std::string totalCount_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_LISTVPCENDPOINTCONNECTIONSRESULT_H_