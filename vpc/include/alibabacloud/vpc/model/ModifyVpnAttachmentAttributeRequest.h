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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYVPNATTACHMENTATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYVPNATTACHMENTATTRIBUTEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ModifyVpnAttachmentAttributeRequest : public RpcServiceRequest {
public:
	struct TunnelOptionsSpecification {
		struct TunnelIpsecConfig {
			std::string ipsecPfs;
			int ipsecLifetime;
			std::string ipsecAuthAlg;
			std::string ipsecEncAlg;
		};
		TunnelIpsecConfig tunnelIpsecConfig;
		struct TunnelBgpConfig {
			long localAsn;
			std::string tunnelCidr;
			std::string localBgpIp;
		};
		TunnelBgpConfig tunnelBgpConfig;
		std::string remoteCaCertificate;
		std::string tunnelId;
		struct TunnelIkeConfig {
			std::string ikeVersion;
			std::string ikeMode;
			std::string ikeAuthAlg;
			std::string psk;
			std::string ikePfs;
			long ikeLifetime;
			std::string localId;
			std::string ikeEncAlg;
			std::string remoteId;
		};
		TunnelIkeConfig tunnelIkeConfig;
		bool enableNatTraversal;
		int tunnelIndex;
		bool enableDpd;
		std::string customerGatewayId;
	};
	ModifyVpnAttachmentAttributeRequest();
	~ModifyVpnAttachmentAttributeRequest();
	std::string getIkeConfig() const;
	void setIkeConfig(const std::string &ikeConfig);
	bool getAutoConfigRoute() const;
	void setAutoConfigRoute(bool autoConfigRoute);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getIpsecConfig() const;
	void setIpsecConfig(const std::string &ipsecConfig);
	std::string getBgpConfig() const;
	void setBgpConfig(const std::string &bgpConfig);
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	std::string getHealthCheckConfig() const;
	void setHealthCheckConfig(const std::string &healthCheckConfig);
	std::string getCustomerGatewayId() const;
	void setCustomerGatewayId(const std::string &customerGatewayId);
	std::string getLocalSubnet() const;
	void setLocalSubnet(const std::string &localSubnet);
	std::string getRemoteCaCert() const;
	void setRemoteCaCert(const std::string &remoteCaCert);
	bool getEnableTunnelsBgp() const;
	void setEnableTunnelsBgp(bool enableTunnelsBgp);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRemoteSubnet() const;
	void setRemoteSubnet(const std::string &remoteSubnet);
	bool getEffectImmediately() const;
	void setEffectImmediately(bool effectImmediately);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	bool getEnableDpd() const;
	void setEnableDpd(bool enableDpd);
	std::vector<TunnelOptionsSpecification> getTunnelOptionsSpecification() const;
	void setTunnelOptionsSpecification(const std::vector<TunnelOptionsSpecification> &tunnelOptionsSpecification);
	std::string getVpnConnectionId() const;
	void setVpnConnectionId(const std::string &vpnConnectionId);
	std::string getName() const;
	void setName(const std::string &name);
	bool getEnableNatTraversal() const;
	void setEnableNatTraversal(bool enableNatTraversal);

private:
	std::string ikeConfig_;
	bool autoConfigRoute_;
	long resourceOwnerId_;
	std::string clientToken_;
	std::string ipsecConfig_;
	std::string bgpConfig_;
	std::string networkType_;
	std::string healthCheckConfig_;
	std::string customerGatewayId_;
	std::string localSubnet_;
	std::string remoteCaCert_;
	bool enableTunnelsBgp_;
	std::string regionId_;
	std::string remoteSubnet_;
	bool effectImmediately_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	bool enableDpd_;
	std::vector<TunnelOptionsSpecification> tunnelOptionsSpecification_;
	std::string vpnConnectionId_;
	std::string name_;
	bool enableNatTraversal_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYVPNATTACHMENTATTRIBUTEREQUEST_H_
