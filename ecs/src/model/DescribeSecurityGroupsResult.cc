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
		SecurityGroup securityGroupObject;
		securityGroupObject.securityGroupId = value["SecurityGroupId"].asString();
		securityGroupObject.description = value["Description"].asString();
		securityGroupObject.securityGroupName = value["SecurityGroupName"].asString();
		securityGroupObject.vpcId = value["VpcId"].asString();
		securityGroupObject.creationTime = value["CreationTime"].asString();
		securityGroupObject.availableInstanceAmount = std::stoi(value["AvailableInstanceAmount"].asString());
		securityGroupObject.ecsCount = std::stoi(value["EcsCount"].asString());
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			SecurityGroup::Tag tagObject;
			tagObject.tagKey = value["TagKey"].asString();
			tagObject.tagValue = value["TagValue"].asString();
			securityGroupObject.tags.push_back(tagObject);
		}
		securityGroups_.push_back(securityGroupObject);
	}
	regionId_ = value["RegionId"].asString();
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeSecurityGroupsResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeSecurityGroupsResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeSecurityGroupsResult::getPageSize()const
{
	return pageSize_;
}

void DescribeSecurityGroupsResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeSecurityGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSecurityGroupsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeSecurityGroupsResult::getRegionId()const
{
	return regionId_;
}

void DescribeSecurityGroupsResult::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
}

