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

#include <alibabacloud/vs/model/DescribeVsDomainPvDataRequest.h>

using AlibabaCloud::Vs::Model::DescribeVsDomainPvDataRequest;

DescribeVsDomainPvDataRequest::DescribeVsDomainPvDataRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeVsDomainPvData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVsDomainPvDataRequest::~DescribeVsDomainPvDataRequest()
{}

std::string DescribeVsDomainPvDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVsDomainPvDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeVsDomainPvDataRequest::getShowLog()const
{
	return showLog_;
}

void DescribeVsDomainPvDataRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DescribeVsDomainPvDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVsDomainPvDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeVsDomainPvDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVsDomainPvDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeVsDomainPvDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVsDomainPvDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

