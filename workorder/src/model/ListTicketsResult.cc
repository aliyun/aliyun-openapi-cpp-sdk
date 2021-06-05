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

#include <alibabacloud/workorder/model/ListTicketsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Workorder;
using namespace AlibabaCloud::Workorder::Model;

ListTicketsResult::ListTicketsResult() :
	ServiceResult()
{}

ListTicketsResult::ListTicketsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTicketsResult::~ListTicketsResult()
{}

void ListTicketsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Title"].isNull())
			dataObject.title = valueDataDataItem["Title"].asString();
		if(!valueDataDataItem["TicketId"].isNull())
			dataObject.ticketId = valueDataDataItem["TicketId"].asString();
		auto statusNode = value["Status"];
		if(!statusNode["Label"].isNull())
			dataObject.status.label = statusNode["Label"].asString();
		if(!statusNode["Value"].isNull())
			dataObject.status.value = statusNode["Value"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

long ListTicketsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTicketsResult::getMessage()const
{
	return message_;
}

int ListTicketsResult::getPageSize()const
{
	return pageSize_;
}

int ListTicketsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListTicketsResult::DataItem> ListTicketsResult::getData()const
{
	return data_;
}

int ListTicketsResult::getCode()const
{
	return code_;
}

bool ListTicketsResult::getSuccess()const
{
	return success_;
}

