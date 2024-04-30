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

#include <alibabacloud/dcdn/model/ListDcdnKvResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

ListDcdnKvResult::ListDcdnKvResult() :
	ServiceResult()
{}

ListDcdnKvResult::ListDcdnKvResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDcdnKvResult::~ListDcdnKvResult()
{}

void ListDcdnKvResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allKeysNode = value["Keys"]["Key"];
	for (auto valueKeysKey : allKeysNode)
	{
		Key keysObject;
		if(!valueKeysKey["Name"].isNull())
			keysObject.name = valueKeysKey["Name"].asString();
		if(!valueKeysKey["UpdateTime"].isNull())
			keysObject.updateTime = valueKeysKey["UpdateTime"].asString();
		keys_.push_back(keysObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListDcdnKvResult::getTotalCount()const
{
	return totalCount_;
}

int ListDcdnKvResult::getPageSize()const
{
	return pageSize_;
}

int ListDcdnKvResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListDcdnKvResult::Key> ListDcdnKvResult::getKeys()const
{
	return keys_;
}

