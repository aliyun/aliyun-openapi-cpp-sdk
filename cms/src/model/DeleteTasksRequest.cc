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

#include <alibabacloud/cms/model/DeleteTasksRequest.h>

using AlibabaCloud::Cms::Model::DeleteTasksRequest;

DeleteTasksRequest::DeleteTasksRequest() :
	RpcServiceRequest("cms", "2018-03-08", "DeleteTasks")
{}

DeleteTasksRequest::~DeleteTasksRequest()
{}

int DeleteTasksRequest::getIsDeleteAlarms()const
{
	return isDeleteAlarms_;
}

void DeleteTasksRequest::setIsDeleteAlarms(int isDeleteAlarms)
{
	isDeleteAlarms_ = isDeleteAlarms;
	setCoreParameter("IsDeleteAlarms", isDeleteAlarms);
}

std::string DeleteTasksRequest::getTaskIds()const
{
	return taskIds_;
}

void DeleteTasksRequest::setTaskIds(const std::string& taskIds)
{
	taskIds_ = taskIds;
	setCoreParameter("TaskIds", std::to_string(taskIds));
}

