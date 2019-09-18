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
	auto allAvailableGroupList = value["AvailableGroupList"]["SecurityGroup"];
	for (auto value : allAvailableGroupList)
	{
		SecurityGroup availableGroupListObject;
		if(!value["SecurityGroupId"].isNull())
			availableGroupListObject.securityGroupId = value["SecurityGroupId"].asString();
		if(!value["Description"].isNull())
			availableGroupListObject.description = value["Description"].asString();
		if(!value["SecurityGroupName"].isNull())
			availableGroupListObject.securityGroupName = value["SecurityGroupName"].asString();
		if(!value["VpcId"].isNull())
			availableGroupListObject.vpcId = value["VpcId"].asString();
		if(!value["CreationTime"].isNull())
			availableGroupListObject.creationTime = value["CreationTime"].asString();
		if(!value["AvailableInstanceAmount"].isNull())
			availableGroupListObject.availableInstanceAmount = std::stoi(value["AvailableInstanceAmount"].asString());
		if(!value["EcsCount"].isNull())
			availableGroupListObject.ecsCount = std::stoi(value["EcsCount"].asString());
		availableGroupList_.push_back(availableGroupListObject);
	}
	auto allSecurityGroupAttributeList = value["SecurityGroupAttributeList"]["SecurityGroupAttribute"];
	for (auto value : allSecurityGroupAttributeList)
	{
		SecurityGroupAttribute securityGroupAttributeListObject;
		if(!value["BizType"].isNull())
			securityGroupAttributeListObject.bizType = value["BizType"].asString();
		if(!value["BizContent"].isNull())
			securityGroupAttributeListObject.bizContent = value["BizContent"].asString();
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

