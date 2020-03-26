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

#include <alibabacloud/jarvis/model/DescribeEcsListPageRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeEcsListPageRequest;

DescribeEcsListPageRequest::DescribeEcsListPageRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeEcsListPage")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEcsListPageRequest::~DescribeEcsListPageRequest()
{}

int DescribeEcsListPageRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeEcsListPageRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeEcsListPageRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeEcsListPageRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string DescribeEcsListPageRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeEcsListPageRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeEcsListPageRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeEcsListPageRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeEcsListPageRequest::getLang()const
{
	return lang_;
}

void DescribeEcsListPageRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

