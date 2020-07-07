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

#include <alibabacloud/vcs/model/DeleteVideoSummaryTaskRequest.h>

using AlibabaCloud::Vcs::Model::DeleteVideoSummaryTaskRequest;

DeleteVideoSummaryTaskRequest::DeleteVideoSummaryTaskRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "DeleteVideoSummaryTask")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteVideoSummaryTaskRequest::~DeleteVideoSummaryTaskRequest()
{}

std::string DeleteVideoSummaryTaskRequest::getCorpId()const
{
	return corpId_;
}

void DeleteVideoSummaryTaskRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string DeleteVideoSummaryTaskRequest::getTaskId()const
{
	return taskId_;
}

void DeleteVideoSummaryTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setBodyParameter("TaskId", taskId);
}

