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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATENATGATEWAYREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATENATGATEWAYREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateNatGatewayRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	struct BandwidthPackage {
		int bandwidth;
		std::string zone;
		std::string internetChargeType;
		std::string iSP;
		int ipCount;
	};
	struct AccessMode {
		std::string modeValue;
		std::string tunnelType;
	};
	CreateNatGatewayRequest();
	~CreateNatGatewayRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	bool getSecurityProtectionEnabled() const;
	void setSecurityProtectionEnabled(bool securityProtectionEnabled);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	std::string getSpec() const;
	void setSpec(const std::string &spec);
	std::string getDuration() const;
	void setDuration(const std::string &duration);
	bool getIcmpReplyEnabled() const;
	void setIcmpReplyEnabled(bool icmpReplyEnabled);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNatType() const;
	void setNatType(const std::string &natType);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	std::vector<BandwidthPackage> getBandwidthPackage() const;
	void setBandwidthPackage(const std::vector<BandwidthPackage> &bandwidthPackage);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getPrivateLinkMode() const;
	void setPrivateLinkMode(const std::string &privateLinkMode);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	bool getIsCreateDefaultRoute() const;
	void setIsCreateDefaultRoute(bool isCreateDefaultRoute);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getInternetChargeType() const;
	void setInternetChargeType(const std::string &internetChargeType);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getName() const;
	void setName(const std::string &name);
	bool getPrivateLinkEnabled() const;
	void setPrivateLinkEnabled(bool privateLinkEnabled);
	std::string getEipBindMode() const;
	void setEipBindMode(const std::string &eipBindMode);
	std::string getPricingCycle() const;
	void setPricingCycle(const std::string &pricingCycle);
	AccessMode getAccessMode() const;
	void setAccessMode(const AccessMode &accessMode);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	bool securityProtectionEnabled_;
	std::string securityGroupId_;
	std::string description_;
	std::string networkType_;
	std::string spec_;
	std::string duration_;
	bool icmpReplyEnabled_;
	std::string regionId_;
	std::string natType_;
	std::vector<Tag> tag_;
	std::string instanceChargeType_;
	std::vector<BandwidthPackage> bandwidthPackage_;
	bool autoPay_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string privateLinkMode_;
	long ownerId_;
	bool isCreateDefaultRoute_;
	std::string vSwitchId_;
	std::string internetChargeType_;
	std::string vpcId_;
	std::string name_;
	bool privateLinkEnabled_;
	std::string eipBindMode_;
	std::string pricingCycle_;
	AccessMode accessMode_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATENATGATEWAYREQUEST_H_
