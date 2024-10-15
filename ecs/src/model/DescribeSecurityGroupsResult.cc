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

#include <alibabacloud/ecs/model/DescribeSecurityGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSecurityGroupsResult::DescribeSecurityGroupsResult() :
	ServiceResult()
{}

DescribeSecurityGroupsResult::DescribeSecurityGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecurityGroupsResult::~DescribeSecurityGroupsResult()
{}

void DescribeSecurityGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityGroupsNode = value["SecurityGroups"]["SecurityGroup"];
	for (auto valueSecurityGroupsSecurityGroup : allSecurityGroupsNode)
	{
		SecurityGroup securityGroupsObject;
		if(!valueSecurityGroupsSecurityGroup["SecurityGroupId"].isNull())
			securityGroupsObject.securityGroupId = valueSecurityGroupsSecurityGroup["SecurityGroupId"].asString();
		if(!valueSecurityGroupsSecurityGroup["SecurityGroupName"].isNull())
			securityGroupsObject.securityGroupName = valueSecurityGroupsSecurityGroup["SecurityGroupName"].asString();
		if(!valueSecurityGroupsSecurityGroup["Description"].isNull())
			securityGroupsObject.description = valueSecurityGroupsSecurityGroup["Description"].asString();
		if(!valueSecurityGroupsSecurityGroup["SecurityGroupType"].isNull())
			securityGroupsObject.securityGroupType = valueSecurityGroupsSecurityGroup["SecurityGroupType"].asString();
		if(!valueSecurityGroupsSecurityGroup["VpcId"].isNull())
			securityGroupsObject.vpcId = valueSecurityGroupsSecurityGroup["VpcId"].asString();
		if(!valueSecurityGroupsSecurityGroup["CreationTime"].isNull())
			securityGroupsObject.creationTime = valueSecurityGroupsSecurityGroup["CreationTime"].asString();
		if(!valueSecurityGroupsSecurityGroup["EcsCount"].isNull())
			securityGroupsObject.ecsCount = std::stoi(valueSecurityGroupsSecurityGroup["EcsCount"].asString());
		if(!valueSecurityGroupsSecurityGroup["AvailableInstanceAmount"].isNull())
			securityGroupsObject.availableInstanceAmount = std::stoi(valueSecurityGroupsSecurityGroup["AvailableInstanceAmount"].asString());
		if(!valueSecurityGroupsSecurityGroup["ResourceGroupId"].isNull())
			securityGroupsObject.resourceGroupId = valueSecurityGroupsSecurityGroup["ResourceGroupId"].asString();
		if(!valueSecurityGroupsSecurityGroup["ServiceManaged"].isNull())
			securityGroupsObject.serviceManaged = valueSecurityGroupsSecurityGroup["ServiceManaged"].asString() == "true";
		if(!valueSecurityGroupsSecurityGroup["ServiceID"].isNull())
			securityGroupsObject.serviceID = std::stol(valueSecurityGroupsSecurityGroup["ServiceID"].asString());
		if(!valueSecurityGroupsSecurityGroup["RuleCount"].isNull())
			securityGroupsObject.ruleCount = std::stoi(valueSecurityGroupsSecurityGroup["RuleCount"].asString());
		if(!valueSecurityGroupsSecurityGroup["GroupToGroupRuleCount"].isNull())
			securityGroupsObject.groupToGroupRuleCount = std::stoi(valueSecurityGroupsSecurityGroup["GroupToGroupRuleCount"].asString());
		auto allTagsNode = valueSecurityGroupsSecurityGroup["Tags"]["Tag"];
		for (auto valueSecurityGroupsSecurityGroupTagsTag : allTagsNode)
		{
			SecurityGroup::Tag tagsObject;
			if(!valueSecurityGroupsSecurityGroupTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueSecurityGroupsSecurityGroupTagsTag["TagValue"].asString();
			if(!valueSecurityGroupsSecurityGroupTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueSecurityGroupsSecurityGroupTagsTag["TagKey"].asString();
			securityGroupsObject.tags.push_back(tagsObject);
		}
		securityGroups_.push_back(securityGroupsObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeSecurityGroupsResult::SecurityGroup> DescribeSecurityGroupsResult::getSecurityGroups()const
{
	return securityGroups_;
}

int DescribeSecurityGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeSecurityGroupsResult::getNextToken()const
{
	return nextToken_;
}

int DescribeSecurityGroupsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSecurityGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeSecurityGroupsResult::getRegionId()const
{
	return regionId_;
}

