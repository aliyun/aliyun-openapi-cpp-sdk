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

#include <alibabacloud/push/model/QueryUniqueDeviceStatRequest.h>

using AlibabaCloud::Push::Model::QueryUniqueDeviceStatRequest;

QueryUniqueDeviceStatRequest::QueryUniqueDeviceStatRequest() :
	RpcServiceRequest("push", "2016-08-01", "QueryUniqueDeviceStat")
{}

QueryUniqueDeviceStatRequest::~QueryUniqueDeviceStatRequest()
{}

std::string QueryUniqueDeviceStatRequest::getGranularity()const
{
	return granularity_;
}

void QueryUniqueDeviceStatRequest::setGranularity(const std::string& granularity)
{
	granularity_ = granularity;
	setCoreParameter("Granularity", std::to_string(granularity));
}

std::string QueryUniqueDeviceStatRequest::getEndTime()const
{
	return endTime_;
}

void QueryUniqueDeviceStatRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

long QueryUniqueDeviceStatRequest::getAppKey()const
{
	return appKey_;
}

void QueryUniqueDeviceStatRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setCoreParameter("AppKey", appKey);
}

std::string QueryUniqueDeviceStatRequest::getStartTime()const
{
	return startTime_;
}

void QueryUniqueDeviceStatRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string QueryUniqueDeviceStatRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryUniqueDeviceStatRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

