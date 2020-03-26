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

#include <alibabacloud/xtrace/model/ListIpOrHostsRequest.h>

using AlibabaCloud::Xtrace::Model::ListIpOrHostsRequest;

ListIpOrHostsRequest::ListIpOrHostsRequest() :
	RpcServiceRequest("xtrace", "2019-08-08", "ListIpOrHosts")
{
	setMethod(HttpRequest::Method::Post);
}

ListIpOrHostsRequest::~ListIpOrHostsRequest()
{}

std::string ListIpOrHostsRequest::getRegionId()const
{
	return regionId_;
}

void ListIpOrHostsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

long ListIpOrHostsRequest::getEndTime()const
{
	return endTime_;
}

void ListIpOrHostsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string ListIpOrHostsRequest::getServiceName()const
{
	return serviceName_;
}

void ListIpOrHostsRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

long ListIpOrHostsRequest::getStartTime()const
{
	return startTime_;
}

void ListIpOrHostsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

