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

#include <alibabacloud/polardbx/model/DescribeInstancePerformanceRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeInstancePerformanceRequest;

DescribeInstancePerformanceRequest::DescribeInstancePerformanceRequest() :
	RpcServiceRequest("polardbx", "2020-02-02", "DescribeInstancePerformance")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInstancePerformanceRequest::~DescribeInstancePerformanceRequest()
{}

std::string DescribeInstancePerformanceRequest::getDbInstanceName()const
{
	return dbInstanceName_;
}

void DescribeInstancePerformanceRequest::setDbInstanceName(const std::string& dbInstanceName)
{
	dbInstanceName_ = dbInstanceName;
	setParameter("DbInstanceName", dbInstanceName);
}

std::string DescribeInstancePerformanceRequest::getKeys()const
{
	return keys_;
}

void DescribeInstancePerformanceRequest::setKeys(const std::string& keys)
{
	keys_ = keys;
	setParameter("Keys", keys);
}

std::string DescribeInstancePerformanceRequest::getEndTime()const
{
	return endTime_;
}

void DescribeInstancePerformanceRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeInstancePerformanceRequest::getStartTime()const
{
	return startTime_;
}

void DescribeInstancePerformanceRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeInstancePerformanceRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeInstancePerformanceRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setParameter("NodeId", nodeId);
}

