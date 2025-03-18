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

#include <alibabacloud/ens/model/DescribeVSwitchAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeVSwitchAttributesResult::DescribeVSwitchAttributesResult() :
	ServiceResult()
{}

DescribeVSwitchAttributesResult::DescribeVSwitchAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVSwitchAttributesResult::~DescribeVSwitchAttributesResult()
{}

void DescribeVSwitchAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceIds = value["InstanceIds"]["InstanceId"];
	for (const auto &item : allInstanceIds)
		instanceIds_.push_back(item.asString());
	auto allNetworkInterfaceIds = value["NetworkInterfaceIds"]["NetworkInterfaceId"];
	for (const auto &item : allNetworkInterfaceIds)
		networkInterfaceIds_.push_back(item.asString());
	auto allLoadBalancerIds = value["LoadBalancerIds"]["LoadBalancerId"];
	for (const auto &item : allLoadBalancerIds)
		loadBalancerIds_.push_back(item.asString());
	auto allNatGatewayIds = value["NatGatewayIds"]["NatGatewayId"];
	for (const auto &item : allNatGatewayIds)
		natGatewayIds_.push_back(item.asString());
	auto allHaVipIds = value["HaVipIds"]["HaVipId"];
	for (const auto &item : allHaVipIds)
		haVipIds_.push_back(item.asString());
	if(!value["EnsRegionId"].isNull())
		ensRegionId_ = value["EnsRegionId"].asString();
	if(!value["NetworkId"].isNull())
		networkId_ = value["NetworkId"].asString();
	if(!value["VSwitchName"].isNull())
		vSwitchName_ = value["VSwitchName"].asString();
	if(!value["CidrBlock"].isNull())
		cidrBlock_ = value["CidrBlock"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["AvailableIpAddressCount"].isNull())
		availableIpAddressCount_ = std::stol(value["AvailableIpAddressCount"].asString());

}

std::string DescribeVSwitchAttributesResult::getStatus()const
{
	return status_;
}

std::string DescribeVSwitchAttributesResult::getDescription()const
{
	return description_;
}

std::string DescribeVSwitchAttributesResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeVSwitchAttributesResult::getVSwitchId()const
{
	return vSwitchId_;
}

long DescribeVSwitchAttributesResult::getAvailableIpAddressCount()const
{
	return availableIpAddressCount_;
}

std::vector<std::string> DescribeVSwitchAttributesResult::getLoadBalancerIds()const
{
	return loadBalancerIds_;
}

std::string DescribeVSwitchAttributesResult::getCidrBlock()const
{
	return cidrBlock_;
}

std::vector<std::string> DescribeVSwitchAttributesResult::getNetworkInterfaceIds()const
{
	return networkInterfaceIds_;
}

std::string DescribeVSwitchAttributesResult::getNetworkId()const
{
	return networkId_;
}

std::vector<std::string> DescribeVSwitchAttributesResult::getNatGatewayIds()const
{
	return natGatewayIds_;
}

std::vector<std::string> DescribeVSwitchAttributesResult::getHaVipIds()const
{
	return haVipIds_;
}

std::string DescribeVSwitchAttributesResult::getVSwitchName()const
{
	return vSwitchName_;
}

std::vector<std::string> DescribeVSwitchAttributesResult::getInstanceIds()const
{
	return instanceIds_;
}

std::string DescribeVSwitchAttributesResult::getEnsRegionId()const
{
	return ensRegionId_;
}

