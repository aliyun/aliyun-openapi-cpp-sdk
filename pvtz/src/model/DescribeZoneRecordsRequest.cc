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

#include <alibabacloud/pvtz/model/DescribeZoneRecordsRequest.h>

using AlibabaCloud::Pvtz::Model::DescribeZoneRecordsRequest;

DescribeZoneRecordsRequest::DescribeZoneRecordsRequest() :
	RpcServiceRequest("pvtz", "2018-01-01", "DescribeZoneRecords")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeZoneRecordsRequest::~DescribeZoneRecordsRequest()
{}

std::string DescribeZoneRecordsRequest::getOrderBy()const
{
	return orderBy_;
}

void DescribeZoneRecordsRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setParameter("OrderBy", orderBy);
}

int DescribeZoneRecordsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeZoneRecordsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeZoneRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeZoneRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeZoneRecordsRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeZoneRecordsRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string DescribeZoneRecordsRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeZoneRecordsRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string DescribeZoneRecordsRequest::getSearchMode()const
{
	return searchMode_;
}

void DescribeZoneRecordsRequest::setSearchMode(const std::string& searchMode)
{
	searchMode_ = searchMode;
	setParameter("SearchMode", searchMode);
}

std::string DescribeZoneRecordsRequest::getTag()const
{
	return tag_;
}

void DescribeZoneRecordsRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setParameter("Tag", tag);
}

std::string DescribeZoneRecordsRequest::getLang()const
{
	return lang_;
}

void DescribeZoneRecordsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeZoneRecordsRequest::getKeyword()const
{
	return keyword_;
}

void DescribeZoneRecordsRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

std::string DescribeZoneRecordsRequest::getDirection()const
{
	return direction_;
}

void DescribeZoneRecordsRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setParameter("Direction", direction);
}

