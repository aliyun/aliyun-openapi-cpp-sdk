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

#ifndef ALIBABACLOUD_RDS_MODEL_COPYDATABASEBETWEENINSTANCESREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_COPYDATABASEBETWEENINSTANCESREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CopyDatabaseBetweenInstancesRequest : public RpcServiceRequest {
public:
	CopyDatabaseBetweenInstancesRequest();
	~CopyDatabaseBetweenInstancesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getRestoreTime() const;
	void setRestoreTime(const std::string &restoreTime);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getBackupId() const;
	void setBackupId(const std::string &backupId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSyncUserPrivilege() const;
	void setSyncUserPrivilege(const std::string &syncUserPrivilege);
	std::string getDbNames() const;
	void setDbNames(const std::string &dbNames);
	std::string getTargetDBInstanceId() const;
	void setTargetDBInstanceId(const std::string &targetDBInstanceId);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string restoreTime_;
	std::string resourceOwnerAccount_;
	std::string backupId_;
	std::string ownerAccount_;
	long ownerId_;
	std::string syncUserPrivilege_;
	std::string dbNames_;
	std::string targetDBInstanceId_;
	std::string payType_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_COPYDATABASEBETWEENINSTANCESREQUEST_H_
