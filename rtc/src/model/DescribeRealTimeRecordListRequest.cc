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

#include <alibabacloud/rtc/model/DescribeRealTimeRecordListRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRealTimeRecordListRequest;

DescribeRealTimeRecordListRequest::DescribeRealTimeRecordListRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRealTimeRecordList")
{}

DescribeRealTimeRecordListRequest::~DescribeRealTimeRecordListRequest()
{}

std::string DescribeRealTimeRecordListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRealTimeRecordListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeRealTimeRecordListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRealTimeRecordListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeRealTimeRecordListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRealTimeRecordListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

