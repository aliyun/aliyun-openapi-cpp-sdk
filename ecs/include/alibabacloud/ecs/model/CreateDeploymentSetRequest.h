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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEDEPLOYMENTSETREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEDEPLOYMENTSETREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreateDeploymentSetRequest : public RpcServiceRequest {
public:
	CreateDeploymentSetRequest();
	~CreateDeploymentSetRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getGroupCount() const;
	void setGroupCount(long groupCount);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getDeploymentSetName() const;
	void setDeploymentSetName(const std::string &deploymentSetName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getOnUnableToRedeployFailedInstance() const;
	void setOnUnableToRedeployFailedInstance(const std::string &onUnableToRedeployFailedInstance);
	std::string getGranularity() const;
	void setGranularity(const std::string &granularity);
	std::string getDomain() const;
	void setDomain(const std::string &domain);
	std::string getStrategy() const;
	void setStrategy(const std::string &strategy);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string description_;
	std::string regionId_;
	long groupCount_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string deploymentSetName_;
	long ownerId_;
	std::string onUnableToRedeployFailedInstance_;
	std::string granularity_;
	std::string domain_;
	std::string strategy_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEDEPLOYMENTSETREQUEST_H_
