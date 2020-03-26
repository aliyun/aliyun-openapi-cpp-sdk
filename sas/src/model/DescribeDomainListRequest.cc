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

#include <alibabacloud/sas/model/DescribeDomainListRequest.h>

using AlibabaCloud::Sas::Model::DescribeDomainListRequest;

DescribeDomainListRequest::DescribeDomainListRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeDomainList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainListRequest::~DescribeDomainListRequest()
{}

int DescribeDomainListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeDomainListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeDomainListRequest::getFuzzyDomain()const
{
	return fuzzyDomain_;
}

void DescribeDomainListRequest::setFuzzyDomain(const std::string& fuzzyDomain)
{
	fuzzyDomain_ = fuzzyDomain;
	setParameter("FuzzyDomain", fuzzyDomain);
}

std::string DescribeDomainListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDomainListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeDomainListRequest::getDomainType()const
{
	return domainType_;
}

void DescribeDomainListRequest::setDomainType(const std::string& domainType)
{
	domainType_ = domainType;
	setParameter("DomainType", domainType);
}

int DescribeDomainListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDomainListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

