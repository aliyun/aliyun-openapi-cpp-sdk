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

#include <alibabacloud/companyreg/model/ListVoucherRequest.h>

using AlibabaCloud::Companyreg::Model::ListVoucherRequest;

ListVoucherRequest::ListVoucherRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "ListVoucher")
{
	setMethod(HttpRequest::Method::Get);
}

ListVoucherRequest::~ListVoucherRequest()
{}

std::string ListVoucherRequest::getPeriod()const
{
	return period_;
}

void ListVoucherRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

int ListVoucherRequest::getPageCount()const
{
	return pageCount_;
}

void ListVoucherRequest::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setParameter("PageCount", std::to_string(pageCount));
}

std::string ListVoucherRequest::getCodeSortType()const
{
	return codeSortType_;
}

void ListVoucherRequest::setCodeSortType(const std::string& codeSortType)
{
	codeSortType_ = codeSortType;
	setParameter("CodeSortType", codeSortType);
}

std::string ListVoucherRequest::getBizId()const
{
	return bizId_;
}

void ListVoucherRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

int ListVoucherRequest::getPageSize()const
{
	return pageSize_;
}

void ListVoucherRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListVoucherRequest::getText()const
{
	return text_;
}

void ListVoucherRequest::setText(const std::string& text)
{
	text_ = text;
	setParameter("Text", text);
}

