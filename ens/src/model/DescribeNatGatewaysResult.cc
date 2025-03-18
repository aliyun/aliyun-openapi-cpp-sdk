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

#include <alibabacloud/ens/model/DescribeNatGatewaysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeNatGatewaysResult::DescribeNatGatewaysResult() :
	ServiceResult()
{}

DescribeNatGatewaysResult::DescribeNatGatewaysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNatGatewaysResult::~DescribeNatGatewaysResult()
{}

void DescribeNatGatewaysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNatGatewaysNode = value["NatGateways"]["NatGateway"];
	for (auto valueNatGatewaysNatGateway : allNatGatewaysNode)
	{
		NatGateway natGatewaysObject;
		if(!valueNatGatewaysNatGateway["EnsRegionId"].isNull())
			natGatewaysObject.ensRegionId = valueNatGatewaysNatGateway["EnsRegionId"].asString();
		if(!valueNatGatewaysNatGateway["NatGatewayId"].isNull())
			natGatewaysObject.natGatewayId = valueNatGatewaysNatGateway["NatGatewayId"].asString();
		if(!valueNatGatewaysNatGateway["NetworkId"].isNull())
			natGatewaysObject.networkId = valueNatGatewaysNatGateway["NetworkId"].asString();
		if(!valueNatGatewaysNatGateway["VSwitchId"].isNull())
			natGatewaysObject.vSwitchId = valueNatGatewaysNatGateway["VSwitchId"].asString();
		if(!valueNatGatewaysNatGateway["Name"].isNull())
			natGatewaysObject.name = valueNatGatewaysNatGateway["Name"].asString();
		if(!valueNatGatewaysNatGateway["CreationTime"].isNull())
			natGatewaysObject.creationTime = valueNatGatewaysNatGateway["CreationTime"].asString();
		if(!valueNatGatewaysNatGateway["Spec"].isNull())
			natGatewaysObject.spec = valueNatGatewaysNatGateway["Spec"].asString();
		if(!valueNatGatewaysNatGateway["Status"].isNull())
			natGatewaysObject.status = valueNatGatewaysNatGateway["Status"].asString();
		auto allIpListsNode = valueNatGatewaysNatGateway["IpLists"]["IpList"];
		for (auto valueNatGatewaysNatGatewayIpListsIpList : allIpListsNode)
		{
			NatGateway::IpList ipListsObject;
			if(!valueNatGatewaysNatGatewayIpListsIpList["UsingStatus"].isNull())
				ipListsObject.usingStatus = valueNatGatewaysNatGatewayIpListsIpList["UsingStatus"].asString();
			if(!valueNatGatewaysNatGatewayIpListsIpList["IpAddress"].isNull())
				ipListsObject.ipAddress = valueNatGatewaysNatGatewayIpListsIpList["IpAddress"].asString();
			if(!valueNatGatewaysNatGatewayIpListsIpList["AllocationId"].isNull())
				ipListsObject.allocationId = valueNatGatewaysNatGatewayIpListsIpList["AllocationId"].asString();
			natGatewaysObject.ipLists.push_back(ipListsObject);
		}
		natGateways_.push_back(natGatewaysObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeNatGatewaysResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeNatGatewaysResult::getPageSize()const
{
	return pageSize_;
}

int DescribeNatGatewaysResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeNatGatewaysResult::NatGateway> DescribeNatGatewaysResult::getNatGateways()const
{
	return natGateways_;
}

