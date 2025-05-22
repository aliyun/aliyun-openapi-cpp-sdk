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

#ifndef ALIBABACLOUD_RDS_MODEL_RENEWINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_RENEWINSTANCEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT RenewInstanceRequest : public RpcServiceRequest {
public:
	RenewInstanceRequest();
	~RenewInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	bool getAutoUseCoupon() const;
	void setAutoUseCoupon(bool autoUseCoupon);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getBusinessInfo() const;
	void setBusinessInfo(const std::string &businessInfo);
	int getPeriod() const;
	void setPeriod(int period);
	std::string getAutoPay() const;
	void setAutoPay(const std::string &autoPay);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getAutoRenew() const;
	void setAutoRenew(const std::string &autoRenew);
	std::string getPromotionCode() const;
	void setPromotionCode(const std::string &promotionCode);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	bool autoUseCoupon_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string businessInfo_;
	int period_;
	std::string autoPay_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string autoRenew_;
	std::string promotionCode_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_RENEWINSTANCEREQUEST_H_
