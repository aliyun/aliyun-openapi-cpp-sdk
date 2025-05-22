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

#include <alibabacloud/rds/model/DescribeRCSecurityGroupPermissionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCSecurityGroupPermissionResult::DescribeRCSecurityGroupPermissionResult() :
	ServiceResult()
{}

DescribeRCSecurityGroupPermissionResult::DescribeRCSecurityGroupPermissionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCSecurityGroupPermissionResult::~DescribeRCSecurityGroupPermissionResult()
{}

void DescribeRCSecurityGroupPermissionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityGroupPermissionsNode = value["SecurityGroupPermissions"]["SecurityGroupPermissionsItem"];
	for (auto valueSecurityGroupPermissionsSecurityGroupPermissionsItem : allSecurityGroupPermissionsNode)
	{
		SecurityGroupPermissionsItem securityGroupPermissionsObject;
		if(!valueSecurityGroupPermissionsSecurityGroupPermissionsItem["SecurityGroupRuleId"].isNull())
			securityGroupPermissionsObject.securityGroupRuleId = valueSecurityGroupPermissionsSecurityGroupPermissionsItem["SecurityGroupRuleId"].asString();
		if(!valueSecurityGroupPermissionsSecurityGroupPermissionsItem["Direction"].isNull())
			securityGroupPermissionsObject.direction = valueSecurityGroupPermissionsSecurityGroupPermissionsItem["Direction"].asString();
		if(!valueSecurityGroupPermissionsSecurityGroupPermissionsItem["Policy"].isNull())
			securityGroupPermissionsObject.policy = valueSecurityGroupPermissionsSecurityGroupPermissionsItem["Policy"].asString();
		if(!valueSecurityGroupPermissionsSecurityGroupPermissionsItem["Priority"].isNull())
			securityGroupPermissionsObject.priority = valueSecurityGroupPermissionsSecurityGroupPermissionsItem["Priority"].asString();
		if(!valueSecurityGroupPermissionsSecurityGroupPermissionsItem["IpProtocol"].isNull())
			securityGroupPermissionsObject.ipProtocol = valueSecurityGroupPermissionsSecurityGroupPermissionsItem["IpProtocol"].asString();
		if(!valueSecurityGroupPermissionsSecurityGroupPermissionsItem["SourceCidrIp"].isNull())
			securityGroupPermissionsObject.sourceCidrIp = valueSecurityGroupPermissionsSecurityGroupPermissionsItem["SourceCidrIp"].asString();
		if(!valueSecurityGroupPermissionsSecurityGroupPermissionsItem["PortRange"].isNull())
			securityGroupPermissionsObject.portRange = valueSecurityGroupPermissionsSecurityGroupPermissionsItem["PortRange"].asString();
		if(!valueSecurityGroupPermissionsSecurityGroupPermissionsItem["DestCidrIp"].isNull())
			securityGroupPermissionsObject.destCidrIp = valueSecurityGroupPermissionsSecurityGroupPermissionsItem["DestCidrIp"].asString();
		if(!valueSecurityGroupPermissionsSecurityGroupPermissionsItem["SourcePortRange"].isNull())
			securityGroupPermissionsObject.sourcePortRange = valueSecurityGroupPermissionsSecurityGroupPermissionsItem["SourcePortRange"].asString();
		if(!valueSecurityGroupPermissionsSecurityGroupPermissionsItem["CreateTime"].isNull())
			securityGroupPermissionsObject.createTime = valueSecurityGroupPermissionsSecurityGroupPermissionsItem["CreateTime"].asString();
		securityGroupPermissions_.push_back(securityGroupPermissionsObject);
	}
	if(!value["SecurityGroupId"].isNull())
		securityGroupId_ = value["SecurityGroupId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["InnerAccessPolicy"].isNull())
		innerAccessPolicy_ = value["InnerAccessPolicy"].asString();

}

std::vector<DescribeRCSecurityGroupPermissionResult::SecurityGroupPermissionsItem> DescribeRCSecurityGroupPermissionResult::getSecurityGroupPermissions()const
{
	return securityGroupPermissions_;
}

std::string DescribeRCSecurityGroupPermissionResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeRCSecurityGroupPermissionResult::getSecurityGroupId()const
{
	return securityGroupId_;
}

std::string DescribeRCSecurityGroupPermissionResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeRCSecurityGroupPermissionResult::getInnerAccessPolicy()const
{
	return innerAccessPolicy_;
}

