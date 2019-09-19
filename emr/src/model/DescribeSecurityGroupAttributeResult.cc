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

#include <alibabacloud/emr/model/DescribeSecurityGroupAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

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
	auto allAvailableGroupListNode = value["AvailableGroupList"]["SecurityGroup"];
	for (auto valueAvailableGroupListSecurityGroup : allAvailableGroupListNode)
	{
		SecurityGroup availableGroupListObject;
		if(!valueAvailableGroupListSecurityGroup["SecurityGroupId"].isNull())
			availableGroupListObject.securityGroupId = valueAvailableGroupListSecurityGroup["SecurityGroupId"].asString();
		if(!valueAvailableGroupListSecurityGroup["Description"].isNull())
			availableGroupListObject.description = valueAvailableGroupListSecurityGroup["Description"].asString();
		if(!valueAvailableGroupListSecurityGroup["SecurityGroupName"].isNull())
			availableGroupListObject.securityGroupName = valueAvailableGroupListSecurityGroup["SecurityGroupName"].asString();
		if(!valueAvailableGroupListSecurityGroup["VpcId"].isNull())
			availableGroupListObject.vpcId = valueAvailableGroupListSecurityGroup["VpcId"].asString();
		if(!valueAvailableGroupListSecurityGroup["CreationTime"].isNull())
			availableGroupListObject.creationTime = valueAvailableGroupListSecurityGroup["CreationTime"].asString();
		if(!valueAvailableGroupListSecurityGroup["AvailableInstanceAmount"].isNull())
			availableGroupListObject.availableInstanceAmount = std::stoi(valueAvailableGroupListSecurityGroup["AvailableInstanceAmount"].asString());
		if(!valueAvailableGroupListSecurityGroup["EcsCount"].isNull())
			availableGroupListObject.ecsCount = std::stoi(valueAvailableGroupListSecurityGroup["EcsCount"].asString());
		availableGroupList_.push_back(availableGroupListObject);
	}
	auto allSecurityGroupAttributeListNode = value["SecurityGroupAttributeList"]["SecurityGroupAttribute"];
	for (auto valueSecurityGroupAttributeListSecurityGroupAttribute : allSecurityGroupAttributeListNode)
	{
		SecurityGroupAttribute securityGroupAttributeListObject;
		if(!valueSecurityGroupAttributeListSecurityGroupAttribute["BizType"].isNull())
			securityGroupAttributeListObject.bizType = valueSecurityGroupAttributeListSecurityGroupAttribute["BizType"].asString();
		if(!valueSecurityGroupAttributeListSecurityGroupAttribute["BizContent"].isNull())
			securityGroupAttributeListObject.bizContent = valueSecurityGroupAttributeListSecurityGroupAttribute["BizContent"].asString();
		securityGroupAttributeList_.push_back(securityGroupAttributeListObject);
	}

}

std::vector<DescribeSecurityGroupAttributeResult::SecurityGroup> DescribeSecurityGroupAttributeResult::getAvailableGroupList()const
{
	return availableGroupList_;
}

std::vector<DescribeSecurityGroupAttributeResult::SecurityGroupAttribute> DescribeSecurityGroupAttributeResult::getSecurityGroupAttributeList()const
{
	return securityGroupAttributeList_;
}

