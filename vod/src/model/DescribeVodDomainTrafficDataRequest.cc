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

#include <alibabacloud/vod/model/DescribeVodDomainTrafficDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainTrafficDataRequest;

DescribeVodDomainTrafficDataRequest::DescribeVodDomainTrafficDataRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainTrafficData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVodDomainTrafficDataRequest::~DescribeVodDomainTrafficDataRequest()
{}

std::string DescribeVodDomainTrafficDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeVodDomainTrafficDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeVodDomainTrafficDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVodDomainTrafficDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeVodDomainTrafficDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeVodDomainTrafficDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeVodDomainTrafficDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVodDomainTrafficDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeVodDomainTrafficDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVodDomainTrafficDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeVodDomainTrafficDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodDomainTrafficDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVodDomainTrafficDataRequest::getInterval()const
{
	return interval_;
}

void DescribeVodDomainTrafficDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

