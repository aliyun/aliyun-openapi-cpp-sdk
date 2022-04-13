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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYDISKATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYDISKATTRIBUTEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyDiskAttributeRequest : public RpcServiceRequest {
public:
	ModifyDiskAttributeRequest();
	~ModifyDiskAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getDiskName() const;
	void setDiskName(const std::string &diskName);
	bool getDeleteAutoSnapshot() const;
	void setDeleteAutoSnapshot(bool deleteAutoSnapshot);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<std::string> getDiskIds() const;
	void setDiskIds(const std::vector<std::string> &diskIds);
	std::string getDiskId() const;
	void setDiskId(const std::string &diskId);
	bool getDeleteWithInstance() const;
	void setDeleteWithInstance(bool deleteWithInstance);
	bool getEnableAutoSnapshot() const;
	void setEnableAutoSnapshot(bool enableAutoSnapshot);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	bool getBurstingEnabled() const;
	void setBurstingEnabled(bool burstingEnabled);

private:
	long resourceOwnerId_;
	std::string description_;
	std::string diskName_;
	bool deleteAutoSnapshot_;
	std::string regionId_;
	std::vector<std::string> diskIds_;
	std::string diskId_;
	bool deleteWithInstance_;
	bool enableAutoSnapshot_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	bool burstingEnabled_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYDISKATTRIBUTEREQUEST_H_
