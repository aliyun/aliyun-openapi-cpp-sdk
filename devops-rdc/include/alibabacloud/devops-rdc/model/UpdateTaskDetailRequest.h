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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_UPDATETASKDETAILREQUEST_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_UPDATETASKDETAILREQUEST_H_

#include <alibabacloud/devops-rdc/Devops_rdcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops_rdc {
namespace Model {
class ALIBABACLOUD_DEVOPS_RDC_EXPORT UpdateTaskDetailRequest : public RpcServiceRequest {
public:
	UpdateTaskDetailRequest();
	~UpdateTaskDetailRequest();
	std::string getNote() const;
	void setNote(const std::string &note);
	std::string getExecutorId() const;
	void setExecutorId(const std::string &executorId);
	std::string getStartDate() const;
	void setStartDate(const std::string &startDate);
	std::string getDelInvolvers() const;
	void setDelInvolvers(const std::string &delInvolvers);
	std::string getContent() const;
	void setContent(const std::string &content);
	std::string getSprintId() const;
	void setSprintId(const std::string &sprintId);
	std::string getCustomFieldId() const;
	void setCustomFieldId(const std::string &customFieldId);
	std::string getProjectId() const;
	void setProjectId(const std::string &projectId);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getTaskFlowStatusId() const;
	void setTaskFlowStatusId(const std::string &taskFlowStatusId);
	std::string getTagIds() const;
	void setTagIds(const std::string &tagIds);
	std::string getAddInvolvers() const;
	void setAddInvolvers(const std::string &addInvolvers);
	long getPriority() const;
	void setPriority(long priority);
	std::string getOrgId() const;
	void setOrgId(const std::string &orgId);
	std::string getDueDate() const;
	void setDueDate(const std::string &dueDate);
	long getWorkTimes() const;
	void setWorkTimes(long workTimes);
	std::string getStoryPoint() const;
	void setStoryPoint(const std::string &storyPoint);
	std::string getCustomFieldValues() const;
	void setCustomFieldValues(const std::string &customFieldValues);

private:
	std::string note_;
	std::string executorId_;
	std::string startDate_;
	std::string delInvolvers_;
	std::string content_;
	std::string sprintId_;
	std::string customFieldId_;
	std::string projectId_;
	std::string taskId_;
	std::string taskFlowStatusId_;
	std::string tagIds_;
	std::string addInvolvers_;
	long priority_;
	std::string orgId_;
	std::string dueDate_;
	long workTimes_;
	std::string storyPoint_;
	std::string customFieldValues_;
};
} // namespace Model
} // namespace Devops_rdc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_UPDATETASKDETAILREQUEST_H_
