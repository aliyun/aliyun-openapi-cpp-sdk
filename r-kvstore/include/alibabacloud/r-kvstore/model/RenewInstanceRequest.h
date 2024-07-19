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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_RENEWINSTANCEREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_RENEWINSTANCEREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT RenewInstanceRequest : public RpcServiceRequest {
public:
	RenewInstanceRequest();
	~RenewInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getCouponNo() const;
	void setCouponNo(const std::string &couponNo);
	std::string getInstanceClass() const;
	void setInstanceClass(const std::string &instanceClass);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getCapacity() const;
	void setCapacity(const std::string &capacity);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
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
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	bool getForceUpgrade() const;
	void setForceUpgrade(bool forceUpgrade);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string couponNo_;
	std::string instanceClass_;
	std::string accessKeyId_;
	std::string capacity_;
	std::string securityToken_;
	std::string businessInfo_;
	long period_;
	bool autoPay_;
	std::string fromApp_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string instanceId_;
	bool autoRenew_;
	bool forceUpgrade_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_RENEWINSTANCEREQUEST_H_
