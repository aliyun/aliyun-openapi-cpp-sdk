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

#include <alibabacloud/workorder/model/ListTicketsRequest.h>

using AlibabaCloud::Workorder::Model::ListTicketsRequest;

ListTicketsRequest::ListTicketsRequest() :
	RpcServiceRequest("workorder", "2021-05-10", "ListTickets")
{
	setMethod(HttpRequest::Method::Post);
}

ListTicketsRequest::~ListTicketsRequest()
{}

long ListTicketsRequest::getBeginDate()const
{
	return beginDate_;
}

void ListTicketsRequest::setBeginDate(long beginDate)
{
	beginDate_ = beginDate;
	setParameter("BeginDate", std::to_string(beginDate));
}

std::vector<std::string> ListTicketsRequest::getStatusList()const
{
	return statusList_;
}

void ListTicketsRequest::setStatusList(const std::vector<std::string>& statusList)
{
	statusList_ = statusList;
	for(int dep1 = 0; dep1!= statusList.size(); dep1++) {
		setParameter("StatusList."+ std::to_string(dep1), statusList.at(dep1));
	}
}

int ListTicketsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListTicketsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

long ListTicketsRequest::getEndDate()const
{
	return endDate_;
}

void ListTicketsRequest::setEndDate(long endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", std::to_string(endDate));
}

int ListTicketsRequest::getPageSize()const
{
	return pageSize_;
}

void ListTicketsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListTicketsRequest::getKeyword()const
{
	return keyword_;
}

void ListTicketsRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

std::string ListTicketsRequest::getTicketId()const
{
	return ticketId_;
}

void ListTicketsRequest::setTicketId(const std::string& ticketId)
{
	ticketId_ = ticketId;
	setParameter("TicketId", ticketId);
}

