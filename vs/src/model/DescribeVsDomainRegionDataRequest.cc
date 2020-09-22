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

#include <alibabacloud/vs/model/DescribeVsDomainRegionDataRequest.h>

using AlibabaCloud::Vs::Model::DescribeVsDomainRegionDataRequest;

DescribeVsDomainRegionDataRequest::DescribeVsDomainRegionDataRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeVsDomainRegionData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVsDomainRegionDataRequest::~DescribeVsDomainRegionDataRequest()
{}

std::string DescribeVsDomainRegionDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVsDomainRegionDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeVsDomainRegionDataRequest::getShowLog()const
{
	return showLog_;
}

void DescribeVsDomainRegionDataRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeVsDomainRegionDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVsDomainRegionDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeVsDomainRegionDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVsDomainRegionDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeVsDomainRegionDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVsDomainRegionDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

