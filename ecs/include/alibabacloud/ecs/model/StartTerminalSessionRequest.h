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

#ifndef ALIBABACLOUD_ECS_MODEL_STARTTERMINALSESSIONREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_STARTTERMINALSESSIONREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT StartTerminalSessionRequest : public RpcServiceRequest {
public:
	StartTerminalSessionRequest();
	~StartTerminalSessionRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCommandLine() const;
	void setCommandLine(const std::string &commandLine);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTargetServer() const;
	void setTargetServer(const std::string &targetServer);
	std::string getConnectionType() const;
	void setConnectionType(const std::string &connectionType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getInstanceId() const;
	void setInstanceId(const std::vector<std::string> &instanceId);
	int getPortNumber() const;
	void setPortNumber(int portNumber);
	std::string getUsername() const;
	void setUsername(const std::string &username);

private:
	long resourceOwnerId_;
	std::string commandLine_;
	std::string regionId_;
	std::string targetServer_;
	std::string connectionType_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::vector<std::string> instanceId_;
	int portNumber_;
	std::string username_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_STARTTERMINALSESSIONREQUEST_H_
