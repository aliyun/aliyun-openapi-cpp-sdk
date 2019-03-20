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

#include <alibabacloud/cms/model/TaskConfigCreateRequest.h>

using AlibabaCloud::Cms::Model::TaskConfigCreateRequest;

TaskConfigCreateRequest::TaskConfigCreateRequest() :
	RpcServiceRequest("cms", "2018-03-08", "TaskConfigCreate")
{}

TaskConfigCreateRequest::~TaskConfigCreateRequest()
{}

std::vector<std::string> TaskConfigCreateRequest::getInstanceList()const
{
	return instanceList_;
}

void TaskConfigCreateRequest::setInstanceList(const std::vector<std::string>& instanceList)
{
	instanceList_ = instanceList;
	for(int i = 0; i!= instanceList.size(); i++)
		setParameter("InstanceList."+ std::to_string(i), instanceList.at(i));
}

std::string TaskConfigCreateRequest::getJsonData()const
{
	return jsonData_;
}

void TaskConfigCreateRequest::setJsonData(const std::string& jsonData)
{
	jsonData_ = jsonData;
	setParameter("JsonData", jsonData);
}

std::string TaskConfigCreateRequest::getTaskType()const
{
	return taskType_;
}

void TaskConfigCreateRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setParameter("TaskType", taskType);
}

std::string TaskConfigCreateRequest::getTaskScope()const
{
	return taskScope_;
}

void TaskConfigCreateRequest::setTaskScope(const std::string& taskScope)
{
	taskScope_ = taskScope;
	setParameter("TaskScope", taskScope);
}

std::string TaskConfigCreateRequest::getAlertConfig()const
{
	return alertConfig_;
}

void TaskConfigCreateRequest::setAlertConfig(const std::string& alertConfig)
{
	alertConfig_ = alertConfig;
	setParameter("AlertConfig", alertConfig);
}

long TaskConfigCreateRequest::getGroupId()const
{
	return groupId_;
}

void TaskConfigCreateRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

std::string TaskConfigCreateRequest::getTaskName()const
{
	return taskName_;
}

void TaskConfigCreateRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setParameter("TaskName", taskName);
}

std::string TaskConfigCreateRequest::getGroupName()const
{
	return groupName_;
}

void TaskConfigCreateRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

