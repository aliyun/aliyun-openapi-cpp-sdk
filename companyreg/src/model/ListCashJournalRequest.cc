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

#include <alibabacloud/companyreg/model/ListCashJournalRequest.h>

using AlibabaCloud::Companyreg::Model::ListCashJournalRequest;

ListCashJournalRequest::ListCashJournalRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "ListCashJournal")
{
	setMethod(HttpRequest::Method::Get);
}

ListCashJournalRequest::~ListCashJournalRequest()
{}

std::string ListCashJournalRequest::getPeriod()const
{
	return period_;
}

void ListCashJournalRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string ListCashJournalRequest::getBizId()const
{
	return bizId_;
}

void ListCashJournalRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

int ListCashJournalRequest::getPageSize()const
{
	return pageSize_;
}

void ListCashJournalRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListCashJournalRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListCashJournalRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

