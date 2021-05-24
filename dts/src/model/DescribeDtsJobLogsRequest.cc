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

#include <alibabacloud/dts/model/DescribeDtsJobLogsRequest.h>

using AlibabaCloud::Dts::Model::DescribeDtsJobLogsRequest;

DescribeDtsJobLogsRequest::DescribeDtsJobLogsRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DescribeDtsJobLogs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDtsJobLogsRequest::~DescribeDtsJobLogsRequest()
{}

long DescribeDtsJobLogsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDtsJobLogsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long DescribeDtsJobLogsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDtsJobLogsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string DescribeDtsJobLogsRequest::getType()const
{
	return type_;
}

void DescribeDtsJobLogsRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

int DescribeDtsJobLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDtsJobLogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDtsJobLogsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDtsJobLogsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeDtsJobLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDtsJobLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDtsJobLogsRequest::getDtsJobId()const
{
	return dtsJobId_;
}

void DescribeDtsJobLogsRequest::setDtsJobId(const std::string& dtsJobId)
{
	dtsJobId_ = dtsJobId;
	setParameter("DtsJobId", dtsJobId);
}

std::string DescribeDtsJobLogsRequest::getStatus()const
{
	return status_;
}

void DescribeDtsJobLogsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

