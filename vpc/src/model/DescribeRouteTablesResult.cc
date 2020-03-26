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

#include <alibabacloud/vpc/model/DescribeRouteTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

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
		if(!valueRouteTablesRouteTable["VRouterId"].isNull())
			routeTablesObject.vRouterId = valueRouteTablesRouteTable["VRouterId"].asString();
		if(!valueRouteTablesRouteTable["RouteTableId"].isNull())
			routeTablesObject.routeTableId = valueRouteTablesRouteTable["RouteTableId"].asString();
		if(!valueRouteTablesRouteTable["RouteTableType"].isNull())
			routeTablesObject.routeTableType = valueRouteTablesRouteTable["RouteTableType"].asString();
		if(!valueRouteTablesRouteTable["CreationTime"].isNull())
			routeTablesObject.creationTime = valueRouteTablesRouteTable["CreationTime"].asString();
		if(!valueRouteTablesRouteTable["ResourceGroupId"].isNull())
			routeTablesObject.resourceGroupId = valueRouteTablesRouteTable["ResourceGroupId"].asString();
		if(!valueRouteTablesRouteTable["Status"].isNull())
			routeTablesObject.status = valueRouteTablesRouteTable["Status"].asString();
		auto allRouteEntrysNode = allRouteTablesNode["RouteEntrys"]["RouteEntry"];
		for (auto allRouteTablesNodeRouteEntrysRouteEntry : allRouteEntrysNode)
		{
			RouteTable::RouteEntry routeEntrysObject;
			if(!allRouteTablesNodeRouteEntrysRouteEntry["RouteTableId"].isNull())
				routeEntrysObject.routeTableId = allRouteTablesNodeRouteEntrysRouteEntry["RouteTableId"].asString();
			if(!allRouteTablesNodeRouteEntrysRouteEntry["DestinationCidrBlock"].isNull())
				routeEntrysObject.destinationCidrBlock = allRouteTablesNodeRouteEntrysRouteEntry["DestinationCidrBlock"].asString();
			if(!allRouteTablesNodeRouteEntrysRouteEntry["Type"].isNull())
				routeEntrysObject.type = allRouteTablesNodeRouteEntrysRouteEntry["Type"].asString();
			if(!allRouteTablesNodeRouteEntrysRouteEntry["Status"].isNull())
				routeEntrysObject.status = allRouteTablesNodeRouteEntrysRouteEntry["Status"].asString();
			if(!allRouteTablesNodeRouteEntrysRouteEntry["InstanceId"].isNull())
				routeEntrysObject.instanceId = allRouteTablesNodeRouteEntrysRouteEntry["InstanceId"].asString();
			if(!allRouteTablesNodeRouteEntrysRouteEntry["NextHopType"].isNull())
				routeEntrysObject.nextHopType = allRouteTablesNodeRouteEntrysRouteEntry["NextHopType"].asString();
			if(!allRouteTablesNodeRouteEntrysRouteEntry["RouteEntryName"].isNull())
				routeEntrysObject.routeEntryName = allRouteTablesNodeRouteEntrysRouteEntry["RouteEntryName"].asString();
			if(!allRouteTablesNodeRouteEntrysRouteEntry["Description"].isNull())
				routeEntrysObject.description = allRouteTablesNodeRouteEntrysRouteEntry["Description"].asString();
			if(!allRouteTablesNodeRouteEntrysRouteEntry["RouteEntryId"].isNull())
				routeEntrysObject.routeEntryId = allRouteTablesNodeRouteEntrysRouteEntry["RouteEntryId"].asString();
			if(!allRouteTablesNodeRouteEntrysRouteEntry["NextHopRegionId"].isNull())
				routeEntrysObject.nextHopRegionId = allRouteTablesNodeRouteEntrysRouteEntry["NextHopRegionId"].asString();
			if(!allRouteTablesNodeRouteEntrysRouteEntry["NextHopOppsiteType"].isNull())
				routeEntrysObject.nextHopOppsiteType = allRouteTablesNodeRouteEntrysRouteEntry["NextHopOppsiteType"].asString();
			if(!allRouteTablesNodeRouteEntrysRouteEntry["NextHopOppsiteInstanceId"].isNull())
				routeEntrysObject.nextHopOppsiteInstanceId = allRouteTablesNodeRouteEntrysRouteEntry["NextHopOppsiteInstanceId"].asString();
			if(!allRouteTablesNodeRouteEntrysRouteEntry["NextHopOppsiteRegionId"].isNull())
				routeEntrysObject.nextHopOppsiteRegionId = allRouteTablesNodeRouteEntrysRouteEntry["NextHopOppsiteRegionId"].asString();
			if(!allRouteTablesNodeRouteEntrysRouteEntry["PrivateIpAddress"].isNull())
				routeEntrysObject.privateIpAddress = allRouteTablesNodeRouteEntrysRouteEntry["PrivateIpAddress"].asString();
			auto allNextHopsNode = allRouteEntrysNode["NextHops"]["NextHop"];
			for (auto allRouteEntrysNodeNextHopsNextHop : allNextHopsNode)
			{
				RouteTable::RouteEntry::NextHop nextHopsObject;
				if(!allRouteEntrysNodeNextHopsNextHop["NextHopType"].isNull())
					nextHopsObject.nextHopType = allRouteEntrysNodeNextHopsNextHop["NextHopType"].asString();
				if(!allRouteEntrysNodeNextHopsNextHop["NextHopId"].isNull())
					nextHopsObject.nextHopId = allRouteEntrysNodeNextHopsNextHop["NextHopId"].asString();
				if(!allRouteEntrysNodeNextHopsNextHop["Enabled"].isNull())
					nextHopsObject.enabled = std::stoi(allRouteEntrysNodeNextHopsNextHop["Enabled"].asString());
				if(!allRouteEntrysNodeNextHopsNextHop["Weight"].isNull())
					nextHopsObject.weight = std::stoi(allRouteEntrysNodeNextHopsNextHop["Weight"].asString());
				if(!allRouteEntrysNodeNextHopsNextHop["NextHopRegionId"].isNull())
					nextHopsObject.nextHopRegionId = allRouteEntrysNodeNextHopsNextHop["NextHopRegionId"].asString();
				if(!allRouteEntrysNodeNextHopsNextHop["NextHopOppsiteType"].isNull())
					nextHopsObject.nextHopOppsiteType = allRouteEntrysNodeNextHopsNextHop["NextHopOppsiteType"].asString();
				if(!allRouteEntrysNodeNextHopsNextHop["NextHopOppsiteInstanceId"].isNull())
					nextHopsObject.nextHopOppsiteInstanceId = allRouteEntrysNodeNextHopsNextHop["NextHopOppsiteInstanceId"].asString();
				if(!allRouteEntrysNodeNextHopsNextHop["NextHopOppsiteRegionId"].isNull())
					nextHopsObject.nextHopOppsiteRegionId = allRouteEntrysNodeNextHopsNextHop["NextHopOppsiteRegionId"].asString();
				routeEntrysObject.nextHops.push_back(nextHopsObject);
			}
			routeTablesObject.routeEntrys.push_back(routeEntrysObject);
		}
		auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
		for (auto value : allVSwitchIds)
			routeTablesObject.vSwitchIds.push_back(value.asString());
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

