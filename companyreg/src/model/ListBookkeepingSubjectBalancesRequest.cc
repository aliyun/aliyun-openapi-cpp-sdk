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

#include <alibabacloud/companyreg/model/ListBookkeepingSubjectBalancesRequest.h>

using AlibabaCloud::Companyreg::Model::ListBookkeepingSubjectBalancesRequest;

ListBookkeepingSubjectBalancesRequest::ListBookkeepingSubjectBalancesRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "ListBookkeepingSubjectBalances")
{
	setMethod(HttpRequest::Method::Post);
}

ListBookkeepingSubjectBalancesRequest::~ListBookkeepingSubjectBalancesRequest()
{}

int ListBookkeepingSubjectBalancesRequest::getPeriod()const
{
	return period_;
}

void ListBookkeepingSubjectBalancesRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

int ListBookkeepingSubjectBalancesRequest::getYear()const
{
	return year_;
}

void ListBookkeepingSubjectBalancesRequest::setYear(int year)
{
	year_ = year;
	setParameter("Year", std::to_string(year));
}

std::string ListBookkeepingSubjectBalancesRequest::getProduceBizId()const
{
	return produceBizId_;
}

void ListBookkeepingSubjectBalancesRequest::setProduceBizId(const std::string& produceBizId)
{
	produceBizId_ = produceBizId;
	setParameter("ProduceBizId", produceBizId);
}

int ListBookkeepingSubjectBalancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListBookkeepingSubjectBalancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int ListBookkeepingSubjectBalancesRequest::getPageSize()const
{
	return pageSize_;
}

void ListBookkeepingSubjectBalancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

