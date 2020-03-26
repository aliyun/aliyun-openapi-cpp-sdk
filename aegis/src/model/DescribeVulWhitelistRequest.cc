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

#include <alibabacloud/aegis/model/DescribeVulWhitelistRequest.h>

using AlibabaCloud::Aegis::Model::DescribeVulWhitelistRequest;

DescribeVulWhitelistRequest::DescribeVulWhitelistRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeVulWhitelist")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVulWhitelistRequest::~DescribeVulWhitelistRequest()
{}

int DescribeVulWhitelistRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeVulWhitelistRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeVulWhitelistRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeVulWhitelistRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeVulWhitelistRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVulWhitelistRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

