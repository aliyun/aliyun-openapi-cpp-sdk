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

#include <alibabacloud/ecs/model/DescribeNetworkInterfacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeNetworkInterfacesResult::DescribeNetworkInterfacesResult() :
	ServiceResult()
{}

DescribeNetworkInterfacesResult::DescribeNetworkInterfacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworkInterfacesResult::~DescribeNetworkInterfacesResult()
{}

void DescribeNetworkInterfacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allNetworkInterfaceSets = value["NetworkInterfaceSets"]["NetworkInterfaceSet"];
	for (auto value : allNetworkInterfaceSets)
	{
		NetworkInterfaceSet networkInterfaceSetsObject;
		if(!value["NetworkInterfaceId"].isNull())
			networkInterfaceSetsObject.networkInterfaceId = value["NetworkInterfaceId"].asString();
		if(!value["Status"].isNull())
			networkInterfaceSetsObject.status = value["Status"].asString();
		if(!value["Type"].isNull())
			networkInterfaceSetsObject.type = value["Type"].asString();
		if(!value["VpcId"].isNull())
			networkInterfaceSetsObject.vpcId = value["VpcId"].asString();
		if(!value["VSwitchId"].isNull())
			networkInterfaceSetsObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["ZoneId"].isNull())
			networkInterfaceSetsObject.zoneId = value["ZoneId"].asString();
		if(!value["PrivateIpAddress"].isNull())
			networkInterfaceSetsObject.privateIpAddress = value["PrivateIpAddress"].asString();
		if(!value["MacAddress"].isNull())
			networkInterfaceSetsObject.macAddress = value["MacAddress"].asString();
		if(!value["NetworkInterfaceName"].isNull())
			networkInterfaceSetsObject.networkInterfaceName = value["NetworkInterfaceName"].asString();
		if(!value["Description"].isNull())
			networkInterfaceSetsObject.description = value["Description"].asString();
		if(!value["InstanceId"].isNull())
			networkInterfaceSetsObject.instanceId = value["InstanceId"].asString();
		if(!value["CreationTime"].isNull())
			networkInterfaceSetsObject.creationTime = value["CreationTime"].asString();
		if(!value["ResourceGroupId"].isNull())
			networkInterfaceSetsObject.resourceGroupId = value["ResourceGroupId"].asString();
		if(!value["ServiceID"].isNull())
			networkInterfaceSetsObject.serviceID = std::stol(value["ServiceID"].asString());
		if(!value["ServiceManaged"].isNull())
			networkInterfaceSetsObject.serviceManaged = value["ServiceManaged"].asString() == "true";
		auto allPrivateIpSets = value["PrivateIpSets"]["PrivateIpSet"];
		for (auto value : allPrivateIpSets)
		{
			NetworkInterfaceSet::PrivateIpSet privateIpSetsObject;
			if(!value["PrivateIpAddress"].isNull())
				privateIpSetsObject.privateIpAddress = value["PrivateIpAddress"].asString();
			if(!value["Primary"].isNull())
				privateIpSetsObject.primary = value["Primary"].asString() == "true";
			auto associatedPublicIp1Node = value["AssociatedPublicIp"];
			if(!associatedPublicIp1Node["PublicIpAddress"].isNull())
				privateIpSetsObject.associatedPublicIp1.publicIpAddress = associatedPublicIp1Node["PublicIpAddress"].asString();
			if(!associatedPublicIp1Node["AllocationId"].isNull())
				privateIpSetsObject.associatedPublicIp1.allocationId = associatedPublicIp1Node["AllocationId"].asString();
			networkInterfaceSetsObject.privateIpSets.push_back(privateIpSetsObject);
		}
		auto allIpv6Sets = value["Ipv6Sets"]["Ipv6Set"];
		for (auto value : allIpv6Sets)
		{
			NetworkInterfaceSet::Ipv6Set ipv6SetsObject;
			if(!value["Ipv6Address"].isNull())
				ipv6SetsObject.ipv6Address = value["Ipv6Address"].asString();
			networkInterfaceSetsObject.ipv6Sets.push_back(ipv6SetsObject);
		}
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			NetworkInterfaceSet::Tag tagsObject;
			if(!value["TagKey"].isNull())
				tagsObject.tagKey = value["TagKey"].asString();
			if(!value["TagValue"].isNull())
				tagsObject.tagValue = value["TagValue"].asString();
			networkInterfaceSetsObject.tags.push_back(tagsObject);
		}
		auto associatedPublicIpNode = value["AssociatedPublicIp"];
		if(!associatedPublicIpNode["PublicIpAddress"].isNull())
			networkInterfaceSetsObject.associatedPublicIp.publicIpAddress = associatedPublicIpNode["PublicIpAddress"].asString();
		if(!associatedPublicIpNode["AllocationId"].isNull())
			networkInterfaceSetsObject.associatedPublicIp.allocationId = associatedPublicIpNode["AllocationId"].asString();
		auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
		for (auto value : allSecurityGroupIds)
			networkInterfaceSetsObject.securityGroupIds.push_back(value.asString());
		networkInterfaceSets_.push_back(networkInterfaceSetsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeNetworkInterfacesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeNetworkInterfacesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeNetworkInterfacesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeNetworkInterfacesResult::NetworkInterfaceSet> DescribeNetworkInterfacesResult::getNetworkInterfaceSets()const
{
	return networkInterfaceSets_;
}

