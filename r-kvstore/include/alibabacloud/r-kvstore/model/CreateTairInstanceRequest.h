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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_CREATETAIRINSTANCEREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_CREATETAIRINSTANCEREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT CreateTairInstanceRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateTairInstanceRequest();
	~CreateTairInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getConnectionStringPrefix() const;
	void setConnectionStringPrefix(const std::string &connectionStringPrefix);
	std::string getSecondaryZoneId() const;
	void setSecondaryZoneId(const std::string &secondaryZoneId);
	int getSlaveReadOnlyCount() const;
	void setSlaveReadOnlyCount(int slaveReadOnlyCount);
	std::string getCouponNo() const;
	void setCouponNo(const std::string &couponNo);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getGlobalSecurityGroupIds() const;
	void setGlobalSecurityGroupIds(const std::string &globalSecurityGroupIds);
	std::string getBusinessInfo() const;
	void setBusinessInfo(const std::string &businessInfo);
	int getShardCount() const;
	void setShardCount(int shardCount);
	std::string getAutoRenewPeriod() const;
	void setAutoRenewPeriod(const std::string &autoRenewPeriod);
	int getPeriod() const;
	void setPeriod(int period);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getBackupId() const;
	void setBackupId(const std::string &backupId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getShardType() const;
	void setShardType(const std::string &shardType);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	std::string getAutoRenew() const;
	void setAutoRenew(const std::string &autoRenew);
	int getPort() const;
	void setPort(int port);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	int getReplicaCount() const;
	void setReplicaCount(int replicaCount);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAutoUseCoupon() const;
	void setAutoUseCoupon(const std::string &autoUseCoupon);
	int getStorage() const;
	void setStorage(int storage);
	std::string getInstanceClass() const;
	void setInstanceClass(const std::string &instanceClass);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getRestoreTime() const;
	void setRestoreTime(const std::string &restoreTime);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getSrcDBInstanceId() const;
	void setSrcDBInstanceId(const std::string &srcDBInstanceId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getRecoverConfigMode() const;
	void setRecoverConfigMode(const std::string &recoverConfigMode);
	std::string getGlobalInstanceId() const;
	void setGlobalInstanceId(const std::string &globalInstanceId);
	std::string getParamGroupId() const;
	void setParamGroupId(const std::string &paramGroupId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	int getReadOnlyCount() const;
	void setReadOnlyCount(int readOnlyCount);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	int getSlaveReplicaCount() const;
	void setSlaveReplicaCount(int slaveReplicaCount);
	std::string getClusterBackupId() const;
	void setClusterBackupId(const std::string &clusterBackupId);

private:
	long resourceOwnerId_;
	std::string connectionStringPrefix_;
	std::string secondaryZoneId_;
	int slaveReadOnlyCount_;
	std::string couponNo_;
	std::string engineVersion_;
	std::string storageType_;
	std::string resourceGroupId_;
	std::string password_;
	std::string securityToken_;
	std::vector<Tag> tag_;
	std::string globalSecurityGroupIds_;
	std::string businessInfo_;
	int shardCount_;
	std::string autoRenewPeriod_;
	int period_;
	bool dryRun_;
	std::string backupId_;
	long ownerId_;
	std::string shardType_;
	std::string vSwitchId_;
	std::string privateIpAddress_;
	std::string instanceName_;
	std::string autoRenew_;
	int port_;
	std::string zoneId_;
	int replicaCount_;
	std::string clientToken_;
	std::string autoUseCoupon_;
	int storage_;
	std::string instanceClass_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string instanceType_;
	std::string restoreTime_;
	bool autoPay_;
	std::string resourceOwnerAccount_;
	std::string srcDBInstanceId_;
	std::string ownerAccount_;
	std::string recoverConfigMode_;
	std::string globalInstanceId_;
	std::string paramGroupId_;
	std::string vpcId_;
	int readOnlyCount_;
	std::string chargeType_;
	int slaveReplicaCount_;
	std::string clusterBackupId_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_CREATETAIRINSTANCEREQUEST_H_
