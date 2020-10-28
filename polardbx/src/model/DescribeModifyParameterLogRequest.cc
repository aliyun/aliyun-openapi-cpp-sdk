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

#include <alibabacloud/polardbx/model/DescribeModifyParameterLogRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeModifyParameterLogRequest;

DescribeModifyParameterLogRequest::DescribeModifyParameterLogRequest() :
	RpcServiceRequest("polardbx", "2020-02-02", "DescribeModifyParameterLog")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeModifyParameterLogRequest::~DescribeModifyParameterLogRequest()
{}

std::string DescribeModifyParameterLogRequest::getStartTime()const
{
	return startTime_;
}

void DescribeModifyParameterLogRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeModifyParameterLogRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeModifyParameterLogRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", pageNumber);
}

std::string DescribeModifyParameterLogRequest::getRegionId()const
{
	return regionId_;
}

void DescribeModifyParameterLogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeModifyParameterLogRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeModifyParameterLogRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string DescribeModifyParameterLogRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeModifyParameterLogRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeModifyParameterLogRequest::getParamLevel()const
{
	return paramLevel_;
}

void DescribeModifyParameterLogRequest::setParamLevel(const std::string& paramLevel)
{
	paramLevel_ = paramLevel;
	setParameter("ParamLevel", paramLevel);
}

std::string DescribeModifyParameterLogRequest::getEndTime()const
{
	return endTime_;
}

void DescribeModifyParameterLogRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

