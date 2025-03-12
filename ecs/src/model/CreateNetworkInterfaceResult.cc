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

#include <alibabacloud/ecs/model/CreateNetworkInterfaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

CreateNetworkInterfaceResult::CreateNetworkInterfaceResult() :
	ServiceResult()
{}

CreateNetworkInterfaceResult::CreateNetworkInterfaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateNetworkInterfaceResult::~CreateNetworkInterfaceResult()
{}

void CreateNetworkInterfaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPrivateIpSetsNode = value["PrivateIpSets"]["PrivateIpSet"];
	for (auto valuePrivateIpSetsPrivateIpSet : allPrivateIpSetsNode)
	{
		PrivateIpSet privateIpSetsObject;
		if(!valuePrivateIpSetsPrivateIpSet["PrivateIpAddress"].isNull())
			privateIpSetsObject.privateIpAddress = valuePrivateIpSetsPrivateIpSet["PrivateIpAddress"].asString();
		if(!valuePrivateIpSetsPrivateIpSet["Primary"].isNull())
			privateIpSetsObject.primary = valuePrivateIpSetsPrivateIpSet["Primary"].asString() == "true";
		privateIpSets_.push_back(privateIpSetsObject);
	}
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["TagValue"].isNull())
			tagsObject.tagValue = valueTagsTag["TagValue"].asString();
		if(!valueTagsTag["TagKey"].isNull())
			tagsObject.tagKey = valueTagsTag["TagKey"].asString();
		tags_.push_back(tagsObject);
	}
	auto allIpv6SetsNode = value["Ipv6Sets"]["Ipv6Set"];
	for (auto valueIpv6SetsIpv6Set : allIpv6SetsNode)
	{
		Ipv6Set ipv6SetsObject;
		if(!valueIpv6SetsIpv6Set["Ipv6Address"].isNull())
			ipv6SetsObject.ipv6Address = valueIpv6SetsIpv6Set["Ipv6Address"].asString();
		ipv6Sets_.push_back(ipv6SetsObject);
	}
	auto allIpv4PrefixSetsNode = value["Ipv4PrefixSets"]["Ipv4PrefixSet"];
	for (auto valueIpv4PrefixSetsIpv4PrefixSet : allIpv4PrefixSetsNode)
	{
		Ipv4PrefixSet ipv4PrefixSetsObject;
		if(!valueIpv4PrefixSetsIpv4PrefixSet["Ipv4Prefix"].isNull())
			ipv4PrefixSetsObject.ipv4Prefix = valueIpv4PrefixSetsIpv4PrefixSet["Ipv4Prefix"].asString();
		ipv4PrefixSets_.push_back(ipv4PrefixSetsObject);
	}
	auto allIpv6PrefixSetsNode = value["Ipv6PrefixSets"]["Ipv6PrefixSet"];
	for (auto valueIpv6PrefixSetsIpv6PrefixSet : allIpv6PrefixSetsNode)
	{
		Ipv6PrefixSet ipv6PrefixSetsObject;
		if(!valueIpv6PrefixSetsIpv6PrefixSet["Ipv6Prefix"].isNull())
			ipv6PrefixSetsObject.ipv6Prefix = valueIpv6PrefixSetsIpv6PrefixSet["Ipv6Prefix"].asString();
		ipv6PrefixSets_.push_back(ipv6PrefixSetsObject);
	}
	auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
	for (const auto &item : allSecurityGroupIds)
		securityGroupIds_.push_back(item.asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["NetworkInterfaceName"].isNull())
		networkInterfaceName_ = value["NetworkInterfaceName"].asString();
	if(!value["MacAddress"].isNull())
		macAddress_ = value["MacAddress"].asString();
	if(!value["NetworkInterfaceId"].isNull())
		networkInterfaceId_ = value["NetworkInterfaceId"].asString();
	if(!value["ServiceID"].isNull())
		serviceID_ = std::stol(value["ServiceID"].asString());
	if(!value["OwnerId"].isNull())
		ownerId_ = value["OwnerId"].asString();
	if(!value["ServiceManaged"].isNull())
		serviceManaged_ = value["ServiceManaged"].asString() == "true";
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["PrivateIpAddress"].isNull())
		privateIpAddress_ = value["PrivateIpAddress"].asString();
	if(!value["SourceDestCheck"].isNull())
		sourceDestCheck_ = value["SourceDestCheck"].asString() == "true";

}

std::string CreateNetworkInterfaceResult::getStatus()const
{
	return status_;
}

std::string CreateNetworkInterfaceResult::getDescription()const
{
	return description_;
}

std::string CreateNetworkInterfaceResult::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

bool CreateNetworkInterfaceResult::getServiceManaged()const
{
	return serviceManaged_;
}

std::string CreateNetworkInterfaceResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string CreateNetworkInterfaceResult::getZoneId()const
{
	return zoneId_;
}

std::string CreateNetworkInterfaceResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string CreateNetworkInterfaceResult::getNetworkInterfaceName()const
{
	return networkInterfaceName_;
}

std::string CreateNetworkInterfaceResult::getMacAddress()const
{
	return macAddress_;
}

std::string CreateNetworkInterfaceResult::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

std::vector<std::string> CreateNetworkInterfaceResult::getSecurityGroupIds()const
{
	return securityGroupIds_;
}

long CreateNetworkInterfaceResult::getServiceID()const
{
	return serviceID_;
}

bool CreateNetworkInterfaceResult::getSourceDestCheck()const
{
	return sourceDestCheck_;
}

std::string CreateNetworkInterfaceResult::getType()const
{
	return type_;
}

std::vector<CreateNetworkInterfaceResult::Ipv6Set> CreateNetworkInterfaceResult::getIpv6Sets()const
{
	return ipv6Sets_;
}

std::string CreateNetworkInterfaceResult::getVpcId()const
{
	return vpcId_;
}

std::string CreateNetworkInterfaceResult::getOwnerId()const
{
	return ownerId_;
}

std::vector<CreateNetworkInterfaceResult::Ipv6PrefixSet> CreateNetworkInterfaceResult::getIpv6PrefixSets()const
{
	return ipv6PrefixSets_;
}

std::vector<CreateNetworkInterfaceResult::Tag> CreateNetworkInterfaceResult::getTags()const
{
	return tags_;
}

std::vector<CreateNetworkInterfaceResult::Ipv4PrefixSet> CreateNetworkInterfaceResult::getIpv4PrefixSets()const
{
	return ipv4PrefixSets_;
}

std::vector<CreateNetworkInterfaceResult::PrivateIpSet> CreateNetworkInterfaceResult::getPrivateIpSets()const
{
	return privateIpSets_;
}

