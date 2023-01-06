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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATESNAPSHOTREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATESNAPSHOTREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreateSnapshotRequest : public RpcServiceRequest {
public:
	struct SystemTag {
		std::string scope;
		std::string value;
		std::string key;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateSnapshotRequest();
	~CreateSnapshotRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	bool getInstantAccess() const;
	void setInstantAccess(bool instantAccess);
	std::vector<SystemTag> getSystemTag() const;
	void setSystemTag(const std::vector<SystemTag> &systemTag);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getSnapshotName() const;
	void setSnapshotName(const std::string &snapshotName);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	int getInstantAccessRetentionDays() const;
	void setInstantAccessRetentionDays(int instantAccessRetentionDays);
	std::string getStorageLocationArn() const;
	void setStorageLocationArn(const std::string &storageLocationArn);
	std::string getDiskId() const;
	void setDiskId(const std::string &diskId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getRetentionDays() const;
	void setRetentionDays(int retentionDays);
	std::string getCategory() const;
	void setCategory(const std::string &category);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	bool instantAccess_;
	std::vector<SystemTag> systemTag_;
	std::string description_;
	std::string snapshotName_;
	std::string resourceGroupId_;
	int instantAccessRetentionDays_;
	std::string storageLocationArn_;
	std::string diskId_;
	std::vector<Tag> tag_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	int retentionDays_;
	std::string category_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATESNAPSHOTREQUEST_H_
