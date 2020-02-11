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

#include <alibabacloud/pvtz/model/DescribeChangeLogsRequest.h>

using AlibabaCloud::Pvtz::Model::DescribeChangeLogsRequest;

DescribeChangeLogsRequest::DescribeChangeLogsRequest() :
	RpcServiceRequest("pvtz", "2018-01-01", "DescribeChangeLogs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeChangeLogsRequest::~DescribeChangeLogsRequest()
{}

long DescribeChangeLogsRequest::getStartTimestamp()const
{
	return startTimestamp_;
}

void DescribeChangeLogsRequest::setStartTimestamp(long startTimestamp)
{
	startTimestamp_ = startTimestamp;
	setParameter("StartTimestamp", std::to_string(startTimestamp));
}

int DescribeChangeLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeChangeLogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

long DescribeChangeLogsRequest::getEndTimestamp()const
{
	return endTimestamp_;
}

void DescribeChangeLogsRequest::setEndTimestamp(long endTimestamp)
{
	endTimestamp_ = endTimestamp;
	setParameter("EndTimestamp", std::to_string(endTimestamp));
}

std::string DescribeChangeLogsRequest::getEntityType()const
{
	return entityType_;
}

void DescribeChangeLogsRequest::setEntityType(const std::string& entityType)
{
	entityType_ = entityType;
	setParameter("EntityType", entityType);
}

int DescribeChangeLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeChangeLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeChangeLogsRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeChangeLogsRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string DescribeChangeLogsRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeChangeLogsRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string DescribeChangeLogsRequest::getKeyword()const
{
	return keyword_;
}

void DescribeChangeLogsRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

std::string DescribeChangeLogsRequest::getLang()const
{
	return lang_;
}

void DescribeChangeLogsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

