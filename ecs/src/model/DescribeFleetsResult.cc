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
	auto allFleetsNode = value["Fleets"]["Fleet"];
	for (auto valueFleetsFleet : allFleetsNode)
	{
		Fleet fleetsObject;
		if(!valueFleetsFleet["FleetId"].isNull())
			fleetsObject.fleetId = valueFleetsFleet["FleetId"].asString();
		if(!valueFleetsFleet["FleetName"].isNull())
			fleetsObject.fleetName = valueFleetsFleet["FleetName"].asString();
		if(!valueFleetsFleet["FleetType"].isNull())
			fleetsObject.fleetType = valueFleetsFleet["FleetType"].asString();
		if(!valueFleetsFleet["Status"].isNull())
			fleetsObject.status = valueFleetsFleet["Status"].asString();
		if(!valueFleetsFleet["State"].isNull())
			fleetsObject.state = valueFleetsFleet["State"].asString();
		if(!valueFleetsFleet["RegionId"].isNull())
			fleetsObject.regionId = valueFleetsFleet["RegionId"].asString();
		if(!valueFleetsFleet["ValidFrom"].isNull())
			fleetsObject.validFrom = valueFleetsFleet["ValidFrom"].asString();
		if(!valueFleetsFleet["ValidUntil"].isNull())
			fleetsObject.validUntil = valueFleetsFleet["ValidUntil"].asString();
		if(!valueFleetsFleet["ExcessCapacityTerminationPolicy"].isNull())
			fleetsObject.excessCapacityTerminationPolicy = valueFleetsFleet["ExcessCapacityTerminationPolicy"].asString();
		if(!valueFleetsFleet["MaxSpotPrice"].isNull())
			fleetsObject.maxSpotPrice = std::stof(valueFleetsFleet["MaxSpotPrice"].asString());
		if(!valueFleetsFleet["LaunchTemplateId"].isNull())
			fleetsObject.launchTemplateId = valueFleetsFleet["LaunchTemplateId"].asString();
		if(!valueFleetsFleet["LaunchTemplateVersion"].isNull())
			fleetsObject.launchTemplateVersion = valueFleetsFleet["LaunchTemplateVersion"].asString();
		if(!valueFleetsFleet["TerminateInstances"].isNull())
			fleetsObject.terminateInstances = valueFleetsFleet["TerminateInstances"].asString() == "true";
		if(!valueFleetsFleet["TerminateInstancesWithExpiration"].isNull())
			fleetsObject.terminateInstancesWithExpiration = valueFleetsFleet["TerminateInstancesWithExpiration"].asString() == "true";
		if(!valueFleetsFleet["CreationTime"].isNull())
			fleetsObject.creationTime = valueFleetsFleet["CreationTime"].asString();
		auto alllaunchTemplateConfigsNode = allFleetsNode["launchTemplateConfigs"]["LaunchTemplateConfig"];
		for (auto allFleetsNodelaunchTemplateConfigsLaunchTemplateConfig : alllaunchTemplateConfigsNode)
		{
			Fleet::LaunchTemplateConfig launchTemplateConfigsObject;
			if(!allFleetsNodelaunchTemplateConfigsLaunchTemplateConfig["InstanceType"].isNull())
				launchTemplateConfigsObject.instanceType = allFleetsNodelaunchTemplateConfigsLaunchTemplateConfig["InstanceType"].asString();
			if(!allFleetsNodelaunchTemplateConfigsLaunchTemplateConfig["MaxPrice"].isNull())
				launchTemplateConfigsObject.maxPrice = std::stof(allFleetsNodelaunchTemplateConfigsLaunchTemplateConfig["MaxPrice"].asString());
			if(!allFleetsNodelaunchTemplateConfigsLaunchTemplateConfig["VSWitchId"].isNull())
				launchTemplateConfigsObject.vSWitchId = allFleetsNodelaunchTemplateConfigsLaunchTemplateConfig["VSWitchId"].asString();
			if(!allFleetsNodelaunchTemplateConfigsLaunchTemplateConfig["WeightedCapacity"].isNull())
				launchTemplateConfigsObject.weightedCapacity = std::stof(allFleetsNodelaunchTemplateConfigsLaunchTemplateConfig["WeightedCapacity"].asString());
			if(!allFleetsNodelaunchTemplateConfigsLaunchTemplateConfig["Priority"].isNull())
				launchTemplateConfigsObject.priority = std::stof(allFleetsNodelaunchTemplateConfigsLaunchTemplateConfig["Priority"].asString());
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

