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

#include <alibabacloud/vpc/model/DescribeVcoRouteEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVcoRouteEntriesResult::DescribeVcoRouteEntriesResult() :
	ServiceResult()
{}

DescribeVcoRouteEntriesResult::DescribeVcoRouteEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVcoRouteEntriesResult::~DescribeVcoRouteEntriesResult()
{}

void DescribeVcoRouteEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVcoRouteEntriesNode = value["VcoRouteEntries"]["VcoRouteEntrie"];
	for (auto valueVcoRouteEntriesVcoRouteEntrie : allVcoRouteEntriesNode)
	{
		VcoRouteEntrie vcoRouteEntriesObject;
		if(!valueVcoRouteEntriesVcoRouteEntrie["VpnConnectionId"].isNull())
			vcoRouteEntriesObject.vpnConnectionId = valueVcoRouteEntriesVcoRouteEntrie["VpnConnectionId"].asString();
		if(!valueVcoRouteEntriesVcoRouteEntrie["RouteDest"].isNull())
			vcoRouteEntriesObject.routeDest = valueVcoRouteEntriesVcoRouteEntrie["RouteDest"].asString();
		if(!valueVcoRouteEntriesVcoRouteEntrie["NextHop"].isNull())
			vcoRouteEntriesObject.nextHop = valueVcoRouteEntriesVcoRouteEntrie["NextHop"].asString();
		if(!valueVcoRouteEntriesVcoRouteEntrie["Weight"].isNull())
			vcoRouteEntriesObject.weight = std::stoi(valueVcoRouteEntriesVcoRouteEntrie["Weight"].asString());
		if(!valueVcoRouteEntriesVcoRouteEntrie["State"].isNull())
			vcoRouteEntriesObject.state = valueVcoRouteEntriesVcoRouteEntrie["State"].asString();
		if(!valueVcoRouteEntriesVcoRouteEntrie["RouteEntryType"].isNull())
			vcoRouteEntriesObject.routeEntryType = valueVcoRouteEntriesVcoRouteEntrie["RouteEntryType"].asString();
		if(!valueVcoRouteEntriesVcoRouteEntrie["CreateTime"].isNull())
			vcoRouteEntriesObject.createTime = std::stol(valueVcoRouteEntriesVcoRouteEntrie["CreateTime"].asString());
		if(!valueVcoRouteEntriesVcoRouteEntrie["AsPath"].isNull())
			vcoRouteEntriesObject.asPath = valueVcoRouteEntriesVcoRouteEntrie["AsPath"].asString();
		if(!valueVcoRouteEntriesVcoRouteEntrie["Community"].isNull())
			vcoRouteEntriesObject.community = valueVcoRouteEntriesVcoRouteEntrie["Community"].asString();
		if(!valueVcoRouteEntriesVcoRouteEntrie["Source"].isNull())
			vcoRouteEntriesObject.source = valueVcoRouteEntriesVcoRouteEntrie["Source"].asString();
		auto allNextHopTunnelIdList = value["NextHopTunnelIdList"]["NextHopTunnelId"];
		for (auto value : allNextHopTunnelIdList)
			vcoRouteEntriesObject.nextHopTunnelIdList.push_back(value.asString());
		vcoRouteEntries_.push_back(vcoRouteEntriesObject);
	}
	auto allVpnRouteCountsNode = value["VpnRouteCounts"]["VpnRouteCount"];
	for (auto valueVpnRouteCountsVpnRouteCount : allVpnRouteCountsNode)
	{
		VpnRouteCount vpnRouteCountsObject;
		if(!valueVpnRouteCountsVpnRouteCount["RouteEntryType"].isNull())
			vpnRouteCountsObject.routeEntryType = valueVpnRouteCountsVpnRouteCount["RouteEntryType"].asString();
		if(!valueVpnRouteCountsVpnRouteCount["RouteCount"].isNull())
			vpnRouteCountsObject.routeCount = std::stoi(valueVpnRouteCountsVpnRouteCount["RouteCount"].asString());
		if(!valueVpnRouteCountsVpnRouteCount["Source"].isNull())
			vpnRouteCountsObject.source = valueVpnRouteCountsVpnRouteCount["Source"].asString();
		vpnRouteCounts_.push_back(vpnRouteCountsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeVcoRouteEntriesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVcoRouteEntriesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVcoRouteEntriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeVcoRouteEntriesResult::VcoRouteEntrie> DescribeVcoRouteEntriesResult::getVcoRouteEntries()const
{
	return vcoRouteEntries_;
}

std::vector<DescribeVcoRouteEntriesResult::VpnRouteCount> DescribeVcoRouteEntriesResult::getVpnRouteCounts()const
{
	return vpnRouteCounts_;
}

