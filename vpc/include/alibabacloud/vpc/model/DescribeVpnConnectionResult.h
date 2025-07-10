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
					std::string remoteId;
					std::string psk;
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
					std::string policy;
					std::string enable;
					std::string dip;
					int retry;
					std::string sip;
					int interval;
				};
				struct VpnBgpConfig
				{
					std::string status;
					std::string enableBgp;
					long localAsn;
					std::string tunnelCidr;
					std::string authKey;
					std::string peerBgpIp;
					long peerAsn;
					std::string localBgpIp;
				};
				struct Tag
				{
					std::string value;
					std::string key;
				};
				struct TunnelOptions
				{
					struct TunnelBgpConfig
					{
						std::string localAsn;
						std::string tunnelCidr;
						std::string bgpStatus;
						std::string peerBgpIp;
						std::string peerAsn;
						std::string localBgpIp;
					};
					struct TunnelIkeConfig
					{
						std::string ikeAuthAlg;
						std::string localId;
						std::string ikeEncAlg;
						std::string ikeVersion;
						std::string ikeMode;
						std::string ikeLifetime;
						std::string psk;
						std::string remoteId;
						std::string ikePfs;
					};
					struct TunnelIpsecConfig
					{
						std::string ipsecPfs;
						std::string ipsecEncAlg;
						std::string ipsecAuthAlg;
						std::string ipsecLifetime;
					};
					std::string status;
					std::string customerGatewayId;
					std::string tunnelId;
					std::string zoneNo;
					std::string role;
					TunnelIkeConfig tunnelIkeConfig;
					std::string internetIp;
					TunnelBgpConfig tunnelBgpConfig;
					std::string state;
					std::string remoteCaCertificate;
					int tunnelIndex;
					std::string enableNatTraversal;
					TunnelIpsecConfig tunnelIpsecConfig;
					std::string enableDpd;
				};


				DescribeVpnConnectionResult();
				explicit DescribeVpnConnectionResult(const std::string &payload);
				~DescribeVpnConnectionResult();
				std::string getAttachType()const;
				std::string getResourceGroupId()const;
				bool getEnableTunnelsBgp()const;
				bool getCrossAccountAuthorized()const;
				std::string getZoneNo()const;
				std::string getName()const;
				bool getEffectImmediately()const;
				std::string getRemoteSubnet()const;
				std::string getInternetIp()const;
				IpsecConfig getIpsecConfig()const;
				std::string getNetworkType()const;
				std::string getRemoteCaCertificate()const;
				bool getEnableNatTraversal()const;
				IkeConfig getIkeConfig()const;
				std::vector<Tag> getTags()const;
				std::string getAttachInstanceId()const;
				VpnBgpConfig getVpnBgpConfig()const;
				std::string getTransitRouterId()const;
				std::string getStatus()const;
				std::string getLocalSubnet()const;
				std::string getCustomerGatewayId()const;
				long getCreateTime()const;
				std::string getTransitRouterName()const;
				std::vector<TunnelOptions> getTunnelOptionsSpecification()const;
				VcoHealthCheck getVcoHealthCheck()const;
				std::string getVpnGatewayId()const;
				std::string getState()const;
				std::string getVpnConnectionId()const;
				std::string getSpec()const;
				bool getEnableDpd()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string attachType_;
				std::string resourceGroupId_;
				bool enableTunnelsBgp_;
				bool crossAccountAuthorized_;
				std::string zoneNo_;
				std::string name_;
				bool effectImmediately_;
				std::string remoteSubnet_;
				std::string internetIp_;
				IpsecConfig ipsecConfig_;
				std::string networkType_;
				std::string remoteCaCertificate_;
				bool enableNatTraversal_;
				IkeConfig ikeConfig_;
				std::vector<Tag> tags_;
				std::string attachInstanceId_;
				VpnBgpConfig vpnBgpConfig_;
				std::string transitRouterId_;
				std::string status_;
				std::string localSubnet_;
				std::string customerGatewayId_;
				long createTime_;
				std::string transitRouterName_;
				std::vector<TunnelOptions> tunnelOptionsSpecification_;
				VcoHealthCheck vcoHealthCheck_;
				std::string vpnGatewayId_;
				std::string state_;
				std::string vpnConnectionId_;
				std::string spec_;
				bool enableDpd_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNCONNECTIONRESULT_H_