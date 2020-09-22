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

#include <alibabacloud/vs/model/DescribeVsStreamsPublishListRequest.h>

using AlibabaCloud::Vs::Model::DescribeVsStreamsPublishListRequest;

DescribeVsStreamsPublishListRequest::DescribeVsStreamsPublishListRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeVsStreamsPublishList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVsStreamsPublishListRequest::~DescribeVsStreamsPublishListRequest()
{}

std::string DescribeVsStreamsPublishListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVsStreamsPublishListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

int DescribeVsStreamsPublishListRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVsStreamsPublishListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeVsStreamsPublishListRequest::getAppName()const
{
	return appName_;
}

void DescribeVsStreamsPublishListRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

int DescribeVsStreamsPublishListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVsStreamsPublishListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVsStreamsPublishListRequest::getStreamName()const
{
	return streamName_;
}

void DescribeVsStreamsPublishListRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string DescribeVsStreamsPublishListRequest::getQueryType()const
{
	return queryType_;
}

void DescribeVsStreamsPublishListRequest::setQueryType(const std::string& queryType)
{
	queryType_ = queryType;
	setParameter("QueryType", queryType);
}

std::string DescribeVsStreamsPublishListRequest::getShowLog()const
{
	return showLog_;
}

void DescribeVsStreamsPublishListRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeVsStreamsPublishListRequest::getStreamType()const
{
	return streamType_;
}

void DescribeVsStreamsPublishListRequest::setStreamType(const std::string& streamType)
{
	streamType_ = streamType;
	setParameter("StreamType", streamType);
}

std::string DescribeVsStreamsPublishListRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVsStreamsPublishListRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeVsStreamsPublishListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVsStreamsPublishListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeVsStreamsPublishListRequest::getOrderBy()const
{
	return orderBy_;
}

void DescribeVsStreamsPublishListRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setParameter("OrderBy", orderBy);
}

long DescribeVsStreamsPublishListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVsStreamsPublishListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

