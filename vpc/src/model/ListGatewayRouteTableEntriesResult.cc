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

#include <alibabacloud/vpc/model/ListGatewayRouteTableEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListGatewayRouteTableEntriesResult::ListGatewayRouteTableEntriesResult() :
	ServiceResult()
{}

ListGatewayRouteTableEntriesResult::ListGatewayRouteTableEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGatewayRouteTableEntriesResult::~ListGatewayRouteTableEntriesResult()
{}

void ListGatewayRouteTableEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGatewayRouteEntryModelsNode = value["GatewayRouteEntryModels"]["GatewayRouteEntryModelsItem"];
	for (auto valueGatewayRouteEntryModelsGatewayRouteEntryModelsItem : allGatewayRouteEntryModelsNode)
	{
		GatewayRouteEntryModelsItem gatewayRouteEntryModelsObject;
		if(!valueGatewayRouteEntryModelsGatewayRouteEntryModelsItem["Status"].isNull())
			gatewayRouteEntryModelsObject.status = valueGatewayRouteEntryModelsGatewayRouteEntryModelsItem["Status"].asString();
		if(!valueGatewayRouteEntryModelsGatewayRouteEntryModelsItem["NextHopId"].isNull())
			gatewayRouteEntryModelsObject.nextHopId = valueGatewayRouteEntryModelsGatewayRouteEntryModelsItem["NextHopId"].asString();
		if(!valueGatewayRouteEntryModelsGatewayRouteEntryModelsItem["Description"].isNull())
			gatewayRouteEntryModelsObject.description = valueGatewayRouteEntryModelsGatewayRouteEntryModelsItem["Description"].asString();
		if(!valueGatewayRouteEntryModelsGatewayRouteEntryModelsItem["NextHopType"].isNull())
			gatewayRouteEntryModelsObject.nextHopType = valueGatewayRouteEntryModelsGatewayRouteEntryModelsItem["NextHopType"].asString();
		if(!valueGatewayRouteEntryModelsGatewayRouteEntryModelsItem["DestinationCidrBlock"].isNull())
			gatewayRouteEntryModelsObject.destinationCidrBlock = valueGatewayRouteEntryModelsGatewayRouteEntryModelsItem["DestinationCidrBlock"].asString();
		if(!valueGatewayRouteEntryModelsGatewayRouteEntryModelsItem["Name"].isNull())
			gatewayRouteEntryModelsObject.name = valueGatewayRouteEntryModelsGatewayRouteEntryModelsItem["Name"].asString();
		auto allNextHopsNode = valueGatewayRouteEntryModelsGatewayRouteEntryModelsItem["NextHops"]["NextHop"];
		for (auto valueGatewayRouteEntryModelsGatewayRouteEntryModelsItemNextHopsNextHop : allNextHopsNode)
		{
			GatewayRouteEntryModelsItem::NextHop nextHopsObject;
			if(!valueGatewayRouteEntryModelsGatewayRouteEntryModelsItemNextHopsNextHop["NextHopId"].isNull())
				nextHopsObject.nextHopId = valueGatewayRouteEntryModelsGatewayRouteEntryModelsItemNextHopsNextHop["NextHopId"].asString();
			if(!valueGatewayRouteEntryModelsGatewayRouteEntryModelsItemNextHopsNextHop["NextHopType"].isNull())
				nextHopsObject.nextHopType = valueGatewayRouteEntryModelsGatewayRouteEntryModelsItemNextHopsNextHop["NextHopType"].asString();
			if(!valueGatewayRouteEntryModelsGatewayRouteEntryModelsItemNextHopsNextHop["Weight"].isNull())
				nextHopsObject.weight = valueGatewayRouteEntryModelsGatewayRouteEntryModelsItemNextHopsNextHop["Weight"].asString();
			if(!valueGatewayRouteEntryModelsGatewayRouteEntryModelsItemNextHopsNextHop["Enabled"].isNull())
				nextHopsObject.enabled = valueGatewayRouteEntryModelsGatewayRouteEntryModelsItemNextHopsNextHop["Enabled"].asString();
			gatewayRouteEntryModelsObject.nextHops.push_back(nextHopsObject);
		}
		gatewayRouteEntryModels_.push_back(gatewayRouteEntryModelsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::vector<ListGatewayRouteTableEntriesResult::GatewayRouteEntryModelsItem> ListGatewayRouteTableEntriesResult::getGatewayRouteEntryModels()const
{
	return gatewayRouteEntryModels_;
}

std::string ListGatewayRouteTableEntriesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListGatewayRouteTableEntriesResult::getNextToken()const
{
	return nextToken_;
}

