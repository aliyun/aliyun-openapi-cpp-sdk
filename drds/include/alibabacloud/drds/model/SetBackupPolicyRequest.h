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

#ifndef ALIBABACLOUD_DRDS_MODEL_SETBACKUPPOLICYREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_SETBACKUPPOLICYREQUEST_H_

#include <alibabacloud/drds/DrdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Drds {
namespace Model {
class ALIBABACLOUD_DRDS_EXPORT SetBackupPolicyRequest : public RpcServiceRequest {
public:
	SetBackupPolicyRequest();
	~SetBackupPolicyRequest();
	std::string getBackupDbNames() const;
	void setBackupDbNames(const std::string &backupDbNames);
	std::string getBackupLog() const;
	void setBackupLog(const std::string &backupLog);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getPreferredBackupEndTime() const;
	void setPreferredBackupEndTime(const std::string &preferredBackupEndTime);
	std::string getPreferredBackupPeriod() const;
	void setPreferredBackupPeriod(const std::string &preferredBackupPeriod);
	std::string getPreferredBackupStartTime() const;
	void setPreferredBackupStartTime(const std::string &preferredBackupStartTime);
	std::string getBackupLevel() const;
	void setBackupLevel(const std::string &backupLevel);
	std::string getDrdsInstanceId() const;
	void setDrdsInstanceId(const std::string &drdsInstanceId);
	std::string getDataBackupRetentionPeriod() const;
	void setDataBackupRetentionPeriod(const std::string &dataBackupRetentionPeriod);
	std::string getBackupMode() const;
	void setBackupMode(const std::string &backupMode);
	std::string getLogBackupRetentionPeriod() const;
	void setLogBackupRetentionPeriod(const std::string &logBackupRetentionPeriod);

private:
	std::string backupDbNames_;
	std::string backupLog_;
	std::string accessKeyId_;
	std::string preferredBackupEndTime_;
	std::string preferredBackupPeriod_;
	std::string preferredBackupStartTime_;
	std::string backupLevel_;
	std::string drdsInstanceId_;
	std::string dataBackupRetentionPeriod_;
	std::string backupMode_;
	std::string logBackupRetentionPeriod_;
};
} // namespace Model
} // namespace Drds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DRDS_MODEL_SETBACKUPPOLICYREQUEST_H_
