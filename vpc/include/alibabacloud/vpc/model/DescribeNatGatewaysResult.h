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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBENATGATEWAYSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBENATGATEWAYSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeNatGatewaysResult : public ServiceResult
			{
			public:
				struct NatGateway
				{
					struct NatGatewayPrivateInfo
					{
						int maxSessionEstablishRate;
						std::string izNo;
						std::string privateIpAddress;
						int maxSessionQuota;
						int maxBandwidth;
						std::string eniInstanceId;
						std::string eniType;
						std::string vswitchId;
					};
					struct AccessMode
					{
						std::string tunnelType;
						std::string modeValue;
					};
					struct IpList
					{
						std::string usingStatus;
						bool apAccessEnabled;
						std::string privateIpAddress;
						bool snatEntryEnabled;
						std::string allocationId;
						std::string ipAddress;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string description;
					std::string resourceGroupId;
					std::string instanceChargeType;
					std::string eipBindMode;
					bool privateLinkEnabled;
					std::string enableSessionLog;
					std::vector<std::string> fullNatTableIds;
					std::vector<std::string> bandwidthPackageIds;
					std::string businessStatus;
					std::string name;
					std::string networkType;
					std::string expiredTime;
					std::vector<NatGateway::Tag> tags;
					std::string status;
					std::vector<std::string> forwardTableIds;
					std::vector<NatGateway::IpList> ipLists;
					bool securityProtectionEnabled;
					std::string privateLinkMode;
					bool autoPay;
					bool deletionProtection;
					std::string natType;
					std::string internetChargeType;
					NatGatewayPrivateInfo natGatewayPrivateInfo;
					bool ecsMetricEnabled;
					std::string vpcId;
					std::vector<std::string> snatTableIds;
					std::string creationTime;
					bool icmpReplyEnabled;
					AccessMode accessMode;
					std::string regionId;
					std::string spec;
					std::string natGatewayId;
				};


				DescribeNatGatewaysResult();
				explicit DescribeNatGatewaysResult(const std::string &payload);
				~DescribeNatGatewaysResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<NatGateway> getNatGateways()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<NatGateway> natGateways_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBENATGATEWAYSRESULT_H_