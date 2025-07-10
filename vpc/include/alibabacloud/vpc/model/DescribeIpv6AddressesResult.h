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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6ADDRESSESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6ADDRESSESRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeIpv6AddressesResult : public ServiceResult
			{
			public:
				struct Ipv6Address
				{
					struct Ipv6InternetBandwidth
					{
						std::string reservationOrderType;
						std::string instanceChargeType;
						int bandwidth;
						bool hasReservationData;
						std::string ipv6InternetBandwidthId;
						std::string reservationActiveTime;
						std::string businessStatus;
						long reservationBandwidth;
						std::string internetChargeType;
						std::string reservationInternetChargeType;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string ipv6Isp;
					std::string resourceGroupId;
					int serviceManaged;
					std::string vSwitchId;
					std::string ipv6GatewayId;
					int realBandwidth;
					std::string allocationTime;
					Ipv6InternetBandwidth ipv6InternetBandwidth;
					std::string vpcId;
					std::string associatedInstanceId;
					std::string networkType;
					std::string ipv6AddressId;
					std::string ipv6AddressDescription;
					std::string addressType;
					std::string associatedInstanceType;
					std::vector<Ipv6Address::Tag> tags;
					std::string ipv6AddressName;
					std::string ipv6Address;
				};


				DescribeIpv6AddressesResult();
				explicit DescribeIpv6AddressesResult(const std::string &payload);
				~DescribeIpv6AddressesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Ipv6Address> getIpv6Addresses()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Ipv6Address> ipv6Addresses_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6ADDRESSESRESULT_H_