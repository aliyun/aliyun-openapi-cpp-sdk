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

#include <alibabacloud/rtc/model/DescribeRtcChannelCntDataRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRtcChannelCntDataRequest;

DescribeRtcChannelCntDataRequest::DescribeRtcChannelCntDataRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRtcChannelCntData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRtcChannelCntDataRequest::~DescribeRtcChannelCntDataRequest()
{}

std::string DescribeRtcChannelCntDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRtcChannelCntDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeRtcChannelCntDataRequest::getServiceArea()const
{
	return serviceArea_;
}

void DescribeRtcChannelCntDataRequest::setServiceArea(const std::string& serviceArea)
{
	serviceArea_ = serviceArea;
	setCoreParameter("ServiceArea", serviceArea);
}

std::string DescribeRtcChannelCntDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRtcChannelCntDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeRtcChannelCntDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRtcChannelCntDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRtcChannelCntDataRequest::getAppId()const
{
	return appId_;
}

void DescribeRtcChannelCntDataRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string DescribeRtcChannelCntDataRequest::getInterval()const
{
	return interval_;
}

void DescribeRtcChannelCntDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

