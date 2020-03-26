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

#include <alibabacloud/green/model/DescribeAppInfoRequest.h>

using AlibabaCloud::Green::Model::DescribeAppInfoRequest;

DescribeAppInfoRequest::DescribeAppInfoRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeAppInfo")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAppInfoRequest::~DescribeAppInfoRequest()
{}

int DescribeAppInfoRequest::getTotalCount()const
{
	return totalCount_;
}

void DescribeAppInfoRequest::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
	setParameter("TotalCount", std::to_string(totalCount));
}

int DescribeAppInfoRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAppInfoRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeAppInfoRequest::getPlatform()const
{
	return platform_;
}

void DescribeAppInfoRequest::setPlatform(const std::string& platform)
{
	platform_ = platform;
	setParameter("Platform", platform);
}

std::string DescribeAppInfoRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAppInfoRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeAppInfoRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAppInfoRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAppInfoRequest::getLang()const
{
	return lang_;
}

void DescribeAppInfoRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

