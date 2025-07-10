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
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["CreationTime"].isNull())
			virtualBorderRouterSetObject.creationTime = valueVirtualBorderRouterSetVirtualBorderRouterType["CreationTime"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["Status"].isNull())
			virtualBorderRouterSetObject.status = valueVirtualBorderRouterSetVirtualBorderRouterType["Status"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["Type"].isNull())
			virtualBorderRouterSetObject.type = valueVirtualBorderRouterSetVirtualBorderRouterType["Type"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["MinTxInterval"].isNull())
			virtualBorderRouterSetObject.minTxInterval = std::stol(valueVirtualBorderRouterSetVirtualBorderRouterType["MinTxInterval"].asString());
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PeerIpv6GatewayIp"].isNull())
			virtualBorderRouterSetObject.peerIpv6GatewayIp = valueVirtualBorderRouterSetVirtualBorderRouterType["PeerIpv6GatewayIp"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PConnVbrExpireTime"].isNull())
			virtualBorderRouterSetObject.pConnVbrExpireTime = valueVirtualBorderRouterSetVirtualBorderRouterType["PConnVbrExpireTime"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionOwnerUid"].isNull())
			virtualBorderRouterSetObject.physicalConnectionOwnerUid = valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionOwnerUid"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["ActivationTime"].isNull())
			virtualBorderRouterSetObject.activationTime = valueVirtualBorderRouterSetVirtualBorderRouterType["ActivationTime"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionBusinessStatus"].isNull())
			virtualBorderRouterSetObject.physicalConnectionBusinessStatus = valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionBusinessStatus"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["Description"].isNull())
			virtualBorderRouterSetObject.description = valueVirtualBorderRouterSetVirtualBorderRouterType["Description"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["TerminationTime"].isNull())
			virtualBorderRouterSetObject.terminationTime = valueVirtualBorderRouterSetVirtualBorderRouterType["TerminationTime"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["MinRxInterval"].isNull())
			virtualBorderRouterSetObject.minRxInterval = std::stol(valueVirtualBorderRouterSetVirtualBorderRouterType["MinRxInterval"].asString());
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PeerGatewayIp"].isNull())
			virtualBorderRouterSetObject.peerGatewayIp = valueVirtualBorderRouterSetVirtualBorderRouterType["PeerGatewayIp"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["Name"].isNull())
			virtualBorderRouterSetObject.name = valueVirtualBorderRouterSetVirtualBorderRouterType["Name"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["VbrId"].isNull())
			virtualBorderRouterSetObject.vbrId = valueVirtualBorderRouterSetVirtualBorderRouterType["VbrId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["VlanId"].isNull())
			virtualBorderRouterSetObject.vlanId = std::stoi(valueVirtualBorderRouterSetVirtualBorderRouterType["VlanId"].asString());
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["VlanInterfaceId"].isNull())
			virtualBorderRouterSetObject.vlanInterfaceId = valueVirtualBorderRouterSetVirtualBorderRouterType["VlanInterfaceId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["CircuitCode"].isNull())
			virtualBorderRouterSetObject.circuitCode = valueVirtualBorderRouterSetVirtualBorderRouterType["CircuitCode"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["LocalIpv6GatewayIp"].isNull())
			virtualBorderRouterSetObject.localIpv6GatewayIp = valueVirtualBorderRouterSetVirtualBorderRouterType["LocalIpv6GatewayIp"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["LocalGatewayIp"].isNull())
			virtualBorderRouterSetObject.localGatewayIp = valueVirtualBorderRouterSetVirtualBorderRouterType["LocalGatewayIp"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PeeringSubnetMask"].isNull())
			virtualBorderRouterSetObject.peeringSubnetMask = valueVirtualBorderRouterSetVirtualBorderRouterType["PeeringSubnetMask"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["EnableIpv6"].isNull())
			virtualBorderRouterSetObject.enableIpv6 = valueVirtualBorderRouterSetVirtualBorderRouterType["EnableIpv6"].asString() == "true";
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["RouteTableId"].isNull())
			virtualBorderRouterSetObject.routeTableId = valueVirtualBorderRouterSetVirtualBorderRouterType["RouteTableId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["DetectMultiplier"].isNull())
			virtualBorderRouterSetObject.detectMultiplier = std::stol(valueVirtualBorderRouterSetVirtualBorderRouterType["DetectMultiplier"].asString());
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["EccId"].isNull())
			virtualBorderRouterSetObject.eccId = valueVirtualBorderRouterSetVirtualBorderRouterType["EccId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["CloudBoxInstanceId"].isNull())
			virtualBorderRouterSetObject.cloudBoxInstanceId = valueVirtualBorderRouterSetVirtualBorderRouterType["CloudBoxInstanceId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["RecoveryTime"].isNull())
			virtualBorderRouterSetObject.recoveryTime = valueVirtualBorderRouterSetVirtualBorderRouterType["RecoveryTime"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionStatus"].isNull())
			virtualBorderRouterSetObject.physicalConnectionStatus = valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionStatus"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PeeringIpv6SubnetMask"].isNull())
			virtualBorderRouterSetObject.peeringIpv6SubnetMask = valueVirtualBorderRouterSetVirtualBorderRouterType["PeeringIpv6SubnetMask"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["AccessPointId"].isNull())
			virtualBorderRouterSetObject.accessPointId = valueVirtualBorderRouterSetVirtualBorderRouterType["AccessPointId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PConnVbrChargeType"].isNull())
			virtualBorderRouterSetObject.pConnVbrChargeType = valueVirtualBorderRouterSetVirtualBorderRouterType["PConnVbrChargeType"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionId"].isNull())
			virtualBorderRouterSetObject.physicalConnectionId = valueVirtualBorderRouterSetVirtualBorderRouterType["PhysicalConnectionId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["Bandwidth"].isNull())
			virtualBorderRouterSetObject.bandwidth = std::stoi(valueVirtualBorderRouterSetVirtualBorderRouterType["Bandwidth"].asString());
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["ResourceGroupId"].isNull())
			virtualBorderRouterSetObject.resourceGroupId = valueVirtualBorderRouterSetVirtualBorderRouterType["ResourceGroupId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["EcrId"].isNull())
			virtualBorderRouterSetObject.ecrId = valueVirtualBorderRouterSetVirtualBorderRouterType["EcrId"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["SitelinkEnable"].isNull())
			virtualBorderRouterSetObject.sitelinkEnable = valueVirtualBorderRouterSetVirtualBorderRouterType["SitelinkEnable"].asString() == "true";
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["EcrAttatchStatus"].isNull())
			virtualBorderRouterSetObject.ecrAttatchStatus = valueVirtualBorderRouterSetVirtualBorderRouterType["EcrAttatchStatus"].asString();
		if(!valueVirtualBorderRouterSetVirtualBorderRouterType["EcrOwnerId"].isNull())
			virtualBorderRouterSetObject.ecrOwnerId = valueVirtualBorderRouterSetVirtualBorderRouterType["EcrOwnerId"].asString();
		auto allAssociatedPhysicalConnectionsNode = valueVirtualBorderRouterSetVirtualBorderRouterType["AssociatedPhysicalConnections"]["AssociatedPhysicalConnection"];
		for (auto valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection : allAssociatedPhysicalConnectionsNode)
		{
			VirtualBorderRouterType::AssociatedPhysicalConnection associatedPhysicalConnectionsObject;
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["Status"].isNull())
				associatedPhysicalConnectionsObject.status = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["Status"].asString();
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["VlanInterfaceId"].isNull())
				associatedPhysicalConnectionsObject.vlanInterfaceId = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["VlanInterfaceId"].asString();
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["CircuitCode"].isNull())
				associatedPhysicalConnectionsObject.circuitCode = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["CircuitCode"].asString();
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PeerIpv6GatewayIp"].isNull())
				associatedPhysicalConnectionsObject.peerIpv6GatewayIp = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PeerIpv6GatewayIp"].asString();
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["LocalIpv6GatewayIp"].isNull())
				associatedPhysicalConnectionsObject.localIpv6GatewayIp = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["LocalIpv6GatewayIp"].asString();
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionOwnerUid"].isNull())
				associatedPhysicalConnectionsObject.physicalConnectionOwnerUid = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionOwnerUid"].asString();
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["LocalGatewayIp"].isNull())
				associatedPhysicalConnectionsObject.localGatewayIp = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["LocalGatewayIp"].asString();
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionBusinessStatus"].isNull())
				associatedPhysicalConnectionsObject.physicalConnectionBusinessStatus = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionBusinessStatus"].asString();
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PeeringSubnetMask"].isNull())
				associatedPhysicalConnectionsObject.peeringSubnetMask = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PeeringSubnetMask"].asString();
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["EnableIpv6"].isNull())
				associatedPhysicalConnectionsObject.enableIpv6 = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["EnableIpv6"].asString() == "true";
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionStatus"].isNull())
				associatedPhysicalConnectionsObject.physicalConnectionStatus = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionStatus"].asString();
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PeerGatewayIp"].isNull())
				associatedPhysicalConnectionsObject.peerGatewayIp = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PeerGatewayIp"].asString();
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PeeringIpv6SubnetMask"].isNull())
				associatedPhysicalConnectionsObject.peeringIpv6SubnetMask = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PeeringIpv6SubnetMask"].asString();
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionId"].isNull())
				associatedPhysicalConnectionsObject.physicalConnectionId = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["PhysicalConnectionId"].asString();
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["VlanId"].isNull())
				associatedPhysicalConnectionsObject.vlanId = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection["VlanId"].asString();
			virtualBorderRouterSetObject.associatedPhysicalConnections.push_back(associatedPhysicalConnectionsObject);
		}
		auto allAssociatedCensNode = valueVirtualBorderRouterSetVirtualBorderRouterType["AssociatedCens"]["AssociatedCen"];
		for (auto valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedCensAssociatedCen : allAssociatedCensNode)
		{
			VirtualBorderRouterType::AssociatedCen associatedCensObject;
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedCensAssociatedCen["CenOwnerId"].isNull())
				associatedCensObject.cenOwnerId = std::stol(valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedCensAssociatedCen["CenOwnerId"].asString());
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedCensAssociatedCen["CenId"].isNull())
				associatedCensObject.cenId = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedCensAssociatedCen["CenId"].asString();
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedCensAssociatedCen["CenStatus"].isNull())
				associatedCensObject.cenStatus = valueVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedCensAssociatedCen["CenStatus"].asString();
			virtualBorderRouterSetObject.associatedCens.push_back(associatedCensObject);
		}
		auto allTagsNode = valueVirtualBorderRouterSetVirtualBorderRouterType["Tags"]["TagsItem"];
		for (auto valueVirtualBorderRouterSetVirtualBorderRouterTypeTagsTagsItem : allTagsNode)
		{
			VirtualBorderRouterType::TagsItem tagsObject;
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeTagsTagsItem["Key"].isNull())
				tagsObject.key = valueVirtualBorderRouterSetVirtualBorderRouterTypeTagsTagsItem["Key"].asString();
			if(!valueVirtualBorderRouterSetVirtualBorderRouterTypeTagsTagsItem["Value"].isNull())
				tagsObject.value = valueVirtualBorderRouterSetVirtualBorderRouterTypeTagsTagsItem["Value"].asString();
			virtualBorderRouterSetObject.tags.push_back(tagsObject);
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

