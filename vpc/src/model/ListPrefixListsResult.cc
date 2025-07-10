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

#include <alibabacloud/vpc/model/ListPrefixListsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListPrefixListsResult::ListPrefixListsResult() :
	ServiceResult()
{}

ListPrefixListsResult::ListPrefixListsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrefixListsResult::~ListPrefixListsResult()
{}

void ListPrefixListsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPrefixListsNode = value["PrefixLists"]["PrefixList"];
	for (auto valuePrefixListsPrefixList : allPrefixListsNode)
	{
		PrefixList prefixListsObject;
		if(!valuePrefixListsPrefixList["PrefixListId"].isNull())
			prefixListsObject.prefixListId = valuePrefixListsPrefixList["PrefixListId"].asString();
		if(!valuePrefixListsPrefixList["PrefixListName"].isNull())
			prefixListsObject.prefixListName = valuePrefixListsPrefixList["PrefixListName"].asString();
		if(!valuePrefixListsPrefixList["PrefixListDescription"].isNull())
			prefixListsObject.prefixListDescription = valuePrefixListsPrefixList["PrefixListDescription"].asString();
		if(!valuePrefixListsPrefixList["IpVersion"].isNull())
			prefixListsObject.ipVersion = valuePrefixListsPrefixList["IpVersion"].asString();
		if(!valuePrefixListsPrefixList["CreationTime"].isNull())
			prefixListsObject.creationTime = valuePrefixListsPrefixList["CreationTime"].asString();
		if(!valuePrefixListsPrefixList["ShareType"].isNull())
			prefixListsObject.shareType = valuePrefixListsPrefixList["ShareType"].asString();
		if(!valuePrefixListsPrefixList["MaxEntries"].isNull())
			prefixListsObject.maxEntries = std::stoi(valuePrefixListsPrefixList["MaxEntries"].asString());
		if(!valuePrefixListsPrefixList["Status"].isNull())
			prefixListsObject.status = valuePrefixListsPrefixList["Status"].asString();
		if(!valuePrefixListsPrefixList["OwnerId"].isNull())
			prefixListsObject.ownerId = valuePrefixListsPrefixList["OwnerId"].asString();
		if(!valuePrefixListsPrefixList["PrefixListStatus"].isNull())
			prefixListsObject.prefixListStatus = valuePrefixListsPrefixList["PrefixListStatus"].asString();
		if(!valuePrefixListsPrefixList["RegionId"].isNull())
			prefixListsObject.regionId = valuePrefixListsPrefixList["RegionId"].asString();
		if(!valuePrefixListsPrefixList["ResourceGroupId"].isNull())
			prefixListsObject.resourceGroupId = valuePrefixListsPrefixList["ResourceGroupId"].asString();
		if(!valuePrefixListsPrefixList["PrefixListType"].isNull())
			prefixListsObject.prefixListType = valuePrefixListsPrefixList["PrefixListType"].asString();
		auto allTagsNode = valuePrefixListsPrefixList["Tags"]["Tag"];
		for (auto valuePrefixListsPrefixListTagsTag : allTagsNode)
		{
			PrefixList::Tag tagsObject;
			if(!valuePrefixListsPrefixListTagsTag["Key"].isNull())
				tagsObject.key = valuePrefixListsPrefixListTagsTag["Key"].asString();
			if(!valuePrefixListsPrefixListTagsTag["Value"].isNull())
				tagsObject.value = valuePrefixListsPrefixListTagsTag["Value"].asString();
			prefixListsObject.tags.push_back(tagsObject);
		}
		auto allCidrBlocks = value["CidrBlocks"]["CidrBlock"];
		for (auto value : allCidrBlocks)
			prefixListsObject.cidrBlocks.push_back(value.asString());
		prefixLists_.push_back(prefixListsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stol(value["MaxResults"].asString());

}

long ListPrefixListsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListPrefixListsResult::getNextToken()const
{
	return nextToken_;
}

long ListPrefixListsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListPrefixListsResult::PrefixList> ListPrefixListsResult::getPrefixLists()const
{
	return prefixLists_;
}

