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

#include <alibabacloud/aegis/model/DescribeAnalysisLogsRequest.h>

using AlibabaCloud::Aegis::Model::DescribeAnalysisLogsRequest;

DescribeAnalysisLogsRequest::DescribeAnalysisLogsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeAnalysisLogs")
{}

DescribeAnalysisLogsRequest::~DescribeAnalysisLogsRequest()
{}

std::string DescribeAnalysisLogsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAnalysisLogsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeAnalysisLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAnalysisLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribeAnalysisLogsRequest::getFrom()const
{
	return from_;
}

void DescribeAnalysisLogsRequest::setFrom(int from)
{
	from_ = from;
	setCoreParameter("From", std::to_string(from));
}

std::string DescribeAnalysisLogsRequest::getQuery()const
{
	return query_;
}

void DescribeAnalysisLogsRequest::setQuery(const std::string& query)
{
	query_ = query;
	setCoreParameter("Query", query);
}

int DescribeAnalysisLogsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAnalysisLogsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

bool DescribeAnalysisLogsRequest::getReverse()const
{
	return reverse_;
}

void DescribeAnalysisLogsRequest::setReverse(bool reverse)
{
	reverse_ = reverse;
	setCoreParameter("Reverse", reverse ? "true" : "false");
}

int DescribeAnalysisLogsRequest::getTo()const
{
	return to_;
}

void DescribeAnalysisLogsRequest::setTo(int to)
{
	to_ = to;
	setCoreParameter("To", std::to_string(to));
}

