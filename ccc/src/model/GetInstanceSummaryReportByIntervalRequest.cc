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

#include <alibabacloud/ccc/model/GetInstanceSummaryReportByIntervalRequest.h>

using AlibabaCloud::CCC::Model::GetInstanceSummaryReportByIntervalRequest;

GetInstanceSummaryReportByIntervalRequest::GetInstanceSummaryReportByIntervalRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetInstanceSummaryReportByInterval")
{}

GetInstanceSummaryReportByIntervalRequest::~GetInstanceSummaryReportByIntervalRequest()
{}

std::string GetInstanceSummaryReportByIntervalRequest::getInstanceId()const
{
	return instanceId_;
}

void GetInstanceSummaryReportByIntervalRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

int GetInstanceSummaryReportByIntervalRequest::getPageSize()const
{
	return pageSize_;
}

void GetInstanceSummaryReportByIntervalRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string GetInstanceSummaryReportByIntervalRequest::getEndTime()const
{
	return endTime_;
}

void GetInstanceSummaryReportByIntervalRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string GetInstanceSummaryReportByIntervalRequest::getInterval()const
{
	return interval_;
}

void GetInstanceSummaryReportByIntervalRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string GetInstanceSummaryReportByIntervalRequest::getStartTime()const
{
	return startTime_;
}

void GetInstanceSummaryReportByIntervalRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int GetInstanceSummaryReportByIntervalRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetInstanceSummaryReportByIntervalRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string GetInstanceSummaryReportByIntervalRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetInstanceSummaryReportByIntervalRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

