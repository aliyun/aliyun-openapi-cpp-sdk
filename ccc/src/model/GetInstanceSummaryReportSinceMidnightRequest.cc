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

#include <alibabacloud/ccc/model/GetInstanceSummaryReportSinceMidnightRequest.h>

using AlibabaCloud::CCC::Model::GetInstanceSummaryReportSinceMidnightRequest;

GetInstanceSummaryReportSinceMidnightRequest::GetInstanceSummaryReportSinceMidnightRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetInstanceSummaryReportSinceMidnight")
{}

GetInstanceSummaryReportSinceMidnightRequest::~GetInstanceSummaryReportSinceMidnightRequest()
{}

std::string GetInstanceSummaryReportSinceMidnightRequest::getInstanceId()const
{
	return instanceId_;
}

void GetInstanceSummaryReportSinceMidnightRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

int GetInstanceSummaryReportSinceMidnightRequest::getPageSize()const
{
	return pageSize_;
}

void GetInstanceSummaryReportSinceMidnightRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int GetInstanceSummaryReportSinceMidnightRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetInstanceSummaryReportSinceMidnightRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string GetInstanceSummaryReportSinceMidnightRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetInstanceSummaryReportSinceMidnightRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

