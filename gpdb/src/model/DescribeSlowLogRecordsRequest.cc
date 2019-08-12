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

#include <alibabacloud/gpdb/model/DescribeSlowLogRecordsRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeSlowLogRecordsRequest;

DescribeSlowLogRecordsRequest::DescribeSlowLogRecordsRequest() :
	RpcServiceRequest("gpdb", "2016-05-03", "DescribeSlowLogRecords")
{}

DescribeSlowLogRecordsRequest::~DescribeSlowLogRecordsRequest()
{}

long DescribeSlowLogRecordsRequest::getSQLId()const
{
	return sQLId_;
}

void DescribeSlowLogRecordsRequest::setSQLId(long sQLId)
{
	sQLId_ = sQLId;
	setCoreParameter("SQLId", sQLId);
}

std::string DescribeSlowLogRecordsRequest::getDBName()const
{
	return dBName_;
}

void DescribeSlowLogRecordsRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setCoreParameter("DBName", std::to_string(dBName));
}

int DescribeSlowLogRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSlowLogRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeSlowLogRecordsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSlowLogRecordsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeSlowLogRecordsRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSlowLogRecordsRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string DescribeSlowLogRecordsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSlowLogRecordsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

int DescribeSlowLogRecordsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSlowLogRecordsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeSlowLogRecordsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSlowLogRecordsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

