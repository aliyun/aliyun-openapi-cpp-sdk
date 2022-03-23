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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_CREATEINSTANCESREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_CREATEINSTANCESREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT CreateInstancesRequest : public RpcServiceRequest {
public:
	CreateInstancesRequest();
	~CreateInstancesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getInstances() const;
	void setInstances(const std::string &instances);
	std::string getCouponNo() const;
	void setCouponNo(const std::string &couponNo);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	bool getRebuildInstance() const;
	void setRebuildInstance(bool rebuildInstance);
	std::string getBusinessInfo() const;
	void setBusinessInfo(const std::string &businessInfo);
	std::string getAgentId() const;
	void setAgentId(const std::string &agentId);
	std::string getRestoreTime() const;
	void setRestoreTime(const std::string &restoreTime);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getToken() const;
	void setToken(const std::string &token);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getAutoRenew() const;
	void setAutoRenew(const std::string &autoRenew);

private:
	long resourceOwnerId_;
	std::string instances_;
	std::string couponNo_;
	std::string engineVersion_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string securityToken_;
	bool rebuildInstance_;
	std::string businessInfo_;
	std::string agentId_;
	std::string restoreTime_;
	bool autoPay_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string token_;
	std::string privateIpAddress_;
	std::string autoRenew_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_CREATEINSTANCESREQUEST_H_
