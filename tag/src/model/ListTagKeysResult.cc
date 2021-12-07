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

#include <alibabacloud/tag/model/ListTagKeysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Tag;
using namespace AlibabaCloud::Tag::Model;

ListTagKeysResult::ListTagKeysResult() :
	ServiceResult()
{}

ListTagKeysResult::ListTagKeysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagKeysResult::~ListTagKeysResult()
{}

void ListTagKeysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allKeysNode = value["Keys"]["Key"];
	for (auto valueKeysKey : allKeysNode)
	{
		Key keysObject;
		if(!valueKeysKey["Key"].isNull())
			keysObject.key = valueKeysKey["Key"].asString();
		if(!valueKeysKey["Category"].isNull())
			keysObject.category = valueKeysKey["Category"].asString();
		if(!valueKeysKey["Description"].isNull())
			keysObject.description = valueKeysKey["Description"].asString();
		keys_.push_back(keysObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListTagKeysResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListTagKeysResult::Key> ListTagKeysResult::getKeys()const
{
	return keys_;
}

