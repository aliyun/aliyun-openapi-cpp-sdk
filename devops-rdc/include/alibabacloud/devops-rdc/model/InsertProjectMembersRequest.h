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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_INSERTPROJECTMEMBERSREQUEST_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_INSERTPROJECTMEMBERSREQUEST_H_

#include <alibabacloud/devops-rdc/Devops_rdcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops_rdc {
namespace Model {
class ALIBABACLOUD_DEVOPS_RDC_EXPORT InsertProjectMembersRequest : public RpcServiceRequest {
public:
	InsertProjectMembersRequest();
	~InsertProjectMembersRequest();
	std::string getMembers() const;
	void setMembers(const std::string &members);
	std::string getProjectId() const;
	void setProjectId(const std::string &projectId);
	std::string getOrgId() const;
	void setOrgId(const std::string &orgId);

private:
	std::string members_;
	std::string projectId_;
	std::string orgId_;
};
} // namespace Model
} // namespace Devops_rdc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_INSERTPROJECTMEMBERSREQUEST_H_
