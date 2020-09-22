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

#include <alibabacloud/vs/model/DescribeVsStreamsOnlineListRequest.h>

using AlibabaCloud::Vs::Model::DescribeVsStreamsOnlineListRequest;

DescribeVsStreamsOnlineListRequest::DescribeVsStreamsOnlineListRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeVsStreamsOnlineList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVsStreamsOnlineListRequest::~DescribeVsStreamsOnlineListRequest()
{}

std::string DescribeVsStreamsOnlineListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVsStreamsOnlineListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

int DescribeVsStreamsOnlineListRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeVsStreamsOnlineListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeVsStreamsOnlineListRequest::getAppName()const
{
	return appName_;
}

void DescribeVsStreamsOnlineListRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

int DescribeVsStreamsOnlineListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVsStreamsOnlineListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVsStreamsOnlineListRequest::getStreamName()const
{
	return streamName_;
}

void DescribeVsStreamsOnlineListRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string DescribeVsStreamsOnlineListRequest::getQueryType()const
{
	return queryType_;
}

void DescribeVsStreamsOnlineListRequest::setQueryType(const std::string& queryType)
{
	queryType_ = queryType;
	setParameter("QueryType", queryType);
}

std::string DescribeVsStreamsOnlineListRequest::getShowLog()const
{
	return showLog_;
}

void DescribeVsStreamsOnlineListRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeVsStreamsOnlineListRequest::getStreamType()const
{
	return streamType_;
}

void DescribeVsStreamsOnlineListRequest::setStreamType(const std::string& streamType)
{
	streamType_ = streamType;
	setParameter("StreamType", streamType);
}

std::string DescribeVsStreamsOnlineListRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVsStreamsOnlineListRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeVsStreamsOnlineListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVsStreamsOnlineListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeVsStreamsOnlineListRequest::getOrderBy()const
{
	return orderBy_;
}

void DescribeVsStreamsOnlineListRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setParameter("OrderBy", orderBy);
}

long DescribeVsStreamsOnlineListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVsStreamsOnlineListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

