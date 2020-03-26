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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNCONNECTIONSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNCONNECTIONSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeVpnConnectionsResult : public ServiceResult
			{
			public:
				struct VpnConnection
				{
					struct IkeConfig
					{
						std::string ikeAuthAlg;
						std::string localId;
						std::string ikeEncAlg;
						std::string ikeVersion;
						std::string ikeMode;
						long ikeLifetime;
						std::string psk;
						std::string remoteId;
						std::string ikePfs;
					};
					struct IpsecConfig
					{
						std::string ipsecPfs;
						std::string ipsecEncAlg;
						std::string ipsecAuthAlg;
						long ipsecLifetime;
					};
					struct VcoHealthCheck
					{
						std::string status;
						std::string enable;
						std::string dip;
						std::string sip;
						int retry;
						int interval;
					};
					std::string localSubnet;
					std::string status;
					std::string customerGatewayId;
					long createTime;
					std::string name;
					bool effectImmediately;
					VcoHealthCheck vcoHealthCheck;
					std::string remoteSubnet;
					std::string vpnGatewayId;
					IpsecConfig ipsecConfig;
					std::string vpnConnectionId;
					bool enableNatTraversal;
					IkeConfig ikeConfig;
					bool enableDpd;
				};


				DescribeVpnConnectionsResult();
				explicit DescribeVpnConnectionsResult(const std::string &payload);
				~DescribeVpnConnectionsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<VpnConnection> getVpnConnections()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<VpnConnection> vpnConnections_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNCONNECTIONSRESULT_H_