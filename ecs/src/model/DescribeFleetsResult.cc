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

#include <alibabacloud/ecs/model/DescribeFleetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeFleetsResult::DescribeFleetsResult() :
	ServiceResult()
{}

DescribeFleetsResult::DescribeFleetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFleetsResult::~DescribeFleetsResult()
{}

void DescribeFleetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allFleets = value["Fleets"]["Fleet"];
	for (auto value : allFleets)
	{
		Fleet fleetsObject;
		if(!value["FleetId"].isNull())
			fleetsObject.fleetId = value["FleetId"].asString();
		if(!value["FleetName"].isNull())
			fleetsObject.fleetName = value["FleetName"].asString();
		if(!value["FleetType"].isNull())
			fleetsObject.fleetType = value["FleetType"].asString();
		if(!value["Status"].isNull())
			fleetsObject.status = value["Status"].asString();
		if(!value["State"].isNull())
			fleetsObject.state = value["State"].asString();
		if(!value["RegionId"].isNull())
			fleetsObject.regionId = value["RegionId"].asString();
		if(!value["ValidFrom"].isNull())
			fleetsObject.validFrom = value["ValidFrom"].asString();
		if(!value["ValidUntil"].isNull())
			fleetsObject.validUntil = value["ValidUntil"].asString();
		if(!value["ExcessCapacityTerminationPolicy"].isNull())
			fleetsObject.excessCapacityTerminationPolicy = value["ExcessCapacityTerminationPolicy"].asString();
		if(!value["MaxSpotPrice"].isNull())
			fleetsObject.maxSpotPrice = std::stof(value["MaxSpotPrice"].asString());
		if(!value["LaunchTemplateId"].isNull())
			fleetsObject.launchTemplateId = value["LaunchTemplateId"].asString();
		if(!value["LaunchTemplateVersion"].isNull())
			fleetsObject.launchTemplateVersion = value["LaunchTemplateVersion"].asString();
		if(!value["TerminateInstances"].isNull())
			fleetsObject.terminateInstances = value["TerminateInstances"].asString() == "true";
		if(!value["TerminateInstancesWithExpiration"].isNull())
			fleetsObject.terminateInstancesWithExpiration = value["TerminateInstancesWithExpiration"].asString() == "true";
		if(!value["CreationTime"].isNull())
			fleetsObject.creationTime = value["CreationTime"].asString();
		auto alllaunchTemplateConfigs = value["launchTemplateConfigs"]["LaunchTemplateConfig"];
		for (auto value : alllaunchTemplateConfigs)
		{
			Fleet::LaunchTemplateConfig launchTemplateConfigsObject;
			if(!value["InstanceType"].isNull())
				launchTemplateConfigsObject.instanceType = value["InstanceType"].asString();
			if(!value["MaxPrice"].isNull())
				launchTemplateConfigsObject.maxPrice = std::stof(value["MaxPrice"].asString());
			if(!value["VSWitchId"].isNull())
				launchTemplateConfigsObject.vSWitchId = value["VSWitchId"].asString();
			if(!value["WeightedCapacity"].isNull())
				launchTemplateConfigsObject.weightedCapacity = std::stof(value["WeightedCapacity"].asString());
			if(!value["Priority"].isNull())
				launchTemplateConfigsObject.priority = std::stof(value["Priority"].asString());
			fleetsObject.launchTemplateConfigs.push_back(launchTemplateConfigsObject);
		}
		auto spotOptionsNode = value["SpotOptions"];
		if(!spotOptionsNode["AllocationStrategy"].isNull())
			fleetsObject.spotOptions.allocationStrategy = spotOptionsNode["AllocationStrategy"].asString();
		if(!spotOptionsNode["InstanceInterruptionBehavior"].isNull())
			fleetsObject.spotOptions.instanceInterruptionBehavior = spotOptionsNode["InstanceInterruptionBehavior"].asString();
		if(!spotOptionsNode["InstancePoolsToUseCount"].isNull())
			fleetsObject.spotOptions.instancePoolsToUseCount = std::stoi(spotOptionsNode["InstancePoolsToUseCount"].asString());
		auto onDemandOptionsNode = value["OnDemandOptions"];
		if(!onDemandOptionsNode["AllocationStrategy"].isNull())
			fleetsObject.onDemandOptions.allocationStrategy = onDemandOptionsNode["AllocationStrategy"].asString();
		auto targetCapacitySpecificationNode = value["TargetCapacitySpecification"];
		if(!targetCapacitySpecificationNode["TotalTargetCapacity"].isNull())
			fleetsObject.targetCapacitySpecification.totalTargetCapacity = std::stof(targetCapacitySpecificationNode["TotalTargetCapacity"].asString());
		if(!targetCapacitySpecificationNode["OnDemandTargetCapacity"].isNull())
			fleetsObject.targetCapacitySpecification.onDemandTargetCapacity = std::stof(targetCapacitySpecificationNode["OnDemandTargetCapacity"].asString());
		if(!targetCapacitySpecificationNode["SpotTargetCapacity"].isNull())
			fleetsObject.targetCapacitySpecification.spotTargetCapacity = std::stof(targetCapacitySpecificationNode["SpotTargetCapacity"].asString());
		if(!targetCapacitySpecificationNode["DefaultTargetCapacityType"].isNull())
			fleetsObject.targetCapacitySpecification.defaultTargetCapacityType = targetCapacitySpecificationNode["DefaultTargetCapacityType"].asString();
		if(!targetCapacitySpecificationNode["FillGapWithOnDemand"].isNull())
			fleetsObject.targetCapacitySpecification.fillGapWithOnDemand = targetCapacitySpecificationNode["FillGapWithOnDemand"].asString() == "true";
		fleets_.push_back(fleetsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeFleetsResult::Fleet> DescribeFleetsResult::getFleets()const
{
	return fleets_;
}

int DescribeFleetsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeFleetsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeFleetsResult::getPageNumber()const
{
	return pageNumber_;
}

