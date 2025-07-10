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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYTUNNELATTRIBUTERESULT_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYTUNNELATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT ModifyTunnelAttributeResult : public ServiceResult
			{
			public:
				struct TunnelIkeConfig
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
				struct TunnelIpsecConfig
				{
					std::string ipsecPfs;
					std::string ipsecEncAlg;
					std::string ipsecAuthAlg;
					long ipsecLifetime;
				};
				struct TunnelBgpConfig
				{
					bool enableBgp;
					long localAsn;
					std::string tunnelCidr;
					std::string peerBgpIp;
					long peerAsn;
					std::string localBgpIp;
				};


				ModifyTunnelAttributeResult();
				explicit ModifyTunnelAttributeResult(const std::string &payload);
				~ModifyTunnelAttributeResult();
				std::string getRole()const;
				TunnelIkeConfig getTunnelIkeConfig()const;
				std::string getCustomerGatewayId()const;
				std::string getInternetIp()const;
				TunnelBgpConfig getTunnelBgpConfig()const;
				std::string getState()const;
				std::string getRemoteCaCertificate()const;
				bool getEnableNatTraversal()const;
				TunnelIpsecConfig getTunnelIpsecConfig()const;
				std::string getTunnelId()const;
				bool getEnableDpd()const;
				std::string getZoneNo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string role_;
				TunnelIkeConfig tunnelIkeConfig_;
				std::string customerGatewayId_;
				std::string internetIp_;
				TunnelBgpConfig tunnelBgpConfig_;
				std::string state_;
				std::string remoteCaCertificate_;
				bool enableNatTraversal_;
				TunnelIpsecConfig tunnelIpsecConfig_;
				std::string tunnelId_;
				bool enableDpd_;
				std::string zoneNo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYTUNNELATTRIBUTERESULT_H_