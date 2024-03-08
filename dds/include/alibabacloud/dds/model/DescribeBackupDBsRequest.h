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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEBACKUPDBSREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEBACKUPDBSREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT DescribeBackupDBsRequest : public RpcServiceRequest {
public:
	DescribeBackupDBsRequest();
	~DescribeBackupDBsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getRestoreTime() const;
	void setRestoreTime(const std::string &restoreTime);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getBackupId() const;
	void setBackupId(const std::string &backupId);
	std::string getSourceDBInstance() const;
	void setSourceDBInstance(const std::string &sourceDBInstance);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	long resourceOwnerId_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	int pageSize_;
	std::string restoreTime_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string backupId_;
	std::string sourceDBInstance_;
	long ownerId_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEBACKUPDBSREQUEST_H_
