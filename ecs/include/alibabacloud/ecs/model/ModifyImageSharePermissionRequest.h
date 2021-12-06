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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyImageSharePermissionRequest : public RpcServiceRequest {
public:
	ModifyImageSharePermissionRequest();
	~ModifyImageSharePermissionRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getIsPublic() const;
	void setIsPublic(bool isPublic);
	std::string getLaunchPermission() const;
	void setLaunchPermission(const std::string &launchPermission);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getAddAccount() const;
	void setAddAccount(const std::vector<std::string> &addAccount);
	std::vector<std::string> getRemoveAccount() const;
	void setRemoveAccount(const std::vector<std::string> &removeAccount);

private:
	long resourceOwnerId_;
	std::string imageId_;
	std::string regionId_;
	bool isPublic_;
	std::string launchPermission_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::vector<std::string> addAccount_;
	std::vector<std::string> removeAccount_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_
