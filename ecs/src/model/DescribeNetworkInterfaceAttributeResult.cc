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
	auto associatedPublicIpNode = value["AssociatedPublicIp"];
	if(!associatedPublicIpNode["PublicIpAddress"].isNull())
		associatedPublicIp_.publicIpAddress = associatedPublicIpNode["PublicIpAddress"].asString();
	if(!associatedPublicIpNode["AllocationId"].isNull())
		associatedPublicIp_.allocationId = associatedPublicIpNode["AllocationId"].asString();
	auto attachmentNode = value["Attachment"];
	if(!attachmentNode["DeviceIndex"].isNull())
		attachment_.deviceIndex = std::stoi(attachmentNode["DeviceIndex"].asString());
	if(!attachmentNode["InstanceId"].isNull())
		attachment_.instanceId = attachmentNode["InstanceId"].asString();
	if(!attachmentNode["TrunkNetworkInterfaceId"].isNull())
		attachment_.trunkNetworkInterfaceId = attachmentNode["TrunkNetworkInterfaceId"].asString();
	if(!attachmentNode["NetworkCardIndex"].isNull())
		attachment_.networkCardIndex = std::stoi(attachmentNode["NetworkCardIndex"].asString());
		auto allMemberNetworkInterfaceIds = attachmentNode["MemberNetworkInterfaceIds"]["MemberNetworkInterfaceId"];
		for (auto value : allMemberNetworkInterfaceIds)
			attachment_.memberNetworkInterfaceIds.push_back(value.asString());
	auto bondInterfaceSpecificationNode = value["BondInterfaceSpecification"];
	if(!bondInterfaceSpecificationNode["BondMode"].isNull())
		bondInterfaceSpecification_.bondMode = bondInterfaceSpecificationNode["BondMode"].asString();
	auto allSlaveInterfaceSpecification2Node = bondInterfaceSpecificationNode["SlaveInterfaceSpecification"]["SlaveInterfaceSpecificationSet"];
	for (auto bondInterfaceSpecificationNodeSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet : allSlaveInterfaceSpecification2Node)
	{
		BondInterfaceSpecification::SlaveInterfaceSpecificationSet slaveInterfaceSpecificationSetObject;
		if(!bondInterfaceSpecificationNodeSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet["SlaveNetworkInterfaceId"].isNull())
			slaveInterfaceSpecificationSetObject.slaveNetworkInterfaceId = bondInterfaceSpecificationNodeSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet["SlaveNetworkInterfaceId"].asString();
		if(!bondInterfaceSpecificationNodeSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet["WorkState"].isNull())
			slaveInterfaceSpecificationSetObject.workState = bondInterfaceSpecificationNodeSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet["WorkState"].asString();
		if(!bondInterfaceSpecificationNodeSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet["BondNetworkInterfaceId"].isNull())
			slaveInterfaceSpecificationSetObject.bondNetworkInterfaceId = bondInterfaceSpecificationNodeSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet["BondNetworkInterfaceId"].asString();
		bondInterfaceSpecification_.slaveInterfaceSpecification2.push_back(slaveInterfaceSpecificationSetObject);
	}
	auto slaveInterfaceSpecificationNode = value["SlaveInterfaceSpecification"];
	if(!slaveInterfaceSpecificationNode["SlaveNetworkInterfaceId"].isNull())
		slaveInterfaceSpecification_.slaveNetworkInterfaceId = slaveInterfaceSpecificationNode["SlaveNetworkInterfaceId"].asString();
	if(!slaveInterfaceSpecificationNode["WorkState"].isNull())
		slaveInterfaceSpecification_.workState = slaveInterfaceSpecificationNode["WorkState"].asString();
	if(!slaveInterfaceSpecificationNode["BondNetworkInterfaceId"].isNull())
		slaveInterfaceSpecification_.bondNetworkInterfaceId = slaveInterfaceSpecificationNode["BondNetworkInterfaceId"].asString();
	auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
	for (const auto &item : allSecurityGroupIds)
		securityGroupIds_.push_back(item.asString());
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["NetworkInterfaceTrafficMode"].isNull())
		networkInterfaceTrafficMode_ = value["NetworkInterfaceTrafficMode"].asString();
	if(!value["NetworkInterfaceName"].isNull())
		networkInterfaceName_ = value["NetworkInterfaceName"].asString();
	if(!value["MacAddress"].isNull())
		macAddress_ = value["MacAddress"].asString();
	if(!value["QueuePairNumber"].isNull())
		queuePairNumber_ = std::stoi(value["QueuePairNumber"].asString());
	if(!value["NetworkInterfaceId"].isNull())
		networkInterfaceId_ = value["NetworkInterfaceId"].asString();
	if(!value["ServiceID"].isNull())
		serviceID_ = std::stol(value["ServiceID"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
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
	if(!value["QueueNumber"].isNull())
		queueNumber_ = std::stoi(value["QueueNumber"].asString());

}

std::string DescribeNetworkInterfaceAttributeResult::getDescription()const
{
	return description_;
}

std::string DescribeNetworkInterfaceAttributeResult::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

bool DescribeNetworkInterfaceAttributeResult::getServiceManaged()const
{
	return serviceManaged_;
}

std::string DescribeNetworkInterfaceAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

DescribeNetworkInterfaceAttributeResult::Attachment DescribeNetworkInterfaceAttributeResult::getAttachment()const
{
	return attachment_;
}

std::string DescribeNetworkInterfaceAttributeResult::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

std::vector<DescribeNetworkInterfaceAttributeResult::Ipv6Set> DescribeNetworkInterfaceAttributeResult::getIpv6Sets()const
{
	return ipv6Sets_;
}

std::string DescribeNetworkInterfaceAttributeResult::getOwnerId()const
{
	return ownerId_;
}

DescribeNetworkInterfaceAttributeResult::AssociatedPublicIp DescribeNetworkInterfaceAttributeResult::getAssociatedPublicIp()const
{
	return associatedPublicIp_;
}

std::vector<DescribeNetworkInterfaceAttributeResult::Tag> DescribeNetworkInterfaceAttributeResult::getTags()const
{
	return tags_;
}

std::string DescribeNetworkInterfaceAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeNetworkInterfaceAttributeResult::getNetworkInterfaceTrafficMode()const
{
	return networkInterfaceTrafficMode_;
}

DescribeNetworkInterfaceAttributeResult::SlaveInterfaceSpecification DescribeNetworkInterfaceAttributeResult::getSlaveInterfaceSpecification()const
{
	return slaveInterfaceSpecification_;
}

std::string DescribeNetworkInterfaceAttributeResult::getZoneId()const
{
	return zoneId_;
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

int DescribeNetworkInterfaceAttributeResult::getQueuePairNumber()const
{
	return queuePairNumber_;
}

int DescribeNetworkInterfaceAttributeResult::getQueueNumber()const
{
	return queueNumber_;
}

std::string DescribeNetworkInterfaceAttributeResult::getVpcId()const
{
	return vpcId_;
}

std::vector<DescribeNetworkInterfaceAttributeResult::Ipv6PrefixSet> DescribeNetworkInterfaceAttributeResult::getIpv6PrefixSets()const
{
	return ipv6PrefixSets_;
}

DescribeNetworkInterfaceAttributeResult::BondInterfaceSpecification DescribeNetworkInterfaceAttributeResult::getBondInterfaceSpecification()const
{
	return bondInterfaceSpecification_;
}

std::string DescribeNetworkInterfaceAttributeResult::getCreationTime()const
{
	return creationTime_;
}

std::vector<DescribeNetworkInterfaceAttributeResult::Ipv4PrefixSet> DescribeNetworkInterfaceAttributeResult::getIpv4PrefixSets()const
{
	return ipv4PrefixSets_;
}

std::vector<DescribeNetworkInterfaceAttributeResult::PrivateIpSet> DescribeNetworkInterfaceAttributeResult::getPrivateIpSets()const
{
	return privateIpSets_;
}

