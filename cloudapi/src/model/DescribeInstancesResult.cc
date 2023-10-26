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

#include <alibabacloud/cloudapi/model/DescribeInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeInstancesResult::DescribeInstancesResult() :
	ServiceResult()
{}

DescribeInstancesResult::DescribeInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancesResult::~DescribeInstancesResult()
{}

void DescribeInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["InstanceAttribute"];
	for (auto valueInstancesInstanceAttribute : allInstancesNode)
	{
		InstanceAttribute instancesObject;
		if(!valueInstancesInstanceAttribute["Status"].isNull())
			instancesObject.status = valueInstancesInstanceAttribute["Status"].asString();
		if(!valueInstancesInstanceAttribute["VpcSlbIntranetEnable"].isNull())
			instancesObject.vpcSlbIntranetEnable = valueInstancesInstanceAttribute["VpcSlbIntranetEnable"].asString() == "true";
		if(!valueInstancesInstanceAttribute["ClassicEgressAddress"].isNull())
			instancesObject.classicEgressAddress = valueInstancesInstanceAttribute["ClassicEgressAddress"].asString();
		if(!valueInstancesInstanceAttribute["ZoneLocalName"].isNull())
			instancesObject.zoneLocalName = valueInstancesInstanceAttribute["ZoneLocalName"].asString();
		if(!valueInstancesInstanceAttribute["VipTypeList"].isNull())
			instancesObject.vipTypeList = valueInstancesInstanceAttribute["VipTypeList"].asString();
		if(!valueInstancesInstanceAttribute["UserVpcId"].isNull())
			instancesObject.userVpcId = valueInstancesInstanceAttribute["UserVpcId"].asString();
		if(!valueInstancesInstanceAttribute["VpcIntranetEnable"].isNull())
			instancesObject.vpcIntranetEnable = valueInstancesInstanceAttribute["VpcIntranetEnable"].asString() == "true";
		if(!valueInstancesInstanceAttribute["VpcOwnerId"].isNull())
			instancesObject.vpcOwnerId = std::stol(valueInstancesInstanceAttribute["VpcOwnerId"].asString());
		if(!valueInstancesInstanceAttribute["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstanceAttribute["InstanceId"].asString();
		if(!valueInstancesInstanceAttribute["InstanceRpsLimit"].isNull())
			instancesObject.instanceRpsLimit = std::stoi(valueInstancesInstanceAttribute["InstanceRpsLimit"].asString());
		if(!valueInstancesInstanceAttribute["InstanceType"].isNull())
			instancesObject.instanceType = valueInstancesInstanceAttribute["InstanceType"].asString();
		if(!valueInstancesInstanceAttribute["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstanceAttribute["RegionId"].asString();
		if(!valueInstancesInstanceAttribute["InstanceSpec"].isNull())
			instancesObject.instanceSpec = valueInstancesInstanceAttribute["InstanceSpec"].asString();
		if(!valueInstancesInstanceAttribute["InstanceChargeType"].isNull())
			instancesObject.instanceChargeType = valueInstancesInstanceAttribute["InstanceChargeType"].asString();
		if(!valueInstancesInstanceAttribute["HttpsPolicies"].isNull())
			instancesObject.httpsPolicies = valueInstancesInstanceAttribute["HttpsPolicies"].asString();
		if(!valueInstancesInstanceAttribute["VpcEgressAddress"].isNull())
			instancesObject.vpcEgressAddress = valueInstancesInstanceAttribute["VpcEgressAddress"].asString();
		if(!valueInstancesInstanceAttribute["EgressIpv6Enable"].isNull())
			instancesObject.egressIpv6Enable = valueInstancesInstanceAttribute["EgressIpv6Enable"].asString() == "true";
		if(!valueInstancesInstanceAttribute["ExpiredTime"].isNull())
			instancesObject.expiredTime = valueInstancesInstanceAttribute["ExpiredTime"].asString();
		if(!valueInstancesInstanceAttribute["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstanceAttribute["InstanceName"].asString();
		if(!valueInstancesInstanceAttribute["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesInstanceAttribute["ZoneId"].asString();
		if(!valueInstancesInstanceAttribute["SupportIpv6"].isNull())
			instancesObject.supportIpv6 = valueInstancesInstanceAttribute["SupportIpv6"].asString() == "true";
		if(!valueInstancesInstanceAttribute["InternetEgressAddress"].isNull())
			instancesObject.internetEgressAddress = valueInstancesInstanceAttribute["InternetEgressAddress"].asString();
		if(!valueInstancesInstanceAttribute["CreatedTime"].isNull())
			instancesObject.createdTime = valueInstancesInstanceAttribute["CreatedTime"].asString();
		if(!valueInstancesInstanceAttribute["UserVswitchId"].isNull())
			instancesObject.userVswitchId = valueInstancesInstanceAttribute["UserVswitchId"].asString();
		if(!valueInstancesInstanceAttribute["AclName"].isNull())
			instancesObject.aclName = valueInstancesInstanceAttribute["AclName"].asString();
		if(!valueInstancesInstanceAttribute["AclType"].isNull())
			instancesObject.aclType = valueInstancesInstanceAttribute["AclType"].asString();
		if(!valueInstancesInstanceAttribute["AclStatus"].isNull())
			instancesObject.aclStatus = valueInstancesInstanceAttribute["AclStatus"].asString();
		if(!valueInstancesInstanceAttribute["AclId"].isNull())
			instancesObject.aclId = valueInstancesInstanceAttribute["AclId"].asString();
		if(!valueInstancesInstanceAttribute["IntranetSegments"].isNull())
			instancesObject.intranetSegments = valueInstancesInstanceAttribute["IntranetSegments"].asString();
		if(!valueInstancesInstanceAttribute["IPV6AclName"].isNull())
			instancesObject.iPV6AclName = valueInstancesInstanceAttribute["IPV6AclName"].asString();
		if(!valueInstancesInstanceAttribute["IPV6AclId"].isNull())
			instancesObject.iPV6AclId = valueInstancesInstanceAttribute["IPV6AclId"].asString();
		if(!valueInstancesInstanceAttribute["IPV6AclType"].isNull())
			instancesObject.iPV6AclType = valueInstancesInstanceAttribute["IPV6AclType"].asString();
		if(!valueInstancesInstanceAttribute["IPV6AclStatus"].isNull())
			instancesObject.iPV6AclStatus = valueInstancesInstanceAttribute["IPV6AclStatus"].asString();
		if(!valueInstancesInstanceAttribute["DedicatedInstanceType"].isNull())
			instancesObject.dedicatedInstanceType = valueInstancesInstanceAttribute["DedicatedInstanceType"].asString();
		if(!valueInstancesInstanceAttribute["InstanceCidrBlock"].isNull())
			instancesObject.instanceCidrBlock = valueInstancesInstanceAttribute["InstanceCidrBlock"].asString();
		if(!valueInstancesInstanceAttribute["ConnectVpcId"].isNull())
			instancesObject.connectVpcId = valueInstancesInstanceAttribute["ConnectVpcId"].asString();
		if(!valueInstancesInstanceAttribute["InstanceClusterId"].isNull())
			instancesObject.instanceClusterId = valueInstancesInstanceAttribute["InstanceClusterId"].asString();
		if(!valueInstancesInstanceAttribute["MaintainStartTime"].isNull())
			instancesObject.maintainStartTime = valueInstancesInstanceAttribute["MaintainStartTime"].asString();
		if(!valueInstancesInstanceAttribute["MaintainEndTime"].isNull())
			instancesObject.maintainEndTime = valueInstancesInstanceAttribute["MaintainEndTime"].asString();
		if(!valueInstancesInstanceAttribute["ConnectCidrBlocks"].isNull())
			instancesObject.connectCidrBlocks = valueInstancesInstanceAttribute["ConnectCidrBlocks"].asString();
		auto allInstanceSpecAttributesNode = valueInstancesInstanceAttribute["InstanceSpecAttributes"]["SpecAttribute"];
		for (auto valueInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute : allInstanceSpecAttributesNode)
		{
			InstanceAttribute::SpecAttribute instanceSpecAttributesObject;
			if(!valueInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute["Value"].isNull())
				instanceSpecAttributesObject.value = valueInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute["Value"].asString();
			if(!valueInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute["LocalName"].isNull())
				instanceSpecAttributesObject.localName = valueInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute["LocalName"].asString();
			instancesObject.instanceSpecAttributes.push_back(instanceSpecAttributesObject);
		}
		auto allNetworkInterfaceAttributesNode = valueInstancesInstanceAttribute["NetworkInterfaceAttributes"]["NetworkInterfaceAttribute"];
		for (auto valueInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute : allNetworkInterfaceAttributesNode)
		{
			InstanceAttribute::NetworkInterfaceAttribute networkInterfaceAttributesObject;
			if(!valueInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute["VswitchId"].isNull())
				networkInterfaceAttributesObject.vswitchId = valueInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute["VswitchId"].asString();
			if(!valueInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute["SecurityGroupId"].isNull())
				networkInterfaceAttributesObject.securityGroupId = valueInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute["SecurityGroupId"].asString();
			if(!valueInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute["NetworkInterfaceId"].isNull())
				networkInterfaceAttributesObject.networkInterfaceId = valueInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute["NetworkInterfaceId"].asString();
			if(!valueInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute["CidrBlock"].isNull())
				networkInterfaceAttributesObject.cidrBlock = valueInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute["CidrBlock"].asString();
			if(!valueInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute["ZoneId"].isNull())
				networkInterfaceAttributesObject.zoneId = valueInstancesInstanceAttributeNetworkInterfaceAttributesNetworkInterfaceAttribute["ZoneId"].asString();
			instancesObject.networkInterfaceAttributes.push_back(networkInterfaceAttributesObject);
		}
		instances_.push_back(instancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeInstancesResult::InstanceAttribute> DescribeInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

