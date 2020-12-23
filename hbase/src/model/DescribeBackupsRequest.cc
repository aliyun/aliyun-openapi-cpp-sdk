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

#include <alibabacloud/hbase/model/DescribeBackupsRequest.h>

using AlibabaCloud::HBase::Model::DescribeBackupsRequest;

DescribeBackupsRequest::DescribeBackupsRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "DescribeBackups")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeBackupsRequest::~DescribeBackupsRequest()
{}

std::string DescribeBackupsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeBackupsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeBackupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBackupsRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", pageNumber);
}

std::string DescribeBackupsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBackupsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string DescribeBackupsRequest::getStartTimeUTC()const
{
	return startTimeUTC_;
}

void DescribeBackupsRequest::setStartTimeUTC(const std::string& startTimeUTC)
{
	startTimeUTC_ = startTimeUTC;
	setParameter("StartTimeUTC", startTimeUTC);
}

std::string DescribeBackupsRequest::getBackupId()const
{
	return backupId_;
}

void DescribeBackupsRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setParameter("BackupId", backupId);
}

std::string DescribeBackupsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeBackupsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeBackupsRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeBackupsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DescribeBackupsRequest::getEndTimeUTC()const
{
	return endTimeUTC_;
}

void DescribeBackupsRequest::setEndTimeUTC(const std::string& endTimeUTC)
{
	endTimeUTC_ = endTimeUTC;
	setParameter("EndTimeUTC", endTimeUTC);
}

