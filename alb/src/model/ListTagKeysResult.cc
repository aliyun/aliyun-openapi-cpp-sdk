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

#include <alibabacloud/alb/model/ListTagKeysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

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
	auto allTagKeysNode = value["TagKeys"]["TagKey"];
	for (auto valueTagKeysTagKey : allTagKeysNode)
	{
		TagKey tagKeysObject;
		if(!valueTagKeysTagKey["Category"].isNull())
			tagKeysObject.category = valueTagKeysTagKey["Category"].asString();
		if(!valueTagKeysTagKey["TagKey"].isNull())
			tagKeysObject.tagKey = valueTagKeysTagKey["TagKey"].asString();
		tagKeys_.push_back(tagKeysObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListTagKeysResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTagKeysResult::getNextToken()const
{
	return nextToken_;
}

int ListTagKeysResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTagKeysResult::TagKey> ListTagKeysResult::getTagKeys()const
{
	return tagKeys_;
}

