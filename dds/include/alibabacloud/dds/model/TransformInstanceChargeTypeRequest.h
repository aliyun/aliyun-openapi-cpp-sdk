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

#ifndef ALIBABACLOUD_DDS_MODEL_TRANSFORMINSTANCECHARGETYPEREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_TRANSFORMINSTANCECHARGETYPEREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT TransformInstanceChargeTypeRequest : public RpcServiceRequest {
public:
	TransformInstanceChargeTypeRequest();
	~TransformInstanceChargeTypeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCouponNo() const;
	void setCouponNo(const std::string &couponNo);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getBusinessInfo() const;
	void setBusinessInfo(const std::string &businessInfo);
	long getPeriod() const;
	void setPeriod(long period);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getFromApp() const;
	void setFromApp(const std::string &fromApp);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getAutoRenew() const;
	void setAutoRenew(const std::string &autoRenew);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	std::string getPricingCycle() const;
	void setPricingCycle(const std::string &pricingCycle);

private:
	long resourceOwnerId_;
	std::string couponNo_;
	std::string accessKeyId_;
	std::string businessInfo_;
	long period_;
	bool autoPay_;
	std::string fromApp_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string instanceId_;
	std::string autoRenew_;
	std::string chargeType_;
	std::string pricingCycle_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_TRANSFORMINSTANCECHARGETYPEREQUEST_H_
