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

#include <alibabacloud/vpc/model/DescribeVSwitchAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

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
	auto allCloudResourcesNode = value["CloudResources"]["CloudResourceSetType"];
	for (auto valueCloudResourcesCloudResourceSetType : allCloudResourcesNode)
	{
		CloudResourceSetType cloudResourcesObject;
		if(!valueCloudResourcesCloudResourceSetType["ResourceCount"].isNull())
			cloudResourcesObject.resourceCount = std::stoi(valueCloudResourcesCloudResourceSetType["ResourceCount"].asString());
		if(!valueCloudResourcesCloudResourceSetType["ResourceType"].isNull())
			cloudResourcesObject.resourceType = valueCloudResourcesCloudResourceSetType["ResourceType"].asString();
		cloudResources_.push_back(cloudResourcesObject);
	}
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
	auto routeTableNode = value["RouteTable"];
	if(!routeTableNode["RouteTableId"].isNull())
		routeTable_.routeTableId = routeTableNode["RouteTableId"].asString();
	if(!routeTableNode["RouteTableType"].isNull())
		routeTable_.routeTableType = routeTableNode["RouteTableType"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["IsDefault"].isNull())
		isDefault_ = value["IsDefault"].asString() == "true";
	if(!value["AvailableIpAddressCount"].isNull())
		availableIpAddressCount_ = std::stol(value["AvailableIpAddressCount"].asString());
	if(!value["NetworkAclId"].isNull())
		networkAclId_ = value["NetworkAclId"].asString();
	if(!value["OwnerId"].isNull())
		ownerId_ = std::stol(value["OwnerId"].asString());
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["CidrBlock"].isNull())
		cidrBlock_ = value["CidrBlock"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["Ipv6CidrBlock"].isNull())
		ipv6CidrBlock_ = value["Ipv6CidrBlock"].asString();
	if(!value["VSwitchName"].isNull())
		vSwitchName_ = value["VSwitchName"].asString();
	if(!value["ShareType"].isNull())
		shareType_ = value["ShareType"].asString();
	if(!value["EnabledIpv6"].isNull())
		enabledIpv6_ = value["EnabledIpv6"].asString() == "true";

}

std::string DescribeVSwitchAttributesResult::getStatus()const
{
	return status_;
}

bool DescribeVSwitchAttributesResult::getIsDefault()const
{
	return isDefault_;
}

std::string DescribeVSwitchAttributesResult::getDescription()const
{
	return description_;
}

std::string DescribeVSwitchAttributesResult::getNetworkAclId()const
{
	return networkAclId_;
}

std::string DescribeVSwitchAttributesResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string DescribeVSwitchAttributesResult::getZoneId()const
{
	return zoneId_;
}

long DescribeVSwitchAttributesResult::getAvailableIpAddressCount()const
{
	return availableIpAddressCount_;
}

std::string DescribeVSwitchAttributesResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeVSwitchAttributesResult::getCidrBlock()const
{
	return cidrBlock_;
}

DescribeVSwitchAttributesResult::RouteTable DescribeVSwitchAttributesResult::getRouteTable()const
{
	return routeTable_;
}

std::string DescribeVSwitchAttributesResult::getVpcId()const
{
	return vpcId_;
}

long DescribeVSwitchAttributesResult::getOwnerId()const
{
	return ownerId_;
}

std::string DescribeVSwitchAttributesResult::getCreationTime()const
{
	return creationTime_;
}

std::string DescribeVSwitchAttributesResult::getVSwitchName()const
{
	return vSwitchName_;
}

bool DescribeVSwitchAttributesResult::getEnabledIpv6()const
{
	return enabledIpv6_;
}

std::string DescribeVSwitchAttributesResult::getIpv6CidrBlock()const
{
	return ipv6CidrBlock_;
}

std::vector<DescribeVSwitchAttributesResult::CloudResourceSetType> DescribeVSwitchAttributesResult::getCloudResources()const
{
	return cloudResources_;
}

std::vector<DescribeVSwitchAttributesResult::Tag> DescribeVSwitchAttributesResult::getTags()const
{
	return tags_;
}

std::string DescribeVSwitchAttributesResult::getShareType()const
{
	return shareType_;
}

