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

#include <alibabacloud/httpdns/model/ListDomainsRequest.h>

using AlibabaCloud::Httpdns::Model::ListDomainsRequest;

ListDomainsRequest::ListDomainsRequest() :
	RpcServiceRequest("httpdns", "2016-02-01", "ListDomains")
{
	setMethod(HttpRequest::Method::Post);
}

ListDomainsRequest::~ListDomainsRequest()
{}

int ListDomainsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListDomainsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListDomainsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListDomainsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ListDomainsRequest::getPageSize()const
{
	return pageSize_;
}

void ListDomainsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

