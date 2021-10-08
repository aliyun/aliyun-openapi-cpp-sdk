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

#include <alibabacloud/ecs/model/DescribeVirtualBorderRoutersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeVirtualBorderRoutersResult::DescribeVirtualBorderRoutersResult() :
	ServiceResult()
{}

DescribeVirtualBorderRoutersResult::DescribeVirtualBorderRoutersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVirtualBorderRoutersResult::~DescribeVirtualBorderRoutersResult()
{}

void DescribeVirtualBorderRoutersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVirtualBorderRouterSetNode = value["VirtualBorderRouterSet"]["VirtualBorderRouterType"];
	for (auto valueVirtualBorderRouterSetVirtualBorderRouterType : allVirtualBorderRouterSetNode)
	{
		VirtualBorderRouterType virtualBorderRouterSetObject;
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["VlanInterfaceId"].isNull())
			virtualBorderRouterSetObject.vlanInterfaceId = valueVirtualBorderRouterSetVirtualBorderRouterType["VlanInterfaceId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["Status"].isNull())
			virtualBorderRouterSetObject.status = valueVirtualBorderRouterSetVirtualBorderRouterType["Status"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["CreationTime"].isNull())
			virtualBorderRouterSetObject.creationTime = valueVirtualBorderRouterSetVirtualBorderRouterType["CreationTime"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["CircuitCode"].isNull())
			virtualBorderRouterSetObject.circuitCode = valueVirtualBorderRouterSetVirtualBorderRouterType["CircuitCode"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionOwnerUid"].isNull())
			virtualBorderRouterSetObject.physicalConnectionOwnerUid = valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionOwnerUid"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["LocalGatewayIp"].isNull())
			virtualBorderRouterSetObject.localGatewayIp = valueVirtualBorderRouterSetVirtualBorderRouterType["LocalGatewayIp"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["ActivationTime"].isNull())
			virtualBorderRouterSetObject.activationTime = valueVirtualBorderRouterSetVirtualBorderRouterType["ActivationTime"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionBusinessStatus"].isNull())
			virtualBorderRouterSetObject.physicalConnectionBusinessStatus = valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionBusinessStatus"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PeeringSubnetMask"].isNull())
			virtualBorderRouterSetObject.peeringSubnetMask = valueVirtualBorderRouterSetVirtualBorderRouterType["PeeringSubnetMask"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["RouteTableId"].isNull())
			virtualBorderRouterSetObject.routeTableId = valueVirtualBorderRouterSetVirtualBorderRouterType["RouteTableId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["Description"].isNull())
			virtualBorderRouterSetObject.description = valueVirtualBorderRouterSetVirtualBorderRouterType["Description"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionStatus"].isNull())
			virtualBorderRouterSetObject.physicalConnectionStatus = valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionStatus"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["RecoveryTime"].isNull())
			virtualBorderRouterSetObject.recoveryTime = valueVirtualBorderRouterSetVirtualBorderRouterType["RecoveryTime"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["TerminationTime"].isNull())
			virtualBorderRouterSetObject.terminationTime = valueVirtualBorderRouterSetVirtualBorderRouterType["TerminationTime"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PeerGatewayIp"].isNull())
			virtualBorderRouterSetObject.peerGatewayIp = valueVirtualBorderRouterSetVirtualBorderRouterType["PeerGatewayIp"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["Name"].isNull())
			virtualBorderRouterSetObject.name = valueVirtualBorderRouterSetVirtualBorderRouterType["Name"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["AccessPointId"].isNull())
			virtualBorderRouterSetObject.accessPointId = valueVirtualBorderRouterSetVirtualBorderRouterType["AccessPointId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["VbrId"].isNull())
			virtualBorderRouterSetObject.vbrId = valueVirtualBorderRouterSetVirtualBorderRouterType["VbrId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionId"].isNull())
			virtualBorderRouterSetObject.physicalConnectionId = valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["VlanId"].isNull())
			virtualBorderRouterSetObject.vlanId = std::stoi(valueVirtualBorderRouterSetVirtualBorderRouterType["VlanId"].asString());
		virtualBorderRouterSet_.push_back(virtualBorderRouterSetObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVirtualBorderRoutersResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVirtualBorderRoutersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVirtualBorderRoutersResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeVirtualBorderRoutersResult::VirtualBorderRouterType> DescribeVirtualBorderRoutersResult::getVirtualBorderRouterSet()const
{
	return virtualBorderRouterSet_;
}

