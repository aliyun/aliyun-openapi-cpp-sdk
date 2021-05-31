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

#include <alibabacloud/dbfs/model/UpdateTaskRequest.h>

using AlibabaCloud::DBFS::Model::UpdateTaskRequest;

UpdateTaskRequest::UpdateTaskRequest() :
	RpcServiceRequest("dbfs", "2020-04-18", "UpdateTask")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateTaskRequest::~UpdateTaskRequest()
{}

int UpdateTaskRequest::getTaskProgress()const
{
	return taskProgress_;
}

void UpdateTaskRequest::setTaskProgress(int taskProgress)
{
	taskProgress_ = taskProgress;
	setParameter("TaskProgress", std::to_string(taskProgress));
}

std::string UpdateTaskRequest::getTaskIds()const
{
	return taskIds_;
}

void UpdateTaskRequest::setTaskIds(const std::string& taskIds)
{
	taskIds_ = taskIds;
	setParameter("TaskIds", taskIds);
}

std::string UpdateTaskRequest::getRegionId()const
{
	return regionId_;
}

void UpdateTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

