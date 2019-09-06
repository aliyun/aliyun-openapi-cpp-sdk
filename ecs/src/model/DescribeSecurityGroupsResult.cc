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
	auto allSecurityGroups = value["SecurityGroups"]["SecurityGroup"];
	for (auto value : allSecurityGroups)
	{
		SecurityGroup securityGroupsObject;
		if(!value["SecurityGroupId"].isNull())
			securityGroupsObject.securityGroupId = value["SecurityGroupId"].asString();
		if(!value["Description"].isNull())
			securityGroupsObject.description = value["Description"].asString();
		if(!value["SecurityGroupName"].isNull())
			securityGroupsObject.securityGroupName = value["SecurityGroupName"].asString();
		if(!value["VpcId"].isNull())
			securityGroupsObject.vpcId = value["VpcId"].asString();
		if(!value["CreationTime"].isNull())
			securityGroupsObject.creationTime = value["CreationTime"].asString();
		if(!value["SecurityGroupType"].isNull())
			securityGroupsObject.securityGroupType = value["SecurityGroupType"].asString();
		if(!value["AvailableInstanceAmount"].isNull())
			securityGroupsObject.availableInstanceAmount = std::stoi(value["AvailableInstanceAmount"].asString());
		if(!value["EcsCount"].isNull())
			securityGroupsObject.ecsCount = std::stoi(value["EcsCount"].asString());
		if(!value["ResourceGroupId"].isNull())
			securityGroupsObject.resourceGroupId = value["ResourceGroupId"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			SecurityGroup::Tag tagsObject;
			if(!value["TagKey"].isNull())
				tagsObject.tagKey = value["TagKey"].asString();
			if(!value["TagValue"].isNull())
				tagsObject.tagValue = value["TagValue"].asString();
			securityGroupsObject.tags.push_back(tagsObject);
		}
		securityGroups_.push_back(securityGroupsObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
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

