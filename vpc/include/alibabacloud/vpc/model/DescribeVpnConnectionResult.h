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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNCONNECTIONRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNCONNECTIONRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeVpnConnectionResult : public ServiceResult
			{
			public:
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


				DescribeVpnConnectionResult();
				explicit DescribeVpnConnectionResult(const std::string &payload);
				~DescribeVpnConnectionResult();
				std::string getLocalSubnet()const;
				std::string getStatus()const;
				std::string getCustomerGatewayId()const;
				long getCreateTime()const;
				std::string getName()const;
				bool getEffectImmediately()const;
				VcoHealthCheck getVcoHealthCheck()const;
				std::string getRemoteSubnet()const;
				std::string getVpnGatewayId()const;
				IpsecConfig getIpsecConfig()const;
				std::string getVpnConnectionId()const;
				bool getEnableNatTraversal()const;
				IkeConfig getIkeConfig()const;
				bool getEnableDpd()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string localSubnet_;
				std::string status_;
				std::string customerGatewayId_;
				long createTime_;
				std::string name_;
				bool effectImmediately_;
				VcoHealthCheck vcoHealthCheck_;
				std::string remoteSubnet_;
				std::string vpnGatewayId_;
				IpsecConfig ipsecConfig_;
				std::string vpnConnectionId_;
				bool enableNatTraversal_;
				IkeConfig ikeConfig_;
				bool enableDpd_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNCONNECTIONRESULT_H_