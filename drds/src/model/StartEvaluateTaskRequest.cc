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

#include <alibabacloud/drds/model/StartEvaluateTaskRequest.h>

using AlibabaCloud::Drds::Model::StartEvaluateTaskRequest;

StartEvaluateTaskRequest::StartEvaluateTaskRequest() :
	RpcServiceRequest("drds", "2019-01-23", "StartEvaluateTask")
{
	setMethod(HttpRequest::Method::Post);
}

StartEvaluateTaskRequest::~StartEvaluateTaskRequest()
{}

std::string StartEvaluateTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartEvaluateTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int StartEvaluateTaskRequest::getTaskId()const
{
	return taskId_;
}

void StartEvaluateTaskRequest::setTaskId(int taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", std::to_string(taskId));
}

