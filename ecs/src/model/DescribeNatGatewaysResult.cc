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

#include <alibabacloud/ecs/model/DescribeNatGatewaysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

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
	auto allNatGateways = value["NatGateways"]["NatGateway"];
	for (auto value : allNatGateways)
	{
		NatGateway natGatewayObject;
		natGatewayObject.natGatewayId = value["NatGatewayId"].asString();
		natGatewayObject.regionId = value["RegionId"].asString();
		natGatewayObject.name = value["Name"].asString();
		natGatewayObject.description = value["Description"].asString();
		natGatewayObject.vpcId = value["VpcId"].asString();
		natGatewayObject.spec = value["Spec"].asString();
		natGatewayObject.instanceChargeType = value["InstanceChargeType"].asString();
		natGatewayObject.businessStatus = value["BusinessStatus"].asString();
		natGatewayObject.creationTime = value["CreationTime"].asString();
		natGatewayObject.status = value["Status"].asString();
		auto allForwardTableIds = value["ForwardTableIds"]["ForwardTableId"];
		for (auto value : allForwardTableIds)
			natGatewayObject.forwardTableIds.push_back(value.asString());
		auto allBandwidthPackageIds = value["BandwidthPackageIds"]["BandwidthPackageId"];
		for (auto value : allBandwidthPackageIds)
			natGatewayObject.bandwidthPackageIds.push_back(value.asString());
		natGateways_.push_back(natGatewayObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeNatGatewaysResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeNatGatewaysResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeNatGatewaysResult::getPageSize()const
{
	return pageSize_;
}

void DescribeNatGatewaysResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeNatGatewaysResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeNatGatewaysResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

