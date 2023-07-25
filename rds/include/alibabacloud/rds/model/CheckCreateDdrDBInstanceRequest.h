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

#ifndef ALIBABACLOUD_RDS_MODEL_CHECKCREATEDDRDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CHECKCREATEDDRDBINSTANCEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CheckCreateDdrDBInstanceRequest : public RpcServiceRequest {
public:
	CheckCreateDdrDBInstanceRequest();
	~CheckCreateDdrDBInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getDBInstanceStorage() const;
	void setDBInstanceStorage(int dBInstanceStorage);
	std::string getSourceDBInstanceName() const;
	void setSourceDBInstanceName(const std::string &sourceDBInstanceName);
	std::string getHostType() const;
	void setHostType(const std::string &hostType);
	std::string getBinlogRole() const;
	void setBinlogRole(const std::string &binlogRole);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getUserBakSetURL() const;
	void setUserBakSetURL(const std::string &userBakSetURL);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getBackupSetRegion() const;
	void setBackupSetRegion(const std::string &backupSetRegion);
	std::string getBackupSetType() const;
	void setBackupSetType(const std::string &backupSetType);
	std::string getRestoreTime() const;
	void setRestoreTime(const std::string &restoreTime);
	std::string getBakSetName() const;
	void setBakSetName(const std::string &bakSetName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getBackupSetId() const;
	void setBackupSetId(const std::string &backupSetId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getBinlogPosition() const;
	void setBinlogPosition(const std::string &binlogPosition);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getRestoreType() const;
	void setRestoreType(const std::string &restoreType);
	std::string getBinlogName() const;
	void setBinlogName(const std::string &binlogName);
	std::string getSourceRegion() const;
	void setSourceRegion(const std::string &sourceRegion);

private:
	long resourceOwnerId_;
	int dBInstanceStorage_;
	std::string sourceDBInstanceName_;
	std::string hostType_;
	std::string binlogRole_;
	std::string engineVersion_;
	std::string userBakSetURL_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string engine_;
	std::string backupSetRegion_;
	std::string backupSetType_;
	std::string restoreTime_;
	std::string bakSetName_;
	std::string resourceOwnerAccount_;
	std::string backupSetId_;
	long ownerId_;
	std::string binlogPosition_;
	std::string dBInstanceClass_;
	std::string restoreType_;
	std::string binlogName_;
	std::string sourceRegion_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CHECKCREATEDDRDBINSTANCEREQUEST_H_
