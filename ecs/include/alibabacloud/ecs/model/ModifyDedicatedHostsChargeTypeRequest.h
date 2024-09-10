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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYDEDICATEDHOSTSCHARGETYPEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYDEDICATEDHOSTSCHARGETYPEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyDedicatedHostsChargeTypeRequest : public RpcServiceRequest {
public:
	struct PromotionOptions {
		std::string couponNo;
	};
	ModifyDedicatedHostsChargeTypeRequest();
	~ModifyDedicatedHostsChargeTypeRequest();
	std::string getDedicatedHostIds() const;
	void setDedicatedHostIds(const std::string &dedicatedHostIds);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDedicatedHostChargeType() const;
	void setDedicatedHostChargeType(const std::string &dedicatedHostChargeType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPeriod() const;
	void setPeriod(int period);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
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
	bool getDetailFee() const;
	void setDetailFee(bool detailFee);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);

private:
	std::string dedicatedHostIds_;
	long resourceOwnerId_;
	std::string clientToken_;
	std::string dedicatedHostChargeType_;
	std::string regionId_;
	int period_;
	bool dryRun_;
	bool autoPay_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	PromotionOptions promotionOptions_;
	bool detailFee_;
	std::string periodUnit_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYDEDICATEDHOSTSCHARGETYPEREQUEST_H_
