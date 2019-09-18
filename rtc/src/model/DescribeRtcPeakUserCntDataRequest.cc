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

#include <alibabacloud/rtc/model/DescribeRtcPeakUserCntDataRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRtcPeakUserCntDataRequest;

DescribeRtcPeakUserCntDataRequest::DescribeRtcPeakUserCntDataRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRtcPeakUserCntData")
{}

DescribeRtcPeakUserCntDataRequest::~DescribeRtcPeakUserCntDataRequest()
{}

std::string DescribeRtcPeakUserCntDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRtcPeakUserCntDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeRtcPeakUserCntDataRequest::getServiceArea()const
{
	return serviceArea_;
}

void DescribeRtcPeakUserCntDataRequest::setServiceArea(const std::string& serviceArea)
{
	serviceArea_ = serviceArea;
	setCoreParameter("ServiceArea", serviceArea);
}

std::string DescribeRtcPeakUserCntDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRtcPeakUserCntDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeRtcPeakUserCntDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRtcPeakUserCntDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRtcPeakUserCntDataRequest::getAppId()const
{
	return appId_;
}

void DescribeRtcPeakUserCntDataRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string DescribeRtcPeakUserCntDataRequest::getInterval()const
{
	return interval_;
}

void DescribeRtcPeakUserCntDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

