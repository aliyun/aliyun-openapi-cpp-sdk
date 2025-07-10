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

#include <alibabacloud/vpc/model/DescribeIpv6GatewayAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeIpv6GatewayAttributeResult::DescribeIpv6GatewayAttributeResult() :
	ServiceResult()
{}

DescribeIpv6GatewayAttributeResult::DescribeIpv6GatewayAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIpv6GatewayAttributeResult::~DescribeIpv6GatewayAttributeResult()
{}

void DescribeIpv6GatewayAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["Key"].isNull())
			tagsObject.key = valueTagsTag["Key"].asString();
		if(!valueTagsTag["Value"].isNull())
			tagsObject.value = valueTagsTag["Value"].asString();
		tags_.push_back(tagsObject);
	}
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["Spec"].isNull())
		spec_ = value["Spec"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["InstanceChargeType"].isNull())
		instanceChargeType_ = value["InstanceChargeType"].asString();
	if(!value["Ipv6GatewayId"].isNull())
		ipv6GatewayId_ = value["Ipv6GatewayId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = value["ExpiredTime"].asString();
	if(!value["BusinessStatus"].isNull())
		businessStatus_ = value["BusinessStatus"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["GatewayRouteTableId"].isNull())
		gatewayRouteTableId_ = value["GatewayRouteTableId"].asString();
	if(!value["OwnerId"].isNull())
		ownerId_ = std::stol(value["OwnerId"].asString());

}

std::string DescribeIpv6GatewayAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeIpv6GatewayAttributeResult::getGatewayRouteTableId()const
{
	return gatewayRouteTableId_;
}

std::string DescribeIpv6GatewayAttributeResult::getDescription()const
{
	return description_;
}

std::string DescribeIpv6GatewayAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string DescribeIpv6GatewayAttributeResult::getInstanceChargeType()const
{
	return instanceChargeType_;
}

std::string DescribeIpv6GatewayAttributeResult::getIpv6GatewayId()const
{
	return ipv6GatewayId_;
}

std::string DescribeIpv6GatewayAttributeResult::getBusinessStatus()const
{
	return businessStatus_;
}

std::string DescribeIpv6GatewayAttributeResult::getName()const
{
	return name_;
}

std::string DescribeIpv6GatewayAttributeResult::getVpcId()const
{
	return vpcId_;
}

long DescribeIpv6GatewayAttributeResult::getOwnerId()const
{
	return ownerId_;
}

std::string DescribeIpv6GatewayAttributeResult::getExpiredTime()const
{
	return expiredTime_;
}

std::string DescribeIpv6GatewayAttributeResult::getCreationTime()const
{
	return creationTime_;
}

std::string DescribeIpv6GatewayAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeIpv6GatewayAttributeResult::getSpec()const
{
	return spec_;
}

std::vector<DescribeIpv6GatewayAttributeResult::Tag> DescribeIpv6GatewayAttributeResult::getTags()const
{
	return tags_;
}

