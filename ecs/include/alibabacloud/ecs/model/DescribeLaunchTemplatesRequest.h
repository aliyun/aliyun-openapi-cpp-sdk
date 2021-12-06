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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBELAUNCHTEMPLATESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBELAUNCHTEMPLATESREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeLaunchTemplatesRequest : public RpcServiceRequest {
public:
	struct TemplateTag {
		std::string key;
		std::string value;
	};
	DescribeLaunchTemplatesRequest();
	~DescribeLaunchTemplatesRequest();
	std::vector<std::string> getLaunchTemplateName() const;
	void setLaunchTemplateName(const std::vector<std::string> &launchTemplateName);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<TemplateTag> getTemplateTag() const;
	void setTemplateTag(const std::vector<TemplateTag> &templateTag);
	std::vector<std::string> getLaunchTemplateId() const;
	void setLaunchTemplateId(const std::vector<std::string> &launchTemplateId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getTemplateResourceGroupId() const;
	void setTemplateResourceGroupId(const std::string &templateResourceGroupId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::vector<std::string> launchTemplateName_;
	long resourceOwnerId_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	std::vector<TemplateTag> templateTag_;
	std::vector<std::string> launchTemplateId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string templateResourceGroupId_;
	long ownerId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBELAUNCHTEMPLATESREQUEST_H_
