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

#include <alibabacloud/workorder/model/ListTicketNotesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Workorder;
using namespace AlibabaCloud::Workorder::Model;

ListTicketNotesResult::ListTicketNotesResult() :
	ServiceResult()
{}

ListTicketNotesResult::ListTicketNotesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTicketNotesResult::~ListTicketNotesResult()
{}

void ListTicketNotesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allListNode = dataNode["List"]["ListItem"];
	for (auto dataNodeListListItem : allListNode)
	{
		Data::ListItem listItemObject;
		if(!dataNodeListListItem["FromOfficial"].isNull())
			listItemObject.fromOfficial = dataNodeListListItem["FromOfficial"].asString() == "true";
		if(!dataNodeListListItem["GmtCreated"].isNull())
			listItemObject.gmtCreated = std::stoi(dataNodeListListItem["GmtCreated"].asString());
		if(!dataNodeListListItem["NoteId"].isNull())
			listItemObject.noteId = dataNodeListListItem["NoteId"].asString();
		if(!dataNodeListListItem["Content"].isNull())
			listItemObject.content = dataNodeListListItem["Content"].asString();
		data_.list.push_back(listItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListTicketNotesResult::getMessage()const
{
	return message_;
}

ListTicketNotesResult::Data ListTicketNotesResult::getData()const
{
	return data_;
}

int ListTicketNotesResult::getCode()const
{
	return code_;
}

bool ListTicketNotesResult::getSuccess()const
{
	return success_;
}

