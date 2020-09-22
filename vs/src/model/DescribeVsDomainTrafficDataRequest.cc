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

#include <alibabacloud/vs/model/DescribeVsDomainTrafficDataRequest.h>

using AlibabaCloud::Vs::Model::DescribeVsDomainTrafficDataRequest;

DescribeVsDomainTrafficDataRequest::DescribeVsDomainTrafficDataRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeVsDomainTrafficData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVsDomainTrafficDataRequest::~DescribeVsDomainTrafficDataRequest()
{}

std::string DescribeVsDomainTrafficDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeVsDomainTrafficDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeVsDomainTrafficDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVsDomainTrafficDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeVsDomainTrafficDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeVsDomainTrafficDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeVsDomainTrafficDataRequest::getShowLog()const
{
	return showLog_;
}

void DescribeVsDomainTrafficDataRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeVsDomainTrafficDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVsDomainTrafficDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeVsDomainTrafficDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVsDomainTrafficDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeVsDomainTrafficDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVsDomainTrafficDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVsDomainTrafficDataRequest::getInterval()const
{
	return interval_;
}

void DescribeVsDomainTrafficDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

