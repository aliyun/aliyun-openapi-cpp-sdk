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

#include <alibabacloud/ccc/model/ListPredictiveJobGroupsRequest.h>

using AlibabaCloud::CCC::Model::ListPredictiveJobGroupsRequest;

ListPredictiveJobGroupsRequest::ListPredictiveJobGroupsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListPredictiveJobGroups")
{}

ListPredictiveJobGroupsRequest::~ListPredictiveJobGroupsRequest()
{}

std::string ListPredictiveJobGroupsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListPredictiveJobGroupsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ListPredictiveJobGroupsRequest::getCriteria()const
{
	return criteria_;
}

void ListPredictiveJobGroupsRequest::setCriteria(const std::string& criteria)
{
	criteria_ = criteria;
	setCoreParameter("Criteria", criteria);
}

std::string ListPredictiveJobGroupsRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ListPredictiveJobGroupsRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setCoreParameter("SkillGroupId", skillGroupId);
}

std::string ListPredictiveJobGroupsRequest::getName()const
{
	return name_;
}

void ListPredictiveJobGroupsRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int ListPredictiveJobGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void ListPredictiveJobGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long ListPredictiveJobGroupsRequest::getEndTime()const
{
	return endTime_;
}

void ListPredictiveJobGroupsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long ListPredictiveJobGroupsRequest::getStartTime()const
{
	return startTime_;
}

void ListPredictiveJobGroupsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int ListPredictiveJobGroupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListPredictiveJobGroupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

