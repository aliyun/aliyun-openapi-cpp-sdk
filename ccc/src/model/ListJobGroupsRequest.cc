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

#include <alibabacloud/ccc/model/ListJobGroupsRequest.h>

using AlibabaCloud::CCC::Model::ListJobGroupsRequest;

ListJobGroupsRequest::ListJobGroupsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListJobGroups")
{}

ListJobGroupsRequest::~ListJobGroupsRequest()
{}

std::string ListJobGroupsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListJobGroupsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

int ListJobGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void ListJobGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long ListJobGroupsRequest::getEndTime()const
{
	return endTime_;
}

void ListJobGroupsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

long ListJobGroupsRequest::getStartTime()const
{
	return startTime_;
}

void ListJobGroupsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

int ListJobGroupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListJobGroupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

