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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYINSTANCECROSSBACKUPPOLICYREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYINSTANCECROSSBACKUPPOLICYREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyInstanceCrossBackupPolicyRequest : public RpcServiceRequest {
public:
	ModifyInstanceCrossBackupPolicyRequest();
	~ModifyInstanceCrossBackupPolicyRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getRetentType() const;
	void setRetentType(int retentType);
	std::string getBackupEnabled() const;
	void setBackupEnabled(const std::string &backupEnabled);
	std::string getRelService() const;
	void setRelService(const std::string &relService);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getEndpoint() const;
	void setEndpoint(const std::string &endpoint);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	int getRetention() const;
	void setRetention(int retention);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getCrossBackupType() const;
	void setCrossBackupType(const std::string &crossBackupType);
	std::string getLogBackupEnabled() const;
	void setLogBackupEnabled(const std::string &logBackupEnabled);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getCrossBackupRegion() const;
	void setCrossBackupRegion(const std::string &crossBackupRegion);
	std::string getStorageOwner() const;
	void setStorageOwner(const std::string &storageOwner);

private:
	long resourceOwnerId_;
	int retentType_;
	std::string backupEnabled_;
	std::string relService_;
	std::string storageType_;
	std::string accessKeyId_;
	std::string endpoint_;
	std::string regionId_;
	std::string dBInstanceId_;
	int retention_;
	std::string resourceOwnerAccount_;
	std::string crossBackupType_;
	std::string logBackupEnabled_;
	long ownerId_;
	std::string crossBackupRegion_;
	std::string storageOwner_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYINSTANCECROSSBACKUPPOLICYREQUEST_H_
