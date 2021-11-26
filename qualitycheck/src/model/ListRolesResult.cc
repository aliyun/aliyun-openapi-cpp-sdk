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

#include <alibabacloud/qualitycheck/model/ListRolesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

ListRolesResult::ListRolesResult() :
	ServiceResult()
{}

ListRolesResult::ListRolesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRolesResult::~ListRolesResult()
{}

void ListRolesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Role"];
	for (auto valueDataRole : allDataNode)
	{
		Role dataObject;
		if(!valueDataRole["DisplayName"].isNull())
			dataObject.displayName = valueDataRole["DisplayName"].asString();
		if(!valueDataRole["UpdateTime"].isNull())
			dataObject.updateTime = valueDataRole["UpdateTime"].asString();
		if(!valueDataRole["CreateTime"].isNull())
			dataObject.createTime = valueDataRole["CreateTime"].asString();
		if(!valueDataRole["Name"].isNull())
			dataObject.name = valueDataRole["Name"].asString();
		if(!valueDataRole["Id"].isNull())
			dataObject.id = std::stol(valueDataRole["Id"].asString());
		if(!valueDataRole["Level"].isNull())
			dataObject.level = std::stoi(valueDataRole["Level"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListRolesResult::getMessage()const
{
	return message_;
}

std::vector<ListRolesResult::Role> ListRolesResult::getData()const
{
	return data_;
}

std::string ListRolesResult::getCode()const
{
	return code_;
}

bool ListRolesResult::getSuccess()const
{
	return success_;
}

