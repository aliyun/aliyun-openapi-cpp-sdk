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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEDEPLOYMENTREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEDEPLOYMENTREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyInstanceDeploymentRequest : public RpcServiceRequest {
public:
	ModifyInstanceDeploymentRequest();
	~ModifyInstanceDeploymentRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	bool getRemoveFromDeploymentSet() const;
	void setRemoveFromDeploymentSet(bool removeFromDeploymentSet);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getDeploymentSetGroupNo() const;
	void setDeploymentSetGroupNo(int deploymentSetGroupNo);
	std::string getDedicatedHostClusterId() const;
	void setDedicatedHostClusterId(const std::string &dedicatedHostClusterId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getDeploymentSetId() const;
	void setDeploymentSetId(const std::string &deploymentSetId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getTenancy() const;
	void setTenancy(const std::string &tenancy);
	std::string getDedicatedHostId() const;
	void setDedicatedHostId(const std::string &dedicatedHostId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	bool getForce() const;
	void setForce(bool force);
	std::string getMigrationType() const;
	void setMigrationType(const std::string &migrationType);
	std::string getAffinity() const;
	void setAffinity(const std::string &affinity);

private:
	long resourceOwnerId_;
	bool removeFromDeploymentSet_;
	std::string regionId_;
	int deploymentSetGroupNo_;
	std::string dedicatedHostClusterId_;
	std::string instanceType_;
	std::string deploymentSetId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string tenancy_;
	std::string dedicatedHostId_;
	long ownerId_;
	std::string instanceId_;
	bool force_;
	std::string migrationType_;
	std::string affinity_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEDEPLOYMENTREQUEST_H_
