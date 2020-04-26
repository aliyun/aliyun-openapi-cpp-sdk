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

#include <alibabacloud/workorder/model/ListCategoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Workorder;
using namespace AlibabaCloud::Workorder::Model;

ListCategoriesResult::ListCategoriesResult() :
	ServiceResult()
{}

ListCategoriesResult::ListCategoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCategoriesResult::~ListCategoriesResult()
{}

void ListCategoriesResult::parse(const std::string &payload)
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
		if(!dataNodeListListItem["Id"].isNull())
			listItemObject.id = std::stoi(dataNodeListListItem["Id"].asString());
		if(!dataNodeListListItem["Name"].isNull())
			listItemObject.name = dataNodeListListItem["Name"].asString();
		data_.list.push_back(listItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListCategoriesResult::getMessage()const
{
	return message_;
}

ListCategoriesResult::Data ListCategoriesResult::getData()const
{
	return data_;
}

int ListCategoriesResult::getCode()const
{
	return code_;
}

bool ListCategoriesResult::getSuccess()const
{
	return success_;
}

