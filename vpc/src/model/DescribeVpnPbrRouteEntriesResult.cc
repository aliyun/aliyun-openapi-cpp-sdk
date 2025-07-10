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

#include <alibabacloud/vpc/model/DescribeVpnPbrRouteEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVpnPbrRouteEntriesResult::DescribeVpnPbrRouteEntriesResult() :
	ServiceResult()
{}

DescribeVpnPbrRouteEntriesResult::DescribeVpnPbrRouteEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVpnPbrRouteEntriesResult::~DescribeVpnPbrRouteEntriesResult()
{}

void DescribeVpnPbrRouteEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVpnPbrRouteEntriesNode = value["VpnPbrRouteEntries"]["VpnPbrRouteEntry"];
	for (auto valueVpnPbrRouteEntriesVpnPbrRouteEntry : allVpnPbrRouteEntriesNode)
	{
		VpnPbrRouteEntry vpnPbrRouteEntriesObject;
		if(!valueVpnPbrRouteEntriesVpnPbrRouteEntry["NextHop"].isNull())
			vpnPbrRouteEntriesObject.nextHop = valueVpnPbrRouteEntriesVpnPbrRouteEntry["NextHop"].asString();
		if(!valueVpnPbrRouteEntriesVpnPbrRouteEntry["Weight"].isNull())
			vpnPbrRouteEntriesObject.weight = std::stoi(valueVpnPbrRouteEntriesVpnPbrRouteEntry["Weight"].asString());
		if(!valueVpnPbrRouteEntriesVpnPbrRouteEntry["RouteDest"].isNull())
			vpnPbrRouteEntriesObject.routeDest = valueVpnPbrRouteEntriesVpnPbrRouteEntry["RouteDest"].asString();
		if(!valueVpnPbrRouteEntriesVpnPbrRouteEntry["State"].isNull())
			vpnPbrRouteEntriesObject.state = valueVpnPbrRouteEntriesVpnPbrRouteEntry["State"].asString();
		if(!valueVpnPbrRouteEntriesVpnPbrRouteEntry["CreateTime"].isNull())
			vpnPbrRouteEntriesObject.createTime = std::stol(valueVpnPbrRouteEntriesVpnPbrRouteEntry["CreateTime"].asString());
		if(!valueVpnPbrRouteEntriesVpnPbrRouteEntry["VpnInstanceId"].isNull())
			vpnPbrRouteEntriesObject.vpnInstanceId = valueVpnPbrRouteEntriesVpnPbrRouteEntry["VpnInstanceId"].asString();
		if(!valueVpnPbrRouteEntriesVpnPbrRouteEntry["RouteSource"].isNull())
			vpnPbrRouteEntriesObject.routeSource = valueVpnPbrRouteEntriesVpnPbrRouteEntry["RouteSource"].asString();
		if(!valueVpnPbrRouteEntriesVpnPbrRouteEntry["Priority"].isNull())
			vpnPbrRouteEntriesObject.priority = std::stoi(valueVpnPbrRouteEntriesVpnPbrRouteEntry["Priority"].asString());
		if(!valueVpnPbrRouteEntriesVpnPbrRouteEntry["NextHopTunnelId"].isNull())
			vpnPbrRouteEntriesObject.nextHopTunnelId = valueVpnPbrRouteEntriesVpnPbrRouteEntry["NextHopTunnelId"].asString();
		vpnPbrRouteEntries_.push_back(vpnPbrRouteEntriesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVpnPbrRouteEntriesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVpnPbrRouteEntriesResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeVpnPbrRouteEntriesResult::VpnPbrRouteEntry> DescribeVpnPbrRouteEntriesResult::getVpnPbrRouteEntries()const
{
	return vpnPbrRouteEntries_;
}

int DescribeVpnPbrRouteEntriesResult::getPageNumber()const
{
	return pageNumber_;
}

