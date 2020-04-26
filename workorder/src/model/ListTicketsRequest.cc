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
	RpcServiceRequest("workorder", "2020-03-26", "ListTickets")
{
	setMethod(HttpRequest::Method::Post);
}

ListTicketsRequest::~ListTicketsRequest()
{}

std::string ListTicketsRequest::getProductCode()const
{
	return productCode_;
}

void ListTicketsRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string ListTicketsRequest::getLanguage()const
{
	return language_;
}

void ListTicketsRequest::setLanguage(const std::string& language)
{
	language_ = language;
	setParameter("Language", language);
}

std::string ListTicketsRequest::getSubUserId()const
{
	return subUserId_;
}

void ListTicketsRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

long ListTicketsRequest::getCreatedBeforeTime()const
{
	return createdBeforeTime_;
}

void ListTicketsRequest::setCreatedBeforeTime(long createdBeforeTime)
{
	createdBeforeTime_ = createdBeforeTime;
	setParameter("CreatedBeforeTime", std::to_string(createdBeforeTime));
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

std::string ListTicketsRequest::getIds()const
{
	return ids_;
}

void ListTicketsRequest::setIds(const std::string& ids)
{
	ids_ = ids;
	setParameter("Ids", ids);
}

std::string ListTicketsRequest::getTicketStatus()const
{
	return ticketStatus_;
}

void ListTicketsRequest::setTicketStatus(const std::string& ticketStatus)
{
	ticketStatus_ = ticketStatus;
	setParameter("TicketStatus", ticketStatus);
}

int ListTicketsRequest::getPageStart()const
{
	return pageStart_;
}

void ListTicketsRequest::setPageStart(int pageStart)
{
	pageStart_ = pageStart;
	setParameter("PageStart", std::to_string(pageStart));
}

long ListTicketsRequest::getCreatedAfterTime()const
{
	return createdAfterTime_;
}

void ListTicketsRequest::setCreatedAfterTime(long createdAfterTime)
{
	createdAfterTime_ = createdAfterTime;
	setParameter("CreatedAfterTime", std::to_string(createdAfterTime));
}

