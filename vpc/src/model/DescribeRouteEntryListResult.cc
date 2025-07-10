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
		if(!valueRouteEntrysRouteEntry["Status"].isNull())
			routeEntrysObject.status = valueRouteEntrysRouteEntry["Status"].asString();
		if(!valueRouteEntrysRouteEntry["Type"].isNull())
			routeEntrysObject.type = valueRouteEntrysRouteEntry["Type"].asString();
		if(!valueRouteEntrysRouteEntry["IpVersion"].isNull())
			routeEntrysObject.ipVersion = valueRouteEntrysRouteEntry["IpVersion"].asString();
		if(!valueRouteEntrysRouteEntry["Description"].isNull())
			routeEntrysObject.description = valueRouteEntrysRouteEntry["Description"].asString();
		if(!valueRouteEntrysRouteEntry["RouteEntryName"].isNull())
			routeEntrysObject.routeEntryName = valueRouteEntrysRouteEntry["RouteEntryName"].asString();
		if(!valueRouteEntrysRouteEntry["DestinationCidrBlock"].isNull())
			routeEntrysObject.destinationCidrBlock = valueRouteEntrysRouteEntry["DestinationCidrBlock"].asString();
		if(!valueRouteEntrysRouteEntry["RouteEntryId"].isNull())
			routeEntrysObject.routeEntryId = valueRouteEntrysRouteEntry["RouteEntryId"].asString();
		if(!valueRouteEntrysRouteEntry["RouteTableId"].isNull())
			routeEntrysObject.routeTableId = valueRouteEntrysRouteEntry["RouteTableId"].asString();
		if(!valueRouteEntrysRouteEntry["GmtModified"].isNull())
			routeEntrysObject.gmtModified = valueRouteEntrysRouteEntry["GmtModified"].asString();
		if(!valueRouteEntrysRouteEntry["ServiceType"].isNull())
			routeEntrysObject.serviceType = valueRouteEntrysRouteEntry["ServiceType"].asString();
		if(!valueRouteEntrysRouteEntry["Origin"].isNull())
			routeEntrysObject.origin = valueRouteEntrysRouteEntry["Origin"].asString();
		auto allNextHopsNode = valueRouteEntrysRouteEntry["NextHops"]["NextHop"];
		for (auto valueRouteEntrysRouteEntryNextHopsNextHop : allNextHopsNode)
		{
			RouteEntry::NextHop nextHopsObject;
			if(!valueRouteEntrysRouteEntryNextHopsNextHop["NextHopRegionId"].isNull())
				nextHopsObject.nextHopRegionId = valueRouteEntrysRouteEntryNextHopsNextHop["NextHopRegionId"].asString();
			if(!valueRouteEntrysRouteEntryNextHopsNextHop["Weight"].isNull())
				nextHopsObject.weight = std::stoi(valueRouteEntrysRouteEntryNextHopsNextHop["Weight"].asString());
			if(!valueRouteEntrysRouteEntryNextHopsNextHop["NextHopId"].isNull())
				nextHopsObject.nextHopId = valueRouteEntrysRouteEntryNextHopsNextHop["NextHopId"].asString();
			if(!valueRouteEntrysRouteEntryNextHopsNextHop["Enabled"].isNull())
				nextHopsObject.enabled = std::stoi(valueRouteEntrysRouteEntryNextHopsNextHop["Enabled"].asString());
			if(!valueRouteEntrysRouteEntryNextHopsNextHop["NextHopType"].isNull())
				nextHopsObject.nextHopType = valueRouteEntrysRouteEntryNextHopsNextHop["NextHopType"].asString();
			auto nextHopRelatedInfoNode = value["NextHopRelatedInfo"];
			if(!nextHopRelatedInfoNode["InstanceId"].isNull())
				nextHopsObject.nextHopRelatedInfo.instanceId = nextHopRelatedInfoNode["InstanceId"].asString();
			if(!nextHopRelatedInfoNode["InstanceType"].isNull())
				nextHopsObject.nextHopRelatedInfo.instanceType = nextHopRelatedInfoNode["InstanceType"].asString();
			if(!nextHopRelatedInfoNode["RegionId"].isNull())
				nextHopsObject.nextHopRelatedInfo.regionId = nextHopRelatedInfoNode["RegionId"].asString();
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

