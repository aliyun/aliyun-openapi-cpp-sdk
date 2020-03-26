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

#include <alibabacloud/httpdns/model/DescribeDomainsRequest.h>

using AlibabaCloud::Httpdns::Model::DescribeDomainsRequest;

DescribeDomainsRequest::DescribeDomainsRequest() :
	RpcServiceRequest("httpdns", "2016-02-01", "DescribeDomains")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainsRequest::~DescribeDomainsRequest()
{}

long DescribeDomainsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDomainsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDomainsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainsRequest::getAccountId()const
{
	return accountId_;
}

void DescribeDomainsRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

long DescribeDomainsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDomainsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

