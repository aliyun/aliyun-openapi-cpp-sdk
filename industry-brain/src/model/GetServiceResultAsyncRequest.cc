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

#include <alibabacloud/industry-brain/model/GetServiceResultAsyncRequest.h>

using AlibabaCloud::Industry_brain::Model::GetServiceResultAsyncRequest;

GetServiceResultAsyncRequest::GetServiceResultAsyncRequest() :
	RpcServiceRequest("industry-brain", "2019-06-29", "GetServiceResultAsync")
{
	setMethod(HttpRequest::Method::Post);
}

GetServiceResultAsyncRequest::~GetServiceResultAsyncRequest()
{}

std::string GetServiceResultAsyncRequest::getServiceId()const
{
	return serviceId_;
}

void GetServiceResultAsyncRequest::setServiceId(const std::string& serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", serviceId);
}

std::string GetServiceResultAsyncRequest::getTaskId()const
{
	return taskId_;
}

void GetServiceResultAsyncRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

