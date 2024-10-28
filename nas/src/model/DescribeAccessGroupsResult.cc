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

#include <alibabacloud/nas/model/DescribeAccessGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeAccessGroupsResult::DescribeAccessGroupsResult() :
	ServiceResult()
{}

DescribeAccessGroupsResult::DescribeAccessGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccessGroupsResult::~DescribeAccessGroupsResult()
{}

void DescribeAccessGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccessGroupsNode = value["AccessGroups"]["AccessGroup"];
	for (auto valueAccessGroupsAccessGroup : allAccessGroupsNode)
	{
		AccessGroup accessGroupsObject;
		if(!valueAccessGroupsAccessGroup["AccessGroupName"].isNull())
			accessGroupsObject.accessGroupName = valueAccessGroupsAccessGroup["AccessGroupName"].asString();
		if(!valueAccessGroupsAccessGroup["Description"].isNull())
			accessGroupsObject.description = valueAccessGroupsAccessGroup["Description"].asString();
		if(!valueAccessGroupsAccessGroup["CreateTime"].isNull())
			accessGroupsObject.createTime = valueAccessGroupsAccessGroup["CreateTime"].asString();
		if(!valueAccessGroupsAccessGroup["AccessGroupType"].isNull())
			accessGroupsObject.accessGroupType = valueAccessGroupsAccessGroup["AccessGroupType"].asString();
		if(!valueAccessGroupsAccessGroup["RuleCount"].isNull())
			accessGroupsObject.ruleCount = std::stoi(valueAccessGroupsAccessGroup["RuleCount"].asString());
		if(!valueAccessGroupsAccessGroup["MountTargetCount"].isNull())
			accessGroupsObject.mountTargetCount = std::stoi(valueAccessGroupsAccessGroup["MountTargetCount"].asString());
		if(!valueAccessGroupsAccessGroup["FileSystemType"].isNull())
			accessGroupsObject.fileSystemType = valueAccessGroupsAccessGroup["FileSystemType"].asString();
		if(!valueAccessGroupsAccessGroup["RegionId"].isNull())
			accessGroupsObject.regionId = valueAccessGroupsAccessGroup["RegionId"].asString();
		auto allTagsNode = valueAccessGroupsAccessGroup["Tags"]["Tag"];
		for (auto valueAccessGroupsAccessGroupTagsTag : allTagsNode)
		{
			AccessGroup::Tag tagsObject;
			if(!valueAccessGroupsAccessGroupTagsTag["Key"].isNull())
				tagsObject.key = valueAccessGroupsAccessGroupTagsTag["Key"].asString();
			if(!valueAccessGroupsAccessGroupTagsTag["Value"].isNull())
				tagsObject.value = valueAccessGroupsAccessGroupTagsTag["Value"].asString();
			accessGroupsObject.tags.push_back(tagsObject);
		}
		accessGroups_.push_back(accessGroupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<DescribeAccessGroupsResult::AccessGroup> DescribeAccessGroupsResult::getAccessGroups()const
{
	return accessGroups_;
}

int DescribeAccessGroupsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAccessGroupsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAccessGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

