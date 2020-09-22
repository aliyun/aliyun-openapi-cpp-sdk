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

#include <alibabacloud/vs/model/DescribeVsDomainReqBpsDataRequest.h>

using AlibabaCloud::Vs::Model::DescribeVsDomainReqBpsDataRequest;

DescribeVsDomainReqBpsDataRequest::DescribeVsDomainReqBpsDataRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeVsDomainReqBpsData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVsDomainReqBpsDataRequest::~DescribeVsDomainReqBpsDataRequest()
{}

std::string DescribeVsDomainReqBpsDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeVsDomainReqBpsDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeVsDomainReqBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVsDomainReqBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeVsDomainReqBpsDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeVsDomainReqBpsDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeVsDomainReqBpsDataRequest::getShowLog()const
{
	return showLog_;
}

void DescribeVsDomainReqBpsDataRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeVsDomainReqBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVsDomainReqBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeVsDomainReqBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVsDomainReqBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeVsDomainReqBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVsDomainReqBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVsDomainReqBpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeVsDomainReqBpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

