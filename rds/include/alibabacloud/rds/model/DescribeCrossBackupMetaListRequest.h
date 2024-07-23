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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBECROSSBACKUPMETALISTREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBECROSSBACKUPMETALISTREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeCrossBackupMetaListRequest : public RpcServiceRequest {
public:
	DescribeCrossBackupMetaListRequest();
	~DescribeCrossBackupMetaListRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getPattern() const;
	void setPattern(const std::string &pattern);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getPageIndex() const;
	void setPageIndex(const std::string &pageIndex);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getBackupSetId() const;
	void setBackupSetId(const std::string &backupSetId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getGetDbName() const;
	void setGetDbName(const std::string &getDbName);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	long resourceOwnerId_;
	std::string pattern_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string pageSize_;
	std::string pageIndex_;
	std::string resourceOwnerAccount_;
	std::string backupSetId_;
	long ownerId_;
	std::string getDbName_;
	std::string region_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBECROSSBACKUPMETALISTREQUEST_H_
