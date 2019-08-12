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

#include <alibabacloud/alidns/model/DescribeDomainStatisticsSummaryRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDomainStatisticsSummaryRequest;

DescribeDomainStatisticsSummaryRequest::DescribeDomainStatisticsSummaryRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DescribeDomainStatisticsSummary")
{}

DescribeDomainStatisticsSummaryRequest::~DescribeDomainStatisticsSummaryRequest()
{}

std::string DescribeDomainStatisticsSummaryRequest::getEndDate()const
{
	return endDate_;
}

void DescribeDomainStatisticsSummaryRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setCoreParameter("EndDate", endDate);
}

std::string DescribeDomainStatisticsSummaryRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeDomainStatisticsSummaryRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

long DescribeDomainStatisticsSummaryRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDomainStatisticsSummaryRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeDomainStatisticsSummaryRequest::getOrderBy()const
{
	return orderBy_;
}

void DescribeDomainStatisticsSummaryRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setCoreParameter("OrderBy", orderBy);
}

std::string DescribeDomainStatisticsSummaryRequest::getSearchMode()const
{
	return searchMode_;
}

void DescribeDomainStatisticsSummaryRequest::setSearchMode(const std::string& searchMode)
{
	searchMode_ = searchMode;
	setCoreParameter("SearchMode", searchMode);
}

long DescribeDomainStatisticsSummaryRequest::getThreshold()const
{
	return threshold_;
}

void DescribeDomainStatisticsSummaryRequest::setThreshold(long threshold)
{
	threshold_ = threshold;
	setCoreParameter("Threshold", threshold);
}

std::string DescribeDomainStatisticsSummaryRequest::getLang()const
{
	return lang_;
}

void DescribeDomainStatisticsSummaryRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeDomainStatisticsSummaryRequest::getStartDate()const
{
	return startDate_;
}

void DescribeDomainStatisticsSummaryRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setCoreParameter("StartDate", startDate);
}

std::string DescribeDomainStatisticsSummaryRequest::getKeyword()const
{
	return keyword_;
}

void DescribeDomainStatisticsSummaryRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setCoreParameter("Keyword", keyword);
}

long DescribeDomainStatisticsSummaryRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDomainStatisticsSummaryRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeDomainStatisticsSummaryRequest::getDirection()const
{
	return direction_;
}

void DescribeDomainStatisticsSummaryRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setCoreParameter("Direction", direction);
}

