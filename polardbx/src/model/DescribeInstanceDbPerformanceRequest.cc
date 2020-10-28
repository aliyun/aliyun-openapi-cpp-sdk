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

#include <alibabacloud/polardbx/model/DescribeInstanceDbPerformanceRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeInstanceDbPerformanceRequest;

DescribeInstanceDbPerformanceRequest::DescribeInstanceDbPerformanceRequest() :
	RpcServiceRequest("polardbx", "2020-02-02", "DescribeInstanceDbPerformance")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInstanceDbPerformanceRequest::~DescribeInstanceDbPerformanceRequest()
{}

std::string DescribeInstanceDbPerformanceRequest::getDbInstanceName()const
{
	return dbInstanceName_;
}

void DescribeInstanceDbPerformanceRequest::setDbInstanceName(const std::string& dbInstanceName)
{
	dbInstanceName_ = dbInstanceName;
	setParameter("DbInstanceName", dbInstanceName);
}

std::string DescribeInstanceDbPerformanceRequest::getKeys()const
{
	return keys_;
}

void DescribeInstanceDbPerformanceRequest::setKeys(const std::string& keys)
{
	keys_ = keys;
	setParameter("Keys", keys);
}

std::string DescribeInstanceDbPerformanceRequest::getEndTime()const
{
	return endTime_;
}

void DescribeInstanceDbPerformanceRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeInstanceDbPerformanceRequest::getStartTime()const
{
	return startTime_;
}

void DescribeInstanceDbPerformanceRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeInstanceDbPerformanceRequest::getDbName()const
{
	return dbName_;
}

void DescribeInstanceDbPerformanceRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string DescribeInstanceDbPerformanceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceDbPerformanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

