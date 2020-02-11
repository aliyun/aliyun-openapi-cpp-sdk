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

#include <alibabacloud/pvtz/model/DescribeZonesRequest.h>

using AlibabaCloud::Pvtz::Model::DescribeZonesRequest;

DescribeZonesRequest::DescribeZonesRequest() :
	RpcServiceRequest("pvtz", "2018-01-01", "DescribeZones")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeZonesRequest::~DescribeZonesRequest()
{}

std::string DescribeZonesRequest::getQueryVpcId()const
{
	return queryVpcId_;
}

void DescribeZonesRequest::setQueryVpcId(const std::string& queryVpcId)
{
	queryVpcId_ = queryVpcId;
	setParameter("QueryVpcId", queryVpcId);
}

int DescribeZonesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeZonesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeZonesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeZonesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

int DescribeZonesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeZonesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeZonesRequest::getLang()const
{
	return lang_;
}

void DescribeZonesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeZonesRequest::getKeyword()const
{
	return keyword_;
}

void DescribeZonesRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

std::string DescribeZonesRequest::getDirection()const
{
	return direction_;
}

void DescribeZonesRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setParameter("Direction", direction);
}

std::string DescribeZonesRequest::getOrderBy()const
{
	return orderBy_;
}

void DescribeZonesRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setParameter("OrderBy", orderBy);
}

std::string DescribeZonesRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeZonesRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string DescribeZonesRequest::getSearchMode()const
{
	return searchMode_;
}

void DescribeZonesRequest::setSearchMode(const std::string& searchMode)
{
	searchMode_ = searchMode;
	setParameter("SearchMode", searchMode);
}

std::string DescribeZonesRequest::getQueryRegionId()const
{
	return queryRegionId_;
}

void DescribeZonesRequest::setQueryRegionId(const std::string& queryRegionId)
{
	queryRegionId_ = queryRegionId;
	setParameter("QueryRegionId", queryRegionId);
}

