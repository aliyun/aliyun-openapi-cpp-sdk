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

#include <alibabacloud/ess/model/DescribeScalingGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeScalingGroupsResult::DescribeScalingGroupsResult() :
	ServiceResult()
{}

DescribeScalingGroupsResult::DescribeScalingGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScalingGroupsResult::~DescribeScalingGroupsResult()
{}

void DescribeScalingGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScalingGroupsNode = value["ScalingGroups"]["ScalingGroup"];
	for (auto valueScalingGroupsScalingGroup : allScalingGroupsNode)
	{
		ScalingGroup scalingGroupsObject;
		if(!valueScalingGroupsScalingGroup["VpcId"].isNull())
			scalingGroupsObject.vpcId = valueScalingGroupsScalingGroup["VpcId"].asString();
		if(!valueScalingGroupsScalingGroup["CreationTime"].isNull())
			scalingGroupsObject.creationTime = valueScalingGroupsScalingGroup["CreationTime"].asString();
		if(!valueScalingGroupsScalingGroup["TotalInstanceCount"].isNull())
			scalingGroupsObject.totalInstanceCount = std::stoi(valueScalingGroupsScalingGroup["TotalInstanceCount"].asString());
		if(!valueScalingGroupsScalingGroup["ScalingGroupName"].isNull())
			scalingGroupsObject.scalingGroupName = valueScalingGroupsScalingGroup["ScalingGroupName"].asString();
		if(!valueScalingGroupsScalingGroup["Weighted"].isNull())
			scalingGroupsObject.weighted = valueScalingGroupsScalingGroup["Weighted"].asString() == "true";
		if(!valueScalingGroupsScalingGroup["SpotInstancePools"].isNull())
			scalingGroupsObject.spotInstancePools = std::stoi(valueScalingGroupsScalingGroup["SpotInstancePools"].asString());
		if(!valueScalingGroupsScalingGroup["StoppedCapacity"].isNull())
			scalingGroupsObject.stoppedCapacity = std::stoi(valueScalingGroupsScalingGroup["StoppedCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["OnDemandPercentageAboveBaseCapacity"].isNull())
			scalingGroupsObject.onDemandPercentageAboveBaseCapacity = std::stoi(valueScalingGroupsScalingGroup["OnDemandPercentageAboveBaseCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["ModificationTime"].isNull())
			scalingGroupsObject.modificationTime = valueScalingGroupsScalingGroup["ModificationTime"].asString();
		if(!valueScalingGroupsScalingGroup["MinSize"].isNull())
			scalingGroupsObject.minSize = std::stoi(valueScalingGroupsScalingGroup["MinSize"].asString());
		if(!valueScalingGroupsScalingGroup["ScalingGroupId"].isNull())
			scalingGroupsObject.scalingGroupId = valueScalingGroupsScalingGroup["ScalingGroupId"].asString();
		if(!valueScalingGroupsScalingGroup["CompensateWithOnDemand"].isNull())
			scalingGroupsObject.compensateWithOnDemand = valueScalingGroupsScalingGroup["CompensateWithOnDemand"].asString() == "true";
		if(!valueScalingGroupsScalingGroup["ScalingPolicy"].isNull())
			scalingGroupsObject.scalingPolicy = valueScalingGroupsScalingGroup["ScalingPolicy"].asString();
		if(!valueScalingGroupsScalingGroup["RemovingWaitCapacity"].isNull())
			scalingGroupsObject.removingWaitCapacity = std::stoi(valueScalingGroupsScalingGroup["RemovingWaitCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["ActiveCapacity"].isNull())
			scalingGroupsObject.activeCapacity = std::stoi(valueScalingGroupsScalingGroup["ActiveCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["OnDemandBaseCapacity"].isNull())
			scalingGroupsObject.onDemandBaseCapacity = std::stoi(valueScalingGroupsScalingGroup["OnDemandBaseCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["ProtectedCapacity"].isNull())
			scalingGroupsObject.protectedCapacity = std::stoi(valueScalingGroupsScalingGroup["ProtectedCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["HealthCheckType"].isNull())
			scalingGroupsObject.healthCheckType = valueScalingGroupsScalingGroup["HealthCheckType"].asString();
		if(!valueScalingGroupsScalingGroup["LifecycleState"].isNull())
			scalingGroupsObject.lifecycleState = valueScalingGroupsScalingGroup["LifecycleState"].asString();
		if(!valueScalingGroupsScalingGroup["GroupDeletionProtection"].isNull())
			scalingGroupsObject.groupDeletionProtection = valueScalingGroupsScalingGroup["GroupDeletionProtection"].asString() == "true";
		if(!valueScalingGroupsScalingGroup["ActiveScalingConfigurationId"].isNull())
			scalingGroupsObject.activeScalingConfigurationId = valueScalingGroupsScalingGroup["ActiveScalingConfigurationId"].asString();
		if(!valueScalingGroupsScalingGroup["GroupType"].isNull())
			scalingGroupsObject.groupType = valueScalingGroupsScalingGroup["GroupType"].asString();
		if(!valueScalingGroupsScalingGroup["MultiAZPolicy"].isNull())
			scalingGroupsObject.multiAZPolicy = valueScalingGroupsScalingGroup["MultiAZPolicy"].asString();
		if(!valueScalingGroupsScalingGroup["RemovingCapacity"].isNull())
			scalingGroupsObject.removingCapacity = std::stoi(valueScalingGroupsScalingGroup["RemovingCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["PendingWaitCapacity"].isNull())
			scalingGroupsObject.pendingWaitCapacity = std::stoi(valueScalingGroupsScalingGroup["PendingWaitCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["StandbyCapacity"].isNull())
			scalingGroupsObject.standbyCapacity = std::stoi(valueScalingGroupsScalingGroup["StandbyCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["CurrentHostName"].isNull())
			scalingGroupsObject.currentHostName = valueScalingGroupsScalingGroup["CurrentHostName"].asString();
		if(!valueScalingGroupsScalingGroup["PendingCapacity"].isNull())
			scalingGroupsObject.pendingCapacity = std::stoi(valueScalingGroupsScalingGroup["PendingCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["LaunchTemplateId"].isNull())
			scalingGroupsObject.launchTemplateId = valueScalingGroupsScalingGroup["LaunchTemplateId"].asString();
		if(!valueScalingGroupsScalingGroup["TotalCapacity"].isNull())
			scalingGroupsObject.totalCapacity = std::stoi(valueScalingGroupsScalingGroup["TotalCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["DesiredCapacity"].isNull())
			scalingGroupsObject.desiredCapacity = std::stoi(valueScalingGroupsScalingGroup["DesiredCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["SpotInstanceRemedy"].isNull())
			scalingGroupsObject.spotInstanceRemedy = valueScalingGroupsScalingGroup["SpotInstanceRemedy"].asString() == "true";
		if(!valueScalingGroupsScalingGroup["LaunchTemplateVersion"].isNull())
			scalingGroupsObject.launchTemplateVersion = valueScalingGroupsScalingGroup["LaunchTemplateVersion"].asString();
		if(!valueScalingGroupsScalingGroup["RegionId"].isNull())
			scalingGroupsObject.regionId = valueScalingGroupsScalingGroup["RegionId"].asString();
		if(!valueScalingGroupsScalingGroup["VSwitchId"].isNull())
			scalingGroupsObject.vSwitchId = valueScalingGroupsScalingGroup["VSwitchId"].asString();
		if(!valueScalingGroupsScalingGroup["MaxSize"].isNull())
			scalingGroupsObject.maxSize = std::stoi(valueScalingGroupsScalingGroup["MaxSize"].asString());
		if(!valueScalingGroupsScalingGroup["ScaleOutAmountCheck"].isNull())
			scalingGroupsObject.scaleOutAmountCheck = valueScalingGroupsScalingGroup["ScaleOutAmountCheck"].asString() == "true";
		if(!valueScalingGroupsScalingGroup["DefaultCooldown"].isNull())
			scalingGroupsObject.defaultCooldown = std::stoi(valueScalingGroupsScalingGroup["DefaultCooldown"].asString());
		if(!valueScalingGroupsScalingGroup["SystemSuspended"].isNull())
			scalingGroupsObject.systemSuspended = valueScalingGroupsScalingGroup["SystemSuspended"].asString() == "true";
		if(!valueScalingGroupsScalingGroup["IsElasticStrengthInAlarm"].isNull())
			scalingGroupsObject.isElasticStrengthInAlarm = valueScalingGroupsScalingGroup["IsElasticStrengthInAlarm"].asString() == "true";
		if(!valueScalingGroupsScalingGroup["MonitorGroupId"].isNull())
			scalingGroupsObject.monitorGroupId = valueScalingGroupsScalingGroup["MonitorGroupId"].asString();
		if(!valueScalingGroupsScalingGroup["AzBalance"].isNull())
			scalingGroupsObject.azBalance = valueScalingGroupsScalingGroup["AzBalance"].asString() == "true";
		if(!valueScalingGroupsScalingGroup["AllocationStrategy"].isNull())
			scalingGroupsObject.allocationStrategy = valueScalingGroupsScalingGroup["AllocationStrategy"].asString();
		if(!valueScalingGroupsScalingGroup["SpotAllocationStrategy"].isNull())
			scalingGroupsObject.spotAllocationStrategy = valueScalingGroupsScalingGroup["SpotAllocationStrategy"].asString();
		if(!valueScalingGroupsScalingGroup["MaxInstanceLifetime"].isNull())
			scalingGroupsObject.maxInstanceLifetime = std::stoi(valueScalingGroupsScalingGroup["MaxInstanceLifetime"].asString());
		if(!valueScalingGroupsScalingGroup["CustomPolicyARN"].isNull())
			scalingGroupsObject.customPolicyARN = valueScalingGroupsScalingGroup["CustomPolicyARN"].asString();
		if(!valueScalingGroupsScalingGroup["InitCapacity"].isNull())
			scalingGroupsObject.initCapacity = std::stoi(valueScalingGroupsScalingGroup["InitCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["ResourceGroupId"].isNull())
			scalingGroupsObject.resourceGroupId = valueScalingGroupsScalingGroup["ResourceGroupId"].asString();
		if(!valueScalingGroupsScalingGroup["EnableDesiredCapacity"].isNull())
			scalingGroupsObject.enableDesiredCapacity = valueScalingGroupsScalingGroup["EnableDesiredCapacity"].asString() == "true";
		if(!valueScalingGroupsScalingGroup["SpotCapacity"].isNull())
			scalingGroupsObject.spotCapacity = std::stoi(valueScalingGroupsScalingGroup["SpotCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["StopInstanceTimeout"].isNull())
			scalingGroupsObject.stopInstanceTimeout = std::stoi(valueScalingGroupsScalingGroup["StopInstanceTimeout"].asString());
		auto allVServerGroupsNode = valueScalingGroupsScalingGroup["VServerGroups"]["VServerGroup"];
		for (auto valueScalingGroupsScalingGroupVServerGroupsVServerGroup : allVServerGroupsNode)
		{
			ScalingGroup::VServerGroup vServerGroupsObject;
			if(!valueScalingGroupsScalingGroupVServerGroupsVServerGroup["LoadBalancerId"].isNull())
				vServerGroupsObject.loadBalancerId = valueScalingGroupsScalingGroupVServerGroupsVServerGroup["LoadBalancerId"].asString();
			auto allVServerGroupAttributesNode = valueScalingGroupsScalingGroupVServerGroupsVServerGroup["VServerGroupAttributes"]["VServerGroupAttribute"];
			for (auto valueScalingGroupsScalingGroupVServerGroupsVServerGroupVServerGroupAttributesVServerGroupAttribute : allVServerGroupAttributesNode)
			{
				ScalingGroup::VServerGroup::VServerGroupAttribute vServerGroupAttributesObject;
				if(!valueScalingGroupsScalingGroupVServerGroupsVServerGroupVServerGroupAttributesVServerGroupAttribute["VServerGroupId"].isNull())
					vServerGroupAttributesObject.vServerGroupId = valueScalingGroupsScalingGroupVServerGroupsVServerGroupVServerGroupAttributesVServerGroupAttribute["VServerGroupId"].asString();
				if(!valueScalingGroupsScalingGroupVServerGroupsVServerGroupVServerGroupAttributesVServerGroupAttribute["Weight"].isNull())
					vServerGroupAttributesObject.weight = std::stoi(valueScalingGroupsScalingGroupVServerGroupsVServerGroupVServerGroupAttributesVServerGroupAttribute["Weight"].asString());
				if(!valueScalingGroupsScalingGroupVServerGroupsVServerGroupVServerGroupAttributesVServerGroupAttribute["Port"].isNull())
					vServerGroupAttributesObject.port = std::stoi(valueScalingGroupsScalingGroupVServerGroupsVServerGroupVServerGroupAttributesVServerGroupAttribute["Port"].asString());
				vServerGroupsObject.vServerGroupAttributes.push_back(vServerGroupAttributesObject);
			}
			scalingGroupsObject.vServerGroups.push_back(vServerGroupsObject);
		}
		auto allLaunchTemplateOverridesNode = valueScalingGroupsScalingGroup["LaunchTemplateOverrides"]["LaunchTemplateOverride"];
		for (auto valueScalingGroupsScalingGroupLaunchTemplateOverridesLaunchTemplateOverride : allLaunchTemplateOverridesNode)
		{
			ScalingGroup::LaunchTemplateOverride launchTemplateOverridesObject;
			if(!valueScalingGroupsScalingGroupLaunchTemplateOverridesLaunchTemplateOverride["WeightedCapacity"].isNull())
				launchTemplateOverridesObject.weightedCapacity = std::stoi(valueScalingGroupsScalingGroupLaunchTemplateOverridesLaunchTemplateOverride["WeightedCapacity"].asString());
			if(!valueScalingGroupsScalingGroupLaunchTemplateOverridesLaunchTemplateOverride["InstanceType"].isNull())
				launchTemplateOverridesObject.instanceType = valueScalingGroupsScalingGroupLaunchTemplateOverridesLaunchTemplateOverride["InstanceType"].asString();
			if(!valueScalingGroupsScalingGroupLaunchTemplateOverridesLaunchTemplateOverride["SpotPriceLimit"].isNull())
				launchTemplateOverridesObject.spotPriceLimit = std::stof(valueScalingGroupsScalingGroupLaunchTemplateOverridesLaunchTemplateOverride["SpotPriceLimit"].asString());
			scalingGroupsObject.launchTemplateOverrides.push_back(launchTemplateOverridesObject);
		}
		auto allAlbServerGroupsNode = valueScalingGroupsScalingGroup["AlbServerGroups"]["AlbServerGroup"];
		for (auto valueScalingGroupsScalingGroupAlbServerGroupsAlbServerGroup : allAlbServerGroupsNode)
		{
			ScalingGroup::AlbServerGroup albServerGroupsObject;
			if(!valueScalingGroupsScalingGroupAlbServerGroupsAlbServerGroup["AlbServerGroupId"].isNull())
				albServerGroupsObject.albServerGroupId = valueScalingGroupsScalingGroupAlbServerGroupsAlbServerGroup["AlbServerGroupId"].asString();
			if(!valueScalingGroupsScalingGroupAlbServerGroupsAlbServerGroup["Weight"].isNull())
				albServerGroupsObject.weight = std::stoi(valueScalingGroupsScalingGroupAlbServerGroupsAlbServerGroup["Weight"].asString());
			if(!valueScalingGroupsScalingGroupAlbServerGroupsAlbServerGroup["Port"].isNull())
				albServerGroupsObject.port = std::stoi(valueScalingGroupsScalingGroupAlbServerGroupsAlbServerGroup["Port"].asString());
			scalingGroupsObject.albServerGroups.push_back(albServerGroupsObject);
		}
		auto allServerGroupsNode = valueScalingGroupsScalingGroup["ServerGroups"]["ServerGroup"];
		for (auto valueScalingGroupsScalingGroupServerGroupsServerGroup : allServerGroupsNode)
		{
			ScalingGroup::ServerGroup serverGroupsObject;
			if(!valueScalingGroupsScalingGroupServerGroupsServerGroup["ServerGroupId"].isNull())
				serverGroupsObject.serverGroupId = valueScalingGroupsScalingGroupServerGroupsServerGroup["ServerGroupId"].asString();
			if(!valueScalingGroupsScalingGroupServerGroupsServerGroup["Type"].isNull())
				serverGroupsObject.type = valueScalingGroupsScalingGroupServerGroupsServerGroup["Type"].asString();
			if(!valueScalingGroupsScalingGroupServerGroupsServerGroup["Weight"].isNull())
				serverGroupsObject.weight = std::stoi(valueScalingGroupsScalingGroupServerGroupsServerGroup["Weight"].asString());
			if(!valueScalingGroupsScalingGroupServerGroupsServerGroup["Port"].isNull())
				serverGroupsObject.port = std::stoi(valueScalingGroupsScalingGroupServerGroupsServerGroup["Port"].asString());
			scalingGroupsObject.serverGroups.push_back(serverGroupsObject);
		}
		auto allLoadBalancerConfigsNode = valueScalingGroupsScalingGroup["LoadBalancerConfigs"]["LoadBalancerConfig"];
		for (auto valueScalingGroupsScalingGroupLoadBalancerConfigsLoadBalancerConfig : allLoadBalancerConfigsNode)
		{
			ScalingGroup::LoadBalancerConfig loadBalancerConfigsObject;
			if(!valueScalingGroupsScalingGroupLoadBalancerConfigsLoadBalancerConfig["LoadBalancerId"].isNull())
				loadBalancerConfigsObject.loadBalancerId = valueScalingGroupsScalingGroupLoadBalancerConfigsLoadBalancerConfig["LoadBalancerId"].asString();
			if(!valueScalingGroupsScalingGroupLoadBalancerConfigsLoadBalancerConfig["Weight"].isNull())
				loadBalancerConfigsObject.weight = std::stoi(valueScalingGroupsScalingGroupLoadBalancerConfigsLoadBalancerConfig["Weight"].asString());
			scalingGroupsObject.loadBalancerConfigs.push_back(loadBalancerConfigsObject);
		}
		auto allTagsNode = valueScalingGroupsScalingGroup["Tags"]["Tag"];
		for (auto valueScalingGroupsScalingGroupTagsTag : allTagsNode)
		{
			ScalingGroup::Tag tagsObject;
			if(!valueScalingGroupsScalingGroupTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueScalingGroupsScalingGroupTagsTag["TagKey"].asString();
			if(!valueScalingGroupsScalingGroupTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueScalingGroupsScalingGroupTagsTag["TagValue"].asString();
			if(!valueScalingGroupsScalingGroupTagsTag["Propagate"].isNull())
				tagsObject.propagate = valueScalingGroupsScalingGroupTagsTag["Propagate"].asString() == "true";
			scalingGroupsObject.tags.push_back(tagsObject);
		}
		auto allDBInstancesNode = valueScalingGroupsScalingGroup["DBInstances"]["DBInstance"];
		for (auto valueScalingGroupsScalingGroupDBInstancesDBInstance : allDBInstancesNode)
		{
			ScalingGroup::DBInstance dBInstancesObject;
			if(!valueScalingGroupsScalingGroupDBInstancesDBInstance["DBInstanceId"].isNull())
				dBInstancesObject.dBInstanceId = valueScalingGroupsScalingGroupDBInstancesDBInstance["DBInstanceId"].asString();
			if(!valueScalingGroupsScalingGroupDBInstancesDBInstance["Type"].isNull())
				dBInstancesObject.type = valueScalingGroupsScalingGroupDBInstancesDBInstance["Type"].asString();
			auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
			for (auto value : allSecurityGroupIds)
				dBInstancesObject.securityGroupIds.push_back(value.asString());
			scalingGroupsObject.dBInstances.push_back(dBInstancesObject);
		}
		auto capacityOptionsNode = value["CapacityOptions"];
		if(!capacityOptionsNode["OnDemandBaseCapacity"].isNull())
			scalingGroupsObject.capacityOptions.onDemandBaseCapacity = std::stoi(capacityOptionsNode["OnDemandBaseCapacity"].asString());
		if(!capacityOptionsNode["OnDemandPercentageAboveBaseCapacity"].isNull())
			scalingGroupsObject.capacityOptions.onDemandPercentageAboveBaseCapacity = std::stoi(capacityOptionsNode["OnDemandPercentageAboveBaseCapacity"].asString());
		if(!capacityOptionsNode["CompensateWithOnDemand"].isNull())
			scalingGroupsObject.capacityOptions.compensateWithOnDemand = capacityOptionsNode["CompensateWithOnDemand"].asString() == "true";
		if(!capacityOptionsNode["SpotAutoReplaceOnDemand"].isNull())
			scalingGroupsObject.capacityOptions.spotAutoReplaceOnDemand = capacityOptionsNode["SpotAutoReplaceOnDemand"].asString() == "true";
		if(!capacityOptionsNode["PriceComparisonMode"].isNull())
			scalingGroupsObject.capacityOptions.priceComparisonMode = capacityOptionsNode["PriceComparisonMode"].asString();
		auto allRemovalPolicies = value["RemovalPolicies"]["RemovalPolicy"];
		for (auto value : allRemovalPolicies)
			scalingGroupsObject.removalPolicies.push_back(value.asString());
		auto allDBInstanceIds = value["DBInstanceIds"]["DBInstanceId"];
		for (auto value : allDBInstanceIds)
			scalingGroupsObject.dBInstanceIds.push_back(value.asString());
		auto allLoadBalancerIds = value["LoadBalancerIds"]["LoadBalancerId"];
		for (auto value : allLoadBalancerIds)
			scalingGroupsObject.loadBalancerIds.push_back(value.asString());
		auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
		for (auto value : allVSwitchIds)
			scalingGroupsObject.vSwitchIds.push_back(value.asString());
		auto allSuspendedProcesses = value["SuspendedProcesses"]["SuspendedProcess"];
		for (auto value : allSuspendedProcesses)
			scalingGroupsObject.suspendedProcesses.push_back(value.asString());
		auto allHealthCheckTypes = value["HealthCheckTypes"]["HealthCheckType"];
		for (auto value : allHealthCheckTypes)
			scalingGroupsObject.healthCheckTypes.push_back(value.asString());
		scalingGroups_.push_back(scalingGroupsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeScalingGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeScalingGroupsResult::ScalingGroup> DescribeScalingGroupsResult::getScalingGroups()const
{
	return scalingGroups_;
}

int DescribeScalingGroupsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeScalingGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

