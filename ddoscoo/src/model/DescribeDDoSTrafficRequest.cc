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

#include <alibabacloud/ddoscoo/model/DescribeDDoSTrafficRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeDDoSTrafficRequest;

DescribeDDoSTrafficRequest::DescribeDDoSTrafficRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "DescribeDDoSTraffic")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDDoSTrafficRequest::~DescribeDDoSTrafficRequest()
{}

long DescribeDDoSTrafficRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDDoSTrafficRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string DescribeDDoSTrafficRequest::getEip()const
{
	return eip_;
}

void DescribeDDoSTrafficRequest::setEip(const std::string& eip)
{
	eip_ = eip;
	setParameter("Eip", eip);
}

std::string DescribeDDoSTrafficRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDDoSTrafficRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeDDoSTrafficRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDDoSTrafficRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long DescribeDDoSTrafficRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDDoSTrafficRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

int DescribeDDoSTrafficRequest::getInterval()const
{
	return interval_;
}

void DescribeDDoSTrafficRequest::setInterval(int interval)
{
	interval_ = interval;
	setParameter("Interval", std::to_string(interval));
}

