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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEMETALISTREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEMETALISTREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeMetaListRequest : public RpcServiceRequest {
public:
	DescribeMetaListRequest();
	~DescribeMetaListRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getPattern() const;
	void setPattern(const std::string &pattern);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	int getPageIndex() const;
	void setPageIndex(int pageIndex);
	std::string getRestoreTime() const;
	void setRestoreTime(const std::string &restoreTime);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getBackupSetID() const;
	void setBackupSetID(long backupSetID);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getGetDbName() const;
	void setGetDbName(const std::string &getDbName);
	std::string getRestoreType() const;
	void setRestoreType(const std::string &restoreType);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string pattern_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string regionId_;
	int pageSize_;
	std::string dBInstanceId_;
	int pageIndex_;
	std::string restoreTime_;
	std::string resourceOwnerAccount_;
	long backupSetID_;
	long ownerId_;
	std::string getDbName_;
	std::string restoreType_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEMETALISTREQUEST_H_
