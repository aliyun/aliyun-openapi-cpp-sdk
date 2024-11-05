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

#ifndef ALIBABACLOUD_DDS_MODEL_CHECKRECOVERYCONDITIONREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_CHECKRECOVERYCONDITIONREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT CheckRecoveryConditionRequest : public RpcServiceRequest {
public:
	CheckRecoveryConditionRequest();
	~CheckRecoveryConditionRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getSrcRegion() const;
	void setSrcRegion(const std::string &srcRegion);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getDatabaseNames() const;
	void setDatabaseNames(const std::string &databaseNames);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getRestoreTime() const;
	void setRestoreTime(const std::string &restoreTime);
	std::string getDestRegion() const;
	void setDestRegion(const std::string &destRegion);
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
	std::string getRestoreType() const;
	void setRestoreType(const std::string &restoreType);

private:
	long resourceOwnerId_;
	std::string engineVersion_;
	std::string srcRegion_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string databaseNames_;
	std::string instanceType_;
	std::string restoreTime_;
	std::string destRegion_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string backupId_;
	std::string sourceDBInstance_;
	long ownerId_;
	std::string restoreType_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_CHECKRECOVERYCONDITIONREQUEST_H_
