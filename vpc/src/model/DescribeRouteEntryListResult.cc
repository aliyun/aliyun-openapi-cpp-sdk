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

#include <alibabacloud/vpc/model/DescribeRouteEntryListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeRouteEntryListResult::DescribeRouteEntryListResult() :
	ServiceResult()
{}

DescribeRouteEntryListResult::DescribeRouteEntryListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRouteEntryListResult::~DescribeRouteEntryListResult()
{}

void DescribeRouteEntryListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRouteEntrysNode = value["RouteEntrys"]["RouteEntry"];
	for (auto valueRouteEntrysRouteEntry : allRouteEntrysNode)
	{
		RouteEntry routeEntrysObject;
		if(!valueRouteEntrysRouteEntry["RouteTableId"].isNull())
			routeEntrysObject.routeTableId = valueRouteEntrysRouteEntry["RouteTableId"].asString();
		if(!valueRouteEntrysRouteEntry["DestinationCidrBlock"].isNull())
			routeEntrysObject.destinationCidrBlock = valueRouteEntrysRouteEntry["DestinationCidrBlock"].asString();
		if(!valueRouteEntrysRouteEntry["Type"].isNull())
			routeEntrysObject.type = valueRouteEntrysRouteEntry["Type"].asString();
		if(!valueRouteEntrysRouteEntry["RouteEntryId"].isNull())
			routeEntrysObject.routeEntryId = valueRouteEntrysRouteEntry["RouteEntryId"].asString();
		if(!valueRouteEntrysRouteEntry["RouteEntryName"].isNull())
			routeEntrysObject.routeEntryName = valueRouteEntrysRouteEntry["RouteEntryName"].asString();
		if(!valueRouteEntrysRouteEntry["Status"].isNull())
			routeEntrysObject.status = valueRouteEntrysRouteEntry["Status"].asString();
		if(!valueRouteEntrysRouteEntry["IpVersion"].isNull())
			routeEntrysObject.ipVersion = valueRouteEntrysRouteEntry["IpVersion"].asString();
		auto allNextHopsNode = allRouteEntrysNode["NextHops"]["NextHop"];
		for (auto allRouteEntrysNodeNextHopsNextHop : allNextHopsNode)
		{
			RouteEntry::NextHop nextHopsObject;
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
			auto nextHopRelatedInfoNode = value["NextHopRelatedInfo"];
			if(!nextHopRelatedInfoNode["InstanceType"].isNull())
				nextHopsObject.nextHopRelatedInfo.instanceType = nextHopRelatedInfoNode["InstanceType"].asString();
			if(!nextHopRelatedInfoNode["RegionId"].isNull())
				nextHopsObject.nextHopRelatedInfo.regionId = nextHopRelatedInfoNode["RegionId"].asString();
			if(!nextHopRelatedInfoNode["InstanceId"].isNull())
				nextHopsObject.nextHopRelatedInfo.instanceId = nextHopRelatedInfoNode["InstanceId"].asString();
			routeEntrysObject.nextHops.push_back(nextHopsObject);
		}
		routeEntrys_.push_back(routeEntrysObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeRouteEntryListResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeRouteEntryListResult::RouteEntry> DescribeRouteEntryListResult::getRouteEntrys()const
{
	return routeEntrys_;
}

