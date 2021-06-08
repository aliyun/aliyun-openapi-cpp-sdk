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
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = std::stoi(valueDataDataItem["Status"].asString());
		if(!valueDataDataItem["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataDataItem["CreateTime"].asString());
		if(!valueDataDataItem["Type"].isNull())
			dataObject.type = std::stoi(valueDataDataItem["Type"].asString());
		if(!valueDataDataItem["DialogId"].isNull())
			dataObject.dialogId = std::stol(valueDataDataItem["DialogId"].asString());
		if(!valueDataDataItem["Tip"].isNull())
			dataObject.tip = valueDataDataItem["Tip"].asString();
		auto dialogNode = value["Dialog"];
		if(!dialogNode["Content"].isNull())
			dataObject.dialog.content = dialogNode["Content"].asString();
		if(!dialogNode["Schema"].isNull())
			dataObject.dialog.schema = dialogNode["Schema"].asString();
		auto userNode = value["User"];
		if(!userNode["Name"].isNull())
			dataObject.user.name = userNode["Name"].asString();
		if(!userNode["Role"].isNull())
			dataObject.user.role = std::stoi(userNode["Role"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListTicketNotesResult::getMessage()const
{
	return message_;
}

std::vector<ListTicketNotesResult::DataItem> ListTicketNotesResult::getData()const
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

