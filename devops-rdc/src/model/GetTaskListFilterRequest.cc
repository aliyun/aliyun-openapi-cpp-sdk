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

#include <alibabacloud/devops-rdc/model/GetTaskListFilterRequest.h>

using AlibabaCloud::Devops_rdc::Model::GetTaskListFilterRequest;

GetTaskListFilterRequest::GetTaskListFilterRequest() :
	RpcServiceRequest("devops-rdc", "2020-03-03", "GetTaskListFilter")
{
	setMethod(HttpRequest::Method::Post);
}

GetTaskListFilterRequest::~GetTaskListFilterRequest()
{}

std::string GetTaskListFilterRequest::getInvolveMembers()const
{
	return involveMembers_;
}

void GetTaskListFilterRequest::setInvolveMembers(const std::string& involveMembers)
{
	involveMembers_ = involveMembers;
	setBodyParameter("InvolveMembers", involveMembers);
}

std::string GetTaskListFilterRequest::getExecutorId()const
{
	return executorId_;
}

void GetTaskListFilterRequest::setExecutorId(const std::string& executorId)
{
	executorId_ = executorId;
	setBodyParameter("ExecutorId", executorId);
}

std::string GetTaskListFilterRequest::getOrderCondition()const
{
	return orderCondition_;
}

void GetTaskListFilterRequest::setOrderCondition(const std::string& orderCondition)
{
	orderCondition_ = orderCondition;
	setBodyParameter("OrderCondition", orderCondition);
}

std::string GetTaskListFilterRequest::getSprintId()const
{
	return sprintId_;
}

void GetTaskListFilterRequest::setSprintId(const std::string& sprintId)
{
	sprintId_ = sprintId;
	setBodyParameter("SprintId", sprintId);
}

std::string GetTaskListFilterRequest::getExtra()const
{
	return extra_;
}

void GetTaskListFilterRequest::setExtra(const std::string& extra)
{
	extra_ = extra;
	setBodyParameter("Extra", extra);
}

int GetTaskListFilterRequest::getPageSize()const
{
	return pageSize_;
}

void GetTaskListFilterRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string GetTaskListFilterRequest::getScenarioFieldConfigId()const
{
	return scenarioFieldConfigId_;
}

void GetTaskListFilterRequest::setScenarioFieldConfigId(const std::string& scenarioFieldConfigId)
{
	scenarioFieldConfigId_ = scenarioFieldConfigId;
	setBodyParameter("ScenarioFieldConfigId", scenarioFieldConfigId);
}

bool GetTaskListFilterRequest::getIsDone()const
{
	return isDone_;
}

void GetTaskListFilterRequest::setIsDone(bool isDone)
{
	isDone_ = isDone;
	setBodyParameter("IsDone", isDone ? "true" : "false");
}

std::string GetTaskListFilterRequest::getObjectType()const
{
	return objectType_;
}

void GetTaskListFilterRequest::setObjectType(const std::string& objectType)
{
	objectType_ = objectType;
	setBodyParameter("ObjectType", objectType);
}

std::string GetTaskListFilterRequest::getProjectId()const
{
	return projectId_;
}

void GetTaskListFilterRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

std::string GetTaskListFilterRequest::getPageToken()const
{
	return pageToken_;
}

void GetTaskListFilterRequest::setPageToken(const std::string& pageToken)
{
	pageToken_ = pageToken;
	setBodyParameter("PageToken", pageToken);
}

std::string GetTaskListFilterRequest::getOrder()const
{
	return order_;
}

void GetTaskListFilterRequest::setOrder(const std::string& order)
{
	order_ = order;
	setBodyParameter("Order", order);
}

std::string GetTaskListFilterRequest::getTagId()const
{
	return tagId_;
}

void GetTaskListFilterRequest::setTagId(const std::string& tagId)
{
	tagId_ = tagId;
	setBodyParameter("TagId", tagId);
}

std::string GetTaskListFilterRequest::getTaskFlowStatusId()const
{
	return taskFlowStatusId_;
}

void GetTaskListFilterRequest::setTaskFlowStatusId(const std::string& taskFlowStatusId)
{
	taskFlowStatusId_ = taskFlowStatusId;
	setBodyParameter("TaskFlowStatusId", taskFlowStatusId);
}

std::string GetTaskListFilterRequest::getDueDateStart()const
{
	return dueDateStart_;
}

void GetTaskListFilterRequest::setDueDateStart(const std::string& dueDateStart)
{
	dueDateStart_ = dueDateStart;
	setBodyParameter("DueDateStart", dueDateStart);
}

std::string GetTaskListFilterRequest::getCreatorId()const
{
	return creatorId_;
}

void GetTaskListFilterRequest::setCreatorId(const std::string& creatorId)
{
	creatorId_ = creatorId;
	setBodyParameter("CreatorId", creatorId);
}

std::string GetTaskListFilterRequest::getPriority()const
{
	return priority_;
}

void GetTaskListFilterRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setBodyParameter("Priority", priority);
}

std::string GetTaskListFilterRequest::getDueDateEnd()const
{
	return dueDateEnd_;
}

void GetTaskListFilterRequest::setDueDateEnd(const std::string& dueDateEnd)
{
	dueDateEnd_ = dueDateEnd;
	setBodyParameter("DueDateEnd", dueDateEnd);
}

std::string GetTaskListFilterRequest::getOrgId()const
{
	return orgId_;
}

void GetTaskListFilterRequest::setOrgId(const std::string& orgId)
{
	orgId_ = orgId;
	setBodyParameter("OrgId", orgId);
}

std::string GetTaskListFilterRequest::getName()const
{
	return name_;
}

void GetTaskListFilterRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

