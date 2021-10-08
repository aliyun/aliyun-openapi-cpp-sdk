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

#include <alibabacloud/ecs/model/DescribeRouteTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeRouteTablesResult::DescribeRouteTablesResult() :
	ServiceResult()
{}

DescribeRouteTablesResult::DescribeRouteTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRouteTablesResult::~DescribeRouteTablesResult()
{}

void DescribeRouteTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRouteTablesNode = value["RouteTables"]["RouteTable"];
	for (auto valueRouteTablesRouteTable : allRouteTablesNode)
	{
		RouteTable routeTablesObject;
		if(!valueRouteTablesRouteTable["CreationTime"].isNull())
			routeTablesObject.creationTime = valueRouteTablesRouteTable["CreationTime"].asString();
		if(!valueRouteTablesRouteTable["VRouterId"].isNull())
			routeTablesObject.vRouterId = valueRouteTablesRouteTable["VRouterId"].asString();
		if(!valueRouteTablesRouteTable["RouteTableId"].isNull())
			routeTablesObject.routeTableId = valueRouteTablesRouteTable["RouteTableId"].asString();
		if(!valueRouteTablesRouteTable["ResourceGroupId"].isNull())
			routeTablesObject.resourceGroupId = valueRouteTablesRouteTable["ResourceGroupId"].asString();
		if(!valueRouteTablesRouteTable["RouteTableType"].isNull())
			routeTablesObject.routeTableType = valueRouteTablesRouteTable["RouteTableType"].asString();
		auto allRouteEntrysNode = valueRouteTablesRouteTable["RouteEntrys"]["RouteEntry"];
		for (auto valueRouteTablesRouteTableRouteEntrysRouteEntry : allRouteEntrysNode)
		{
			RouteTable::RouteEntry routeEntrysObject;
			if(!valueRouteTablesRouteTableRouteEntrysRouteEntry["Type"].isNull())
				routeEntrysObject.type = valueRouteTablesRouteTableRouteEntrysRouteEntry["Type"].asString();
			if(!valueRouteTablesRouteTableRouteEntrysRouteEntry["Status"].isNull())
				routeEntrysObject.status = valueRouteTablesRouteTableRouteEntrysRouteEntry["Status"].asString();
			if(!valueRouteTablesRouteTableRouteEntrysRouteEntry["NextHopType"].isNull())
				routeEntrysObject.nextHopType = valueRouteTablesRouteTableRouteEntrysRouteEntry["NextHopType"].asString();
			if(!valueRouteTablesRouteTableRouteEntrysRouteEntry["DestinationCidrBlock"].isNull())
				routeEntrysObject.destinationCidrBlock = valueRouteTablesRouteTableRouteEntrysRouteEntry["DestinationCidrBlock"].asString();
			if(!valueRouteTablesRouteTableRouteEntrysRouteEntry["InstanceId"].isNull())
				routeEntrysObject.instanceId = valueRouteTablesRouteTableRouteEntrysRouteEntry["InstanceId"].asString();
			if(!valueRouteTablesRouteTableRouteEntrysRouteEntry["RouteTableId"].isNull())
				routeEntrysObject.routeTableId = valueRouteTablesRouteTableRouteEntrysRouteEntry["RouteTableId"].asString();
			auto allNextHopsNode = valueRouteTablesRouteTableRouteEntrysRouteEntry["NextHops"]["NextHop"];
			for (auto valueRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop : allNextHopsNode)
			{
				RouteTable::RouteEntry::NextHop nextHopsObject;
				if(!valueRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop["Weight"].isNull())
					nextHopsObject.weight = std::stoi(valueRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop["Weight"].asString());
				if(!valueRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop["NextHopId"].isNull())
					nextHopsObject.nextHopId = valueRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop["NextHopId"].asString();
				if(!valueRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop["NextHopType"].isNull())
					nextHopsObject.nextHopType = valueRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop["NextHopType"].asString();
				if(!valueRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop["Enabled"].isNull())
					nextHopsObject.enabled = std::stoi(valueRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop["Enabled"].asString());
				routeEntrysObject.nextHops.push_back(nextHopsObject);
			}
			routeTablesObject.routeEntrys.push_back(routeEntrysObject);
		}
		routeTables_.push_back(routeTablesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeRouteTablesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRouteTablesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRouteTablesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeRouteTablesResult::RouteTable> DescribeRouteTablesResult::getRouteTables()const
{
	return routeTables_;
}

