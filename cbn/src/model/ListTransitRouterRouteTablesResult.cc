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

#include <alibabacloud/cbn/model/ListTransitRouterRouteTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRouterRouteTablesResult::ListTransitRouterRouteTablesResult() :
	ServiceResult()
{}

ListTransitRouterRouteTablesResult::ListTransitRouterRouteTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRouterRouteTablesResult::~ListTransitRouterRouteTablesResult()
{}

void ListTransitRouterRouteTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTransitRouterRouteTablesNode = value["TransitRouterRouteTables"]["TransitRouterRouteTable"];
	for (auto valueTransitRouterRouteTablesTransitRouterRouteTable : allTransitRouterRouteTablesNode)
	{
		TransitRouterRouteTable transitRouterRouteTablesObject;
		if(!valueTransitRouterRouteTablesTransitRouterRouteTable["TransitRouterRouteTableStatus"].isNull())
			transitRouterRouteTablesObject.transitRouterRouteTableStatus = valueTransitRouterRouteTablesTransitRouterRouteTable["TransitRouterRouteTableStatus"].asString();
		if(!valueTransitRouterRouteTablesTransitRouterRouteTable["TransitRouterRouteTableType"].isNull())
			transitRouterRouteTablesObject.transitRouterRouteTableType = valueTransitRouterRouteTablesTransitRouterRouteTable["TransitRouterRouteTableType"].asString();
		if(!valueTransitRouterRouteTablesTransitRouterRouteTable["CreateTime"].isNull())
			transitRouterRouteTablesObject.createTime = valueTransitRouterRouteTablesTransitRouterRouteTable["CreateTime"].asString();
		if(!valueTransitRouterRouteTablesTransitRouterRouteTable["TransitRouterRouteTableId"].isNull())
			transitRouterRouteTablesObject.transitRouterRouteTableId = valueTransitRouterRouteTablesTransitRouterRouteTable["TransitRouterRouteTableId"].asString();
		if(!valueTransitRouterRouteTablesTransitRouterRouteTable["TransitRouterRouteTableName"].isNull())
			transitRouterRouteTablesObject.transitRouterRouteTableName = valueTransitRouterRouteTablesTransitRouterRouteTable["TransitRouterRouteTableName"].asString();
		if(!valueTransitRouterRouteTablesTransitRouterRouteTable["TransitRouterRouteTableDescription"].isNull())
			transitRouterRouteTablesObject.transitRouterRouteTableDescription = valueTransitRouterRouteTablesTransitRouterRouteTable["TransitRouterRouteTableDescription"].asString();
		if(!valueTransitRouterRouteTablesTransitRouterRouteTable["RegionId"].isNull())
			transitRouterRouteTablesObject.regionId = valueTransitRouterRouteTablesTransitRouterRouteTable["RegionId"].asString();
		if(!valueTransitRouterRouteTablesTransitRouterRouteTable["TransitRouterId"].isNull())
			transitRouterRouteTablesObject.transitRouterId = valueTransitRouterRouteTablesTransitRouterRouteTable["TransitRouterId"].asString();
		auto allTagsNode = valueTransitRouterRouteTablesTransitRouterRouteTable["Tags"]["Tag"];
		for (auto valueTransitRouterRouteTablesTransitRouterRouteTableTagsTag : allTagsNode)
		{
			TransitRouterRouteTable::Tag tagsObject;
			if(!valueTransitRouterRouteTablesTransitRouterRouteTableTagsTag["Key"].isNull())
				tagsObject.key = valueTransitRouterRouteTablesTransitRouterRouteTableTagsTag["Key"].asString();
			if(!valueTransitRouterRouteTablesTransitRouterRouteTableTagsTag["Value"].isNull())
				tagsObject.value = valueTransitRouterRouteTablesTransitRouterRouteTableTagsTag["Value"].asString();
			transitRouterRouteTablesObject.tags.push_back(tagsObject);
		}
		auto routeTableOptionsNode = value["RouteTableOptions"];
		if(!routeTableOptionsNode["MultiRegionECMP"].isNull())
			transitRouterRouteTablesObject.routeTableOptions.multiRegionECMP = routeTableOptionsNode["MultiRegionECMP"].asString();
		transitRouterRouteTables_.push_back(transitRouterRouteTablesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListTransitRouterRouteTablesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTransitRouterRouteTablesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListTransitRouterRouteTablesResult::TransitRouterRouteTable> ListTransitRouterRouteTablesResult::getTransitRouterRouteTables()const
{
	return transitRouterRouteTables_;
}

int ListTransitRouterRouteTablesResult::getMaxResults()const
{
	return maxResults_;
}

