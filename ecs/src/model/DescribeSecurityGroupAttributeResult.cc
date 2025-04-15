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

#include <alibabacloud/ecs/model/DescribeSecurityGroupAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSecurityGroupAttributeResult::DescribeSecurityGroupAttributeResult() :
	ServiceResult()
{}

DescribeSecurityGroupAttributeResult::DescribeSecurityGroupAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecurityGroupAttributeResult::~DescribeSecurityGroupAttributeResult()
{}

void DescribeSecurityGroupAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPermissionsNode = value["Permissions"]["Permission"];
	for (auto valuePermissionsPermission : allPermissionsNode)
	{
		Permission permissionsObject;
		if(!valuePermissionsPermission["SecurityGroupRuleId"].isNull())
			permissionsObject.securityGroupRuleId = valuePermissionsPermission["SecurityGroupRuleId"].asString();
		if(!valuePermissionsPermission["Direction"].isNull())
			permissionsObject.direction = valuePermissionsPermission["Direction"].asString();
		if(!valuePermissionsPermission["SourceGroupId"].isNull())
			permissionsObject.sourceGroupId = valuePermissionsPermission["SourceGroupId"].asString();
		if(!valuePermissionsPermission["DestGroupOwnerAccount"].isNull())
			permissionsObject.destGroupOwnerAccount = valuePermissionsPermission["DestGroupOwnerAccount"].asString();
		if(!valuePermissionsPermission["DestPrefixListId"].isNull())
			permissionsObject.destPrefixListId = valuePermissionsPermission["DestPrefixListId"].asString();
		if(!valuePermissionsPermission["DestPrefixListName"].isNull())
			permissionsObject.destPrefixListName = valuePermissionsPermission["DestPrefixListName"].asString();
		if(!valuePermissionsPermission["SourceCidrIp"].isNull())
			permissionsObject.sourceCidrIp = valuePermissionsPermission["SourceCidrIp"].asString();
		if(!valuePermissionsPermission["Ipv6DestCidrIp"].isNull())
			permissionsObject.ipv6DestCidrIp = valuePermissionsPermission["Ipv6DestCidrIp"].asString();
		if(!valuePermissionsPermission["CreateTime"].isNull())
			permissionsObject.createTime = valuePermissionsPermission["CreateTime"].asString();
		if(!valuePermissionsPermission["Ipv6SourceCidrIp"].isNull())
			permissionsObject.ipv6SourceCidrIp = valuePermissionsPermission["Ipv6SourceCidrIp"].asString();
		if(!valuePermissionsPermission["DestGroupId"].isNull())
			permissionsObject.destGroupId = valuePermissionsPermission["DestGroupId"].asString();
		if(!valuePermissionsPermission["DestCidrIp"].isNull())
			permissionsObject.destCidrIp = valuePermissionsPermission["DestCidrIp"].asString();
		if(!valuePermissionsPermission["IpProtocol"].isNull())
			permissionsObject.ipProtocol = valuePermissionsPermission["IpProtocol"].asString();
		if(!valuePermissionsPermission["Priority"].isNull())
			permissionsObject.priority = valuePermissionsPermission["Priority"].asString();
		if(!valuePermissionsPermission["DestGroupName"].isNull())
			permissionsObject.destGroupName = valuePermissionsPermission["DestGroupName"].asString();
		if(!valuePermissionsPermission["NicType"].isNull())
			permissionsObject.nicType = valuePermissionsPermission["NicType"].asString();
		if(!valuePermissionsPermission["Policy"].isNull())
			permissionsObject.policy = valuePermissionsPermission["Policy"].asString();
		if(!valuePermissionsPermission["Description"].isNull())
			permissionsObject.description = valuePermissionsPermission["Description"].asString();
		if(!valuePermissionsPermission["PortRange"].isNull())
			permissionsObject.portRange = valuePermissionsPermission["PortRange"].asString();
		if(!valuePermissionsPermission["SourcePrefixListName"].isNull())
			permissionsObject.sourcePrefixListName = valuePermissionsPermission["SourcePrefixListName"].asString();
		if(!valuePermissionsPermission["SourcePrefixListId"].isNull())
			permissionsObject.sourcePrefixListId = valuePermissionsPermission["SourcePrefixListId"].asString();
		if(!valuePermissionsPermission["SourceGroupOwnerAccount"].isNull())
			permissionsObject.sourceGroupOwnerAccount = valuePermissionsPermission["SourceGroupOwnerAccount"].asString();
		if(!valuePermissionsPermission["SourceGroupName"].isNull())
			permissionsObject.sourceGroupName = valuePermissionsPermission["SourceGroupName"].asString();
		if(!valuePermissionsPermission["SourcePortRange"].isNull())
			permissionsObject.sourcePortRange = valuePermissionsPermission["SourcePortRange"].asString();
		if(!valuePermissionsPermission["PortRangeListId"].isNull())
			permissionsObject.portRangeListId = valuePermissionsPermission["PortRangeListId"].asString();
		if(!valuePermissionsPermission["PortRangeListName"].isNull())
			permissionsObject.portRangeListName = valuePermissionsPermission["PortRangeListName"].asString();
		permissions_.push_back(permissionsObject);
	}
	auto referencedInfoNode = value["ReferencedInfo"];
	auto allReferencedPrefixListInfosNode = referencedInfoNode["ReferencedPrefixListInfos"]["ReferencedPrefixListInfo"];
	for (auto referencedInfoNodeReferencedPrefixListInfosReferencedPrefixListInfo : allReferencedPrefixListInfosNode)
	{
		ReferencedInfo::ReferencedPrefixListInfo referencedPrefixListInfoObject;
		if(!referencedInfoNodeReferencedPrefixListInfosReferencedPrefixListInfo["PrefixListId"].isNull())
			referencedPrefixListInfoObject.prefixListId = referencedInfoNodeReferencedPrefixListInfosReferencedPrefixListInfo["PrefixListId"].asString();
		if(!referencedInfoNodeReferencedPrefixListInfosReferencedPrefixListInfo["ProductProvider"].isNull())
			referencedPrefixListInfoObject.productProvider = referencedInfoNodeReferencedPrefixListInfosReferencedPrefixListInfo["ProductProvider"].asString();
		referencedInfo_.referencedPrefixListInfos.push_back(referencedPrefixListInfoObject);
	}
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["InnerAccessPolicy"].isNull())
		innerAccessPolicy_ = value["InnerAccessPolicy"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["SecurityGroupId"].isNull())
		securityGroupId_ = value["SecurityGroupId"].asString();
	if(!value["SecurityGroupName"].isNull())
		securityGroupName_ = value["SecurityGroupName"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeSecurityGroupAttributeResult::getDescription()const
{
	return description_;
}

std::string DescribeSecurityGroupAttributeResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeSecurityGroupAttributeResult::getSecurityGroupName()const
{
	return securityGroupName_;
}

std::string DescribeSecurityGroupAttributeResult::getNextToken()const
{
	return nextToken_;
}

std::string DescribeSecurityGroupAttributeResult::getSecurityGroupId()const
{
	return securityGroupId_;
}

std::vector<DescribeSecurityGroupAttributeResult::Permission> DescribeSecurityGroupAttributeResult::getPermissions()const
{
	return permissions_;
}

std::string DescribeSecurityGroupAttributeResult::getInnerAccessPolicy()const
{
	return innerAccessPolicy_;
}

std::string DescribeSecurityGroupAttributeResult::getRegionId()const
{
	return regionId_;
}

DescribeSecurityGroupAttributeResult::ReferencedInfo DescribeSecurityGroupAttributeResult::getReferencedInfo()const
{
	return referencedInfo_;
}

