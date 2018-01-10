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
		RouteTable routeTableObject;
		routeTableObject.vRouterId = value["VRouterId"].asString();
		routeTableObject.routeTableId = value["RouteTableId"].asString();
		routeTableObject.routeTableType = value["RouteTableType"].asString();
		routeTableObject.creationTime = value["CreationTime"].asString();
		auto allRouteEntrys = value["RouteEntrys"]["RouteEntry"];
		for (auto value : allRouteEntrys)
		{
			RouteTable::RouteEntry routeEntryObject;
			routeEntryObject.routeTableId = value["RouteTableId"].asString();
			routeEntryObject.destinationCidrBlock = value["DestinationCidrBlock"].asString();
			routeEntryObject.type = value["Type"].asString();
			routeEntryObject.status = value["Status"].asString();
			routeEntryObject.instanceId = value["InstanceId"].asString();
			routeEntryObject.nextHopType = value["NextHopType"].asString();
			auto allNextHops = value["NextHops"]["NextHop"];
			for (auto value : allNextHops)
			{
				RouteTable::RouteEntry::NextHop nextHopObject;
				nextHopObject.nextHopType = value["NextHopType"].asString();
				nextHopObject.nextHopId = value["NextHopId"].asString();
				nextHopObject.enabled = std::stoi(value["Enabled"].asString());
				nextHopObject.weight = std::stoi(value["Weight"].asString());
				routeEntryObject.nextHops.push_back(nextHopObject);
			}
			routeTableObject.routeEntrys.push_back(routeEntryObject);
		}
		routeTables_.push_back(routeTableObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeRouteTablesResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeRouteTablesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeRouteTablesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeRouteTablesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeRouteTablesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRouteTablesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

