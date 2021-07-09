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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_GETTASKLISTFILTERREQUEST_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_GETTASKLISTFILTERREQUEST_H_

#include <alibabacloud/devops-rdc/Devops_rdcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops_rdc {
namespace Model {
class ALIBABACLOUD_DEVOPS_RDC_EXPORT GetTaskListFilterRequest : public RpcServiceRequest {
public:
	GetTaskListFilterRequest();
	~GetTaskListFilterRequest();
	std::string getInvolveMembers() const;
	void setInvolveMembers(const std::string &involveMembers);
	std::string getExecutorId() const;
	void setExecutorId(const std::string &executorId);
	std::string getOrderCondition() const;
	void setOrderCondition(const std::string &orderCondition);
	std::string getSprintId() const;
	void setSprintId(const std::string &sprintId);
	std::string getExtra() const;
	void setExtra(const std::string &extra);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getScenarioFieldConfigId() const;
	void setScenarioFieldConfigId(const std::string &scenarioFieldConfigId);
	bool getIsDone() const;
	void setIsDone(bool isDone);
	std::string getObjectType() const;
	void setObjectType(const std::string &objectType);
	std::string getProjectId() const;
	void setProjectId(const std::string &projectId);
	std::string getPageToken() const;
	void setPageToken(const std::string &pageToken);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::string getTagId() const;
	void setTagId(const std::string &tagId);
	std::string getTaskFlowStatusId() const;
	void setTaskFlowStatusId(const std::string &taskFlowStatusId);
	std::string getDueDateStart() const;
	void setDueDateStart(const std::string &dueDateStart);
	std::string getCreatorId() const;
	void setCreatorId(const std::string &creatorId);
	std::string getPriority() const;
	void setPriority(const std::string &priority);
	std::string getDueDateEnd() const;
	void setDueDateEnd(const std::string &dueDateEnd);
	std::string getOrgId() const;
	void setOrgId(const std::string &orgId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string involveMembers_;
	std::string executorId_;
	std::string orderCondition_;
	std::string sprintId_;
	std::string extra_;
	int pageSize_;
	std::string scenarioFieldConfigId_;
	bool isDone_;
	std::string objectType_;
	std::string projectId_;
	std::string pageToken_;
	std::string order_;
	std::string tagId_;
	std::string taskFlowStatusId_;
	std::string dueDateStart_;
	std::string creatorId_;
	std::string priority_;
	std::string dueDateEnd_;
	std::string orgId_;
	std::string name_;
};
} // namespace Model
} // namespace Devops_rdc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_GETTASKLISTFILTERREQUEST_H_
