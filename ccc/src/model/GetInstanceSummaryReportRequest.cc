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

#include <alibabacloud/ccc/model/GetInstanceSummaryReportRequest.h>

using AlibabaCloud::CCC::Model::GetInstanceSummaryReportRequest;

GetInstanceSummaryReportRequest::GetInstanceSummaryReportRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetInstanceSummaryReport")
{}

GetInstanceSummaryReportRequest::~GetInstanceSummaryReportRequest()
{}

std::string GetInstanceSummaryReportRequest::getInstanceId()const
{
	return instanceId_;
}

void GetInstanceSummaryReportRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

int GetInstanceSummaryReportRequest::getPageSize()const
{
	return pageSize_;
}

void GetInstanceSummaryReportRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string GetInstanceSummaryReportRequest::getEndTime()const
{
	return endTime_;
}

void GetInstanceSummaryReportRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string GetInstanceSummaryReportRequest::getStartTime()const
{
	return startTime_;
}

void GetInstanceSummaryReportRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

int GetInstanceSummaryReportRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetInstanceSummaryReportRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string GetInstanceSummaryReportRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetInstanceSummaryReportRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

