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

#ifndef ALIBABACLOUD_ECS_MODEL_PURCHASERESERVEDINSTANCESOFFERINGREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_PURCHASERESERVEDINSTANCESOFFERINGREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT PurchaseReservedInstancesOfferingRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	struct PromotionOptions {
		std::string couponNo;
	};
	PurchaseReservedInstancesOfferingRequest();
	~PurchaseReservedInstancesOfferingRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getPlatform() const;
	void setPlatform(const std::string &platform);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getScope() const;
	void setScope(const std::string &scope);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	int getAutoRenewPeriod() const;
	void setAutoRenewPeriod(int autoRenewPeriod);
	int getPeriod() const;
	void setPeriod(int period);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	PromotionOptions getPromotionOptions() const;
	void setPromotionOptions(const PromotionOptions &promotionOptions);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	std::string getOfferingType() const;
	void setOfferingType(const std::string &offeringType);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getReservedInstanceName() const;
	void setReservedInstanceName(const std::string &reservedInstanceName);
	int getInstanceAmount() const;
	void setInstanceAmount(int instanceAmount);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string description_;
	std::string startTime_;
	std::string platform_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string scope_;
	std::string instanceType_;
	std::vector<Tag> tag_;
	int autoRenewPeriod_;
	int period_;
	bool autoPay_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	PromotionOptions promotionOptions_;
	std::string periodUnit_;
	std::string offeringType_;
	bool autoRenew_;
	std::string zoneId_;
	std::string reservedInstanceName_;
	int instanceAmount_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_PURCHASERESERVEDINSTANCESOFFERINGREQUEST_H_
