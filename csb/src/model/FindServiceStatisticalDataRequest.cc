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

#include <alibabacloud/csb/model/FindServiceStatisticalDataRequest.h>

using AlibabaCloud::CSB::Model::FindServiceStatisticalDataRequest;

FindServiceStatisticalDataRequest::FindServiceStatisticalDataRequest() :
	RpcServiceRequest("csb", "2017-11-18", "FindServiceStatisticalData")
{}

FindServiceStatisticalDataRequest::~FindServiceStatisticalDataRequest()
{}

long FindServiceStatisticalDataRequest::getCsbId()const
{
	return csbId_;
}

void FindServiceStatisticalDataRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setCoreParameter("CsbId", csbId);
}

std::string FindServiceStatisticalDataRequest::getRegionId()const
{
	return regionId_;
}

void FindServiceStatisticalDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long FindServiceStatisticalDataRequest::getEndTime()const
{
	return endTime_;
}

void FindServiceStatisticalDataRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string FindServiceStatisticalDataRequest::getServiceName()const
{
	return serviceName_;
}

void FindServiceStatisticalDataRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

long FindServiceStatisticalDataRequest::getStartTime()const
{
	return startTime_;
}

void FindServiceStatisticalDataRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

