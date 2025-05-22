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

#ifndef ALIBABACLOUD_RDS_MODEL_RENEWRCINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_RENEWRCINSTANCEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT RenewRCInstanceRequest : public RpcServiceRequest {
public:
	RenewRCInstanceRequest();
	~RenewRCInstanceRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	bool getAutoUseCoupon() const;
	void setAutoUseCoupon(bool autoUseCoupon);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getBusinessInfo() const;
	void setBusinessInfo(const std::string &businessInfo);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getResource() const;
	void setResource(const std::string &resource);
	std::string getCommodityCode() const;
	void setCommodityCode(const std::string &commodityCode);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getAutoRenew() const;
	void setAutoRenew(const std::string &autoRenew);
	std::string getPromotionCode() const;
	void setPromotionCode(const std::string &promotionCode);
	bool getPeriodAlign() const;
	void setPeriodAlign(bool periodAlign);
	std::string getTimeType() const;
	void setTimeType(const std::string &timeType);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	std::string clientToken_;
	bool autoUseCoupon_;
	std::string regionId_;
	std::string businessInfo_;
	bool autoPay_;
	std::string resourceOwnerAccount_;
	std::string resource_;
	std::string commodityCode_;
	long ownerId_;
	std::string usedTime_;
	std::string instanceId_;
	std::string autoRenew_;
	std::string promotionCode_;
	bool periodAlign_;
	std::string timeType_;
	std::string payType_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_RENEWRCINSTANCEREQUEST_H_
