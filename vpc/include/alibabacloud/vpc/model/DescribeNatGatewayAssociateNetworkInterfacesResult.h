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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBENATGATEWAYASSOCIATENETWORKINTERFACESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBENATGATEWAYASSOCIATENETWORKINTERFACESRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeNatGatewayAssociateNetworkInterfacesResult : public ServiceResult
			{
			public:
				struct AssociateNetworkInterface
				{
					struct IPv4Set
					{
						bool primary;
						std::string iPv4Address;
					};
					std::string resourceId;
					std::string tunnelIndex;
					std::string resourceType;
					std::string networkInterfaceId;
					std::string resourceOwnerId;
					std::vector<AssociateNetworkInterface::IPv4Set> iPv4Sets;
				};


				DescribeNatGatewayAssociateNetworkInterfacesResult();
				explicit DescribeNatGatewayAssociateNetworkInterfacesResult(const std::string &payload);
				~DescribeNatGatewayAssociateNetworkInterfacesResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				std::vector<AssociateNetworkInterface> getAssociateNetworkInterfaces()const;
				int getMaxResults()const;
				int getCount()const;
				std::string getNatGatewayId()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				std::vector<AssociateNetworkInterface> associateNetworkInterfaces_;
				int maxResults_;
				int count_;
				std::string natGatewayId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBENATGATEWAYASSOCIATENETWORKINTERFACESRESULT_H_