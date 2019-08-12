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

#include <alibabacloud/ccc/model/ListPredictiveJobStatusRequest.h>

using AlibabaCloud::CCC::Model::ListPredictiveJobStatusRequest;

ListPredictiveJobStatusRequest::ListPredictiveJobStatusRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListPredictiveJobStatus")
{}

ListPredictiveJobStatusRequest::~ListPredictiveJobStatusRequest()
{}

std::string ListPredictiveJobStatusRequest::getContactName()const
{
	return contactName_;
}

void ListPredictiveJobStatusRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setCoreParameter("ContactName", std::to_string(contactName));
}

std::string ListPredictiveJobStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void ListPredictiveJobStatusRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string ListPredictiveJobStatusRequest::getTimeAlignment()const
{
	return timeAlignment_;
}

void ListPredictiveJobStatusRequest::setTimeAlignment(const std::string& timeAlignment)
{
	timeAlignment_ = timeAlignment;
	setCoreParameter("TimeAlignment", std::to_string(timeAlignment));
}

std::string ListPredictiveJobStatusRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void ListPredictiveJobStatusRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setCoreParameter("JobGroupId", std::to_string(jobGroupId));
}

std::string ListPredictiveJobStatusRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void ListPredictiveJobStatusRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setCoreParameter("PhoneNumber", std::to_string(phoneNumber));
}

int ListPredictiveJobStatusRequest::getPageSize()const
{
	return pageSize_;
}

void ListPredictiveJobStatusRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long ListPredictiveJobStatusRequest::getEndTime()const
{
	return endTime_;
}

void ListPredictiveJobStatusRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long ListPredictiveJobStatusRequest::getStartTime()const
{
	return startTime_;
}

void ListPredictiveJobStatusRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int ListPredictiveJobStatusRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListPredictiveJobStatusRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

