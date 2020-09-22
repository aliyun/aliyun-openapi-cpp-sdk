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

#include <alibabacloud/vs/model/DescribeRecordsRequest.h>

using AlibabaCloud::Vs::Model::DescribeRecordsRequest;

DescribeRecordsRequest::DescribeRecordsRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeRecords")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRecordsRequest::~DescribeRecordsRequest()
{}

std::string DescribeRecordsRequest::getSortDirection()const
{
	return sortDirection_;
}

void DescribeRecordsRequest::setSortDirection(const std::string& sortDirection)
{
	sortDirection_ = sortDirection;
	setParameter("SortDirection", sortDirection);
}

std::string DescribeRecordsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRecordsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeRecordsRequest::getType()const
{
	return type_;
}

void DescribeRecordsRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

long DescribeRecordsRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeRecordsRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

bool DescribeRecordsRequest::getPrivateBucket()const
{
	return privateBucket_;
}

void DescribeRecordsRequest::setPrivateBucket(bool privateBucket)
{
	privateBucket_ = privateBucket;
	setParameter("PrivateBucket", privateBucket ? "true" : "false");
}

long DescribeRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRecordsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRecordsRequest::getShowLog()const
{
	return showLog_;
}

void DescribeRecordsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeRecordsRequest::getStreamId()const
{
	return streamId_;
}

void DescribeRecordsRequest::setStreamId(const std::string& streamId)
{
	streamId_ = streamId;
	setParameter("StreamId", streamId);
}

std::string DescribeRecordsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRecordsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeRecordsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRecordsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRecordsRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeRecordsRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

