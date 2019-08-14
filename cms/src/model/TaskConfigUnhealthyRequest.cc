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

#include <alibabacloud/cms/model/TaskConfigUnhealthyRequest.h>

using AlibabaCloud::Cms::Model::TaskConfigUnhealthyRequest;

TaskConfigUnhealthyRequest::TaskConfigUnhealthyRequest() :
	RpcServiceRequest("cms", "2018-03-08", "TaskConfigUnhealthy")
{}

TaskConfigUnhealthyRequest::~TaskConfigUnhealthyRequest()
{}

std::vector<long> TaskConfigUnhealthyRequest::getTaskIdList()const
{
	return taskIdList_;
}

void TaskConfigUnhealthyRequest::setTaskIdList(const std::vector<long>& taskIdList)
{
	taskIdList_ = taskIdList;
	for(int i = 0; i!= taskIdList.size(); i++)
		setCoreParameter("TaskIdList."+ std::to_string(i), std::to_string(taskIdList.at(i)));
}

