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

#include <alibabacloud/cms/model/QueryStaticsAvailabilityRequest.h>

using AlibabaCloud::Cms::Model::QueryStaticsAvailabilityRequest;

QueryStaticsAvailabilityRequest::QueryStaticsAvailabilityRequest() :
	RpcServiceRequest("cms", "2018-03-08", "QueryStaticsAvailability")
{}

QueryStaticsAvailabilityRequest::~QueryStaticsAvailabilityRequest()
{}

std::string QueryStaticsAvailabilityRequest::getTimeRange()const
{
	return timeRange_;
}

void QueryStaticsAvailabilityRequest::setTimeRange(const std::string& timeRange)
{
	timeRange_ = timeRange;
	setCoreParameter("TimeRange", timeRange);
}

std::string QueryStaticsAvailabilityRequest::getTaskId()const
{
	return taskId_;
}

void QueryStaticsAvailabilityRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

