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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYTUNNELATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYTUNNELATTRIBUTEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ModifyTunnelAttributeRequest : public RpcServiceRequest {
public:
	struct TunnelOptionsSpecification {
		struct TunnelIpsecConfig {
			std::string ipsecPfs;
			long ipsecLifetime;
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
		bool enableDpd;
		std::string customerGatewayId;
	};
	ModifyTunnelAttributeRequest();
	~ModifyTunnelAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	TunnelOptionsSpecification getTunnelOptionsSpecification() const;
	void setTunnelOptionsSpecification(const TunnelOptionsSpecification &tunnelOptionsSpecification);
	std::string getVpnConnectionId() const;
	void setVpnConnectionId(const std::string &vpnConnectionId);
	std::string getTunnelId() const;
	void setTunnelId(const std::string &tunnelId);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	TunnelOptionsSpecification tunnelOptionsSpecification_;
	std::string vpnConnectionId_;
	std::string tunnelId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYTUNNELATTRIBUTEREQUEST_H_
