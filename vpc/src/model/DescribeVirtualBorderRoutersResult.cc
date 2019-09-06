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

#include <alibabacloud/vpc/model/DescribeVirtualBorderRoutersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

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
	auto allVirtualBorderRouterSet = value["VirtualBorderRouterSet"]["VirtualBorderRouterType"];
	for (auto value : allVirtualBorderRouterSet)
	{
		VirtualBorderRouterType virtualBorderRouterSetObject;
		if(!value["VbrId"].isNull())
			virtualBorderRouterSetObject.vbrId = value["VbrId"].asString();
		if(!value["CreationTime"].isNull())
			virtualBorderRouterSetObject.creationTime = value["CreationTime"].asString();
		if(!value["ActivationTime"].isNull())
			virtualBorderRouterSetObject.activationTime = value["ActivationTime"].asString();
		if(!value["TerminationTime"].isNull())
			virtualBorderRouterSetObject.terminationTime = value["TerminationTime"].asString();
		if(!value["RecoveryTime"].isNull())
			virtualBorderRouterSetObject.recoveryTime = value["RecoveryTime"].asString();
		if(!value["Status"].isNull())
			virtualBorderRouterSetObject.status = value["Status"].asString();
		if(!value["VlanId"].isNull())
			virtualBorderRouterSetObject.vlanId = std::stoi(value["VlanId"].asString());
		if(!value["CircuitCode"].isNull())
			virtualBorderRouterSetObject.circuitCode = value["CircuitCode"].asString();
		if(!value["RouteTableId"].isNull())
			virtualBorderRouterSetObject.routeTableId = value["RouteTableId"].asString();
		if(!value["VlanInterfaceId"].isNull())
			virtualBorderRouterSetObject.vlanInterfaceId = value["VlanInterfaceId"].asString();
		if(!value["LocalGatewayIp"].isNull())
			virtualBorderRouterSetObject.localGatewayIp = value["LocalGatewayIp"].asString();
		if(!value["PeerGatewayIp"].isNull())
			virtualBorderRouterSetObject.peerGatewayIp = value["PeerGatewayIp"].asString();
		if(!value["PeeringSubnetMask"].isNull())
			virtualBorderRouterSetObject.peeringSubnetMask = value["PeeringSubnetMask"].asString();
		if(!value["PhysicalConnectionId"].isNull())
			virtualBorderRouterSetObject.physicalConnectionId = value["PhysicalConnectionId"].asString();
		if(!value["PhysicalConnectionStatus"].isNull())
			virtualBorderRouterSetObject.physicalConnectionStatus = value["PhysicalConnectionStatus"].asString();
		if(!value["PhysicalConnectionBusinessStatus"].isNull())
			virtualBorderRouterSetObject.physicalConnectionBusinessStatus = value["PhysicalConnectionBusinessStatus"].asString();
		if(!value["PhysicalConnectionOwnerUid"].isNull())
			virtualBorderRouterSetObject.physicalConnectionOwnerUid = value["PhysicalConnectionOwnerUid"].asString();
		if(!value["AccessPointId"].isNull())
			virtualBorderRouterSetObject.accessPointId = value["AccessPointId"].asString();
		if(!value["Name"].isNull())
			virtualBorderRouterSetObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			virtualBorderRouterSetObject.description = value["Description"].asString();
		if(!value["EccId"].isNull())
			virtualBorderRouterSetObject.eccId = value["EccId"].asString();
		if(!value["Type"].isNull())
			virtualBorderRouterSetObject.type = value["Type"].asString();
		if(!value["MinTxInterval"].isNull())
			virtualBorderRouterSetObject.minTxInterval = std::stol(value["MinTxInterval"].asString());
		if(!value["MinRxInterval"].isNull())
			virtualBorderRouterSetObject.minRxInterval = std::stol(value["MinRxInterval"].asString());
		if(!value["DetectMultiplier"].isNull())
			virtualBorderRouterSetObject.detectMultiplier = std::stol(value["DetectMultiplier"].asString());
		auto allAssociatedPhysicalConnections = value["AssociatedPhysicalConnections"]["AssociatedPhysicalConnection"];
		for (auto value : allAssociatedPhysicalConnections)
		{
			VirtualBorderRouterType::AssociatedPhysicalConnection associatedPhysicalConnectionsObject;
			if(!value["CircuitCode"].isNull())
				associatedPhysicalConnectionsObject.circuitCode = value["CircuitCode"].asString();
			if(!value["VlanInterfaceId"].isNull())
				associatedPhysicalConnectionsObject.vlanInterfaceId = value["VlanInterfaceId"].asString();
			if(!value["LocalGatewayIp"].isNull())
				associatedPhysicalConnectionsObject.localGatewayIp = value["LocalGatewayIp"].asString();
			if(!value["PeerGatewayIp"].isNull())
				associatedPhysicalConnectionsObject.peerGatewayIp = value["PeerGatewayIp"].asString();
			if(!value["PeeringSubnetMask"].isNull())
				associatedPhysicalConnectionsObject.peeringSubnetMask = value["PeeringSubnetMask"].asString();
			if(!value["PhysicalConnectionId"].isNull())
				associatedPhysicalConnectionsObject.physicalConnectionId = value["PhysicalConnectionId"].asString();
			if(!value["PhysicalConnectionStatus"].isNull())
				associatedPhysicalConnectionsObject.physicalConnectionStatus = value["PhysicalConnectionStatus"].asString();
			if(!value["PhysicalConnectionBusinessStatus"].isNull())
				associatedPhysicalConnectionsObject.physicalConnectionBusinessStatus = value["PhysicalConnectionBusinessStatus"].asString();
			if(!value["PhysicalConnectionOwnerUid"].isNull())
				associatedPhysicalConnectionsObject.physicalConnectionOwnerUid = value["PhysicalConnectionOwnerUid"].asString();
			if(!value["VlanId"].isNull())
				associatedPhysicalConnectionsObject.vlanId = value["VlanId"].asString();
			virtualBorderRouterSetObject.associatedPhysicalConnections.push_back(associatedPhysicalConnectionsObject);
		}
		auto allAssociatedCens = value["AssociatedCens"]["AssociatedCen"];
		for (auto value : allAssociatedCens)
		{
			VirtualBorderRouterType::AssociatedCen associatedCensObject;
			if(!value["CenId"].isNull())
				associatedCensObject.cenId = value["CenId"].asString();
			if(!value["CenOwnerId"].isNull())
				associatedCensObject.cenOwnerId = std::stol(value["CenOwnerId"].asString());
			if(!value["CenStatus"].isNull())
				associatedCensObject.cenStatus = value["CenStatus"].asString();
			virtualBorderRouterSetObject.associatedCens.push_back(associatedCensObject);
		}
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

