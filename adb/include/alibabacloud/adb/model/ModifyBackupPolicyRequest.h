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

#ifndef ALIBABACLOUD_ADB_MODEL_MODIFYBACKUPPOLICYREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_MODIFYBACKUPPOLICYREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT ModifyBackupPolicyRequest : public RpcServiceRequest {
public:
	ModifyBackupPolicyRequest();
	~ModifyBackupPolicyRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getEnableBackupLog() const;
	void setEnableBackupLog(const std::string &enableBackupLog);
	std::string getPreferredBackupPeriod() const;
	void setPreferredBackupPeriod(const std::string &preferredBackupPeriod);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPreferredBackupTime() const;
	void setPreferredBackupTime(const std::string &preferredBackupTime);
	std::string getBackupRetentionPeriod() const;
	void setBackupRetentionPeriod(const std::string &backupRetentionPeriod);
	int getLogBackupRetentionPeriod() const;
	void setLogBackupRetentionPeriod(int logBackupRetentionPeriod);

private:
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string enableBackupLog_;
	std::string preferredBackupPeriod_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	long ownerId_;
	std::string preferredBackupTime_;
	std::string backupRetentionPeriod_;
	int logBackupRetentionPeriod_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_MODIFYBACKUPPOLICYREQUEST_H_
