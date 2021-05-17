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

#include <alibabacloud/ccc/model/InflightTaskTimeoutRequest.h>

using AlibabaCloud::CCC::Model::InflightTaskTimeoutRequest;

InflightTaskTimeoutRequest::InflightTaskTimeoutRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "InflightTaskTimeout")
{
	setMethod(HttpRequest::Method::Post);
}

InflightTaskTimeoutRequest::~InflightTaskTimeoutRequest()
{}

std::string InflightTaskTimeoutRequest::getInstanceId()const
{
	return instanceId_;
}

void InflightTaskTimeoutRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

long InflightTaskTimeoutRequest::getInstanceOwnerId()const
{
	return instanceOwnerId_;
}

void InflightTaskTimeoutRequest::setInstanceOwnerId(long instanceOwnerId)
{
	instanceOwnerId_ = instanceOwnerId;
	setParameter("InstanceOwnerId", std::to_string(instanceOwnerId));
}

std::string InflightTaskTimeoutRequest::getTaskId()const
{
	return taskId_;
}

void InflightTaskTimeoutRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

