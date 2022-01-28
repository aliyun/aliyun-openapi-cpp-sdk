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

#include <alibabacloud/ens/model/DescribeSecurityGroupAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

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
		if(!valuePermissionsPermission["CreationTime"].isNull())
			permissionsObject.creationTime = valuePermissionsPermission["CreationTime"].asString();
		if(!valuePermissionsPermission["Direction"].isNull())
			permissionsObject.direction = valuePermissionsPermission["Direction"].asString();
		if(!valuePermissionsPermission["Policy"].isNull())
			permissionsObject.policy = valuePermissionsPermission["Policy"].asString();
		if(!valuePermissionsPermission["PortRange"].isNull())
			permissionsObject.portRange = valuePermissionsPermission["PortRange"].asString();
		if(!valuePermissionsPermission["SourceCidrIp"].isNull())
			permissionsObject.sourceCidrIp = valuePermissionsPermission["SourceCidrIp"].asString();
		if(!valuePermissionsPermission["IpProtocol"].isNull())
			permissionsObject.ipProtocol = valuePermissionsPermission["IpProtocol"].asString();
		if(!valuePermissionsPermission["DestCidrIp"].isNull())
			permissionsObject.destCidrIp = valuePermissionsPermission["DestCidrIp"].asString();
		if(!valuePermissionsPermission["Priority"].isNull())
			permissionsObject.priority = std::stoi(valuePermissionsPermission["Priority"].asString());
		if(!valuePermissionsPermission["SourcePortRange"].isNull())
			permissionsObject.sourcePortRange = valuePermissionsPermission["SourcePortRange"].asString();
		if(!valuePermissionsPermission["Description"].isNull())
			permissionsObject.description = valuePermissionsPermission["Description"].asString();
		permissions_.push_back(permissionsObject);
	}
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["SecurityGroupId"].isNull())
		securityGroupId_ = value["SecurityGroupId"].asString();
	if(!value["SecurityGroupName"].isNull())
		securityGroupName_ = value["SecurityGroupName"].asString();

}

std::string DescribeSecurityGroupAttributeResult::getDescription()const
{
	return description_;
}

std::string DescribeSecurityGroupAttributeResult::getSecurityGroupName()const
{
	return securityGroupName_;
}

std::string DescribeSecurityGroupAttributeResult::getSecurityGroupId()const
{
	return securityGroupId_;
}

std::vector<DescribeSecurityGroupAttributeResult::Permission> DescribeSecurityGroupAttributeResult::getPermissions()const
{
	return permissions_;
}

