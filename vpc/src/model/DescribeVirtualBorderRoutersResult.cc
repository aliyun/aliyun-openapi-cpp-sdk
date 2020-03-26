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
	auto allVirtualBorderRouterSetNode = value["VirtualBorderRouterSet"]["VirtualBorderRouterType"];
	for (auto valueVirtualBorderRouterSetVirtualBorderRouterType : allVirtualBorderRouterSetNode)
	{
		VirtualBorderRouterType virtualBorderRouterSetObject;
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["VbrId"].isNull())
			virtualBorderRouterSetObject.vbrId = valueVirtualBorderRouterSetVirtualBorderRouterType["VbrId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["CreationTime"].isNull())
			virtualBorderRouterSetObject.creationTime = valueVirtualBorderRouterSetVirtualBorderRouterType["CreationTime"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["ActivationTime"].isNull())
			virtualBorderRouterSetObject.activationTime = valueVirtualBorderRouterSetVirtualBorderRouterType["ActivationTime"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["TerminationTime"].isNull())
			virtualBorderRouterSetObject.terminationTime = valueVirtualBorderRouterSetVirtualBorderRouterType["TerminationTime"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["RecoveryTime"].isNull())
			virtualBorderRouterSetObject.recoveryTime = valueVirtualBorderRouterSetVirtualBorderRouterType["RecoveryTime"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["Status"].isNull())
			virtualBorderRouterSetObject.status = valueVirtualBorderRouterSetVirtualBorderRouterType["Status"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["VlanId"].isNull())
			virtualBorderRouterSetObject.vlanId = std::stoi(valueVirtualBorderRouterSetVirtualBorderRouterType["VlanId"].asString());
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["CircuitCode"].isNull())
			virtualBorderRouterSetObject.circuitCode = valueVirtualBorderRouterSetVirtualBorderRouterType["CircuitCode"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["RouteTableId"].isNull())
			virtualBorderRouterSetObject.routeTableId = valueVirtualBorderRouterSetVirtualBorderRouterType["RouteTableId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["VlanInterfaceId"].isNull())
			virtualBorderRouterSetObject.vlanInterfaceId = valueVirtualBorderRouterSetVirtualBorderRouterType["VlanInterfaceId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["LocalGatewayIp"].isNull())
			virtualBorderRouterSetObject.localGatewayIp = valueVirtualBorderRouterSetVirtualBorderRouterType["LocalGatewayIp"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PeerGatewayIp"].isNull())
			virtualBorderRouterSetObject.peerGatewayIp = valueVirtualBorderRouterSetVirtualBorderRouterType["PeerGatewayIp"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PeeringSubnetMask"].isNull())
			virtualBorderRouterSetObject.peeringSubnetMask = valueVirtualBorderRouterSetVirtualBorderRouterType["PeeringSubnetMask"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionId"].isNull())
			virtualBorderRouterSetObject.physicalConnectionId = valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionStatus"].isNull())
			virtualBorderRouterSetObject.physicalConnectionStatus = valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionStatus"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionBusinessStatus"].isNull())
			virtualBorderRouterSetObject.physicalConnectionBusinessStatus = valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionBusinessStatus"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionOwnerUid"].isNull())
			virtualBorderRouterSetObject.physicalConnectionOwnerUid = valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionOwnerUid"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["AccessPointId"].isNull())
			virtualBorderRouterSetObject.accessPointId = valueVirtualBorderRouterSetVirtualBorderRouterType["AccessPointId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["Name"].isNull())
			virtualBorderRouterSetObject.name = valueVirtualBorderRouterSetVirtualBorderRouterType["Name"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["Description"].isNull())
			virtualBorderRouterSetObject.description = valueVirtualBorderRouterSetVirtualBorderRouterType["Description"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PConnVbrExpireTime"].isNull())
			virtualBorderRouterSetObject.pConnVbrExpireTime = valueVirtualBorderRouterSetVirtualBorderRouterType["PConnVbrExpireTime"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["EccId"].isNull())
			virtualBorderRouterSetObject.eccId = valueVirtualBorderRouterSetVirtualBorderRouterType["EccId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["Type"].isNull())
			virtualBorderRouterSetObject.type = valueVirtualBorderRouterSetVirtualBorderRouterType["Type"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["MinTxInterval"].isNull())
			virtualBorderRouterSetObject.minTxInterval = std::stol(valueVirtualBorderRouterSetVirtualBorderRouterType["MinTxInterval"].asString());
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["MinRxInterval"].isNull())
			virtualBorderRouterSetObject.minRxInterval = std::stol(valueVirtualBorderRouterSetVirtualBorderRouterType["MinRxInterval"].asString());
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["DetectMultiplier"].isNull())
			virtualBorderRouterSetObject.detectMultiplier = std::stol(valueVirtualBorderRouterSetVirtualBorderRouterType["DetectMultiplier"].asString());
		auto allAssociatedPhysicalConnectionsNode = allVirtualBorderRouterSetNode["AssociatedPhysicalConnections"]["AssociatedPhysicalConnection"];
		for (auto allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection : allAssociatedPhysicalConnectionsNode)
		{
			VirtualBorderRouterType::AssociatedPhysicalConnection associatedPhysicalConnectionsObject;
			if(!allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["CircuitCode"].isNull())
				associatedPhysicalConnectionsObject.circuitCode = allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["CircuitCode"].asString();
			if(!allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["VlanInterfaceId"].isNull())
				associatedPhysicalConnectionsObject.vlanInterfaceId = allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["VlanInterfaceId"].asString();
			if(!allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["LocalGatewayIp"].isNull())
				associatedPhysicalConnectionsObject.localGatewayIp = allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["LocalGatewayIp"].asString();
			if(!allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PeerGatewayIp"].isNull())
				associatedPhysicalConnectionsObject.peerGatewayIp = allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PeerGatewayIp"].asString();
			if(!allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PeeringSubnetMask"].isNull())
				associatedPhysicalConnectionsObject.peeringSubnetMask = allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PeeringSubnetMask"].asString();
			if(!allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionId"].isNull())
				associatedPhysicalConnectionsObject.physicalConnectionId = allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionId"].asString();
			if(!allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionStatus"].isNull())
				associatedPhysicalConnectionsObject.physicalConnectionStatus = allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionStatus"].asString();
			if(!allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionBusinessStatus"].isNull())
				associatedPhysicalConnectionsObject.physicalConnectionBusinessStatus = allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionBusinessStatus"].asString();
			if(!allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionOwnerUid"].isNull())
				associatedPhysicalConnectionsObject.physicalConnectionOwnerUid = allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionOwnerUid"].asString();
			if(!allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["VlanId"].isNull())
				associatedPhysicalConnectionsObject.vlanId = allVirtualBorderRouterSetNodeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["VlanId"].asString();
			virtualBorderRouterSetObject.associatedPhysicalConnections.push_back(associatedPhysicalConnectionsObject);
		}
		auto allAssociatedCensNode = allVirtualBorderRouterSetNode["AssociatedCens"]["AssociatedCen"];
		for (auto allVirtualBorderRouterSetNodeAssociatedCensAssociatedCen : allAssociatedCensNode)
		{
			VirtualBorderRouterType::AssociatedCen associatedCensObject;
			if(!allVirtualBorderRouterSetNodeAssociatedCensAssociatedCen["CenId"].isNull())
				associatedCensObject.cenId = allVirtualBorderRouterSetNodeAssociatedCensAssociatedCen["CenId"].asString();
			if(!allVirtualBorderRouterSetNodeAssociatedCensAssociatedCen["CenOwnerId"].isNull())
				associatedCensObject.cenOwnerId = std::stol(allVirtualBorderRouterSetNodeAssociatedCensAssociatedCen["CenOwnerId"].asString());
			if(!allVirtualBorderRouterSetNodeAssociatedCensAssociatedCen["CenStatus"].isNull())
				associatedCensObject.cenStatus = allVirtualBorderRouterSetNodeAssociatedCensAssociatedCen["CenStatus"].asString();
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

