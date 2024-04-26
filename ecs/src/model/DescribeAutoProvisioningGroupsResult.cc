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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAutoProvisioningGroupsNode = value["AutoProvisioningGroups"]["AutoProvisioningGroup"];
	for (auto valueAutoProvisioningGroupsAutoProvisioningGroup : allAutoProvisioningGroupsNode)
	{
		AutoProvisioningGroup autoProvisioningGroupsObject;
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["CreationTime"].isNull())
			autoProvisioningGroupsObject.creationTime = valueAutoProvisioningGroupsAutoProvisioningGroup["CreationTime"].asString();
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["AutoProvisioningGroupName"].isNull())
			autoProvisioningGroupsObject.autoProvisioningGroupName = valueAutoProvisioningGroupsAutoProvisioningGroup["AutoProvisioningGroupName"].asString();
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["Status"].isNull())
			autoProvisioningGroupsObject.status = valueAutoProvisioningGroupsAutoProvisioningGroup["Status"].asString();
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["TerminateInstances"].isNull())
			autoProvisioningGroupsObject.terminateInstances = valueAutoProvisioningGroupsAutoProvisioningGroup["TerminateInstances"].asString() == "true";
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["MaxSpotPrice"].isNull())
			autoProvisioningGroupsObject.maxSpotPrice = std::stof(valueAutoProvisioningGroupsAutoProvisioningGroup["MaxSpotPrice"].asString());
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["State"].isNull())
			autoProvisioningGroupsObject.state = valueAutoProvisioningGroupsAutoProvisioningGroup["State"].asString();
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["LaunchTemplateId"].isNull())
			autoProvisioningGroupsObject.launchTemplateId = valueAutoProvisioningGroupsAutoProvisioningGroup["LaunchTemplateId"].asString();
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["ValidFrom"].isNull())
			autoProvisioningGroupsObject.validFrom = valueAutoProvisioningGroupsAutoProvisioningGroup["ValidFrom"].asString();
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["LaunchTemplateVersion"].isNull())
			autoProvisioningGroupsObject.launchTemplateVersion = valueAutoProvisioningGroupsAutoProvisioningGroup["LaunchTemplateVersion"].asString();
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["TerminateInstancesWithExpiration"].isNull())
			autoProvisioningGroupsObject.terminateInstancesWithExpiration = valueAutoProvisioningGroupsAutoProvisioningGroup["TerminateInstancesWithExpiration"].asString() == "true";
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["RegionId"].isNull())
			autoProvisioningGroupsObject.regionId = valueAutoProvisioningGroupsAutoProvisioningGroup["RegionId"].asString();
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["ValidUntil"].isNull())
			autoProvisioningGroupsObject.validUntil = valueAutoProvisioningGroupsAutoProvisioningGroup["ValidUntil"].asString();
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["AutoProvisioningGroupType"].isNull())
			autoProvisioningGroupsObject.autoProvisioningGroupType = valueAutoProvisioningGroupsAutoProvisioningGroup["AutoProvisioningGroupType"].asString();
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["AutoProvisioningGroupId"].isNull())
			autoProvisioningGroupsObject.autoProvisioningGroupId = valueAutoProvisioningGroupsAutoProvisioningGroup["AutoProvisioningGroupId"].asString();
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["ExcessCapacityTerminationPolicy"].isNull())
			autoProvisioningGroupsObject.excessCapacityTerminationPolicy = valueAutoProvisioningGroupsAutoProvisioningGroup["ExcessCapacityTerminationPolicy"].asString();
		if(!valueAutoProvisioningGroupsAutoProvisioningGroup["ResourceGroupId"].isNull())
			autoProvisioningGroupsObject.resourceGroupId = valueAutoProvisioningGroupsAutoProvisioningGroup["ResourceGroupId"].asString();
		auto allLaunchTemplateConfigsNode = valueAutoProvisioningGroupsAutoProvisioningGroup["LaunchTemplateConfigs"]["LaunchTemplateConfig"];
		for (auto valueAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigsLaunchTemplateConfig : allLaunchTemplateConfigsNode)
		{
			AutoProvisioningGroup::LaunchTemplateConfig launchTemplateConfigsObject;
			if(!valueAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigsLaunchTemplateConfig["MaxPrice"].isNull())
				launchTemplateConfigsObject.maxPrice = std::stof(valueAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigsLaunchTemplateConfig["MaxPrice"].asString());
			if(!valueAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigsLaunchTemplateConfig["Priority"].isNull())
				launchTemplateConfigsObject.priority = std::stof(valueAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigsLaunchTemplateConfig["Priority"].asString());
			if(!valueAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigsLaunchTemplateConfig["VSwitchId"].isNull())
				launchTemplateConfigsObject.vSwitchId = valueAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigsLaunchTemplateConfig["VSwitchId"].asString();
			if(!valueAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigsLaunchTemplateConfig["WeightedCapacity"].isNull())
				launchTemplateConfigsObject.weightedCapacity = std::stof(valueAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigsLaunchTemplateConfig["WeightedCapacity"].asString());
			if(!valueAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigsLaunchTemplateConfig["InstanceType"].isNull())
				launchTemplateConfigsObject.instanceType = valueAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigsLaunchTemplateConfig["InstanceType"].asString();
			autoProvisioningGroupsObject.launchTemplateConfigs.push_back(launchTemplateConfigsObject);
		}
		auto allTagsNode = valueAutoProvisioningGroupsAutoProvisioningGroup["Tags"]["Tag"];
		for (auto valueAutoProvisioningGroupsAutoProvisioningGroupTagsTag : allTagsNode)
		{
			AutoProvisioningGroup::Tag tagsObject;
			if(!valueAutoProvisioningGroupsAutoProvisioningGroupTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueAutoProvisioningGroupsAutoProvisioningGroupTagsTag["TagKey"].asString();
			if(!valueAutoProvisioningGroupsAutoProvisioningGroupTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueAutoProvisioningGroupsAutoProvisioningGroupTagsTag["TagValue"].asString();
			autoProvisioningGroupsObject.tags.push_back(tagsObject);
		}
		auto spotOptionsNode = value["SpotOptions"];
		if(!spotOptionsNode["InstancePoolsToUseCount"].isNull())
			autoProvisioningGroupsObject.spotOptions.instancePoolsToUseCount = std::stoi(spotOptionsNode["InstancePoolsToUseCount"].asString());
		if(!spotOptionsNode["AllocationStrategy"].isNull())
			autoProvisioningGroupsObject.spotOptions.allocationStrategy = spotOptionsNode["AllocationStrategy"].asString();
		if(!spotOptionsNode["InstanceInterruptionBehavior"].isNull())
			autoProvisioningGroupsObject.spotOptions.instanceInterruptionBehavior = spotOptionsNode["InstanceInterruptionBehavior"].asString();
		auto payAsYouGoOptionsNode = value["PayAsYouGoOptions"];
		if(!payAsYouGoOptionsNode["AllocationStrategy"].isNull())
			autoProvisioningGroupsObject.payAsYouGoOptions.allocationStrategy = payAsYouGoOptionsNode["AllocationStrategy"].asString();
		auto targetCapacitySpecificationNode = value["TargetCapacitySpecification"];
		if(!targetCapacitySpecificationNode["SpotTargetCapacity"].isNull())
			autoProvisioningGroupsObject.targetCapacitySpecification.spotTargetCapacity = std::stof(targetCapacitySpecificationNode["SpotTargetCapacity"].asString());
		if(!targetCapacitySpecificationNode["PayAsYouGoTargetCapacity"].isNull())
			autoProvisioningGroupsObject.targetCapacitySpecification.payAsYouGoTargetCapacity = std::stof(targetCapacitySpecificationNode["PayAsYouGoTargetCapacity"].asString());
		if(!targetCapacitySpecificationNode["DefaultTargetCapacityType"].isNull())
			autoProvisioningGroupsObject.targetCapacitySpecification.defaultTargetCapacityType = targetCapacitySpecificationNode["DefaultTargetCapacityType"].asString();
		if(!targetCapacitySpecificationNode["TotalTargetCapacity"].isNull())
			autoProvisioningGroupsObject.targetCapacitySpecification.totalTargetCapacity = std::stof(targetCapacitySpecificationNode["TotalTargetCapacity"].asString());
		autoProvisioningGroups_.push_back(autoProvisioningGroupsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

