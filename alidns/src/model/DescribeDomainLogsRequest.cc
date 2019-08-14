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

#include <alibabacloud/alidns/model/DescribeDomainLogsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDomainLogsRequest;

DescribeDomainLogsRequest::DescribeDomainLogsRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DescribeDomainLogs")
{}

DescribeDomainLogsRequest::~DescribeDomainLogsRequest()
{}

std::string DescribeDomainLogsRequest::getEndDate()const
{
	return endDate_;
}

void DescribeDomainLogsRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setCoreParameter("EndDate", endDate);
}

std::string DescribeDomainLogsRequest::getGroupId()const
{
	return groupId_;
}

void DescribeDomainLogsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string DescribeDomainLogsRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeDomainLogsRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

long DescribeDomainLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDomainLogsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDomainLogsRequest::getLang()const
{
	return lang_;
}

void DescribeDomainLogsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeDomainLogsRequest::getKeyWord()const
{
	return keyWord_;
}

void DescribeDomainLogsRequest::setKeyWord(const std::string& keyWord)
{
	keyWord_ = keyWord;
	setCoreParameter("KeyWord", keyWord);
}

std::string DescribeDomainLogsRequest::getStartDate()const
{
	return startDate_;
}

void DescribeDomainLogsRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setCoreParameter("StartDate", startDate);
}

std::string DescribeDomainLogsRequest::getType()const
{
	return type_;
}

void DescribeDomainLogsRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

long DescribeDomainLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDomainLogsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

