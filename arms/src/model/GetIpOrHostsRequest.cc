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

#include <alibabacloud/arms/model/GetIpOrHostsRequest.h>

using AlibabaCloud::ARMS::Model::GetIpOrHostsRequest;

GetIpOrHostsRequest::GetIpOrHostsRequest() :
	RpcServiceRequest("arms", "2019-02-19", "GetIpOrHosts")
{}

GetIpOrHostsRequest::~GetIpOrHostsRequest()
{}

std::string GetIpOrHostsRequest::getRegionId()const
{
	return regionId_;
}

void GetIpOrHostsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long GetIpOrHostsRequest::getEndTime()const
{
	return endTime_;
}

void GetIpOrHostsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string GetIpOrHostsRequest::getServiceName()const
{
	return serviceName_;
}

void GetIpOrHostsRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

long GetIpOrHostsRequest::getStartTime()const
{
	return startTime_;
}

void GetIpOrHostsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

