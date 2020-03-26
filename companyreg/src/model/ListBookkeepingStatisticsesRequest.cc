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

#include <alibabacloud/companyreg/model/ListBookkeepingStatisticsesRequest.h>

using AlibabaCloud::Companyreg::Model::ListBookkeepingStatisticsesRequest;

ListBookkeepingStatisticsesRequest::ListBookkeepingStatisticsesRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "ListBookkeepingStatisticses")
{
	setMethod(HttpRequest::Method::Post);
}

ListBookkeepingStatisticsesRequest::~ListBookkeepingStatisticsesRequest()
{}

int ListBookkeepingStatisticsesRequest::getYear()const
{
	return year_;
}

void ListBookkeepingStatisticsesRequest::setYear(int year)
{
	year_ = year;
	setParameter("Year", std::to_string(year));
}

std::string ListBookkeepingStatisticsesRequest::getProduceBizId()const
{
	return produceBizId_;
}

void ListBookkeepingStatisticsesRequest::setProduceBizId(const std::string& produceBizId)
{
	produceBizId_ = produceBizId;
	setParameter("ProduceBizId", produceBizId);
}

int ListBookkeepingStatisticsesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListBookkeepingStatisticsesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int ListBookkeepingStatisticsesRequest::getMonth()const
{
	return month_;
}

void ListBookkeepingStatisticsesRequest::setMonth(int month)
{
	month_ = month;
	setParameter("Month", std::to_string(month));
}

int ListBookkeepingStatisticsesRequest::getPageSize()const
{
	return pageSize_;
}

void ListBookkeepingStatisticsesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

