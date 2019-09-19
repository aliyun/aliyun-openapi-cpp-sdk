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

#include <alibabacloud/ccs/model/QueryTicketResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ccs;
using namespace AlibabaCloud::Ccs::Model;

QueryTicketResult::QueryTicketResult() :
	ServiceResult()
{}

QueryTicketResult::QueryTicketResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTicketResult::~QueryTicketResult()
{}

void QueryTicketResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTicketsNode = value["Tickets"]["Ticket"];
	for (auto valueTicketsTicket : allTicketsNode)
	{
		Ticket ticketsObject;
		if(!valueTicketsTicket["Id"].isNull())
			ticketsObject.id = valueTicketsTicket["Id"].asString();
		if(!valueTicketsTicket["Type"].isNull())
			ticketsObject.type = valueTicketsTicket["Type"].asString();
		if(!valueTicketsTicket["Stage"].isNull())
			ticketsObject.stage = valueTicketsTicket["Stage"].asString();
		if(!valueTicketsTicket["Description"].isNull())
			ticketsObject.description = valueTicketsTicket["Description"].asString();
		if(!valueTicketsTicket["CreatorId"].isNull())
			ticketsObject.creatorId = valueTicketsTicket["CreatorId"].asString();
		if(!valueTicketsTicket["CreateTime"].isNull())
			ticketsObject.createTime = valueTicketsTicket["CreateTime"].asString();
		if(!valueTicketsTicket["CustomFields"].isNull())
			ticketsObject.customFields = valueTicketsTicket["CustomFields"].asString();
		tickets_.push_back(ticketsObject);
	}
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long QueryTicketResult::getTotalCount()const
{
	return totalCount_;
}

int QueryTicketResult::getPageNum()const
{
	return pageNum_;
}

int QueryTicketResult::getPageSize()const
{
	return pageSize_;
}

std::vector<QueryTicketResult::Ticket> QueryTicketResult::getTickets()const
{
	return tickets_;
}

