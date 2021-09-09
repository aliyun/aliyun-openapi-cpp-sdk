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

#include <alibabacloud/companyreg/model/ListLastMonthInvoiceRequest.h>

using AlibabaCloud::Companyreg::Model::ListLastMonthInvoiceRequest;

ListLastMonthInvoiceRequest::ListLastMonthInvoiceRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "ListLastMonthInvoice")
{
	setMethod(HttpRequest::Method::Get);
}

ListLastMonthInvoiceRequest::~ListLastMonthInvoiceRequest()
{}

std::string ListLastMonthInvoiceRequest::getBizId()const
{
	return bizId_;
}

void ListLastMonthInvoiceRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

int ListLastMonthInvoiceRequest::getPageSize()const
{
	return pageSize_;
}

void ListLastMonthInvoiceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListLastMonthInvoiceRequest::getPage()const
{
	return page_;
}

void ListLastMonthInvoiceRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

