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

#ifndef ALIBABACLOUD_DDS_MODEL_MODIFYBACKUPPOLICYREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_MODIFYBACKUPPOLICYREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT ModifyBackupPolicyRequest : public RpcServiceRequest {
public:
	ModifyBackupPolicyRequest();
	~ModifyBackupPolicyRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getCrossLogRetentionValue() const;
	void setCrossLogRetentionValue(int crossLogRetentionValue);
	std::string getSrcRegion() const;
	void setSrcRegion(const std::string &srcRegion);
	std::string getCrossRetentionType() const;
	void setCrossRetentionType(const std::string &crossRetentionType);
	int getBackupRetentionPolicyOnClusterDeletion() const;
	void setBackupRetentionPolicyOnClusterDeletion(int backupRetentionPolicyOnClusterDeletion);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	long getBackupRetentionPeriod() const;
	void setBackupRetentionPeriod(long backupRetentionPeriod);
	int getEnableCrossLogBackup() const;
	void setEnableCrossLogBackup(int enableCrossLogBackup);
	std::string getCrossBackupPeriod() const;
	void setCrossBackupPeriod(const std::string &crossBackupPeriod);
	int getCrossRetentionValue() const;
	void setCrossRetentionValue(int crossRetentionValue);
	std::string getCrossLogRetentionType() const;
	void setCrossLogRetentionType(const std::string &crossLogRetentionType);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getBackupInterval() const;
	void setBackupInterval(const std::string &backupInterval);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	long getEnableBackupLog() const;
	void setEnableBackupLog(long enableBackupLog);
	std::string getPreferredBackupPeriod() const;
	void setPreferredBackupPeriod(const std::string &preferredBackupPeriod);
	std::string getDestRegion() const;
	void setDestRegion(const std::string &destRegion);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getCrossBackupType() const;
	void setCrossBackupType(const std::string &crossBackupType);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	bool getBackupTamperProofEnabled() const;
	void setBackupTamperProofEnabled(bool backupTamperProofEnabled);
	std::string getSnapshotBackupType() const;
	void setSnapshotBackupType(const std::string &snapshotBackupType);
	std::string getPreferredBackupTime() const;
	void setPreferredBackupTime(const std::string &preferredBackupTime);
	long getHighFrequencyBackupRetention() const;
	void setHighFrequencyBackupRetention(long highFrequencyBackupRetention);
	long getLogBackupRetentionPeriod() const;
	void setLogBackupRetentionPeriod(long logBackupRetentionPeriod);
	bool getPreserveOneEachHour() const;
	void setPreserveOneEachHour(bool preserveOneEachHour);

private:
	long resourceOwnerId_;
	int crossLogRetentionValue_;
	std::string srcRegion_;
	std::string crossRetentionType_;
	int backupRetentionPolicyOnClusterDeletion_;
	long ownerId_;
	long backupRetentionPeriod_;
	int enableCrossLogBackup_;
	std::string crossBackupPeriod_;
	int crossRetentionValue_;
	std::string crossLogRetentionType_;
	std::string accessKeyId_;
	std::string backupInterval_;
	std::string instanceType_;
	std::string dBInstanceId_;
	long enableBackupLog_;
	std::string preferredBackupPeriod_;
	std::string destRegion_;
	std::string resourceOwnerAccount_;
	std::string crossBackupType_;
	std::string ownerAccount_;
	bool backupTamperProofEnabled_;
	std::string snapshotBackupType_;
	std::string preferredBackupTime_;
	long highFrequencyBackupRetention_;
	long logBackupRetentionPeriod_;
	bool preserveOneEachHour_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_MODIFYBACKUPPOLICYREQUEST_H_
