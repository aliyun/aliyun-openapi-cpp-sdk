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

#include <alibabacloud/cms/model/TaskConfigModifyRequest.h>

using AlibabaCloud::Cms::Model::TaskConfigModifyRequest;

TaskConfigModifyRequest::TaskConfigModifyRequest() :
	RpcServiceRequest("cms", "2018-03-08", "TaskConfigModify")
{}

TaskConfigModifyRequest::~TaskConfigModifyRequest()
{}

std::vector<std::string> TaskConfigModifyRequest::getInstanceList()const
{
	return instanceList_;
}

void TaskConfigModifyRequest::setInstanceList(const std::vector<std::string>& instanceList)
{
	instanceList_ = instanceList;
	for(int i = 0; i!= instanceList.size(); i++)
		setCoreParameter("InstanceList."+ std::to_string(i), std::to_string(instanceList.at(i)));
}

std::string TaskConfigModifyRequest::getJsonData()const
{
	return jsonData_;
}

void TaskConfigModifyRequest::setJsonData(const std::string& jsonData)
{
	jsonData_ = jsonData;
	setCoreParameter("JsonData", std::to_string(jsonData));
}

std::string TaskConfigModifyRequest::getTaskType()const
{
	return taskType_;
}

void TaskConfigModifyRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setCoreParameter("TaskType", std::to_string(taskType));
}

std::string TaskConfigModifyRequest::getTaskScope()const
{
	return taskScope_;
}

void TaskConfigModifyRequest::setTaskScope(const std::string& taskScope)
{
	taskScope_ = taskScope;
	setCoreParameter("TaskScope", std::to_string(taskScope));
}

std::string TaskConfigModifyRequest::getAlertConfig()const
{
	return alertConfig_;
}

void TaskConfigModifyRequest::setAlertConfig(const std::string& alertConfig)
{
	alertConfig_ = alertConfig;
	setCoreParameter("AlertConfig", std::to_string(alertConfig));
}

long TaskConfigModifyRequest::getGroupId()const
{
	return groupId_;
}

void TaskConfigModifyRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string TaskConfigModifyRequest::getTaskName()const
{
	return taskName_;
}

void TaskConfigModifyRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setCoreParameter("TaskName", std::to_string(taskName));
}

long TaskConfigModifyRequest::getId()const
{
	return id_;
}

void TaskConfigModifyRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string TaskConfigModifyRequest::getGroupName()const
{
	return groupName_;
}

void TaskConfigModifyRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", std::to_string(groupName));
}

