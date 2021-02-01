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

#include <alibabacloud/facebody/model/ListBodyDbsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

ListBodyDbsResult::ListBodyDbsResult() :
	ServiceResult()
{}

ListBodyDbsResult::ListBodyDbsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBodyDbsResult::~ListBodyDbsResult()
{}

void ListBodyDbsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	auto allDbListNode = dataNode["DbList"]["DbListItem"];
	for (auto dataNodeDbListDbListItem : allDbListNode)
	{
		Data::DbListItem dbListItemObject;
		if(!dataNodeDbListDbListItem["Id"].isNull())
			dbListItemObject.id = std::stol(dataNodeDbListDbListItem["Id"].asString());
		if(!dataNodeDbListDbListItem["Name"].isNull())
			dbListItemObject.name = dataNodeDbListDbListItem["Name"].asString();
		data_.dbList.push_back(dbListItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string ListBodyDbsResult::getMessage()const
{
	return message_;
}

ListBodyDbsResult::Data ListBodyDbsResult::getData()const
{
	return data_;
}

std::string ListBodyDbsResult::getCode()const
{
	return code_;
}

