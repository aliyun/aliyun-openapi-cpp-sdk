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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTIPV4GATEWAYSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_LISTIPV4GATEWAYSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT ListIpv4GatewaysResult : public ServiceResult
			{
			public:
				struct Ipv4GatewayModelsItem
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string gmtCreate;
					std::string ipv4GatewayRouteTableId;
					std::string ipv4GatewayName;
					std::string vpcId;
					std::string ipv4GatewayId;
					std::string resourceGroupId;
					bool enabled;
					std::vector<Ipv4GatewayModelsItem::Tag> tags;
					std::string ipv4GatewayDescription;
				};


				ListIpv4GatewaysResult();
				explicit ListIpv4GatewaysResult(const std::string &payload);
				~ListIpv4GatewaysResult();
				std::string getTotalCount()const;
				std::string getNextToken()const;
				std::vector<Ipv4GatewayModelsItem> getIpv4GatewayModels()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::string nextToken_;
				std::vector<Ipv4GatewayModelsItem> ipv4GatewayModels_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTIPV4GATEWAYSRESULT_H_