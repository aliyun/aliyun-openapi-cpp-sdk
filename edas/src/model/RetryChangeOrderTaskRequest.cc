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

#include <alibabacloud/edas/model/RetryChangeOrderTaskRequest.h>

using AlibabaCloud::Edas::Model::RetryChangeOrderTaskRequest;

RetryChangeOrderTaskRequest::RetryChangeOrderTaskRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/changeorder/task_retry");
	setMethod(HttpRequest::Method::Get);
}

RetryChangeOrderTaskRequest::~RetryChangeOrderTaskRequest()
{}

bool RetryChangeOrderTaskRequest::getRetryStatus()const
{
	return retryStatus_;
}

void RetryChangeOrderTaskRequest::setRetryStatus(bool retryStatus)
{
	retryStatus_ = retryStatus;
	setParameter("RetryStatus", retryStatus ? "true" : "false");
}

std::string RetryChangeOrderTaskRequest::getTaskId()const
{
	return taskId_;
}

void RetryChangeOrderTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

