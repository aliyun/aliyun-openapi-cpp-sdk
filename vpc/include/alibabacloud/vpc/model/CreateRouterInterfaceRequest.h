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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEROUTERINTERFACEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEROUTERINTERFACEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateRouterInterfaceRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	CreateRouterInterfaceRequest();
	~CreateRouterInterfaceRequest();
	std::string getAccessPointId() const;
	void setAccessPointId(const std::string &accessPointId);
	std::string getOppositeAccessPointId() const;
	void setOppositeAccessPointId(const std::string &oppositeAccessPointId);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getSpec() const;
	void setSpec(const std::string &spec);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	int getPeriod() const;
	void setPeriod(int period);
	std::string getOppositeRegionId() const;
	void setOppositeRegionId(const std::string &oppositeRegionId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getOppositeInterfaceOwnerId() const;
	void setOppositeInterfaceOwnerId(const std::string &oppositeInterfaceOwnerId);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getOppositeRouterType() const;
	void setOppositeRouterType(const std::string &oppositeRouterType);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getPricingCycle() const;
	void setPricingCycle(const std::string &pricingCycle);
	std::string getOppositeRouterId() const;
	void setOppositeRouterId(const std::string &oppositeRouterId);
	std::string getRole() const;
	void setRole(const std::string &role);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getHealthCheckTargetIp() const;
	void setHealthCheckTargetIp(const std::string &healthCheckTargetIp);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	bool getFastLinkMode() const;
	void setFastLinkMode(bool fastLinkMode);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getOppositeInterfaceId() const;
	void setOppositeInterfaceId(const std::string &oppositeInterfaceId);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getPromotionOptionNo() const;
	void setPromotionOptionNo(const std::string &promotionOptionNo);
	std::string getAvailableZoneId() const;
	void setAvailableZoneId(const std::string &availableZoneId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getRouterType() const;
	void setRouterType(const std::string &routerType);
	std::string getHealthCheckSourceIp() const;
	void setHealthCheckSourceIp(const std::string &healthCheckSourceIp);
	std::string getRouterId() const;
	void setRouterId(const std::string &routerId);

private:
	std::string accessPointId_;
	std::string oppositeAccessPointId_;
	long resourceOwnerId_;
	std::string spec_;
	std::string resourceGroupId_;
	int period_;
	std::string oppositeRegionId_;
	long ownerId_;
	std::string oppositeInterfaceOwnerId_;
	std::vector<Tags> tags_;
	bool autoRenew_;
	std::string oppositeRouterType_;
	std::string name_;
	std::string pricingCycle_;
	std::string oppositeRouterId_;
	std::string role_;
	std::string clientToken_;
	std::string healthCheckTargetIp_;
	std::string description_;
	bool fastLinkMode_;
	std::string regionId_;
	std::string oppositeInterfaceId_;
	std::string instanceChargeType_;
	bool autoPay_;
	std::string promotionOptionNo_;
	std::string availableZoneId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string routerType_;
	std::string healthCheckSourceIp_;
	std::string routerId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEROUTERINTERFACEREQUEST_H_
