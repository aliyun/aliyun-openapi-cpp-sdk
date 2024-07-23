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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPSREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPSREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeBackupsRequest : public RpcServiceRequest {
public:
	DescribeBackupsRequest();
	~DescribeBackupsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getBackupLocation() const;
	void setBackupLocation(const std::string &backupLocation);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getBackupType() const;
	void setBackupType(const std::string &backupType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getBackupId() const;
	void setBackupId(const std::string &backupId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getBackupStatus() const;
	void setBackupStatus(const std::string &backupStatus);
	std::string getBackupMode() const;
	void setBackupMode(const std::string &backupMode);

private:
	long resourceOwnerId_;
	std::string startTime_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string backupLocation_;
	std::string resourceGroupId_;
	std::string regionId_;
	int pageSize_;
	std::string dBInstanceId_;
	std::string backupType_;
	std::string resourceOwnerAccount_;
	std::string backupId_;
	std::string ownerAccount_;
	std::string endTime_;
	long ownerId_;
	std::string backupStatus_;
	std::string backupMode_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPSREQUEST_H_
