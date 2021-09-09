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

#include <alibabacloud/companyreg/model/ListEnterprisesRequest.h>

using AlibabaCloud::Companyreg::Model::ListEnterprisesRequest;

ListEnterprisesRequest::ListEnterprisesRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "ListEnterprises")
{
	setMethod(HttpRequest::Method::Get);
}

ListEnterprisesRequest::~ListEnterprisesRequest()
{}

int ListEnterprisesRequest::getPageSize()const
{
	return pageSize_;
}

void ListEnterprisesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListEnterprisesRequest::getSearchKey()const
{
	return searchKey_;
}

void ListEnterprisesRequest::setSearchKey(const std::string& searchKey)
{
	searchKey_ = searchKey;
	setParameter("SearchKey", searchKey);
}

int ListEnterprisesRequest::getCurrentPage()const
{
	return currentPage_;
}

void ListEnterprisesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

