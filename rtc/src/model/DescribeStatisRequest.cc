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

#include <alibabacloud/rtc/model/DescribeStatisRequest.h>

using AlibabaCloud::Rtc::Model::DescribeStatisRequest;

DescribeStatisRequest::DescribeStatisRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeStatis")
{}

DescribeStatisRequest::~DescribeStatisRequest()
{}

std::string DescribeStatisRequest::getSortType()const
{
	return sortType_;
}

void DescribeStatisRequest::setSortType(const std::string& sortType)
{
	sortType_ = sortType;
	setCoreParameter("SortType", sortType);
}

std::string DescribeStatisRequest::getStartTime()const
{
	return startTime_;
}

void DescribeStatisRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeStatisRequest::getDataType()const
{
	return dataType_;
}

void DescribeStatisRequest::setDataType(const std::string& dataType)
{
	dataType_ = dataType;
	setCoreParameter("DataType", dataType);
}

std::string DescribeStatisRequest::getServiceArea()const
{
	return serviceArea_;
}

void DescribeStatisRequest::setServiceArea(const std::string& serviceArea)
{
	serviceArea_ = serviceArea;
	setCoreParameter("ServiceArea", serviceArea);
}

std::string DescribeStatisRequest::getEndTime()const
{
	return endTime_;
}

void DescribeStatisRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeStatisRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeStatisRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeStatisRequest::getAppId()const
{
	return appId_;
}

void DescribeStatisRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string DescribeStatisRequest::getInterval()const
{
	return interval_;
}

void DescribeStatisRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

