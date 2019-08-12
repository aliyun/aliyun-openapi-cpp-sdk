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

#include <alibabacloud/arms/model/GetTagValRequest.h>

using AlibabaCloud::ARMS::Model::GetTagValRequest;

GetTagValRequest::GetTagValRequest() :
	RpcServiceRequest("arms", "2019-02-19", "GetTagVal")
{}

GetTagValRequest::~GetTagValRequest()
{}

std::string GetTagValRequest::getRegionId()const
{
	return regionId_;
}

void GetTagValRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

long GetTagValRequest::getEndTime()const
{
	return endTime_;
}

void GetTagValRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string GetTagValRequest::getServiceName()const
{
	return serviceName_;
}

void GetTagValRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", std::to_string(serviceName));
}

long GetTagValRequest::getStartTime()const
{
	return startTime_;
}

void GetTagValRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string GetTagValRequest::getTagKey()const
{
	return tagKey_;
}

void GetTagValRequest::setTagKey(const std::string& tagKey)
{
	tagKey_ = tagKey;
	setCoreParameter("TagKey", std::to_string(tagKey));
}

std::string GetTagValRequest::getSpanName()const
{
	return spanName_;
}

void GetTagValRequest::setSpanName(const std::string& spanName)
{
	spanName_ = spanName;
	setCoreParameter("SpanName", std::to_string(spanName));
}

