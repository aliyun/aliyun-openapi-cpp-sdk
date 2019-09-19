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
		if(!valuePermissionsPermission["IpProtocol"].isNull())
			permissionsObject.ipProtocol = valuePermissionsPermission["IpProtocol"].asString();
		if(!valuePermissionsPermission["PortRange"].isNull())
			permissionsObject.portRange = valuePermissionsPermission["PortRange"].asString();
		if(!valuePermissionsPermission["SourcePortRange"].isNull())
			permissionsObject.sourcePortRange = valuePermissionsPermission["SourcePortRange"].asString();
		if(!valuePermissionsPermission["SourceGroupId"].isNull())
			permissionsObject.sourceGroupId = valuePermissionsPermission["SourceGroupId"].asString();
		if(!valuePermissionsPermission["SourceGroupName"].isNull())
			permissionsObject.sourceGroupName = valuePermissionsPermission["SourceGroupName"].asString();
		if(!valuePermissionsPermission["SourceCidrIp"].isNull())
			permissionsObject.sourceCidrIp = valuePermissionsPermission["SourceCidrIp"].asString();
		if(!valuePermissionsPermission["Ipv6SourceCidrIp"].isNull())
			permissionsObject.ipv6SourceCidrIp = valuePermissionsPermission["Ipv6SourceCidrIp"].asString();
		if(!valuePermissionsPermission["Policy"].isNull())
			permissionsObject.policy = valuePermissionsPermission["Policy"].asString();
		if(!valuePermissionsPermission["NicType"].isNull())
			permissionsObject.nicType = valuePermissionsPermission["NicType"].asString();
		if(!valuePermissionsPermission["SourceGroupOwnerAccount"].isNull())
			permissionsObject.sourceGroupOwnerAccount = valuePermissionsPermission["SourceGroupOwnerAccount"].asString();
		if(!valuePermissionsPermission["DestGroupId"].isNull())
			permissionsObject.destGroupId = valuePermissionsPermission["DestGroupId"].asString();
		if(!valuePermissionsPermission["DestGroupName"].isNull())
			permissionsObject.destGroupName = valuePermissionsPermission["DestGroupName"].asString();
		if(!valuePermissionsPermission["DestCidrIp"].isNull())
			permissionsObject.destCidrIp = valuePermissionsPermission["DestCidrIp"].asString();
		if(!valuePermissionsPermission["Ipv6DestCidrIp"].isNull())
			permissionsObject.ipv6DestCidrIp = valuePermissionsPermission["Ipv6DestCidrIp"].asString();
		if(!valuePermissionsPermission["DestGroupOwnerAccount"].isNull())
			permissionsObject.destGroupOwnerAccount = valuePermissionsPermission["DestGroupOwnerAccount"].asString();
		if(!valuePermissionsPermission["Priority"].isNull())
			permissionsObject.priority = valuePermissionsPermission["Priority"].asString();
		if(!valuePermissionsPermission["Direction"].isNull())
			permissionsObject.direction = valuePermissionsPermission["Direction"].asString();
		if(!valuePermissionsPermission["Description"].isNull())
			permissionsObject.description = valuePermissionsPermission["Description"].asString();
		if(!valuePermissionsPermission["CreateTime"].isNull())
			permissionsObject.createTime = valuePermissionsPermission["CreateTime"].asString();
		permissions_.push_back(permissionsObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["SecurityGroupId"].isNull())
		securityGroupId_ = value["SecurityGroupId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["SecurityGroupName"].isNull())
		securityGroupName_ = value["SecurityGroupName"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["InnerAccessPolicy"].isNull())
		innerAccessPolicy_ = value["InnerAccessPolicy"].asString();

}

std::string DescribeSecurityGroupAttributeResult::getDescription()const
{
	return description_;
}

std::string DescribeSecurityGroupAttributeResult::getSecurityGroupName()const
{
	return securityGroupName_;
}

std::string DescribeSecurityGroupAttributeResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeSecurityGroupAttributeResult::getSecurityGroupId()const
{
	return securityGroupId_;
}

std::vector<DescribeSecurityGroupAttributeResult::Permission> DescribeSecurityGroupAttributeResult::getPermissions()const
{
	return permissions_;
}

std::string DescribeSecurityGroupAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeSecurityGroupAttributeResult::getInnerAccessPolicy()const
{
	return innerAccessPolicy_;
}

