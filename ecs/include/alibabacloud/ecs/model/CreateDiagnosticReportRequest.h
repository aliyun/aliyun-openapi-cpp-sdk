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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEDIAGNOSTICREPORTREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEDIAGNOSTICREPORTREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreateDiagnosticReportRequest : public RpcServiceRequest {
public:
	CreateDiagnosticReportRequest();
	~CreateDiagnosticReportRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getSourceSystem() const;
	void setSourceSystem(const std::string &sourceSystem);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPluginVersion() const;
	void setPluginVersion(const std::string &pluginVersion);
	std::vector<std::string> getResourceId() const;
	void setResourceId(const std::vector<std::string> &resourceId);
	std::vector<std::string> getCommandName() const;
	void setCommandName(const std::vector<std::string> &commandName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getCommandType() const;
	void setCommandType(const std::string &commandType);
	std::string getDiagnosticCategory() const;
	void setDiagnosticCategory(const std::string &diagnosticCategory);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string startTime_;
	std::string sourceSystem_;
	std::string regionId_;
	std::string pluginVersion_;
	std::vector<std::string> resourceId_;
	std::vector<std::string> commandName_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string endTime_;
	long ownerId_;
	std::string resourceType_;
	std::string commandType_;
	std::string diagnosticCategory_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEDIAGNOSTICREPORTREQUEST_H_
