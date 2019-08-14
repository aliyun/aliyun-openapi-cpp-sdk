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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRouteEntrys = value["RouteEntrys"]["RouteEntry"];
	for (auto value : allRouteEntrys)
	{
		RouteEntry routeEntrysObject;
		if(!value["RouteTableId"].isNull())
			routeEntrysObject.routeTableId = value["RouteTableId"].asString();
		if(!value["DestinationCidrBlock"].isNull())
			routeEntrysObject.destinationCidrBlock = value["DestinationCidrBlock"].asString();
		if(!value["Type"].isNull())
			routeEntrysObject.type = value["Type"].asString();
		if(!value["RouteEntryId"].isNull())
			routeEntrysObject.routeEntryId = value["RouteEntryId"].asString();
		if(!value["RouteEntryName"].isNull())
			routeEntrysObject.routeEntryName = value["RouteEntryName"].asString();
		if(!value["Status"].isNull())
			routeEntrysObject.status = value["Status"].asString();
		if(!value["IpVersion"].isNull())
			routeEntrysObject.ipVersion = value["IpVersion"].asString();
		auto allNextHops = value["NextHops"]["NextHop"];
		for (auto value : allNextHops)
		{
			RouteEntry::NextHop nextHopsObject;
			if(!value["NextHopType"].isNull())
				nextHopsObject.nextHopType = value["NextHopType"].asString();
			if(!value["NextHopId"].isNull())
				nextHopsObject.nextHopId = value["NextHopId"].asString();
			if(!value["Enabled"].isNull())
				nextHopsObject.enabled = std::stoi(value["Enabled"].asString());
			if(!value["Weight"].isNull())
				nextHopsObject.weight = std::stoi(value["Weight"].asString());
			if(!value["NextHopRegionId"].isNull())
				nextHopsObject.nextHopRegionId = value["NextHopRegionId"].asString();
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

