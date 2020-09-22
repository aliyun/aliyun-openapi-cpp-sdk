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

#include <alibabacloud/vs/model/DescribeVsDomainReqTrafficDataRequest.h>

using AlibabaCloud::Vs::Model::DescribeVsDomainReqTrafficDataRequest;

DescribeVsDomainReqTrafficDataRequest::DescribeVsDomainReqTrafficDataRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeVsDomainReqTrafficData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVsDomainReqTrafficDataRequest::~DescribeVsDomainReqTrafficDataRequest()
{}

std::string DescribeVsDomainReqTrafficDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeVsDomainReqTrafficDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeVsDomainReqTrafficDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVsDomainReqTrafficDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeVsDomainReqTrafficDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeVsDomainReqTrafficDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeVsDomainReqTrafficDataRequest::getShowLog()const
{
	return showLog_;
}

void DescribeVsDomainReqTrafficDataRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeVsDomainReqTrafficDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVsDomainReqTrafficDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeVsDomainReqTrafficDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVsDomainReqTrafficDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeVsDomainReqTrafficDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVsDomainReqTrafficDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVsDomainReqTrafficDataRequest::getInterval()const
{
	return interval_;
}

void DescribeVsDomainReqTrafficDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

