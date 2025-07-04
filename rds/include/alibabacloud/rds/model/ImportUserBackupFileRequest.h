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

#ifndef ALIBABACLOUD_RDS_MODEL_IMPORTUSERBACKUPFILEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_IMPORTUSERBACKUPFILEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ImportUserBackupFileRequest : public RpcServiceRequest {
public:
	ImportUserBackupFileRequest();
	~ImportUserBackupFileRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getSourceInfo() const;
	void setSourceInfo(const std::string &sourceInfo);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getMode() const;
	void setMode(const std::string &mode);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	int getRetention() const;
	void setRetention(int retention);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getBackupFile() const;
	void setBackupFile(const std::string &backupFile);
	std::string getBucketRegion() const;
	void setBucketRegion(const std::string &bucketRegion);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getMasterInfo() const;
	void setMasterInfo(const std::string &masterInfo);
	bool getBuildReplication() const;
	void setBuildReplication(bool buildReplication);
	int getRestoreSize() const;
	void setRestoreSize(int restoreSize);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getComment() const;
	void setComment(const std::string &comment);

private:
	long resourceOwnerId_;
	std::string sourceInfo_;
	std::string engineVersion_;
	std::string accessKeyId_;
	std::string mode_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string dBInstanceId_;
	int retention_;
	std::string resourceOwnerAccount_;
	std::string backupFile_;
	std::string bucketRegion_;
	long ownerId_;
	std::string masterInfo_;
	bool buildReplication_;
	int restoreSize_;
	std::string zoneId_;
	std::string comment_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_IMPORTUSERBACKUPFILEREQUEST_H_
