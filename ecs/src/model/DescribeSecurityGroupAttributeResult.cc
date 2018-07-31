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
	auto allPermissions = value["Permissions"]["Permission"];
	for (auto value : allPermissions)
	{
		Permission permissionsObject;
		if(!value["IpProtocol"].isNull())
			permissionsObject.ipProtocol = value["IpProtocol"].asString();
		if(!value["PortRange"].isNull())
			permissionsObject.portRange = value["PortRange"].asString();
		if(!value["SourcePortRange"].isNull())
			permissionsObject.sourcePortRange = value["SourcePortRange"].asString();
		if(!value["SourceGroupId"].isNull())
			permissionsObject.sourceGroupId = value["SourceGroupId"].asString();
		if(!value["SourceGroupName"].isNull())
			permissionsObject.sourceGroupName = value["SourceGroupName"].asString();
		if(!value["SourceCidrIp"].isNull())
			permissionsObject.sourceCidrIp = value["SourceCidrIp"].asString();
		if(!value["Policy"].isNull())
			permissionsObject.policy = value["Policy"].asString();
		if(!value["NicType"].isNull())
			permissionsObject.nicType = value["NicType"].asString();
		if(!value["SourceGroupOwnerAccount"].isNull())
			permissionsObject.sourceGroupOwnerAccount = value["SourceGroupOwnerAccount"].asString();
		if(!value["DestGroupId"].isNull())
			permissionsObject.destGroupId = value["DestGroupId"].asString();
		if(!value["DestGroupName"].isNull())
			permissionsObject.destGroupName = value["DestGroupName"].asString();
		if(!value["DestCidrIp"].isNull())
			permissionsObject.destCidrIp = value["DestCidrIp"].asString();
		if(!value["DestGroupOwnerAccount"].isNull())
			permissionsObject.destGroupOwnerAccount = value["DestGroupOwnerAccount"].asString();
		if(!value["Priority"].isNull())
			permissionsObject.priority = value["Priority"].asString();
		if(!value["Direction"].isNull())
			permissionsObject.direction = value["Direction"].asString();
		if(!value["Description"].isNull())
			permissionsObject.description = value["Description"].asString();
		if(!value["CreateTime"].isNull())
			permissionsObject.createTime = value["CreateTime"].asString();
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

