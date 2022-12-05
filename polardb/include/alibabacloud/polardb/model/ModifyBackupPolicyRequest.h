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

#ifndef ALIBABACLOUD_POLARDB_MODEL_MODIFYBACKUPPOLICYREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_MODIFYBACKUPPOLICYREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT ModifyBackupPolicyRequest : public RpcServiceRequest {
public:
	ModifyBackupPolicyRequest();
	~ModifyBackupPolicyRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDataLevel2BackupRetentionPeriod() const;
	void setDataLevel2BackupRetentionPeriod(const std::string &dataLevel2BackupRetentionPeriod);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getDataLevel1BackupPeriod() const;
	void setDataLevel1BackupPeriod(const std::string &dataLevel1BackupPeriod);
	std::string getDataLevel2BackupPeriod() const;
	void setDataLevel2BackupPeriod(const std::string &dataLevel2BackupPeriod);
	std::string getPreferredBackupPeriod() const;
	void setPreferredBackupPeriod(const std::string &preferredBackupPeriod);
	std::string getDataLevel1BackupRetentionPeriod() const;
	void setDataLevel1BackupRetentionPeriod(const std::string &dataLevel1BackupRetentionPeriod);
	std::string getBackupRetentionPolicyOnClusterDeletion() const;
	void setBackupRetentionPolicyOnClusterDeletion(const std::string &backupRetentionPolicyOnClusterDeletion);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getDataLevel2BackupAnotherRegionRetentionPeriod() const;
	void setDataLevel2BackupAnotherRegionRetentionPeriod(const std::string &dataLevel2BackupAnotherRegionRetentionPeriod);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPreferredBackupTime() const;
	void setPreferredBackupTime(const std::string &preferredBackupTime);
	std::string getBackupRetentionPeriod() const;
	void setBackupRetentionPeriod(const std::string &backupRetentionPeriod);
	std::string getBackupFrequency() const;
	void setBackupFrequency(const std::string &backupFrequency);
	std::string getDataLevel1BackupFrequency() const;
	void setDataLevel1BackupFrequency(const std::string &dataLevel1BackupFrequency);
	std::string getDataLevel2BackupAnotherRegionRegion() const;
	void setDataLevel2BackupAnotherRegionRegion(const std::string &dataLevel2BackupAnotherRegionRegion);
	std::string getDataLevel1BackupTime() const;
	void setDataLevel1BackupTime(const std::string &dataLevel1BackupTime);

private:
	long resourceOwnerId_;
	std::string dataLevel2BackupRetentionPeriod_;
	std::string accessKeyId_;
	std::string dataLevel1BackupPeriod_;
	std::string dataLevel2BackupPeriod_;
	std::string preferredBackupPeriod_;
	std::string dataLevel1BackupRetentionPeriod_;
	std::string backupRetentionPolicyOnClusterDeletion_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	std::string dataLevel2BackupAnotherRegionRetentionPeriod_;
	long ownerId_;
	std::string preferredBackupTime_;
	std::string backupRetentionPeriod_;
	std::string backupFrequency_;
	std::string dataLevel1BackupFrequency_;
	std::string dataLevel2BackupAnotherRegionRegion_;
	std::string dataLevel1BackupTime_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_MODIFYBACKUPPOLICYREQUEST_H_
