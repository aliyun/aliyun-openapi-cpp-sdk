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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_UPDATEDEVOPSPROJECTSPRINTREQUEST_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_UPDATEDEVOPSPROJECTSPRINTREQUEST_H_

#include <alibabacloud/devops-rdc/Devops_rdcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops_rdc {
namespace Model {
class ALIBABACLOUD_DEVOPS_RDC_EXPORT UpdateDevopsProjectSprintRequest : public RpcServiceRequest {
public:
	UpdateDevopsProjectSprintRequest();
	~UpdateDevopsProjectSprintRequest();
	std::string getExecutorId() const;
	void setExecutorId(const std::string &executorId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getStartDate() const;
	void setStartDate(const std::string &startDate);
	std::string getOrgId() const;
	void setOrgId(const std::string &orgId);
	std::string getSprintId() const;
	void setSprintId(const std::string &sprintId);
	std::string getDueDate() const;
	void setDueDate(const std::string &dueDate);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getProjectId() const;
	void setProjectId(const std::string &projectId);

private:
	std::string executorId_;
	std::string description_;
	std::string startDate_;
	std::string orgId_;
	std::string sprintId_;
	std::string dueDate_;
	std::string name_;
	std::string projectId_;
};
} // namespace Model
} // namespace Devops_rdc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_UPDATEDEVOPSPROJECTSPRINTREQUEST_H_
