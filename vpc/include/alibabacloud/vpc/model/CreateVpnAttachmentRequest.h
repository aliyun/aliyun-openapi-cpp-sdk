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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEVPNATTACHMENTREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEVPNATTACHMENTREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateVpnAttachmentRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	CreateVpnAttachmentRequest();
	~CreateVpnAttachmentRequest();
	std::string getIkeConfig() const;
	void setIkeConfig(const std::string &ikeConfig);
	bool getAutoConfigRoute() const;
	void setAutoConfigRoute(bool autoConfigRoute);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	std::string getAttachType() const;
	void setAttachType(const std::string &attachType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getIpsecConfig() const;
	void setIpsecConfig(const std::string &ipsecConfig);
	std::string getBgpConfig() const;
	void setBgpConfig(const std::string &bgpConfig);
	bool getRouteTableAssociationEnabled() const;
	void setRouteTableAssociationEnabled(bool routeTableAssociationEnabled);
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
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getAutoPublishRouteEnabled() const;
	void setAutoPublishRouteEnabled(bool autoPublishRouteEnabled);
	bool getRouteTablePropagationEnabled() const;
	void setRouteTablePropagationEnabled(bool routeTablePropagationEnabled);
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
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	bool getEnableNatTraversal() const;
	void setEnableNatTraversal(bool enableNatTraversal);

private:
	std::string ikeConfig_;
	bool autoConfigRoute_;
	long resourceOwnerId_;
	std::string cenId_;
	std::string attachType_;
	std::string clientToken_;
	std::string ipsecConfig_;
	std::string bgpConfig_;
	bool routeTableAssociationEnabled_;
	std::string networkType_;
	std::string healthCheckConfig_;
	std::string customerGatewayId_;
	std::string localSubnet_;
	std::string remoteCaCert_;
	std::string regionId_;
	bool autoPublishRouteEnabled_;
	bool routeTablePropagationEnabled_;
	std::string remoteSubnet_;
	bool effectImmediately_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	bool enableDpd_;
	std::vector<Tags> tags_;
	std::string name_;
	std::string zoneId_;
	bool enableNatTraversal_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEVPNATTACHMENTREQUEST_H_
