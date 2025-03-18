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

#include <alibabacloud/ens/model/DescribeEnsRouteEntryListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeEnsRouteEntryListResult::DescribeEnsRouteEntryListResult() :
	ServiceResult()
{}

DescribeEnsRouteEntryListResult::DescribeEnsRouteEntryListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEnsRouteEntryListResult::~DescribeEnsRouteEntryListResult()
{}

void DescribeEnsRouteEntryListResult::parse(const std::string &payload)
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
		if(!valueRouteEntrysRouteEntry["SourceCidrBlock"].isNull())
			routeEntrysObject.sourceCidrBlock = valueRouteEntrysRouteEntry["SourceCidrBlock"].asString();
		if(!valueRouteEntrysRouteEntry["CreationTime"].isNull())
			routeEntrysObject.creationTime = valueRouteEntrysRouteEntry["CreationTime"].asString();
		auto allNextHopsNode = valueRouteEntrysRouteEntry["NextHops"]["NextHop"];
		for (auto valueRouteEntrysRouteEntryNextHopsNextHop : allNextHopsNode)
		{
			RouteEntry::NextHop nextHopsObject;
			if(!valueRouteEntrysRouteEntryNextHopsNextHop["NextHopId"].isNull())
				nextHopsObject.nextHopId = valueRouteEntrysRouteEntryNextHopsNextHop["NextHopId"].asString();
			if(!valueRouteEntrysRouteEntryNextHopsNextHop["NextHopType"].isNull())
				nextHopsObject.nextHopType = valueRouteEntrysRouteEntryNextHopsNextHop["NextHopType"].asString();
			if(!valueRouteEntrysRouteEntryNextHopsNextHop["NextHopName"].isNull())
				nextHopsObject.nextHopName = valueRouteEntrysRouteEntryNextHopsNextHop["NextHopName"].asString();
			routeEntrysObject.nextHops.push_back(nextHopsObject);
		}
		routeEntrys_.push_back(routeEntrysObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeEnsRouteEntryListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeEnsRouteEntryListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEnsRouteEntryListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeEnsRouteEntryListResult::RouteEntry> DescribeEnsRouteEntryListResult::getRouteEntrys()const
{
	return routeEntrys_;
}

