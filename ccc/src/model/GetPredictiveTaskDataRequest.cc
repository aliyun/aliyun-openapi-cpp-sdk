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

#include <alibabacloud/ccc/model/GetPredictiveTaskDataRequest.h>

using AlibabaCloud::CCC::Model::GetPredictiveTaskDataRequest;

GetPredictiveTaskDataRequest::GetPredictiveTaskDataRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetPredictiveTaskData")
{
	setMethod(HttpRequest::Method::Get);
}

GetPredictiveTaskDataRequest::~GetPredictiveTaskDataRequest()
{}

std::string GetPredictiveTaskDataRequest::getInstanceId()const
{
	return instanceId_;
}

void GetPredictiveTaskDataRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string GetPredictiveTaskDataRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void GetPredictiveTaskDataRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setParameter("SkillGroupId", skillGroupId);
}

std::string GetPredictiveTaskDataRequest::getTaskId()const
{
	return taskId_;
}

void GetPredictiveTaskDataRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

