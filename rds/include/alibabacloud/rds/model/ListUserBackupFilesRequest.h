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

#ifndef ALIBABACLOUD_RDS_MODEL_LISTUSERBACKUPFILESREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_LISTUSERBACKUPFILESREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ListUserBackupFilesRequest : public RpcServiceRequest {
public:
	ListUserBackupFilesRequest();
	~ListUserBackupFilesRequest();
	std::string getTag4value() const;
	void setTag4value(const std::string &tag4value);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getTag2key() const;
	void setTag2key(const std::string &tag2key);
	std::string getTag3key() const;
	void setTag3key(const std::string &tag3key);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getTag1value() const;
	void setTag1value(const std::string &tag1value);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTag3value() const;
	void setTag3value(const std::string &tag3value);
	std::string getTag5key() const;
	void setTag5key(const std::string &tag5key);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getBackupId() const;
	void setBackupId(const std::string &backupId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTag5value() const;
	void setTag5value(const std::string &tag5value);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getTag1key() const;
	void setTag1key(const std::string &tag1key);
	std::string getOpsServiceVersion() const;
	void setOpsServiceVersion(const std::string &opsServiceVersion);
	std::string getOssUrl() const;
	void setOssUrl(const std::string &ossUrl);
	std::string getTag2value() const;
	void setTag2value(const std::string &tag2value);
	std::string getTag4key() const;
	void setTag4key(const std::string &tag4key);
	std::string getComment() const;
	void setComment(const std::string &comment);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string tag4value_;
	long resourceOwnerId_;
	std::string tag2key_;
	std::string tag3key_;
	std::string accessKeyId_;
	std::string tag1value_;
	std::string resourceGroupId_;
	std::string engine_;
	std::string regionId_;
	std::string tag3value_;
	std::string tag5key_;
	std::string resourceOwnerAccount_;
	std::string backupId_;
	long ownerId_;
	std::string tag5value_;
	std::string tags_;
	std::string tag1key_;
	std::string opsServiceVersion_;
	std::string ossUrl_;
	std::string tag2value_;
	std::string tag4key_;
	std::string comment_;
	std::string status_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_LISTUSERBACKUPFILESREQUEST_H_
