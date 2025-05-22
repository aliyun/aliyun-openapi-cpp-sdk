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

#include <alibabacloud/rds/model/DescribeRCDeploymentSetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCDeploymentSetsResult::DescribeRCDeploymentSetsResult() :
	ServiceResult()
{}

DescribeRCDeploymentSetsResult::DescribeRCDeploymentSetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCDeploymentSetsResult::~DescribeRCDeploymentSetsResult()
{}

void DescribeRCDeploymentSetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDeploymentSetsNode = value["DeploymentSets"]["DeploymentSet"];
	for (auto valueDeploymentSetsDeploymentSet : allDeploymentSetsNode)
	{
		DeploymentSet deploymentSetsObject;
		if(!valueDeploymentSetsDeploymentSet["CreateTime"].isNull())
			deploymentSetsObject.createTime = valueDeploymentSetsDeploymentSet["CreateTime"].asString();
		if(!valueDeploymentSetsDeploymentSet["DeploymentSetDescription"].isNull())
			deploymentSetsObject.deploymentSetDescription = valueDeploymentSetsDeploymentSet["DeploymentSetDescription"].asString();
		if(!valueDeploymentSetsDeploymentSet["DeploymentSetId"].isNull())
			deploymentSetsObject.deploymentSetId = valueDeploymentSetsDeploymentSet["DeploymentSetId"].asString();
		if(!valueDeploymentSetsDeploymentSet["DeploymentSetName"].isNull())
			deploymentSetsObject.deploymentSetName = valueDeploymentSetsDeploymentSet["DeploymentSetName"].asString();
		if(!valueDeploymentSetsDeploymentSet["DeploymentStrategy"].isNull())
			deploymentSetsObject.deploymentStrategy = valueDeploymentSetsDeploymentSet["DeploymentStrategy"].asString();
		if(!valueDeploymentSetsDeploymentSet["Domain"].isNull())
			deploymentSetsObject.domain = valueDeploymentSetsDeploymentSet["Domain"].asString();
		if(!valueDeploymentSetsDeploymentSet["Granularity"].isNull())
			deploymentSetsObject.granularity = valueDeploymentSetsDeploymentSet["Granularity"].asString();
		if(!valueDeploymentSetsDeploymentSet["GroupCount"].isNull())
			deploymentSetsObject.groupCount = std::stoi(valueDeploymentSetsDeploymentSet["GroupCount"].asString());
		if(!valueDeploymentSetsDeploymentSet["InstanceAmount"].isNull())
			deploymentSetsObject.instanceAmount = std::stoi(valueDeploymentSetsDeploymentSet["InstanceAmount"].asString());
		if(!valueDeploymentSetsDeploymentSet["Strategy"].isNull())
			deploymentSetsObject.strategy = valueDeploymentSetsDeploymentSet["Strategy"].asString();
		auto allCapacitiesNode = valueDeploymentSetsDeploymentSet["Capacities"]["Capacity"];
		for (auto valueDeploymentSetsDeploymentSetCapacitiesCapacity : allCapacitiesNode)
		{
			DeploymentSet::Capacity capacitiesObject;
			if(!valueDeploymentSetsDeploymentSetCapacitiesCapacity["AvailableAmount"].isNull())
				capacitiesObject.availableAmount = std::stoi(valueDeploymentSetsDeploymentSetCapacitiesCapacity["AvailableAmount"].asString());
			if(!valueDeploymentSetsDeploymentSetCapacitiesCapacity["UsedAmount"].isNull())
				capacitiesObject.usedAmount = std::stoi(valueDeploymentSetsDeploymentSetCapacitiesCapacity["UsedAmount"].asString());
			if(!valueDeploymentSetsDeploymentSetCapacitiesCapacity["ZoneId"].isNull())
				capacitiesObject.zoneId = valueDeploymentSetsDeploymentSetCapacitiesCapacity["ZoneId"].asString();
			deploymentSetsObject.capacities.push_back(capacitiesObject);
		}
		auto allTagsNode = valueDeploymentSetsDeploymentSet["Tags"]["Tag"];
		for (auto valueDeploymentSetsDeploymentSetTagsTag : allTagsNode)
		{
			DeploymentSet::Tag tagsObject;
			if(!valueDeploymentSetsDeploymentSetTagsTag["ResourceId"].isNull())
				tagsObject.resourceId = valueDeploymentSetsDeploymentSetTagsTag["ResourceId"].asString();
			if(!valueDeploymentSetsDeploymentSetTagsTag["ResourceType"].isNull())
				tagsObject.resourceType = valueDeploymentSetsDeploymentSetTagsTag["ResourceType"].asString();
			if(!valueDeploymentSetsDeploymentSetTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueDeploymentSetsDeploymentSetTagsTag["TagKey"].asString();
			if(!valueDeploymentSetsDeploymentSetTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueDeploymentSetsDeploymentSetTagsTag["TagValue"].asString();
			deploymentSetsObject.tags.push_back(tagsObject);
		}
		auto allInstanceIds = value["InstanceIds"]["InstanceId"];
		for (auto value : allInstanceIds)
			deploymentSetsObject.instanceIds.push_back(value.asString());
		deploymentSets_.push_back(deploymentSetsObject);
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

int DescribeRCDeploymentSetsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRCDeploymentSetsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeRCDeploymentSetsResult::DeploymentSet> DescribeRCDeploymentSetsResult::getDeploymentSets()const
{
	return deploymentSets_;
}

int DescribeRCDeploymentSetsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeRCDeploymentSetsResult::getRegionId()const
{
	return regionId_;
}

