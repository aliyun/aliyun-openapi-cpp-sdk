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
		NetworkInterfaceSet networkInterfaceSetObject;
		networkInterfaceSetObject.networkInterfaceId = value["NetworkInterfaceId"].asString();
		networkInterfaceSetObject.status = value["Status"].asString();
		networkInterfaceSetObject.type = value["Type"].asString();
		networkInterfaceSetObject.vpcId = value["VpcId"].asString();
		networkInterfaceSetObject.vSwitchId = value["VSwitchId"].asString();
		networkInterfaceSetObject.zoneId = value["ZoneId"].asString();
		networkInterfaceSetObject.privateIpAddress = value["PrivateIpAddress"].asString();
		networkInterfaceSetObject.macAddress = value["MacAddress"].asString();
		networkInterfaceSetObject.networkInterfaceName = value["NetworkInterfaceName"].asString();
		networkInterfaceSetObject.description = value["Description"].asString();
		networkInterfaceSetObject.instanceId = value["InstanceId"].asString();
		networkInterfaceSetObject.creationTime = value["CreationTime"].asString();
		auto allPrivateIpSets = value["PrivateIpSets"]["PrivateIpSet"];
		for (auto value : allPrivateIpSets)
		{
			NetworkInterfaceSet::PrivateIpSet privateIpSetObject;
			privateIpSetObject.privateIpAddress = value["PrivateIpAddress"].asString();
			privateIpSetObject.primary = std::stoi(value["Primary"].asString());
			auto allAssociatedPublicIp = value["AssociatedPublicIp"];
			for (auto value : allAssociatedPublicIp)
			{
				NetworkInterfaceSet::PrivateIpSet::AssociatedPublicIp1 associatedPublicIp1Object;
				associatedPublicIp1Object.publicIpAddress = value["PublicIpAddress"].asString();
				associatedPublicIp1Object.allocationId = value["AllocationId"].asString();
				privateIpSetObject.associatedPublicIp1.push_back(associatedPublicIp1Object);
			}
			networkInterfaceSetObject.privateIpSets.push_back(privateIpSetObject);
		}
		auto allAssociatedPublicIp = value["AssociatedPublicIp"];
		for (auto value : allAssociatedPublicIp)
		{
			NetworkInterfaceSet::AssociatedPublicIp associatedPublicIpObject;
			associatedPublicIpObject.publicIpAddress = value["PublicIpAddress"].asString();
			associatedPublicIpObject.allocationId = value["AllocationId"].asString();
			networkInterfaceSetObject.associatedPublicIp.push_back(associatedPublicIpObject);
		}
		auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
		for (auto value : allSecurityGroupIds)
			networkInterfaceSetObject.securityGroupIds.push_back(value.asString());
		networkInterfaceSets_.push_back(networkInterfaceSetObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeNetworkInterfacesResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeNetworkInterfacesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeNetworkInterfacesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeNetworkInterfacesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeNetworkInterfacesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeNetworkInterfacesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

