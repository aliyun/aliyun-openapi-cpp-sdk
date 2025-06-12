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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_CREATEDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_CREATEDBINSTANCEREQUEST_H_

#include <alibabacloud/clickhouse/ClickhouseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Clickhouse {
namespace Model {
class ALIBABACLOUD_CLICKHOUSE_EXPORT CreateDBInstanceRequest : public RpcServiceRequest {
public:
	CreateDBInstanceRequest();
	~CreateDBInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDBClusterDescription() const;
	void setDBClusterDescription(const std::string &dBClusterDescription);
	std::string getSourceDBClusterId() const;
	void setSourceDBClusterId(const std::string &sourceDBClusterId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getZondIdBak2() const;
	void setZondIdBak2(const std::string &zondIdBak2);
	std::string getDbNodeStorageType() const;
	void setDbNodeStorageType(const std::string &dbNodeStorageType);
	std::string getEncryptionType() const;
	void setEncryptionType(const std::string &encryptionType);
	std::string getZoneIdBak() const;
	void setZoneIdBak(const std::string &zoneIdBak);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getBackupSetID() const;
	void setBackupSetID(const std::string &backupSetID);
	std::string getEncryptionKey() const;
	void setEncryptionKey(const std::string &encryptionKey);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBNodeGroupCount() const;
	void setDBNodeGroupCount(const std::string &dBNodeGroupCount);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBClusterCategory() const;
	void setDBClusterCategory(const std::string &dBClusterCategory);
	std::string getDBClusterNetworkType() const;
	void setDBClusterNetworkType(const std::string &dBClusterNetworkType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getDBClusterVersion() const;
	void setDBClusterVersion(const std::string &dBClusterVersion);
	std::string getDBClusterClass() const;
	void setDBClusterClass(const std::string &dBClusterClass);
	std::string getVSwitchBak() const;
	void setVSwitchBak(const std::string &vSwitchBak);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	std::string getVSwitchBak2() const;
	void setVSwitchBak2(const std::string &vSwitchBak2);
	std::string getDBNodeStorage() const;
	void setDBNodeStorage(const std::string &dBNodeStorage);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	long resourceOwnerId_;
	std::string dBClusterDescription_;
	std::string sourceDBClusterId_;
	std::string resourceGroupId_;
	std::string zondIdBak2_;
	std::string dbNodeStorageType_;
	std::string encryptionType_;
	std::string zoneIdBak_;
	std::string period_;
	std::string backupSetID_;
	std::string encryptionKey_;
	long ownerId_;
	std::string dBNodeGroupCount_;
	std::string vSwitchId_;
	bool autoRenew_;
	std::string zoneId_;
	std::string clientToken_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string dBClusterCategory_;
	std::string dBClusterNetworkType_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string dBClusterVersion_;
	std::string dBClusterClass_;
	std::string vSwitchBak_;
	std::string usedTime_;
	std::string vSwitchBak2_;
	std::string dBNodeStorage_;
	std::string vPCId_;
	std::string payType_;
};
} // namespace Model
} // namespace Clickhouse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_CREATEDBINSTANCEREQUEST_H_
