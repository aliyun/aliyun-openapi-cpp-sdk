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

#include <alibabacloud/rds/model/DescribeDBInstanceNetworkDetailRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceNetworkDetailRequest::DescribeDBInstanceNetworkDetailRequest() :
	RdsRequest("DescribeDBInstanceNetworkDetail")
{}

DescribeDBInstanceNetworkDetailRequest::~DescribeDBInstanceNetworkDetailRequest()
{}

std::string DescribeDBInstanceNetworkDetailRequest::getEndPoint()const
{
	return endPoint_;
}

void DescribeDBInstanceNetworkDetailRequest::setEndPoint(const std::string& endPoint)
{
	endPoint_ = endPoint;
	setParameter("EndPoint", endPoint);
}

std::string DescribeDBInstanceNetworkDetailRequest::getStartPoint()const
{
	return startPoint_;
}

void DescribeDBInstanceNetworkDetailRequest::setStartPoint(const std::string& startPoint)
{
	startPoint_ = startPoint;
	setParameter("StartPoint", startPoint);
}

std::string DescribeDBInstanceNetworkDetailRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDBInstanceNetworkDetailRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDBInstanceNetworkDetailRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstanceNetworkDetailRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeDBInstanceNetworkDetailRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDBInstanceNetworkDetailRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDBInstanceNetworkDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstanceNetworkDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

