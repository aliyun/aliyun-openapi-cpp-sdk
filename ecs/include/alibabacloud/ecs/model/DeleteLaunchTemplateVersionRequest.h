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

#ifndef ALIBABACLOUD_ECS_MODEL_DELETELAUNCHTEMPLATEVERSIONREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DELETELAUNCHTEMPLATEVERSIONREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DeleteLaunchTemplateVersionRequest : public RpcServiceRequest {
public:
	DeleteLaunchTemplateVersionRequest();
	~DeleteLaunchTemplateVersionRequest();
	std::string getLaunchTemplateName() const;
	void setLaunchTemplateName(const std::string &launchTemplateName);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::vector<long> getDeleteVersion() const;
	void setDeleteVersion(const std::vector<long> &deleteVersion);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getLaunchTemplateId() const;
	void setLaunchTemplateId(const std::string &launchTemplateId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::string launchTemplateName_;
	long resourceOwnerId_;
	std::vector<long> deleteVersion_;
	std::string regionId_;
	std::string launchTemplateId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DELETELAUNCHTEMPLATEVERSIONREQUEST_H_
