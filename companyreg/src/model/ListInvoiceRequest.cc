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

#include <alibabacloud/companyreg/model/ListInvoiceRequest.h>

using AlibabaCloud::Companyreg::Model::ListInvoiceRequest;

ListInvoiceRequest::ListInvoiceRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "ListInvoice")
{
	setMethod(HttpRequest::Method::Get);
}

ListInvoiceRequest::~ListInvoiceRequest()
{}

std::string ListInvoiceRequest::getBizId()const
{
	return bizId_;
}

void ListInvoiceRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

int ListInvoiceRequest::getPageSize()const
{
	return pageSize_;
}

void ListInvoiceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListInvoiceRequest::getPeriods()const
{
	return periods_;
}

void ListInvoiceRequest::setPeriods(const std::string& periods)
{
	periods_ = periods;
	setParameter("Periods", periods);
}

int ListInvoiceRequest::getPage()const
{
	return page_;
}

void ListInvoiceRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

std::string ListInvoiceRequest::getKey()const
{
	return key_;
}

void ListInvoiceRequest::setKey(const std::string& key)
{
	key_ = key;
	setParameter("Key", key);
}

