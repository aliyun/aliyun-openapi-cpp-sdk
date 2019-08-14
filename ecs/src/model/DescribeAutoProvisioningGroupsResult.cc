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

#include <alibabacloud/ecs/model/DescribeAutoProvisioningGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeAutoProvisioningGroupsResult::DescribeAutoProvisioningGroupsResult() :
	ServiceResult()
{}

DescribeAutoProvisioningGroupsResult::DescribeAutoProvisioningGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutoProvisioningGroupsResult::~DescribeAutoProvisioningGroupsResult()
{}

void DescribeAutoProvisioningGroupsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAutoProvisioningGroups = value["AutoProvisioningGroups"]["AutoProvisioningGroup"];
	for (auto value : allAutoProvisioningGroups)
	{
		AutoProvisioningGroup autoProvisioningGroupsObject;
		if(!value["AutoProvisioningGroupId"].isNull())
			autoProvisioningGroupsObject.autoProvisioningGroupId = value["AutoProvisioningGroupId"].asString();
		if(!value["AutoProvisioningGroupName"].isNull())
			autoProvisioningGroupsObject.autoProvisioningGroupName = value["AutoProvisioningGroupName"].asString();
		if(!value["AutoProvisioningGroupType"].isNull())
			autoProvisioningGroupsObject.autoProvisioningGroupType = value["AutoProvisioningGroupType"].asString();
		if(!value["Status"].isNull())
			autoProvisioningGroupsObject.status = value["Status"].asString();
		if(!value["State"].isNull())
			autoProvisioningGroupsObject.state = value["State"].asString();
		if(!value["RegionId"].isNull())
			autoProvisioningGroupsObject.regionId = value["RegionId"].asString();
		if(!value["ValidFrom"].isNull())
			autoProvisioningGroupsObject.validFrom = value["ValidFrom"].asString();
		if(!value["ValidUntil"].isNull())
			autoProvisioningGroupsObject.validUntil = value["ValidUntil"].asString();
		if(!value["ExcessCapacityTerminationPolicy"].isNull())
			autoProvisioningGroupsObject.excessCapacityTerminationPolicy = value["ExcessCapacityTerminationPolicy"].asString();
		if(!value["MaxSpotPrice"].isNull())
			autoProvisioningGroupsObject.maxSpotPrice = std::stof(value["MaxSpotPrice"].asString());
		if(!value["LaunchTemplateId"].isNull())
			autoProvisioningGroupsObject.launchTemplateId = value["LaunchTemplateId"].asString();
		if(!value["LaunchTemplateVersion"].isNull())
			autoProvisioningGroupsObject.launchTemplateVersion = value["LaunchTemplateVersion"].asString();
		if(!value["TerminateInstances"].isNull())
			autoProvisioningGroupsObject.terminateInstances = value["TerminateInstances"].asString() == "true";
		if(!value["TerminateInstancesWithExpiration"].isNull())
			autoProvisioningGroupsObject.terminateInstancesWithExpiration = value["TerminateInstancesWithExpiration"].asString() == "true";
		if(!value["CreationTime"].isNull())
			autoProvisioningGroupsObject.creationTime = value["CreationTime"].asString();
		auto allLaunchTemplateConfigs = value["LaunchTemplateConfigs"]["LaunchTemplateConfig"];
		for (auto value : allLaunchTemplateConfigs)
		{
			AutoProvisioningGroup::LaunchTemplateConfig launchTemplateConfigsObject;
			if(!value["InstanceType"].isNull())
				launchTemplateConfigsObject.instanceType = value["InstanceType"].asString();
			if(!value["MaxPrice"].isNull())
				launchTemplateConfigsObject.maxPrice = std::stof(value["MaxPrice"].asString());
			if(!value["VSwitchId"].isNull())
				launchTemplateConfigsObject.vSwitchId = value["VSwitchId"].asString();
			if(!value["WeightedCapacity"].isNull())
				launchTemplateConfigsObject.weightedCapacity = std::stof(value["WeightedCapacity"].asString());
			if(!value["Priority"].isNull())
				launchTemplateConfigsObject.priority = std::stof(value["Priority"].asString());
			autoProvisioningGroupsObject.launchTemplateConfigs.push_back(launchTemplateConfigsObject);
		}
		auto spotOptionsNode = value["SpotOptions"];
		if(!spotOptionsNode["AllocationStrategy"].isNull())
			autoProvisioningGroupsObject.spotOptions.allocationStrategy = spotOptionsNode["AllocationStrategy"].asString();
		if(!spotOptionsNode["InstanceInterruptionBehavior"].isNull())
			autoProvisioningGroupsObject.spotOptions.instanceInterruptionBehavior = spotOptionsNode["InstanceInterruptionBehavior"].asString();
		if(!spotOptionsNode["InstancePoolsToUseCount"].isNull())
			autoProvisioningGroupsObject.spotOptions.instancePoolsToUseCount = std::stoi(spotOptionsNode["InstancePoolsToUseCount"].asString());
		auto payAsYouGoOptionsNode = value["PayAsYouGoOptions"];
		if(!payAsYouGoOptionsNode["AllocationStrategy"].isNull())
			autoProvisioningGroupsObject.payAsYouGoOptions.allocationStrategy = payAsYouGoOptionsNode["AllocationStrategy"].asString();
		auto targetCapacitySpecificationNode = value["TargetCapacitySpecification"];
		if(!targetCapacitySpecificationNode["TotalTargetCapacity"].isNull())
			autoProvisioningGroupsObject.targetCapacitySpecification.totalTargetCapacity = std::stof(targetCapacitySpecificationNode["TotalTargetCapacity"].asString());
		if(!targetCapacitySpecificationNode["PayAsYouGoTargetCapacity"].isNull())
			autoProvisioningGroupsObject.targetCapacitySpecification.payAsYouGoTargetCapacity = std::stof(targetCapacitySpecificationNode["PayAsYouGoTargetCapacity"].asString());
		if(!targetCapacitySpecificationNode["SpotTargetCapacity"].isNull())
			autoProvisioningGroupsObject.targetCapacitySpecification.spotTargetCapacity = std::stof(targetCapacitySpecificationNode["SpotTargetCapacity"].asString());
		if(!targetCapacitySpecificationNode["DefaultTargetCapacityType"].isNull())
			autoProvisioningGroupsObject.targetCapacitySpecification.defaultTargetCapacityType = targetCapacitySpecificationNode["DefaultTargetCapacityType"].asString();
		autoProvisioningGroups_.push_back(autoProvisioningGroupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeAutoProvisioningGroupsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAutoProvisioningGroupsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAutoProvisioningGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAutoProvisioningGroupsResult::AutoProvisioningGroup> DescribeAutoProvisioningGroupsResult::getAutoProvisioningGroups()const
{
	return autoProvisioningGroups_;
}

