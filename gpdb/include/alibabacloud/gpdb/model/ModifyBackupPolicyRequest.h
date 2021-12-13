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

#ifndef ALIBABACLOUD_GPDB_MODEL_MODIFYBACKUPPOLICYREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_MODIFYBACKUPPOLICYREQUEST_H_

#include <alibabacloud/gpdb/GpdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT ModifyBackupPolicyRequest : public RpcServiceRequest {
public:
	ModifyBackupPolicyRequest();
	~ModifyBackupPolicyRequest();
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getRecoveryPointPeriod() const;
	void setRecoveryPointPeriod(const std::string &recoveryPointPeriod);
	bool getEnableRecoveryPoint() const;
	void setEnableRecoveryPoint(bool enableRecoveryPoint);
	std::string getPreferredBackupPeriod() const;
	void setPreferredBackupPeriod(const std::string &preferredBackupPeriod);
	std::string getPreferredBackupTime() const;
	void setPreferredBackupTime(const std::string &preferredBackupTime);
	int getBackupRetentionPeriod() const;
	void setBackupRetentionPeriod(int backupRetentionPeriod);

private:
	std::string dBInstanceId_;
	std::string recoveryPointPeriod_;
	bool enableRecoveryPoint_;
	std::string preferredBackupPeriod_;
	std::string preferredBackupTime_;
	int backupRetentionPeriod_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_MODIFYBACKUPPOLICYREQUEST_H_
