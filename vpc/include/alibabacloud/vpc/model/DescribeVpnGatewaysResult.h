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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNGATEWAYSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNGATEWAYSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeVpnGatewaysResult : public ServiceResult
			{
			public:
				struct VpnGateway
				{
					struct ReservationData
					{
						std::string status;
						std::string reservationOrderType;
						std::string reservationSsl;
						std::string reservationEndTime;
						int reservationMaxConnections;
						std::string reservationSpec;
						std::string reservationIpsec;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string ipsecVpn;
					std::string sslVpn;
					std::string vpnType;
					std::string description;
					bool enableBgp;
					long endTime;
					long createTime;
					std::string vSwitchId;
					bool autoPropagate;
					std::string businessStatus;
					std::string name;
					std::string vpcId;
					std::string internetIp;
					std::string vpnGatewayId;
					std::string chargeType;
					std::string networkType;
					std::string tag;
					std::string spec;
					long sslMaxConnections;
					std::vector<VpnGateway::Tag> tags;
					ReservationData reservationData;
				};


				DescribeVpnGatewaysResult();
				explicit DescribeVpnGatewaysResult(const std::string &payload);
				~DescribeVpnGatewaysResult();
				int getTotalCount()const;
				int getPageSize()const;
				std::vector<VpnGateway> getVpnGateways()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				std::vector<VpnGateway> vpnGateways_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNGATEWAYSRESULT_H_