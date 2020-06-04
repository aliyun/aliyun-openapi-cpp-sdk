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

#include <alibabacloud/ecs/model/DescribeNetworkInterfaceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeNetworkInterfaceAttributeResult::DescribeNetworkInterfaceAttributeResult() :
	ServiceResult()
{}

DescribeNetworkInterfaceAttributeResult::DescribeNetworkInterfaceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworkInterfaceAttributeResult::~DescribeNetworkInterfaceAttributeResult()
{}

void DescribeNetworkInterfaceAttributeResult::parse(const std::string &payload)
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
		auto associatedPublicIp1Node = value["AssociatedPublicIp"];
		if(!associatedPublicIp1Node["PublicIpAddress"].isNull())
			privateIpSetsObject.associatedPublicIp1.publicIpAddress = associatedPublicIp1Node["PublicIpAddress"].asString();
		if(!associatedPublicIp1Node["AllocationId"].isNull())
			privateIpSetsObject.associatedPublicIp1.allocationId = associatedPublicIp1Node["AllocationId"].asString();
		privateIpSets_.push_back(privateIpSetsObject);
	}
	auto allIpv6SetsNode = value["Ipv6Sets"]["Ipv6Set"];
	for (auto valueIpv6SetsIpv6Set : allIpv6SetsNode)
	{
		Ipv6Set ipv6SetsObject;
		if(!valueIpv6SetsIpv6Set["Ipv6Address"].isNull())
			ipv6SetsObject.ipv6Address = valueIpv6SetsIpv6Set["Ipv6Address"].asString();
		ipv6Sets_.push_back(ipv6SetsObject);
	}
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["TagKey"].isNull())
			tagsObject.tagKey = valueTagsTag["TagKey"].asString();
		if(!valueTagsTag["TagValue"].isNull())
			tagsObject.tagValue = valueTagsTag["TagValue"].asString();
		tags_.push_back(tagsObject);
	}
	auto associatedPublicIpNode = value["AssociatedPublicIp"];
	if(!associatedPublicIpNode["PublicIpAddress"].isNull())
		associatedPublicIp_.publicIpAddress = associatedPublicIpNode["PublicIpAddress"].asString();
	if(!associatedPublicIpNode["AllocationId"].isNull())
		associatedPublicIp_.allocationId = associatedPublicIpNode["AllocationId"].asString();
	auto attachmentNode = value["Attachment"];
	if(!attachmentNode["InstanceId"].isNull())
		attachment_.instanceId = attachmentNode["InstanceId"].asString();
	if(!attachmentNode["TrunkNetworkInterfaceId"].isNull())
		attachment_.trunkNetworkInterfaceId = attachmentNode["TrunkNetworkInterfaceId"].asString();
	if(!attachmentNode["DeviceIndex"].isNull())
		attachment_.deviceIndex = std::stoi(attachmentNode["DeviceIndex"].asString());
		auto allMemberNetworkInterfaceIds = attachmentNode["MemberNetworkInterfaceIds"]["MemberNetworkInterfaceId"];
		for (auto value : allMemberNetworkInterfaceIds)
			attachment_.memberNetworkInterfaceIds.push_back(value.asString());
	auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
	for (const auto &item : allSecurityGroupIds)
		securityGroupIds_.push_back(item.asString());
	if(!value["NetworkInterfaceId"].isNull())
		networkInterfaceId_ = value["NetworkInterfaceId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["PrivateIpAddress"].isNull())
		privateIpAddress_ = value["PrivateIpAddress"].asString();
	if(!value["MacAddress"].isNull())
		macAddress_ = value["MacAddress"].asString();
	if(!value["NetworkInterfaceName"].isNull())
		networkInterfaceName_ = value["NetworkInterfaceName"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["ServiceID"].isNull())
		serviceID_ = std::stol(value["ServiceID"].asString());
	if(!value["ServiceManaged"].isNull())
		serviceManaged_ = value["ServiceManaged"].asString() == "true";
	if(!value["QueueNumber"].isNull())
		queueNumber_ = std::stoi(value["QueueNumber"].asString());
	if(!value["OwnerId"].isNull())
		ownerId_ = value["OwnerId"].asString();

}

std::string DescribeNetworkInterfaceAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeNetworkInterfaceAttributeResult::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

std::string DescribeNetworkInterfaceAttributeResult::getDescription()const
{
	return description_;
}

std::string DescribeNetworkInterfaceAttributeResult::getZoneId()const
{
	return zoneId_;
}

std::string DescribeNetworkInterfaceAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

bool DescribeNetworkInterfaceAttributeResult::getServiceManaged()const
{
	return serviceManaged_;
}

std::string DescribeNetworkInterfaceAttributeResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeNetworkInterfaceAttributeResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeNetworkInterfaceAttributeResult::getNetworkInterfaceName()const
{
	return networkInterfaceName_;
}

DescribeNetworkInterfaceAttributeResult::Attachment DescribeNetworkInterfaceAttributeResult::getAttachment()const
{
	return attachment_;
}

std::string DescribeNetworkInterfaceAttributeResult::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

std::string DescribeNetworkInterfaceAttributeResult::getMacAddress()const
{
	return macAddress_;
}

std::vector<std::string> DescribeNetworkInterfaceAttributeResult::getSecurityGroupIds()const
{
	return securityGroupIds_;
}

long DescribeNetworkInterfaceAttributeResult::getServiceID()const
{
	return serviceID_;
}

std::string DescribeNetworkInterfaceAttributeResult::getType()const
{
	return type_;
}

std::vector<DescribeNetworkInterfaceAttributeResult::Ipv6Set> DescribeNetworkInterfaceAttributeResult::getIpv6Sets()const
{
	return ipv6Sets_;
}

int DescribeNetworkInterfaceAttributeResult::getQueueNumber()const
{
	return queueNumber_;
}

std::string DescribeNetworkInterfaceAttributeResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeNetworkInterfaceAttributeResult::getOwnerId()const
{
	return ownerId_;
}

DescribeNetworkInterfaceAttributeResult::AssociatedPublicIp DescribeNetworkInterfaceAttributeResult::getAssociatedPublicIp()const
{
	return associatedPublicIp_;
}

std::string DescribeNetworkInterfaceAttributeResult::getCreationTime()const
{
	return creationTime_;
}

std::vector<DescribeNetworkInterfaceAttributeResult::Tag> DescribeNetworkInterfaceAttributeResult::getTags()const
{
	return tags_;
}

std::vector<DescribeNetworkInterfaceAttributeResult::PrivateIpSet> DescribeNetworkInterfaceAttributeResult::getPrivateIpSets()const
{
	return privateIpSets_;
}

