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

#include <alibabacloud/ens/model/DescribeNetworksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeNetworksResult::DescribeNetworksResult() :
	ServiceResult()
{}

DescribeNetworksResult::DescribeNetworksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworksResult::~DescribeNetworksResult()
{}

void DescribeNetworksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetworksNode = value["Networks"]["Network"];
	for (auto valueNetworksNetwork : allNetworksNode)
	{
		Network networksObject;
		if(!valueNetworksNetwork["EnsRegionId"].isNull())
			networksObject.ensRegionId = valueNetworksNetwork["EnsRegionId"].asString();
		if(!valueNetworksNetwork["NetworkId"].isNull())
			networksObject.networkId = valueNetworksNetwork["NetworkId"].asString();
		if(!valueNetworksNetwork["NetworkName"].isNull())
			networksObject.networkName = valueNetworksNetwork["NetworkName"].asString();
		if(!valueNetworksNetwork["CidrBlock"].isNull())
			networksObject.cidrBlock = valueNetworksNetwork["CidrBlock"].asString();
		if(!valueNetworksNetwork["Status"].isNull())
			networksObject.status = valueNetworksNetwork["Status"].asString();
		if(!valueNetworksNetwork["Description"].isNull())
			networksObject.description = valueNetworksNetwork["Description"].asString();
		if(!valueNetworksNetwork["CreatedTime"].isNull())
			networksObject.createdTime = valueNetworksNetwork["CreatedTime"].asString();
		if(!valueNetworksNetwork["RouterTableId"].isNull())
			networksObject.routerTableId = valueNetworksNetwork["RouterTableId"].asString();
		if(!valueNetworksNetwork["NetworkAclId"].isNull())
			networksObject.networkAclId = valueNetworksNetwork["NetworkAclId"].asString();
		if(!valueNetworksNetwork["RouteTableId"].isNull())
			networksObject.routeTableId = valueNetworksNetwork["RouteTableId"].asString();
		if(!valueNetworksNetwork["GatewayRouteTableId"].isNull())
			networksObject.gatewayRouteTableId = valueNetworksNetwork["GatewayRouteTableId"].asString();
		auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
		for (auto value : allVSwitchIds)
			networksObject.vSwitchIds.push_back(value.asString());
		auto allRouteTableIds = value["RouteTableIds"]["RouteTableId"];
		for (auto value : allRouteTableIds)
			networksObject.routeTableIds.push_back(value.asString());
		networks_.push_back(networksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<DescribeNetworksResult::Network> DescribeNetworksResult::getNetworks()const
{
	return networks_;
}

int DescribeNetworksResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeNetworksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeNetworksResult::getPageNumber()const
{
	return pageNumber_;
}

