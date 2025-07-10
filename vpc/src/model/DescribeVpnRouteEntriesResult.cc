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

#include <alibabacloud/vpc/model/DescribeVpnRouteEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVpnRouteEntriesResult::DescribeVpnRouteEntriesResult() :
	ServiceResult()
{}

DescribeVpnRouteEntriesResult::DescribeVpnRouteEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVpnRouteEntriesResult::~DescribeVpnRouteEntriesResult()
{}

void DescribeVpnRouteEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVpnRouteEntriesNode = value["VpnRouteEntries"]["VpnRouteEntry"];
	for (auto valueVpnRouteEntriesVpnRouteEntry : allVpnRouteEntriesNode)
	{
		VpnRouteEntry vpnRouteEntriesObject;
		if(!valueVpnRouteEntriesVpnRouteEntry["RouteEntryType"].isNull())
			vpnRouteEntriesObject.routeEntryType = valueVpnRouteEntriesVpnRouteEntry["RouteEntryType"].asString();
		if(!valueVpnRouteEntriesVpnRouteEntry["NextHop"].isNull())
			vpnRouteEntriesObject.nextHop = valueVpnRouteEntriesVpnRouteEntry["NextHop"].asString();
		if(!valueVpnRouteEntriesVpnRouteEntry["Weight"].isNull())
			vpnRouteEntriesObject.weight = std::stoi(valueVpnRouteEntriesVpnRouteEntry["Weight"].asString());
		if(!valueVpnRouteEntriesVpnRouteEntry["RouteDest"].isNull())
			vpnRouteEntriesObject.routeDest = valueVpnRouteEntriesVpnRouteEntry["RouteDest"].asString();
		if(!valueVpnRouteEntriesVpnRouteEntry["AsPath"].isNull())
			vpnRouteEntriesObject.asPath = valueVpnRouteEntriesVpnRouteEntry["AsPath"].asString();
		if(!valueVpnRouteEntriesVpnRouteEntry["State"].isNull())
			vpnRouteEntriesObject.state = valueVpnRouteEntriesVpnRouteEntry["State"].asString();
		if(!valueVpnRouteEntriesVpnRouteEntry["CreateTime"].isNull())
			vpnRouteEntriesObject.createTime = std::stol(valueVpnRouteEntriesVpnRouteEntry["CreateTime"].asString());
		if(!valueVpnRouteEntriesVpnRouteEntry["Community"].isNull())
			vpnRouteEntriesObject.community = valueVpnRouteEntriesVpnRouteEntry["Community"].asString();
		if(!valueVpnRouteEntriesVpnRouteEntry["Source"].isNull())
			vpnRouteEntriesObject.source = valueVpnRouteEntriesVpnRouteEntry["Source"].asString();
		if(!valueVpnRouteEntriesVpnRouteEntry["VpnInstanceId"].isNull())
			vpnRouteEntriesObject.vpnInstanceId = valueVpnRouteEntriesVpnRouteEntry["VpnInstanceId"].asString();
		if(!valueVpnRouteEntriesVpnRouteEntry["NextHopTunnelId"].isNull())
			vpnRouteEntriesObject.nextHopTunnelId = valueVpnRouteEntriesVpnRouteEntry["NextHopTunnelId"].asString();
		vpnRouteEntries_.push_back(vpnRouteEntriesObject);
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
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVpnRouteEntriesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeVpnRouteEntriesResult::VpnRouteEntry> DescribeVpnRouteEntriesResult::getVpnRouteEntries()const
{
	return vpnRouteEntries_;
}

int DescribeVpnRouteEntriesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVpnRouteEntriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeVpnRouteEntriesResult::VpnRouteCount> DescribeVpnRouteEntriesResult::getVpnRouteCounts()const
{
	return vpnRouteCounts_;
}

