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
		auto allPrivateIpSets = value["PrivateIpSets"]["PrivateIpSet"];
		for (auto value : allPrivateIpSets)
		{
			NetworkInterfaceSet::PrivateIpSet privateIpSetsObject;
			if(!value["PrivateIpAddress"].isNull())
				privateIpSetsObject.privateIpAddress = value["PrivateIpAddress"].asString();
			if(!value["Primary"].isNull())
				privateIpSetsObject.primary = value["Primary"].asString() == "true";
			auto allAssociatedPublicIp1 = value["AssociatedPublicIp"];
			for (auto value : allAssociatedPublicIp1)
			{
				NetworkInterfaceSet::PrivateIpSet::AssociatedPublicIp1 associatedPublicIp1Object;
				if(!value["PublicIpAddress"].isNull())
					associatedPublicIp1Object.publicIpAddress = value["PublicIpAddress"].asString();
				if(!value["AllocationId"].isNull())
					associatedPublicIp1Object.allocationId = value["AllocationId"].asString();
				privateIpSetsObject.associatedPublicIp1.push_back(associatedPublicIp1Object);
			}
			networkInterfaceSetsObject.privateIpSets.push_back(privateIpSetsObject);
		}
		auto allAssociatedPublicIp = value["AssociatedPublicIp"];
		for (auto value : allAssociatedPublicIp)
		{
			NetworkInterfaceSet::AssociatedPublicIp associatedPublicIpObject;
			if(!value["PublicIpAddress"].isNull())
				associatedPublicIpObject.publicIpAddress = value["PublicIpAddress"].asString();
			if(!value["AllocationId"].isNull())
				associatedPublicIpObject.allocationId = value["AllocationId"].asString();
			networkInterfaceSetsObject.associatedPublicIp.push_back(associatedPublicIpObject);
		}
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

