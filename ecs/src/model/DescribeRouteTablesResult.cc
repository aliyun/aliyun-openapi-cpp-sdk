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
	auto allRouteTables = value["RouteTables"]["RouteTable"];
	for (auto value : allRouteTables)
	{
		RouteTable routeTablesObject;
		if(!value["VRouterId"].isNull())
			routeTablesObject.vRouterId = value["VRouterId"].asString();
		if(!value["RouteTableId"].isNull())
			routeTablesObject.routeTableId = value["RouteTableId"].asString();
		if(!value["RouteTableType"].isNull())
			routeTablesObject.routeTableType = value["RouteTableType"].asString();
		if(!value["CreationTime"].isNull())
			routeTablesObject.creationTime = value["CreationTime"].asString();
		if(!value["ResourceGroupId"].isNull())
			routeTablesObject.resourceGroupId = value["ResourceGroupId"].asString();
		auto allRouteEntrys = value["RouteEntrys"]["RouteEntry"];
		for (auto value : allRouteEntrys)
		{
			RouteTable::RouteEntry routeEntrysObject;
			if(!value["RouteTableId"].isNull())
				routeEntrysObject.routeTableId = value["RouteTableId"].asString();
			if(!value["DestinationCidrBlock"].isNull())
				routeEntrysObject.destinationCidrBlock = value["DestinationCidrBlock"].asString();
			if(!value["Type"].isNull())
				routeEntrysObject.type = value["Type"].asString();
			if(!value["Status"].isNull())
				routeEntrysObject.status = value["Status"].asString();
			if(!value["InstanceId"].isNull())
				routeEntrysObject.instanceId = value["InstanceId"].asString();
			if(!value["NextHopType"].isNull())
				routeEntrysObject.nextHopType = value["NextHopType"].asString();
			auto allNextHops = value["NextHops"]["NextHop"];
			for (auto value : allNextHops)
			{
				RouteTable::RouteEntry::NextHop nextHopsObject;
				if(!value["NextHopType"].isNull())
					nextHopsObject.nextHopType = value["NextHopType"].asString();
				if(!value["NextHopId"].isNull())
					nextHopsObject.nextHopId = value["NextHopId"].asString();
				if(!value["Enabled"].isNull())
					nextHopsObject.enabled = std::stoi(value["Enabled"].asString());
				if(!value["Weight"].isNull())
					nextHopsObject.weight = std::stoi(value["Weight"].asString());
				routeEntrysObject.nextHops.push_back(nextHopsObject);
			}
			routeTablesObject.routeEntrys.push_back(routeEntrysObject);
		}
		routeTables_.push_back(routeTablesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

