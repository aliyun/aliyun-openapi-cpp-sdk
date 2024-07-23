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

#ifndef ALIBABACLOUD_RDS_MODEL_RECOVERYDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_RECOVERYDBINSTANCEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT RecoveryDBInstanceRequest : public RpcServiceRequest {
public:
	RecoveryDBInstanceRequest();
	~RecoveryDBInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getDBInstanceStorage() const;
	void setDBInstanceStorage(int dBInstanceStorage);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceDescription() const;
	void setDBInstanceDescription(const std::string &dBInstanceDescription);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getDBInstanceStorageType() const;
	void setDBInstanceStorageType(const std::string &dBInstanceStorageType);
	std::string getRestoreTime() const;
	void setRestoreTime(const std::string &restoreTime);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getBackupId() const;
	void setBackupId(const std::string &backupId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getDbNames() const;
	void setDbNames(const std::string &dbNames);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getTargetDBInstanceId() const;
	void setTargetDBInstanceId(const std::string &targetDBInstanceId);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getPayType() const;
	void setPayType(const std::string &payType);
	std::string getInstanceNetworkType() const;
	void setInstanceNetworkType(const std::string &instanceNetworkType);

private:
	long resourceOwnerId_;
	int dBInstanceStorage_;
	std::string clientToken_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string dBInstanceDescription_;
	std::string dBInstanceId_;
	std::string dBInstanceStorageType_;
	std::string restoreTime_;
	std::string period_;
	std::string resourceOwnerAccount_;
	std::string backupId_;
	std::string ownerAccount_;
	long ownerId_;
	std::string usedTime_;
	std::string dBInstanceClass_;
	std::string dbNames_;
	std::string vSwitchId_;
	std::string privateIpAddress_;
	std::string targetDBInstanceId_;
	std::string vPCId_;
	std::string payType_;
	std::string instanceNetworkType_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_RECOVERYDBINSTANCEREQUEST_H_
