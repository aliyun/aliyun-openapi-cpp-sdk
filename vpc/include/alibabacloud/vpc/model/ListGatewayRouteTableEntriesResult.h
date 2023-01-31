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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTGATEWAYROUTETABLEENTRIESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_LISTGATEWAYROUTETABLEENTRIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT ListGatewayRouteTableEntriesResult : public ServiceResult
			{
			public:
				struct GatewayRouteEntryModelsItem
				{
					struct NextHop
					{
						std::string nextHopType;
						std::string nextHopId;
						std::string enabled;
						std::string weight;
					};
					std::string status;
					std::string nextHopType;
					std::string description;
					std::vector<GatewayRouteEntryModelsItem::NextHop> nextHops;
					std::string nextHopId;
					std::string destinationCidrBlock;
					std::string name;
				};


				ListGatewayRouteTableEntriesResult();
				explicit ListGatewayRouteTableEntriesResult(const std::string &payload);
				~ListGatewayRouteTableEntriesResult();
				std::vector<GatewayRouteEntryModelsItem> getGatewayRouteEntryModels()const;
				std::string getTotalCount()const;
				std::string getNextToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<GatewayRouteEntryModelsItem> gatewayRouteEntryModels_;
				std::string totalCount_;
				std::string nextToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTGATEWAYROUTETABLEENTRIESRESULT_H_