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

#include <alibabacloud/iot/model/ListParserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListParserResult::ListParserResult() :
	ServiceResult()
{}

ListParserResult::ListParserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListParserResult::~ListParserResult()
{}

void ListParserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ParserList"];
	for (auto valueDataParserList : allDataNode)
	{
		ParserList dataObject;
		if(!valueDataParserList["Name"].isNull())
			dataObject.name = valueDataParserList["Name"].asString();
		if(!valueDataParserList["ParserId"].isNull())
			dataObject.parserId = std::stol(valueDataParserList["ParserId"].asString());
		if(!valueDataParserList["Description"].isNull())
			dataObject.description = valueDataParserList["Description"].asString();
		if(!valueDataParserList["Status"].isNull())
			dataObject.status = valueDataParserList["Status"].asString();
		if(!valueDataParserList["UtcCreated"].isNull())
			dataObject.utcCreated = valueDataParserList["UtcCreated"].asString();
		if(!valueDataParserList["UtcModified"].isNull())
			dataObject.utcModified = valueDataParserList["UtcModified"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListParserResult::getTotal()const
{
	return total_;
}

std::vector<ListParserResult::ParserList> ListParserResult::getData()const
{
	return data_;
}

std::string ListParserResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListParserResult::getCode()const
{
	return code_;
}

bool ListParserResult::getSuccess()const
{
	return success_;
}

