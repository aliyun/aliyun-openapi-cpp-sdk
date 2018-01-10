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
		Permission permissionObject;
		permissionObject.ipProtocol = value["IpProtocol"].asString();
		permissionObject.portRange = value["PortRange"].asString();
		permissionObject.sourceGroupId = value["SourceGroupId"].asString();
		permissionObject.sourceGroupName = value["SourceGroupName"].asString();
		permissionObject.sourceCidrIp = value["SourceCidrIp"].asString();
		permissionObject.policy = value["Policy"].asString();
		permissionObject.nicType = value["NicType"].asString();
		permissionObject.sourceGroupOwnerAccount = value["SourceGroupOwnerAccount"].asString();
		permissionObject.destGroupId = value["DestGroupId"].asString();
		permissionObject.destGroupName = value["DestGroupName"].asString();
		permissionObject.destCidrIp = value["DestCidrIp"].asString();
		permissionObject.destGroupOwnerAccount = value["DestGroupOwnerAccount"].asString();
		permissionObject.priority = value["Priority"].asString();
		permissionObject.direction = value["Direction"].asString();
		permissionObject.description = value["Description"].asString();
		permissionObject.createTime = value["CreateTime"].asString();
		permissions_.push_back(permissionObject);
	}
	regionId_ = value["RegionId"].asString();
	securityGroupId_ = value["SecurityGroupId"].asString();
	description_ = value["Description"].asString();
	securityGroupName_ = value["SecurityGroupName"].asString();
	vpcId_ = value["VpcId"].asString();
	innerAccessPolicy_ = value["InnerAccessPolicy"].asString();

}

std::string DescribeSecurityGroupAttributeResult::getDescription()const
{
	return description_;
}

void DescribeSecurityGroupAttributeResult::setDescription(const std::string& description)
{
	description_ = description;
}

std::string DescribeSecurityGroupAttributeResult::getSecurityGroupName()const
{
	return securityGroupName_;
}

void DescribeSecurityGroupAttributeResult::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
}

std::string DescribeSecurityGroupAttributeResult::getVpcId()const
{
	return vpcId_;
}

void DescribeSecurityGroupAttributeResult::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
}

std::string DescribeSecurityGroupAttributeResult::getSecurityGroupId()const
{
	return securityGroupId_;
}

void DescribeSecurityGroupAttributeResult::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
}

std::string DescribeSecurityGroupAttributeResult::getRegionId()const
{
	return regionId_;
}

void DescribeSecurityGroupAttributeResult::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
}

std::string DescribeSecurityGroupAttributeResult::getInnerAccessPolicy()const
{
	return innerAccessPolicy_;
}

void DescribeSecurityGroupAttributeResult::setInnerAccessPolicy(const std::string& innerAccessPolicy)
{
	innerAccessPolicy_ = innerAccessPolicy;
}

