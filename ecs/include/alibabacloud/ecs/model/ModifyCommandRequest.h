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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYCOMMANDREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYCOMMANDREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyCommandRequest : public RpcServiceRequest {
public:
	ModifyCommandRequest();
	~ModifyCommandRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getWorkingDir() const;
	void setWorkingDir(const std::string &workingDir);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getCommandId() const;
	void setCommandId(const std::string &commandId);
	std::string getCommandContent() const;
	void setCommandContent(const std::string &commandContent);
	long getTimeout() const;
	void setTimeout(long timeout);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getLauncher() const;
	void setLauncher(const std::string &launcher);

private:
	long resourceOwnerId_;
	std::string workingDir_;
	std::string description_;
	std::string commandId_;
	std::string commandContent_;
	long timeout_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string name_;
	std::string launcher_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYCOMMANDREQUEST_H_
