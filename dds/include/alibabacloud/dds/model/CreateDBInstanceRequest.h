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

#ifndef ALIBABACLOUD_DDS_MODEL_CREATEDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_CREATEDBINSTANCEREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT CreateDBInstanceRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateDBInstanceRequest();
	~CreateDBInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getDBInstanceStorage() const;
	void setDBInstanceStorage(int dBInstanceStorage);
	std::string getSecondaryZoneId() const;
	void setSecondaryZoneId(const std::string &secondaryZoneId);
	std::string getCouponNo() const;
	void setCouponNo(const std::string &couponNo);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	std::string getSrcRegion() const;
	void setSrcRegion(const std::string &srcRegion);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getDBInstanceDescription() const;
	void setDBInstanceDescription(const std::string &dBInstanceDescription);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getGlobalSecurityGroupIds() const;
	void setGlobalSecurityGroupIds(const std::string &globalSecurityGroupIds);
	std::string getBusinessInfo() const;
	void setBusinessInfo(const std::string &businessInfo);
	int getPeriod() const;
	void setPeriod(int period);
	std::string getBackupId() const;
	void setBackupId(const std::string &backupId);
	std::string getEncryptionKey() const;
	void setEncryptionKey(const std::string &encryptionKey);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getSecurityIPList() const;
	void setSecurityIPList(const std::string &securityIPList);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	long getProvisionedIops() const;
	void setProvisionedIops(long provisionedIops);
	std::string getAutoRenew() const;
	void setAutoRenew(const std::string &autoRenew);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getReadonlyReplicas() const;
	void setReadonlyReplicas(const std::string &readonlyReplicas);
	std::string getReplicationFactor() const;
	void setReplicationFactor(const std::string &replicationFactor);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getStorageEngine() const;
	void setStorageEngine(const std::string &storageEngine);
	std::string getDatabaseNames() const;
	void setDatabaseNames(const std::string &databaseNames);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getHiddenZoneId() const;
	void setHiddenZoneId(const std::string &hiddenZoneId);
	std::string getRestoreTime() const;
	void setRestoreTime(const std::string &restoreTime);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getSrcDBInstanceId() const;
	void setSrcDBInstanceId(const std::string &srcDBInstanceId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getRestoreType() const;
	void setRestoreType(const std::string &restoreType);
	std::string getAccountPassword() const;
	void setAccountPassword(const std::string &accountPassword);
	bool getEncrypted() const;
	void setEncrypted(bool encrypted);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);

private:
	long resourceOwnerId_;
	int dBInstanceStorage_;
	std::string secondaryZoneId_;
	std::string couponNo_;
	std::string engineVersion_;
	std::string networkType_;
	std::string srcRegion_;
	std::string storageType_;
	std::string resourceGroupId_;
	std::string dBInstanceDescription_;
	std::vector<Tag> tag_;
	std::string globalSecurityGroupIds_;
	std::string businessInfo_;
	int period_;
	std::string backupId_;
	std::string encryptionKey_;
	long ownerId_;
	std::string dBInstanceClass_;
	std::string securityIPList_;
	std::string vSwitchId_;
	long provisionedIops_;
	std::string autoRenew_;
	std::string zoneId_;
	std::string clientToken_;
	std::string readonlyReplicas_;
	std::string replicationFactor_;
	std::string accessKeyId_;
	std::string storageEngine_;
	std::string databaseNames_;
	std::string regionId_;
	std::string engine_;
	std::string hiddenZoneId_;
	std::string restoreTime_;
	std::string resourceOwnerAccount_;
	std::string srcDBInstanceId_;
	std::string ownerAccount_;
	std::string clusterId_;
	std::string restoreType_;
	std::string accountPassword_;
	bool encrypted_;
	std::string vpcId_;
	std::string chargeType_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_CREATEDBINSTANCEREQUEST_H_
