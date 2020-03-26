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

#include <alibabacloud/green/model/DescribeUsageBillRequest.h>

using AlibabaCloud::Green::Model::DescribeUsageBillRequest;

DescribeUsageBillRequest::DescribeUsageBillRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeUsageBill")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeUsageBillRequest::~DescribeUsageBillRequest()
{}

int DescribeUsageBillRequest::getTotalCount()const
{
	return totalCount_;
}

void DescribeUsageBillRequest::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
	setParameter("TotalCount", std::to_string(totalCount));
}

int DescribeUsageBillRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeUsageBillRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeUsageBillRequest::getType()const
{
	return type_;
}

void DescribeUsageBillRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeUsageBillRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeUsageBillRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeUsageBillRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeUsageBillRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeUsageBillRequest::getDay()const
{
	return day_;
}

void DescribeUsageBillRequest::setDay(const std::string& day)
{
	day_ = day;
	setParameter("Day", day);
}

