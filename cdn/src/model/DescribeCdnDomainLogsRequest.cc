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

#include <alibabacloud/cdn/model/DescribeCdnDomainLogsRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnDomainLogsRequest;

DescribeCdnDomainLogsRequest::DescribeCdnDomainLogsRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeCdnDomainLogs")
{}

DescribeCdnDomainLogsRequest::~DescribeCdnDomainLogsRequest()
{}

std::string DescribeCdnDomainLogsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCdnDomainLogsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeCdnDomainLogsRequest::getDomainName()const
{
	return domainName_;
}

void DescribeCdnDomainLogsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

long DescribeCdnDomainLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCdnDomainLogsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeCdnDomainLogsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeCdnDomainLogsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeCdnDomainLogsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeCdnDomainLogsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeCdnDomainLogsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCdnDomainLogsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

long DescribeCdnDomainLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCdnDomainLogsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeCdnDomainLogsRequest::getLogDay()const
{
	return logDay_;
}

void DescribeCdnDomainLogsRequest::setLogDay(const std::string& logDay)
{
	logDay_ = logDay;
	setCoreParameter("LogDay", std::to_string(logDay));
}

