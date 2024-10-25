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

#include <alibabacloud/ens/model/DescribeNetworkInterfacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

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
	auto allNetworkInterfaceSetsNode = value["NetworkInterfaceSets"]["NetworkInterfaceSet"];
	for (auto valueNetworkInterfaceSetsNetworkInterfaceSet : allNetworkInterfaceSetsNode)
	{
		NetworkInterfaceSet networkInterfaceSetsObject;
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["CreationTime"].isNull())
			networkInterfaceSetsObject.creationTime = valueNetworkInterfaceSetsNetworkInterfaceSet["CreationTime"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["EnsRegionId"].isNull())
			networkInterfaceSetsObject.ensRegionId = valueNetworkInterfaceSetsNetworkInterfaceSet["EnsRegionId"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["InstanceId"].isNull())
			networkInterfaceSetsObject.instanceId = valueNetworkInterfaceSetsNetworkInterfaceSet["InstanceId"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["InstanceName"].isNull())
			networkInterfaceSetsObject.instanceName = valueNetworkInterfaceSetsNetworkInterfaceSet["InstanceName"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["MacAddress"].isNull())
			networkInterfaceSetsObject.macAddress = valueNetworkInterfaceSetsNetworkInterfaceSet["MacAddress"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["NetworkInterfaceId"].isNull())
			networkInterfaceSetsObject.networkInterfaceId = valueNetworkInterfaceSetsNetworkInterfaceSet["NetworkInterfaceId"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["PrimaryIp"].isNull())
			networkInterfaceSetsObject.primaryIp = valueNetworkInterfaceSetsNetworkInterfaceSet["PrimaryIp"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["PrimaryIpType"].isNull())
			networkInterfaceSetsObject.primaryIpType = valueNetworkInterfaceSetsNetworkInterfaceSet["PrimaryIpType"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["Status"].isNull())
			networkInterfaceSetsObject.status = valueNetworkInterfaceSetsNetworkInterfaceSet["Status"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["NetworkId"].isNull())
			networkInterfaceSetsObject.networkId = valueNetworkInterfaceSetsNetworkInterfaceSet["NetworkId"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["VSwitchId"].isNull())
			networkInterfaceSetsObject.vSwitchId = valueNetworkInterfaceSetsNetworkInterfaceSet["VSwitchId"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["NetworkInterfaceName"].isNull())
			networkInterfaceSetsObject.networkInterfaceName = valueNetworkInterfaceSetsNetworkInterfaceSet["NetworkInterfaceName"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["Description"].isNull())
			networkInterfaceSetsObject.description = valueNetworkInterfaceSetsNetworkInterfaceSet["Description"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["Type"].isNull())
			networkInterfaceSetsObject.type = valueNetworkInterfaceSetsNetworkInterfaceSet["Type"].asString();
		auto allPrivateIpSetsNode = valueNetworkInterfaceSetsNetworkInterfaceSet["PrivateIpSets"]["PrivateIpSet"];
		for (auto valueNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet : allPrivateIpSetsNode)
		{
			NetworkInterfaceSet::PrivateIpSet privateIpSetsObject;
			if(!valueNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet["PrivateIpAddress"].isNull())
				privateIpSetsObject.privateIpAddress = valueNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet["PrivateIpAddress"].asString();
			if(!valueNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet["Primary"].isNull())
				privateIpSetsObject.primary = valueNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet["Primary"].asString() == "true";
			networkInterfaceSetsObject.privateIpSets.push_back(privateIpSetsObject);
		}
		auto allIpv6SetsNode = valueNetworkInterfaceSetsNetworkInterfaceSet["Ipv6Sets"]["Ipv6Set"];
		for (auto valueNetworkInterfaceSetsNetworkInterfaceSetIpv6SetsIpv6Set : allIpv6SetsNode)
		{
			NetworkInterfaceSet::Ipv6Set ipv6SetsObject;
			if(!valueNetworkInterfaceSetsNetworkInterfaceSetIpv6SetsIpv6Set["Ipv6Address"].isNull())
				ipv6SetsObject.ipv6Address = valueNetworkInterfaceSetsNetworkInterfaceSetIpv6SetsIpv6Set["Ipv6Address"].asString();
			networkInterfaceSetsObject.ipv6Sets.push_back(ipv6SetsObject);
		}
		auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroup"];
		for (auto value : allSecurityGroupIds)
			networkInterfaceSetsObject.securityGroupIds.push_back(value.asString());
		networkInterfaceSets_.push_back(networkInterfaceSetsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

