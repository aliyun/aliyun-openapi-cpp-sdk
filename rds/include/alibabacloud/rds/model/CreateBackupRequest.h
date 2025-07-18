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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEBACKUPREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEBACKUPREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CreateBackupRequest : public RpcServiceRequest {
public:
	CreateBackupRequest();
	~CreateBackupRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getBackupStrategy() const;
	void setBackupStrategy(const std::string &backupStrategy);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getBackupType() const;
	void setBackupType(const std::string &backupType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getBackupMethod() const;
	void setBackupMethod(const std::string &backupMethod);
	long getBackupRetentionPeriod() const;
	void setBackupRetentionPeriod(long backupRetentionPeriod);
	std::string getDBName() const;
	void setDBName(const std::string &dBName);

private:
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string backupStrategy_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string backupType_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string backupMethod_;
	long backupRetentionPeriod_;
	std::string dBName_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEBACKUPREQUEST_H_
