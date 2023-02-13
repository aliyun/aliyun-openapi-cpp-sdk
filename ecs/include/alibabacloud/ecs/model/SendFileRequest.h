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

#ifndef ALIBABACLOUD_ECS_MODEL_SENDFILEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_SENDFILEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT SendFileRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	SendFileRequest();
	~SendFileRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	long getTimeout() const;
	void setTimeout(long timeout);
	std::string getContent() const;
	void setContent(const std::string &content);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getFileOwner() const;
	void setFileOwner(const std::string &fileOwner);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getOverwrite() const;
	void setOverwrite(bool overwrite);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getFileMode() const;
	void setFileMode(const std::string &fileMode);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getContentType() const;
	void setContentType(const std::string &contentType);
	std::vector<std::string> getInstanceId() const;
	void setInstanceId(const std::vector<std::string> &instanceId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getFileGroup() const;
	void setFileGroup(const std::string &fileGroup);
	std::string getTargetDir() const;
	void setTargetDir(const std::string &targetDir);

private:
	long resourceOwnerId_;
	std::string description_;
	long timeout_;
	std::string content_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string fileOwner_;
	std::vector<Tag> tag_;
	bool overwrite_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string fileMode_;
	long ownerId_;
	std::string contentType_;
	std::vector<std::string> instanceId_;
	std::string name_;
	std::string fileGroup_;
	std::string targetDir_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_SENDFILEREQUEST_H_
