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

#ifndef ALIBABACLOUD_RESOURCESHARING_MODEL_ASSOCIATERESOURCESHAREREQUEST_H_
#define ALIBABACLOUD_RESOURCESHARING_MODEL_ASSOCIATERESOURCESHAREREQUEST_H_

#include <alibabacloud/resourcesharing/ResourceSharingExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceSharing {
namespace Model {
class ALIBABACLOUD_RESOURCESHARING_EXPORT AssociateResourceShareRequest : public RpcServiceRequest {
public:
	struct Resources {
		std::string resourceId;
		std::string resourceType;
	};
	struct TargetProperties {
		std::string targetId;
		std::string property;
	};
	AssociateResourceShareRequest();
	~AssociateResourceShareRequest();
	std::vector<Resources> getResources() const;
	void setResources(const std::vector<Resources> &resources);
	std::vector<std::string> getTargets() const;
	void setTargets(const std::vector<std::string> &targets);
	std::string getResourceShareId() const;
	void setResourceShareId(const std::string &resourceShareId);
	std::vector<std::string> getPermissionNames() const;
	void setPermissionNames(const std::vector<std::string> &permissionNames);
	std::vector<TargetProperties> getTargetProperties() const;
	void setTargetProperties(const std::vector<TargetProperties> &targetProperties);

private:
	std::vector<Resources> resources_;
	std::vector<std::string> targets_;
	std::string resourceShareId_;
	std::vector<std::string> permissionNames_;
	std::vector<TargetProperties> targetProperties_;
};
} // namespace Model
} // namespace ResourceSharing
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCESHARING_MODEL_ASSOCIATERESOURCESHAREREQUEST_H_
