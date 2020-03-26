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

#include <alibabacloud/vpc/model/DescribeVirtualBorderRoutersForPhysicalConnectionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVirtualBorderRoutersForPhysicalConnectionResult::DescribeVirtualBorderRoutersForPhysicalConnectionResult() :
	ServiceResult()
{}

DescribeVirtualBorderRoutersForPhysicalConnectionResult::DescribeVirtualBorderRoutersForPhysicalConnectionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVirtualBorderRoutersForPhysicalConnectionResult::~DescribeVirtualBorderRoutersForPhysicalConnectionResult()
{}

void DescribeVirtualBorderRoutersForPhysicalConnectionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVirtualBorderRouterForPhysicalConnectionSetNode = value["VirtualBorderRouterForPhysicalConnectionSet"]["VirtualBorderRouterForPhysicalConnectionType"];
	for (auto valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType : allVirtualBorderRouterForPhysicalConnectionSetNode)
	{
		VirtualBorderRouterForPhysicalConnectionType virtualBorderRouterForPhysicalConnectionSetObject;
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["VbrId"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.vbrId = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["VbrId"].asString();
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["VbrOwnerUid"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.vbrOwnerUid = std::stol(valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["VbrOwnerUid"].asString());
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["EccId"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.eccId = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["EccId"].asString();
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["Type"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.type = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["Type"].asString();
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["CreationTime"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.creationTime = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["CreationTime"].asString();
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["ActivationTime"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.activationTime = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["ActivationTime"].asString();
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["TerminationTime"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.terminationTime = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["TerminationTime"].asString();
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["RecoveryTime"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.recoveryTime = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["RecoveryTime"].asString();
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["VlanId"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.vlanId = std::stoi(valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["VlanId"].asString());
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["Status"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.status = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["Status"].asString();
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["CircuitCode"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.circuitCode = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["CircuitCode"].asString();
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["LocalGatewayIp"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.localGatewayIp = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["LocalGatewayIp"].asString();
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["PeerGatewayIp"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.peerGatewayIp = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["PeerGatewayIp"].asString();
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["PeeringSubnetMask"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.peeringSubnetMask = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["PeeringSubnetMask"].asString();
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["PConnVbrChargeType"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.pConnVbrChargeType = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["PConnVbrChargeType"].asString();
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["PConnVbrExpireTime"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.pConnVbrExpireTime = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["PConnVbrExpireTime"].asString();
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["PConnVbrBussinessStatus"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.pConnVbrBussinessStatus = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["PConnVbrBussinessStatus"].asString();
		if(!valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["Bandwidth"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.bandwidth = valueVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType["Bandwidth"].asString();
		virtualBorderRouterForPhysicalConnectionSet_.push_back(virtualBorderRouterForPhysicalConnectionSetObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVirtualBorderRoutersForPhysicalConnectionResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVirtualBorderRoutersForPhysicalConnectionResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVirtualBorderRoutersForPhysicalConnectionResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeVirtualBorderRoutersForPhysicalConnectionResult::VirtualBorderRouterForPhysicalConnectionType> DescribeVirtualBorderRoutersForPhysicalConnectionResult::getVirtualBorderRouterForPhysicalConnectionSet()const
{
	return virtualBorderRouterForPhysicalConnectionSet_;
}

