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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allVpnRouteEntries = value["VpnRouteEntries"]["VpnRouteEntry"];
	for (auto value : allVpnRouteEntries)
	{
		VpnRouteEntry vpnRouteEntriesObject;
		if(!value["VpnInstanceId"].isNull())
			vpnRouteEntriesObject.vpnInstanceId = value["VpnInstanceId"].asString();
		if(!value["RouteDest"].isNull())
			vpnRouteEntriesObject.routeDest = value["RouteDest"].asString();
		if(!value["NextHop"].isNull())
			vpnRouteEntriesObject.nextHop = value["NextHop"].asString();
		if(!value["Weight"].isNull())
			vpnRouteEntriesObject.weight = std::stoi(value["Weight"].asString());
		if(!value["CreateTime"].isNull())
			vpnRouteEntriesObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["State"].isNull())
			vpnRouteEntriesObject.state = value["State"].asString();
		vpnRouteEntries_.push_back(vpnRouteEntriesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

