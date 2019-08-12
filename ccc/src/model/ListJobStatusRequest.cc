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

#include <alibabacloud/ccc/model/ListJobStatusRequest.h>

using AlibabaCloud::CCC::Model::ListJobStatusRequest;

ListJobStatusRequest::ListJobStatusRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListJobStatus")
{}

ListJobStatusRequest::~ListJobStatusRequest()
{}

std::string ListJobStatusRequest::getContactName()const
{
	return contactName_;
}

void ListJobStatusRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setCoreParameter("ContactName", std::to_string(contactName));
}

std::string ListJobStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void ListJobStatusRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string ListJobStatusRequest::getTimeAlignment()const
{
	return timeAlignment_;
}

void ListJobStatusRequest::setTimeAlignment(const std::string& timeAlignment)
{
	timeAlignment_ = timeAlignment;
	setCoreParameter("TimeAlignment", std::to_string(timeAlignment));
}

std::string ListJobStatusRequest::getGroupId()const
{
	return groupId_;
}

void ListJobStatusRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string ListJobStatusRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void ListJobStatusRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setCoreParameter("PhoneNumber", std::to_string(phoneNumber));
}

int ListJobStatusRequest::getPageSize()const
{
	return pageSize_;
}

void ListJobStatusRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long ListJobStatusRequest::getEndTime()const
{
	return endTime_;
}

void ListJobStatusRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long ListJobStatusRequest::getStartTime()const
{
	return startTime_;
}

void ListJobStatusRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string ListJobStatusRequest::getScenarioId()const
{
	return scenarioId_;
}

void ListJobStatusRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setCoreParameter("ScenarioId", std::to_string(scenarioId));
}

int ListJobStatusRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListJobStatusRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

