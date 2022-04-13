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

#include <alibabacloud/ecs/model/DescribeDeploymentSetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDeploymentSetsResult::DescribeDeploymentSetsResult() :
	ServiceResult()
{}

DescribeDeploymentSetsResult::DescribeDeploymentSetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeploymentSetsResult::~DescribeDeploymentSetsResult()
{}

void DescribeDeploymentSetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDeploymentSetsNode = value["DeploymentSets"]["DeploymentSet"];
	for (auto valueDeploymentSetsDeploymentSet : allDeploymentSetsNode)
	{
		DeploymentSet deploymentSetsObject;
		if(!valueDeploymentSetsDeploymentSet["CreationTime"].isNull())
			deploymentSetsObject.creationTime = valueDeploymentSetsDeploymentSet["CreationTime"].asString();
		if(!valueDeploymentSetsDeploymentSet["Strategy"].isNull())
			deploymentSetsObject.strategy = valueDeploymentSetsDeploymentSet["Strategy"].asString();
		if(!valueDeploymentSetsDeploymentSet["DeploymentSetId"].isNull())
			deploymentSetsObject.deploymentSetId = valueDeploymentSetsDeploymentSet["DeploymentSetId"].asString();
		if(!valueDeploymentSetsDeploymentSet["DeploymentStrategy"].isNull())
			deploymentSetsObject.deploymentStrategy = valueDeploymentSetsDeploymentSet["DeploymentStrategy"].asString();
		if(!valueDeploymentSetsDeploymentSet["DeploymentSetDescription"].isNull())
			deploymentSetsObject.deploymentSetDescription = valueDeploymentSetsDeploymentSet["DeploymentSetDescription"].asString();
		if(!valueDeploymentSetsDeploymentSet["Domain"].isNull())
			deploymentSetsObject.domain = valueDeploymentSetsDeploymentSet["Domain"].asString();
		if(!valueDeploymentSetsDeploymentSet["GroupCount"].isNull())
			deploymentSetsObject.groupCount = std::stoi(valueDeploymentSetsDeploymentSet["GroupCount"].asString());
		if(!valueDeploymentSetsDeploymentSet["Granularity"].isNull())
			deploymentSetsObject.granularity = valueDeploymentSetsDeploymentSet["Granularity"].asString();
		if(!valueDeploymentSetsDeploymentSet["DeploymentSetName"].isNull())
			deploymentSetsObject.deploymentSetName = valueDeploymentSetsDeploymentSet["DeploymentSetName"].asString();
		if(!valueDeploymentSetsDeploymentSet["InstanceAmount"].isNull())
			deploymentSetsObject.instanceAmount = std::stoi(valueDeploymentSetsDeploymentSet["InstanceAmount"].asString());
		auto allCapacitiesNode = valueDeploymentSetsDeploymentSet["Capacities"]["Capacity"];
		for (auto valueDeploymentSetsDeploymentSetCapacitiesCapacity : allCapacitiesNode)
		{
			DeploymentSet::Capacity capacitiesObject;
			if(!valueDeploymentSetsDeploymentSetCapacitiesCapacity["ZoneId"].isNull())
				capacitiesObject.zoneId = valueDeploymentSetsDeploymentSetCapacitiesCapacity["ZoneId"].asString();
			if(!valueDeploymentSetsDeploymentSetCapacitiesCapacity["UsedAmount"].isNull())
				capacitiesObject.usedAmount = std::stoi(valueDeploymentSetsDeploymentSetCapacitiesCapacity["UsedAmount"].asString());
			if(!valueDeploymentSetsDeploymentSetCapacitiesCapacity["AvailableAmount"].isNull())
				capacitiesObject.availableAmount = std::stoi(valueDeploymentSetsDeploymentSetCapacitiesCapacity["AvailableAmount"].asString());
			deploymentSetsObject.capacities.push_back(capacitiesObject);
		}
		auto allInstanceIds = value["InstanceIds"]["InstanceId"];
		for (auto value : allInstanceIds)
			deploymentSetsObject.instanceIds.push_back(value.asString());
		deploymentSets_.push_back(deploymentSetsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

int DescribeDeploymentSetsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDeploymentSetsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeDeploymentSetsResult::DeploymentSet> DescribeDeploymentSetsResult::getDeploymentSets()const
{
	return deploymentSets_;
}

int DescribeDeploymentSetsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeDeploymentSetsResult::getRegionId()const
{
	return regionId_;
}

