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

#include <alibabacloud/cbn/model/ListTransitRouterRouteEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRouterRouteEntriesResult::ListTransitRouterRouteEntriesResult() :
	ServiceResult()
{}

ListTransitRouterRouteEntriesResult::ListTransitRouterRouteEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRouterRouteEntriesResult::~ListTransitRouterRouteEntriesResult()
{}

void ListTransitRouterRouteEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTransitRouterRouteEntriesNode = value["TransitRouterRouteEntries"]["TransitRouterRouteEntry"];
	for (auto valueTransitRouterRouteEntriesTransitRouterRouteEntry : allTransitRouterRouteEntriesNode)
	{
		TransitRouterRouteEntry transitRouterRouteEntriesObject;
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryId"].isNull())
			transitRouterRouteEntriesObject.transitRouterRouteEntryId = valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryId"].asString();
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryDestinationCidrBlock"].isNull())
			transitRouterRouteEntriesObject.transitRouterRouteEntryDestinationCidrBlock = valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryDestinationCidrBlock"].asString();
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryType"].isNull())
			transitRouterRouteEntriesObject.transitRouterRouteEntryType = valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryType"].asString();
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["CreateTime"].isNull())
			transitRouterRouteEntriesObject.createTime = valueTransitRouterRouteEntriesTransitRouterRouteEntry["CreateTime"].asString();
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryName"].isNull())
			transitRouterRouteEntriesObject.transitRouterRouteEntryName = valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryName"].asString();
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryStatus"].isNull())
			transitRouterRouteEntriesObject.transitRouterRouteEntryStatus = valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryStatus"].asString();
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryNextHopType"].isNull())
			transitRouterRouteEntriesObject.transitRouterRouteEntryNextHopType = valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryNextHopType"].asString();
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryNextHopId"].isNull())
			transitRouterRouteEntriesObject.transitRouterRouteEntryNextHopId = valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryNextHopId"].asString();
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryDescription"].isNull())
			transitRouterRouteEntriesObject.transitRouterRouteEntryDescription = valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryDescription"].asString();
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["OperationalMode"].isNull())
			transitRouterRouteEntriesObject.operationalMode = valueTransitRouterRouteEntriesTransitRouterRouteEntry["OperationalMode"].asString() == "true";
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["Tag"].isNull())
			transitRouterRouteEntriesObject.tag = valueTransitRouterRouteEntriesTransitRouterRouteEntry["Tag"].asString();
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryNextHopResourceId"].isNull())
			transitRouterRouteEntriesObject.transitRouterRouteEntryNextHopResourceId = valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryNextHopResourceId"].asString();
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryNextHopResourceType"].isNull())
			transitRouterRouteEntriesObject.transitRouterRouteEntryNextHopResourceType = valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryNextHopResourceType"].asString();
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryOriginResourceType"].isNull())
			transitRouterRouteEntriesObject.transitRouterRouteEntryOriginResourceType = valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryOriginResourceType"].asString();
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryOriginResourceId"].isNull())
			transitRouterRouteEntriesObject.transitRouterRouteEntryOriginResourceId = valueTransitRouterRouteEntriesTransitRouterRouteEntry["TransitRouterRouteEntryOriginResourceId"].asString();
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["PrefixListId"].isNull())
			transitRouterRouteEntriesObject.prefixListId = valueTransitRouterRouteEntriesTransitRouterRouteEntry["PrefixListId"].asString();
		if(!valueTransitRouterRouteEntriesTransitRouterRouteEntry["Preference"].isNull())
			transitRouterRouteEntriesObject.preference = std::stoi(valueTransitRouterRouteEntriesTransitRouterRouteEntry["Preference"].asString());
		auto pathAttributesNode = value["PathAttributes"];
		if(!pathAttributesNode["OriginInstanceId"].isNull())
			transitRouterRouteEntriesObject.pathAttributes.originInstanceId = pathAttributesNode["OriginInstanceId"].asString();
		if(!pathAttributesNode["OriginInstanceType"].isNull())
			transitRouterRouteEntriesObject.pathAttributes.originInstanceType = pathAttributesNode["OriginInstanceType"].asString();
		if(!pathAttributesNode["OriginRouteType"].isNull())
			transitRouterRouteEntriesObject.pathAttributes.originRouteType = pathAttributesNode["OriginRouteType"].asString();
		if(!pathAttributesNode["Preference"].isNull())
			transitRouterRouteEntriesObject.pathAttributes.preference = std::stoi(pathAttributesNode["Preference"].asString());
			auto allCommunities1 = pathAttributesNode["Communities"]["Community"];
			for (auto value : allCommunities1)
				transitRouterRouteEntriesObject.pathAttributes.communities1.push_back(value.asString());
			auto allAsPaths2 = pathAttributesNode["AsPaths"]["AsPath"];
			for (auto value : allAsPaths2)
				transitRouterRouteEntriesObject.pathAttributes.asPaths2.push_back(value.asString());
		auto allCommunities = value["Communities"]["Community"];
		for (auto value : allCommunities)
			transitRouterRouteEntriesObject.communities.push_back(value.asString());
		auto allAsPaths = value["AsPaths"]["AsPath"];
		for (auto value : allAsPaths)
			transitRouterRouteEntriesObject.asPaths.push_back(value.asString());
		transitRouterRouteEntries_.push_back(transitRouterRouteEntriesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListTransitRouterRouteEntriesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTransitRouterRouteEntriesResult::getNextToken()const
{
	return nextToken_;
}

int ListTransitRouterRouteEntriesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTransitRouterRouteEntriesResult::TransitRouterRouteEntry> ListTransitRouterRouteEntriesResult::getTransitRouterRouteEntries()const
{
	return transitRouterRouteEntries_;
}

