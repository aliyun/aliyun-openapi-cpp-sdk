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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEDDRINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEDDRINSTANCEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CreateDdrInstanceRequest : public RpcServiceRequest {
public:
	CreateDdrInstanceRequest();
	~CreateDdrInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getDBInstanceStorage() const;
	void setDBInstanceStorage(int dBInstanceStorage);
	std::string getSystemDBCharset() const;
	void setSystemDBCharset(const std::string &systemDBCharset);
	std::string getBinlogRole() const;
	void setBinlogRole(const std::string &binlogRole);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getUserBakSetURL() const;
	void setUserBakSetURL(const std::string &userBakSetURL);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getDBInstanceDescription() const;
	void setDBInstanceDescription(const std::string &dBInstanceDescription);
	std::string getBackupSetRegion() const;
	void setBackupSetRegion(const std::string &backupSetRegion);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getBackupSetId() const;
	void setBackupSetId(const std::string &backupSetId);
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
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getBinlogName() const;
	void setBinlogName(const std::string &binlogName);
	std::string getRoleARN() const;
	void setRoleARN(const std::string &roleARN);
	std::string getTunnelId() const;
	void setTunnelId(const std::string &tunnelId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getInstanceNetworkType() const;
	void setInstanceNetworkType(const std::string &instanceNetworkType);
	std::string getConnectionMode() const;
	void setConnectionMode(const std::string &connectionMode);
	std::string getSourceDBInstanceName() const;
	void setSourceDBInstanceName(const std::string &sourceDBInstanceName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getHostType() const;
	void setHostType(const std::string &hostType);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getDBInstanceStorageType() const;
	void setDBInstanceStorageType(const std::string &dBInstanceStorageType);
	std::string getDBInstanceNetType() const;
	void setDBInstanceNetType(const std::string &dBInstanceNetType);
	std::string getBackupSetType() const;
	void setBackupSetType(const std::string &backupSetType);
	std::string getRestoreTime() const;
	void setRestoreTime(const std::string &restoreTime);
	std::string getBakSetName() const;
	void setBakSetName(const std::string &bakSetName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	std::string getBinlogPosition() const;
	void setBinlogPosition(const std::string &binlogPosition);
	std::string getRestoreType() const;
	void setRestoreType(const std::string &restoreType);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getPayType() const;
	void setPayType(const std::string &payType);
	std::string getSourceRegion() const;
	void setSourceRegion(const std::string &sourceRegion);

private:
	long resourceOwnerId_;
	int dBInstanceStorage_;
	std::string systemDBCharset_;
	std::string binlogRole_;
	std::string engineVersion_;
	std::string userBakSetURL_;
	std::string resourceGroupId_;
	std::string dBInstanceDescription_;
	std::string backupSetRegion_;
	std::string period_;
	std::string backupSetId_;
	std::string encryptionKey_;
	long ownerId_;
	std::string dBInstanceClass_;
	std::string securityIPList_;
	std::string vSwitchId_;
	std::string privateIpAddress_;
	std::string binlogName_;
	std::string roleARN_;
	std::string tunnelId_;
	std::string zoneId_;
	std::string instanceNetworkType_;
	std::string connectionMode_;
	std::string sourceDBInstanceName_;
	std::string clientToken_;
	std::string hostType_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string engine_;
	std::string dBInstanceStorageType_;
	std::string dBInstanceNetType_;
	std::string backupSetType_;
	std::string restoreTime_;
	std::string bakSetName_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string usedTime_;
	std::string binlogPosition_;
	std::string restoreType_;
	std::string vPCId_;
	std::string payType_;
	std::string sourceRegion_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEDDRINSTANCEREQUEST_H_
