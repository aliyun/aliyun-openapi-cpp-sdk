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

#include <alibabacloud/ecs/model/DescribePrefixListsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribePrefixListsResult::DescribePrefixListsResult() :
	ServiceResult()
{}

DescribePrefixListsResult::DescribePrefixListsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePrefixListsResult::~DescribePrefixListsResult()
{}

void DescribePrefixListsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPrefixListsNode = value["PrefixLists"]["PrefixList"];
	for (auto valuePrefixListsPrefixList : allPrefixListsNode)
	{
		PrefixList prefixListsObject;
		if(!valuePrefixListsPrefixList["CreationTime"].isNull())
			prefixListsObject.creationTime = valuePrefixListsPrefixList["CreationTime"].asString();
		if(!valuePrefixListsPrefixList["AssociationCount"].isNull())
			prefixListsObject.associationCount = std::stoi(valuePrefixListsPrefixList["AssociationCount"].asString());
		if(!valuePrefixListsPrefixList["MaxEntries"].isNull())
			prefixListsObject.maxEntries = std::stoi(valuePrefixListsPrefixList["MaxEntries"].asString());
		if(!valuePrefixListsPrefixList["Description"].isNull())
			prefixListsObject.description = valuePrefixListsPrefixList["Description"].asString();
		if(!valuePrefixListsPrefixList["AddressFamily"].isNull())
			prefixListsObject.addressFamily = valuePrefixListsPrefixList["AddressFamily"].asString();
		if(!valuePrefixListsPrefixList["PrefixListName"].isNull())
			prefixListsObject.prefixListName = valuePrefixListsPrefixList["PrefixListName"].asString();
		if(!valuePrefixListsPrefixList["PrefixListId"].isNull())
			prefixListsObject.prefixListId = valuePrefixListsPrefixList["PrefixListId"].asString();
		prefixLists_.push_back(prefixListsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribePrefixListsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribePrefixListsResult::PrefixList> DescribePrefixListsResult::getPrefixLists()const
{
	return prefixLists_;
}

