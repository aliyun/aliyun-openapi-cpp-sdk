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

#include <alibabacloud/alidns/model/DescribeDomainsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDomainsRequest;

DescribeDomainsRequest::DescribeDomainsRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DescribeDomains")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainsRequest::~DescribeDomainsRequest()
{}

std::string DescribeDomainsRequest::getStartDate()const
{
	return startDate_;
}

void DescribeDomainsRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setCoreParameter("StartDate", startDate);
}

long DescribeDomainsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDomainsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDomainsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDomainsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

long DescribeDomainsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDomainsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDomainsRequest::getLang()const
{
	return lang_;
}

void DescribeDomainsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeDomainsRequest::getKeyWord()const
{
	return keyWord_;
}

void DescribeDomainsRequest::setKeyWord(const std::string& keyWord)
{
	keyWord_ = keyWord;
	setCoreParameter("KeyWord", keyWord);
}

std::string DescribeDomainsRequest::getDirection()const
{
	return direction_;
}

void DescribeDomainsRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setCoreParameter("Direction", direction);
}

bool DescribeDomainsRequest::getStarmark()const
{
	return starmark_;
}

void DescribeDomainsRequest::setStarmark(bool starmark)
{
	starmark_ = starmark;
	setCoreParameter("Starmark", starmark ? "true" : "false");
}

std::string DescribeDomainsRequest::getGroupId()const
{
	return groupId_;
}

void DescribeDomainsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string DescribeDomainsRequest::getOrderBy()const
{
	return orderBy_;
}

void DescribeDomainsRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setCoreParameter("OrderBy", orderBy);
}

std::string DescribeDomainsRequest::getEndDate()const
{
	return endDate_;
}

void DescribeDomainsRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setCoreParameter("EndDate", endDate);
}

std::string DescribeDomainsRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeDomainsRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string DescribeDomainsRequest::getSearchMode()const
{
	return searchMode_;
}

void DescribeDomainsRequest::setSearchMode(const std::string& searchMode)
{
	searchMode_ = searchMode;
	setCoreParameter("SearchMode", searchMode);
}

