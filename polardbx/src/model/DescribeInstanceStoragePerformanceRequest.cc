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

#include <alibabacloud/polardbx/model/DescribeInstanceStoragePerformanceRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeInstanceStoragePerformanceRequest;

DescribeInstanceStoragePerformanceRequest::DescribeInstanceStoragePerformanceRequest() :
	RpcServiceRequest("polardbx", "2020-02-02", "DescribeInstanceStoragePerformance")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInstanceStoragePerformanceRequest::~DescribeInstanceStoragePerformanceRequest()
{}

std::string DescribeInstanceStoragePerformanceRequest::getDbInstanceName()const
{
	return dbInstanceName_;
}

void DescribeInstanceStoragePerformanceRequest::setDbInstanceName(const std::string& dbInstanceName)
{
	dbInstanceName_ = dbInstanceName;
	setParameter("DbInstanceName", dbInstanceName);
}

std::string DescribeInstanceStoragePerformanceRequest::getStorageInstanceId()const
{
	return storageInstanceId_;
}

void DescribeInstanceStoragePerformanceRequest::setStorageInstanceId(const std::string& storageInstanceId)
{
	storageInstanceId_ = storageInstanceId;
	setParameter("StorageInstanceId", storageInstanceId);
}

std::string DescribeInstanceStoragePerformanceRequest::getKeys()const
{
	return keys_;
}

void DescribeInstanceStoragePerformanceRequest::setKeys(const std::string& keys)
{
	keys_ = keys;
	setParameter("Keys", keys);
}

std::string DescribeInstanceStoragePerformanceRequest::getEndTime()const
{
	return endTime_;
}

void DescribeInstanceStoragePerformanceRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeInstanceStoragePerformanceRequest::getStartTime()const
{
	return startTime_;
}

void DescribeInstanceStoragePerformanceRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeInstanceStoragePerformanceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceStoragePerformanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

