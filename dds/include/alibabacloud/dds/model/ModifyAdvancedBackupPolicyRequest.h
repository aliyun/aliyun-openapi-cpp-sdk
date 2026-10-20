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

#ifndef ALIBABACLOUD_DDS_MODEL_MODIFYADVANCEDBACKUPPOLICYREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_MODIFYADVANCEDBACKUPPOLICYREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT ModifyAdvancedBackupPolicyRequest : public RpcServiceRequest {
public:
	struct AdvancedBackupDataPolicies {
		std::string preferredBackupPeriod;
		std::string actionType;
		std::string srcType;
		int retentionPeriod;
		std::string destRegion;
		std::string policyId;
		std::string srcRegion;
		std::string destType;
		bool preserveOneEachHour;
		std::string retentionType;
		std::string backupPolicy;
	};
	struct AdvancedBackupLogPolicies {
		std::string actionType;
		std::string srcType;
		int retentionPeriod;
		std::string destRegion;
		std::string policyId;
		std::string srcRegion;
		std::string destType;
		std::string retentionType;
		int enableLogBackup;
	};
	ModifyAdvancedBackupPolicyRequest();
	~ModifyAdvancedBackupPolicyRequest();
	std::vector<AdvancedBackupDataPolicies> getAdvancedBackupDataPolicies() const;
	void setAdvancedBackupDataPolicies(const std::vector<AdvancedBackupDataPolicies> &advancedBackupDataPolicies);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	int getBackupRetentionPolicyOnClusterDeletion() const;
	void setBackupRetentionPolicyOnClusterDeletion(int backupRetentionPolicyOnClusterDeletion);
	bool getBackupTamperProofEnabled() const;
	void setBackupTamperProofEnabled(bool backupTamperProofEnabled);
	std::vector<AdvancedBackupLogPolicies> getAdvancedBackupLogPolicies() const;
	void setAdvancedBackupLogPolicies(const std::vector<AdvancedBackupLogPolicies> &advancedBackupLogPolicies);
	std::string getSnapshotBackupType() const;
	void setSnapshotBackupType(const std::string &snapshotBackupType);
	std::string getPreferredBackupTime() const;
	void setPreferredBackupTime(const std::string &preferredBackupTime);

private:
	std::vector<AdvancedBackupDataPolicies> advancedBackupDataPolicies_;
	std::string accessKeyId_;
	std::string dBInstanceId_;
	int backupRetentionPolicyOnClusterDeletion_;
	bool backupTamperProofEnabled_;
	std::vector<AdvancedBackupLogPolicies> advancedBackupLogPolicies_;
	std::string snapshotBackupType_;
	std::string preferredBackupTime_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_MODIFYADVANCEDBACKUPPOLICYREQUEST_H_
