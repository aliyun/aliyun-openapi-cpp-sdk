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

#include <alibabacloud/vs/model/DescribeVsDomainBpsDataRequest.h>

using AlibabaCloud::Vs::Model::DescribeVsDomainBpsDataRequest;

DescribeVsDomainBpsDataRequest::DescribeVsDomainBpsDataRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeVsDomainBpsData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVsDomainBpsDataRequest::~DescribeVsDomainBpsDataRequest()
{}

std::string DescribeVsDomainBpsDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeVsDomainBpsDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeVsDomainBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVsDomainBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeVsDomainBpsDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeVsDomainBpsDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeVsDomainBpsDataRequest::getShowLog()const
{
	return showLog_;
}

void DescribeVsDomainBpsDataRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeVsDomainBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVsDomainBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeVsDomainBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVsDomainBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeVsDomainBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVsDomainBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVsDomainBpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeVsDomainBpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

