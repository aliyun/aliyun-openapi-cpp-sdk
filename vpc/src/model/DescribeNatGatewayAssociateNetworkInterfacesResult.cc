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

#include <alibabacloud/vpc/model/DescribeNatGatewayAssociateNetworkInterfacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeNatGatewayAssociateNetworkInterfacesResult::DescribeNatGatewayAssociateNetworkInterfacesResult() :
	ServiceResult()
{}

DescribeNatGatewayAssociateNetworkInterfacesResult::DescribeNatGatewayAssociateNetworkInterfacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNatGatewayAssociateNetworkInterfacesResult::~DescribeNatGatewayAssociateNetworkInterfacesResult()
{}

void DescribeNatGatewayAssociateNetworkInterfacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAssociateNetworkInterfacesNode = value["AssociateNetworkInterfaces"]["AssociateNetworkInterface"];
	for (auto valueAssociateNetworkInterfacesAssociateNetworkInterface : allAssociateNetworkInterfacesNode)
	{
		AssociateNetworkInterface associateNetworkInterfacesObject;
		if(!valueAssociateNetworkInterfacesAssociateNetworkInterface["NetworkInterfaceId"].isNull())
			associateNetworkInterfacesObject.networkInterfaceId = valueAssociateNetworkInterfacesAssociateNetworkInterface["NetworkInterfaceId"].asString();
		if(!valueAssociateNetworkInterfacesAssociateNetworkInterface["ResourceId"].isNull())
			associateNetworkInterfacesObject.resourceId = valueAssociateNetworkInterfacesAssociateNetworkInterface["ResourceId"].asString();
		if(!valueAssociateNetworkInterfacesAssociateNetworkInterface["ResourceType"].isNull())
			associateNetworkInterfacesObject.resourceType = valueAssociateNetworkInterfacesAssociateNetworkInterface["ResourceType"].asString();
		if(!valueAssociateNetworkInterfacesAssociateNetworkInterface["ResourceOwnerId"].isNull())
			associateNetworkInterfacesObject.resourceOwnerId = valueAssociateNetworkInterfacesAssociateNetworkInterface["ResourceOwnerId"].asString();
		if(!valueAssociateNetworkInterfacesAssociateNetworkInterface["TunnelIndex"].isNull())
			associateNetworkInterfacesObject.tunnelIndex = valueAssociateNetworkInterfacesAssociateNetworkInterface["TunnelIndex"].asString();
		auto allIPv4SetsNode = valueAssociateNetworkInterfacesAssociateNetworkInterface["IPv4Sets"]["IPv4Set"];
		for (auto valueAssociateNetworkInterfacesAssociateNetworkInterfaceIPv4SetsIPv4Set : allIPv4SetsNode)
		{
			AssociateNetworkInterface::IPv4Set iPv4SetsObject;
			if(!valueAssociateNetworkInterfacesAssociateNetworkInterfaceIPv4SetsIPv4Set["IPv4Address"].isNull())
				iPv4SetsObject.iPv4Address = valueAssociateNetworkInterfacesAssociateNetworkInterfaceIPv4SetsIPv4Set["IPv4Address"].asString();
			if(!valueAssociateNetworkInterfacesAssociateNetworkInterfaceIPv4SetsIPv4Set["Primary"].isNull())
				iPv4SetsObject.primary = valueAssociateNetworkInterfacesAssociateNetworkInterfaceIPv4SetsIPv4Set["Primary"].asString() == "true";
			associateNetworkInterfacesObject.iPv4Sets.push_back(iPv4SetsObject);
		}
		associateNetworkInterfaces_.push_back(associateNetworkInterfacesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NatGatewayId"].isNull())
		natGatewayId_ = value["NatGatewayId"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

int DescribeNatGatewayAssociateNetworkInterfacesResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeNatGatewayAssociateNetworkInterfacesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeNatGatewayAssociateNetworkInterfacesResult::AssociateNetworkInterface> DescribeNatGatewayAssociateNetworkInterfacesResult::getAssociateNetworkInterfaces()const
{
	return associateNetworkInterfaces_;
}

int DescribeNatGatewayAssociateNetworkInterfacesResult::getMaxResults()const
{
	return maxResults_;
}

int DescribeNatGatewayAssociateNetworkInterfacesResult::getCount()const
{
	return count_;
}

std::string DescribeNatGatewayAssociateNetworkInterfacesResult::getNatGatewayId()const
{
	return natGatewayId_;
}

