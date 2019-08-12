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

#include <alibabacloud/cdn/model/DescribeLiveStreamsPublishListRequest.h>

using AlibabaCloud::Cdn::Model::DescribeLiveStreamsPublishListRequest;

DescribeLiveStreamsPublishListRequest::DescribeLiveStreamsPublishListRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeLiveStreamsPublishList")
{}

DescribeLiveStreamsPublishListRequest::~DescribeLiveStreamsPublishListRequest()
{}

std::string DescribeLiveStreamsPublishListRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamsPublishListRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", std::to_string(appName));
}

std::string DescribeLiveStreamsPublishListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamsPublishListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeLiveStreamsPublishListRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamsPublishListRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

long DescribeLiveStreamsPublishListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLiveStreamsPublishListRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeLiveStreamsPublishListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamsPublishListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeLiveStreamsPublishListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamsPublishListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeLiveStreamsPublishListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamsPublishListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeLiveStreamsPublishListRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamsPublishListRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", std::to_string(streamName));
}

long DescribeLiveStreamsPublishListRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLiveStreamsPublishListRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

