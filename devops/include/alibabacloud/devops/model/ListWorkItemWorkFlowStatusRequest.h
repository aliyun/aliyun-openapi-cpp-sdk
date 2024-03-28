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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTWORKITEMWORKFLOWSTATUSREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTWORKITEMWORKFLOWSTATUSREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT ListWorkItemWorkFlowStatusRequest : public RoaServiceRequest {
public:
	ListWorkItemWorkFlowStatusRequest();
	~ListWorkItemWorkFlowStatusRequest();
	std::string getWorkitemCategoryIdentifier() const;
	void setWorkitemCategoryIdentifier(const std::string &workitemCategoryIdentifier);
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	std::string getSpaceType() const;
	void setSpaceType(const std::string &spaceType);
	std::string getWorkitemTypeIdentifier() const;
	void setWorkitemTypeIdentifier(const std::string &workitemTypeIdentifier);
	std::string getSpaceIdentifier() const;
	void setSpaceIdentifier(const std::string &spaceIdentifier);

private:
	std::string workitemCategoryIdentifier_;
	std::string organizationId_;
	std::string spaceType_;
	std::string workitemTypeIdentifier_;
	std::string spaceIdentifier_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTWORKITEMWORKFLOWSTATUSREQUEST_H_
