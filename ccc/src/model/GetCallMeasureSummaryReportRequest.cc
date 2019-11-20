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

#include <alibabacloud/ccc/model/GetCallMeasureSummaryReportRequest.h>

using AlibabaCloud::CCC::Model::GetCallMeasureSummaryReportRequest;

GetCallMeasureSummaryReportRequest::GetCallMeasureSummaryReportRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetCallMeasureSummaryReport")
{
	setMethod(HttpRequest::Method::Post);
}

GetCallMeasureSummaryReportRequest::~GetCallMeasureSummaryReportRequest()
{}

std::string GetCallMeasureSummaryReportRequest::getIntervalType()const
{
	return intervalType_;
}

void GetCallMeasureSummaryReportRequest::setIntervalType(const std::string& intervalType)
{
	intervalType_ = intervalType;
	setCoreParameter("IntervalType", intervalType);
}

int GetCallMeasureSummaryReportRequest::getYear()const
{
	return year_;
}

void GetCallMeasureSummaryReportRequest::setYear(int year)
{
	year_ = year;
	setCoreParameter("Year", std::to_string(year));
}

int GetCallMeasureSummaryReportRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetCallMeasureSummaryReportRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string GetCallMeasureSummaryReportRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetCallMeasureSummaryReportRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int GetCallMeasureSummaryReportRequest::getMonth()const
{
	return month_;
}

void GetCallMeasureSummaryReportRequest::setMonth(int month)
{
	month_ = month;
	setCoreParameter("Month", std::to_string(month));
}

int GetCallMeasureSummaryReportRequest::getPageSize()const
{
	return pageSize_;
}

void GetCallMeasureSummaryReportRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int GetCallMeasureSummaryReportRequest::getDay()const
{
	return day_;
}

void GetCallMeasureSummaryReportRequest::setDay(int day)
{
	day_ = day;
	setCoreParameter("Day", std::to_string(day));
}

