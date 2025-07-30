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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_MODIFYINSTANCESPECREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_MODIFYINSTANCESPECREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT ModifyInstanceSpecRequest : public RpcServiceRequest {
public:
	ModifyInstanceSpecRequest();
	~ModifyInstanceSpecRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getNodeType() const;
	void setNodeType(const std::string &nodeType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	int getSlaveReadOnlyCount() const;
	void setSlaveReadOnlyCount(int slaveReadOnlyCount);
	std::string getCouponNo() const;
	void setCouponNo(const std::string &couponNo);
	int getStorage() const;
	void setStorage(int storage);
	std::string getInstanceClass() const;
	void setInstanceClass(const std::string &instanceClass);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEffectiveTime() const;
	void setEffectiveTime(const std::string &effectiveTime);
	std::string getSourceBiz() const;
	void setSourceBiz(const std::string &sourceBiz);
	std::string getBusinessInfo() const;
	void setBusinessInfo(const std::string &businessInfo);
	int getShardCount() const;
	void setShardCount(int shardCount);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getFromApp() const;
	void setFromApp(const std::string &fromApp);
	std::string getMajorVersion() const;
	void setMajorVersion(const std::string &majorVersion);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	bool getForceTrans() const;
	void setForceTrans(bool forceTrans);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getReadOnlyCount() const;
	void setReadOnlyCount(int readOnlyCount);
	bool getForceUpgrade() const;
	void setForceUpgrade(bool forceUpgrade);
	int getSlaveReplicaCount() const;
	void setSlaveReplicaCount(int slaveReplicaCount);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);
	int getReplicaCount() const;
	void setReplicaCount(int replicaCount);

private:
	long resourceOwnerId_;
	std::string nodeType_;
	std::string clientToken_;
	int slaveReadOnlyCount_;
	std::string couponNo_;
	int storage_;
	std::string instanceClass_;
	std::string storageType_;
	std::string accessKeyId_;
	std::string securityToken_;
	std::string regionId_;
	std::string effectiveTime_;
	std::string sourceBiz_;
	std::string businessInfo_;
	int shardCount_;
	bool autoPay_;
	std::string fromApp_;
	std::string majorVersion_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	bool forceTrans_;
	std::string instanceId_;
	int readOnlyCount_;
	bool forceUpgrade_;
	int slaveReplicaCount_;
	std::string orderType_;
	int replicaCount_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_MODIFYINSTANCESPECREQUEST_H_
