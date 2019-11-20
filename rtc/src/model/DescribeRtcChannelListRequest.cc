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

#include <alibabacloud/rtc/model/DescribeRtcChannelListRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRtcChannelListRequest;

DescribeRtcChannelListRequest::DescribeRtcChannelListRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRtcChannelList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRtcChannelListRequest::~DescribeRtcChannelListRequest()
{}

std::string DescribeRtcChannelListRequest::getSortType()const
{
	return sortType_;
}

void DescribeRtcChannelListRequest::setSortType(const std::string& sortType)
{
	sortType_ = sortType;
	setCoreParameter("SortType", sortType);
}

std::string DescribeRtcChannelListRequest::getUserId()const
{
	return userId_;
}

void DescribeRtcChannelListRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

std::string DescribeRtcChannelListRequest::getServiceArea()const
{
	return serviceArea_;
}

void DescribeRtcChannelListRequest::setServiceArea(const std::string& serviceArea)
{
	serviceArea_ = serviceArea;
	setCoreParameter("ServiceArea", serviceArea);
}

long DescribeRtcChannelListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRtcChannelListRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long DescribeRtcChannelListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRtcChannelListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

long DescribeRtcChannelListRequest::getPageNo()const
{
	return pageNo_;
}

void DescribeRtcChannelListRequest::setPageNo(long pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", std::to_string(pageNo));
}

std::string DescribeRtcChannelListRequest::getAppId()const
{
	return appId_;
}

void DescribeRtcChannelListRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string DescribeRtcChannelListRequest::getChannelId()const
{
	return channelId_;
}

void DescribeRtcChannelListRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", channelId);
}

std::string DescribeRtcChannelListRequest::getTimePoint()const
{
	return timePoint_;
}

void DescribeRtcChannelListRequest::setTimePoint(const std::string& timePoint)
{
	timePoint_ = timePoint;
	setCoreParameter("TimePoint", timePoint);
}

