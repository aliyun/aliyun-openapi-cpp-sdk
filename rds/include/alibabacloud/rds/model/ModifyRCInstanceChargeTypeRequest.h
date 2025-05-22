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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYRCINSTANCECHARGETYPEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYRCINSTANCECHARGETYPEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyRCInstanceChargeTypeRequest : public RpcServiceRequest {
public:
	ModifyRCInstanceChargeTypeRequest();
	~ModifyRCInstanceChargeTypeRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	bool getAutoUseCoupon() const;
	void setAutoUseCoupon(bool autoUseCoupon);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	std::string getBusinessInfo() const;
	void setBusinessInfo(const std::string &businessInfo);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	bool getIncludeDataDisks() const;
	void setIncludeDataDisks(bool includeDataDisks);
	std::string getResource() const;
	void setResource(const std::string &resource);
	int getUsedTime() const;
	void setUsedTime(int usedTime);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getAutoRenew() const;
	void setAutoRenew(const std::string &autoRenew);
	std::string getInstanceIds() const;
	void setInstanceIds(const std::string &instanceIds);
	std::string getPromotionCode() const;
	void setPromotionCode(const std::string &promotionCode);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	std::string clientToken_;
	bool autoUseCoupon_;
	std::string regionId_;
	std::string instanceChargeType_;
	std::string businessInfo_;
	std::string period_;
	bool dryRun_;
	bool autoPay_;
	bool includeDataDisks_;
	std::string resource_;
	int usedTime_;
	std::string instanceId_;
	std::string autoRenew_;
	std::string instanceIds_;
	std::string promotionCode_;
	std::string payType_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYRCINSTANCECHARGETYPEREQUEST_H_
