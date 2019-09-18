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

#include <alibabacloud/rtc/model/DescribeRecordDetailRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRecordDetailRequest;

DescribeRecordDetailRequest::DescribeRecordDetailRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRecordDetail")
{}

DescribeRecordDetailRequest::~DescribeRecordDetailRequest()
{}

std::string DescribeRecordDetailRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRecordDetailRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeRecordDetailRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRecordDetailRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeRecordDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRecordDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRecordDetailRequest::getRecordId()const
{
	return recordId_;
}

void DescribeRecordDetailRequest::setRecordId(const std::string& recordId)
{
	recordId_ = recordId;
	setCoreParameter("RecordId", recordId);
}

std::string DescribeRecordDetailRequest::getAppId()const
{
	return appId_;
}

void DescribeRecordDetailRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string DescribeRecordDetailRequest::getChannelId()const
{
	return channelId_;
}

void DescribeRecordDetailRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", channelId);
}

