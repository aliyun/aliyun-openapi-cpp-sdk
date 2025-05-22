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

#include <alibabacloud/rds/model/DescribeRCSecurityGroupListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCSecurityGroupListResult::DescribeRCSecurityGroupListResult() :
	ServiceResult()
{}

DescribeRCSecurityGroupListResult::DescribeRCSecurityGroupListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCSecurityGroupListResult::~DescribeRCSecurityGroupListResult()
{}

void DescribeRCSecurityGroupListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRCSecurityGroupsNode = value["RCSecurityGroups"]["RCSecurityGroup"];
	for (auto valueRCSecurityGroupsRCSecurityGroup : allRCSecurityGroupsNode)
	{
		RCSecurityGroup rCSecurityGroupsObject;
		if(!valueRCSecurityGroupsRCSecurityGroup["SecurityGroupId"].isNull())
			rCSecurityGroupsObject.securityGroupId = valueRCSecurityGroupsRCSecurityGroup["SecurityGroupId"].asString();
		if(!valueRCSecurityGroupsRCSecurityGroup["Description"].isNull())
			rCSecurityGroupsObject.description = valueRCSecurityGroupsRCSecurityGroup["Description"].asString();
		if(!valueRCSecurityGroupsRCSecurityGroup["SecurityGroupType"].isNull())
			rCSecurityGroupsObject.securityGroupType = valueRCSecurityGroupsRCSecurityGroup["SecurityGroupType"].asString();
		if(!valueRCSecurityGroupsRCSecurityGroup["VpcId"].isNull())
			rCSecurityGroupsObject.vpcId = valueRCSecurityGroupsRCSecurityGroup["VpcId"].asString();
		if(!valueRCSecurityGroupsRCSecurityGroup["CreationTime"].isNull())
			rCSecurityGroupsObject.creationTime = valueRCSecurityGroupsRCSecurityGroup["CreationTime"].asString();
		if(!valueRCSecurityGroupsRCSecurityGroup["InstanceCount"].isNull())
			rCSecurityGroupsObject.instanceCount = std::stoi(valueRCSecurityGroupsRCSecurityGroup["InstanceCount"].asString());
		if(!valueRCSecurityGroupsRCSecurityGroup["AvailableInstanceAmount"].isNull())
			rCSecurityGroupsObject.availableInstanceAmount = std::stoi(valueRCSecurityGroupsRCSecurityGroup["AvailableInstanceAmount"].asString());
		rCSecurityGroups_.push_back(rCSecurityGroupsObject);
	}

}

std::vector<DescribeRCSecurityGroupListResult::RCSecurityGroup> DescribeRCSecurityGroupListResult::getRCSecurityGroups()const
{
	return rCSecurityGroups_;
}

