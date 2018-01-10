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
	auto allDeploymentSets = value["DeploymentSets"]["DeploymentSet"];
	for (auto value : allDeploymentSets)
	{
		DeploymentSet deploymentSetObject;
		deploymentSetObject.deploymentSetId = value["DeploymentSetId"].asString();
		deploymentSetObject.deploymentSetDescription = value["DeploymentSetDescription"].asString();
		deploymentSetObject.deploymentSetName = value["DeploymentSetName"].asString();
		deploymentSetObject.strategy = value["Strategy"].asString();
		deploymentSetObject.domain = value["Domain"].asString();
		deploymentSetObject.granularity = value["Granularity"].asString();
		deploymentSetObject.instanceAmount = std::stoi(value["InstanceAmount"].asString());
		deploymentSetObject.creationTime = value["CreationTime"].asString();
		deploymentSets_.push_back(deploymentSetObject);
	}
	regionId_ = value["RegionId"].asString();
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeDeploymentSetsResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeDeploymentSetsResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeDeploymentSetsResult::getPageSize()const
{
	return pageSize_;
}

void DescribeDeploymentSetsResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeDeploymentSetsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDeploymentSetsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeDeploymentSetsResult::getRegionId()const
{
	return regionId_;
}

void DescribeDeploymentSetsResult::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
}

