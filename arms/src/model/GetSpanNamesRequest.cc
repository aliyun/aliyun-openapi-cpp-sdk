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

#include <alibabacloud/arms/model/GetSpanNamesRequest.h>

using AlibabaCloud::ARMS::Model::GetSpanNamesRequest;

GetSpanNamesRequest::GetSpanNamesRequest() :
	RpcServiceRequest("arms", "2019-02-19", "GetSpanNames")
{}

GetSpanNamesRequest::~GetSpanNamesRequest()
{}

std::string GetSpanNamesRequest::getRegionId()const
{
	return regionId_;
}

void GetSpanNamesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long GetSpanNamesRequest::getEndTime()const
{
	return endTime_;
}

void GetSpanNamesRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string GetSpanNamesRequest::getServiceName()const
{
	return serviceName_;
}

void GetSpanNamesRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

long GetSpanNamesRequest::getStartTime()const
{
	return startTime_;
}

void GetSpanNamesRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

