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

#ifndef ALIBABACLOUD_RDS_MODEL_CLONEDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CLONEDBINSTANCEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CloneDBInstanceRequest : public RpcServiceRequest {
public:
	struct ServerlessConfig {
		double minCapacity;
		double maxCapacity;
		bool autoPause;
		bool switchForce;
	};
	CloneDBInstanceRequest();
	~CloneDBInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getDBInstanceStorage() const;
	void setDBInstanceStorage(int dBInstanceStorage);
	bool getDeletionProtection() const;
	void setDeletionProtection(bool deletionProtection);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getDBInstanceDescription() const;
	void setDBInstanceDescription(const std::string &dBInstanceDescription);
	std::string getBackupType() const;
	void setBackupType(const std::string &backupType);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getBackupId() const;
	void setBackupId(const std::string &backupId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getInstanceNetworkType() const;
	void setInstanceNetworkType(const std::string &instanceNetworkType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getZoneIdSlave1() const;
	void setZoneIdSlave1(const std::string &zoneIdSlave1);
	std::string getZoneIdSlave2() const;
	void setZoneIdSlave2(const std::string &zoneIdSlave2);
	std::string getIoAccelerationEnabled() const;
	void setIoAccelerationEnabled(const std::string &ioAccelerationEnabled);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTableMeta() const;
	void setTableMeta(const std::string &tableMeta);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getDBInstanceStorageType() const;
	void setDBInstanceStorageType(const std::string &dBInstanceStorageType);
	std::string getDedicatedHostGroupId() const;
	void setDedicatedHostGroupId(const std::string &dedicatedHostGroupId);
	std::string getRestoreTime() const;
	void setRestoreTime(const std::string &restoreTime);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	ServerlessConfig getServerlessConfig() const;
	void setServerlessConfig(const ServerlessConfig &serverlessConfig);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getRestoreTable() const;
	void setRestoreTable(const std::string &restoreTable);
	int getUsedTime() const;
	void setUsedTime(int usedTime);
	bool getBurstingEnabled() const;
	void setBurstingEnabled(bool burstingEnabled);
	std::string getDbNames() const;
	void setDbNames(const std::string &dbNames);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	std::string getPayType() const;
	void setPayType(const std::string &payType);
	std::string getBpeEnabled() const;
	void setBpeEnabled(const std::string &bpeEnabled);

private:
	long resourceOwnerId_;
	int dBInstanceStorage_;
	bool deletionProtection_;
	std::string resourceGroupId_;
	std::string dBInstanceDescription_;
	std::string backupType_;
	std::string period_;
	std::string backupId_;
	long ownerId_;
	std::string dBInstanceClass_;
	std::string vSwitchId_;
	std::string privateIpAddress_;
	std::string zoneId_;
	std::string instanceNetworkType_;
	std::string clientToken_;
	std::string zoneIdSlave1_;
	std::string zoneIdSlave2_;
	std::string ioAccelerationEnabled_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string tableMeta_;
	std::string dBInstanceId_;
	std::string dBInstanceStorageType_;
	std::string dedicatedHostGroupId_;
	std::string restoreTime_;
	bool autoPay_;
	ServerlessConfig serverlessConfig_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string restoreTable_;
	int usedTime_;
	bool burstingEnabled_;
	std::string dbNames_;
	std::string vPCId_;
	std::string category_;
	std::string payType_;
	std::string bpeEnabled_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CLONEDBINSTANCEREQUEST_H_
