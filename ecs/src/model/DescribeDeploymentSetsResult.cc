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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDeploymentSets = value["DeploymentSets"]["DeploymentSet"];
	for (auto value : allDeploymentSets)
	{
		DeploymentSet deploymentSetsObject;
		if(!value["DeploymentSetId"].isNull())
			deploymentSetsObject.deploymentSetId = value["DeploymentSetId"].asString();
		if(!value["DeploymentSetDescription"].isNull())
			deploymentSetsObject.deploymentSetDescription = value["DeploymentSetDescription"].asString();
		if(!value["DeploymentSetName"].isNull())
			deploymentSetsObject.deploymentSetName = value["DeploymentSetName"].asString();
		if(!value["Strategy"].isNull())
			deploymentSetsObject.strategy = value["Strategy"].asString();
		if(!value["DeploymentStrategy"].isNull())
			deploymentSetsObject.deploymentStrategy = value["DeploymentStrategy"].asString();
		if(!value["Domain"].isNull())
			deploymentSetsObject.domain = value["Domain"].asString();
		if(!value["Granularity"].isNull())
			deploymentSetsObject.granularity = value["Granularity"].asString();
		if(!value["InstanceAmount"].isNull())
			deploymentSetsObject.instanceAmount = std::stoi(value["InstanceAmount"].asString());
		if(!value["CreationTime"].isNull())
			deploymentSetsObject.creationTime = value["CreationTime"].asString();
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

