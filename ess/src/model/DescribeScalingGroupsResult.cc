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
		if(!valueScalingGroupsScalingGroup["DefaultCooldown"].isNull())
			scalingGroupsObject.defaultCooldown = std::stoi(valueScalingGroupsScalingGroup["DefaultCooldown"].asString());
		if(!valueScalingGroupsScalingGroup["MaxSize"].isNull())
			scalingGroupsObject.maxSize = std::stoi(valueScalingGroupsScalingGroup["MaxSize"].asString());
		if(!valueScalingGroupsScalingGroup["PendingWaitCapacity"].isNull())
			scalingGroupsObject.pendingWaitCapacity = std::stoi(valueScalingGroupsScalingGroup["PendingWaitCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["RemovingWaitCapacity"].isNull())
			scalingGroupsObject.removingWaitCapacity = std::stoi(valueScalingGroupsScalingGroup["RemovingWaitCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["PendingCapacity"].isNull())
			scalingGroupsObject.pendingCapacity = std::stoi(valueScalingGroupsScalingGroup["PendingCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["RemovingCapacity"].isNull())
			scalingGroupsObject.removingCapacity = std::stoi(valueScalingGroupsScalingGroup["RemovingCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["ScalingGroupName"].isNull())
			scalingGroupsObject.scalingGroupName = valueScalingGroupsScalingGroup["ScalingGroupName"].asString();
		if(!valueScalingGroupsScalingGroup["ActiveCapacity"].isNull())
			scalingGroupsObject.activeCapacity = std::stoi(valueScalingGroupsScalingGroup["ActiveCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["StandbyCapacity"].isNull())
			scalingGroupsObject.standbyCapacity = std::stoi(valueScalingGroupsScalingGroup["StandbyCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["ProtectedCapacity"].isNull())
			scalingGroupsObject.protectedCapacity = std::stoi(valueScalingGroupsScalingGroup["ProtectedCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["ActiveScalingConfigurationId"].isNull())
			scalingGroupsObject.activeScalingConfigurationId = valueScalingGroupsScalingGroup["ActiveScalingConfigurationId"].asString();
		if(!valueScalingGroupsScalingGroup["LaunchTemplateId"].isNull())
			scalingGroupsObject.launchTemplateId = valueScalingGroupsScalingGroup["LaunchTemplateId"].asString();
		if(!valueScalingGroupsScalingGroup["LaunchTemplateVersion"].isNull())
			scalingGroupsObject.launchTemplateVersion = valueScalingGroupsScalingGroup["LaunchTemplateVersion"].asString();
		if(!valueScalingGroupsScalingGroup["ScalingGroupId"].isNull())
			scalingGroupsObject.scalingGroupId = valueScalingGroupsScalingGroup["ScalingGroupId"].asString();
		if(!valueScalingGroupsScalingGroup["RegionId"].isNull())
			scalingGroupsObject.regionId = valueScalingGroupsScalingGroup["RegionId"].asString();
		if(!valueScalingGroupsScalingGroup["TotalCapacity"].isNull())
			scalingGroupsObject.totalCapacity = std::stoi(valueScalingGroupsScalingGroup["TotalCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["MinSize"].isNull())
			scalingGroupsObject.minSize = std::stoi(valueScalingGroupsScalingGroup["MinSize"].asString());
		if(!valueScalingGroupsScalingGroup["LifecycleState"].isNull())
			scalingGroupsObject.lifecycleState = valueScalingGroupsScalingGroup["LifecycleState"].asString();
		if(!valueScalingGroupsScalingGroup["CreationTime"].isNull())
			scalingGroupsObject.creationTime = valueScalingGroupsScalingGroup["CreationTime"].asString();
		if(!valueScalingGroupsScalingGroup["ModificationTime"].isNull())
			scalingGroupsObject.modificationTime = valueScalingGroupsScalingGroup["ModificationTime"].asString();
		if(!valueScalingGroupsScalingGroup["VpcId"].isNull())
			scalingGroupsObject.vpcId = valueScalingGroupsScalingGroup["VpcId"].asString();
		if(!valueScalingGroupsScalingGroup["VSwitchId"].isNull())
			scalingGroupsObject.vSwitchId = valueScalingGroupsScalingGroup["VSwitchId"].asString();
		if(!valueScalingGroupsScalingGroup["MultiAZPolicy"].isNull())
			scalingGroupsObject.multiAZPolicy = valueScalingGroupsScalingGroup["MultiAZPolicy"].asString();
		if(!valueScalingGroupsScalingGroup["HealthCheckType"].isNull())
			scalingGroupsObject.healthCheckType = valueScalingGroupsScalingGroup["HealthCheckType"].asString();
		if(!valueScalingGroupsScalingGroup["ScalingPolicy"].isNull())
			scalingGroupsObject.scalingPolicy = valueScalingGroupsScalingGroup["ScalingPolicy"].asString();
		if(!valueScalingGroupsScalingGroup["StoppedCapacity"].isNull())
			scalingGroupsObject.stoppedCapacity = std::stoi(valueScalingGroupsScalingGroup["StoppedCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["OnDemandBaseCapacity"].isNull())
			scalingGroupsObject.onDemandBaseCapacity = std::stoi(valueScalingGroupsScalingGroup["OnDemandBaseCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["OnDemandPercentageAboveBaseCapacity"].isNull())
			scalingGroupsObject.onDemandPercentageAboveBaseCapacity = std::stoi(valueScalingGroupsScalingGroup["OnDemandPercentageAboveBaseCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["SpotInstanceRemedy"].isNull())
			scalingGroupsObject.spotInstanceRemedy = valueScalingGroupsScalingGroup["SpotInstanceRemedy"].asString() == "true";
		if(!valueScalingGroupsScalingGroup["SpotInstancePools"].isNull())
			scalingGroupsObject.spotInstancePools = std::stoi(valueScalingGroupsScalingGroup["SpotInstancePools"].asString());
		if(!valueScalingGroupsScalingGroup["DesiredCapacity"].isNull())
			scalingGroupsObject.desiredCapacity = std::stoi(valueScalingGroupsScalingGroup["DesiredCapacity"].asString());
		if(!valueScalingGroupsScalingGroup["GroupDeletionProtection"].isNull())
			scalingGroupsObject.groupDeletionProtection = valueScalingGroupsScalingGroup["GroupDeletionProtection"].asString() == "true";
		auto allVServerGroupsNode = allScalingGroupsNode["VServerGroups"]["VServerGroup"];
		for (auto allScalingGroupsNodeVServerGroupsVServerGroup : allVServerGroupsNode)
		{
			ScalingGroup::VServerGroup vServerGroupsObject;
			if(!allScalingGroupsNodeVServerGroupsVServerGroup["LoadBalancerId"].isNull())
				vServerGroupsObject.loadBalancerId = allScalingGroupsNodeVServerGroupsVServerGroup["LoadBalancerId"].asString();
			auto allVServerGroupAttributesNode = allVServerGroupsNode["VServerGroupAttributes"]["VServerGroupAttribute"];
			for (auto allVServerGroupsNodeVServerGroupAttributesVServerGroupAttribute : allVServerGroupAttributesNode)
			{
				ScalingGroup::VServerGroup::VServerGroupAttribute vServerGroupAttributesObject;
				if(!allVServerGroupsNodeVServerGroupAttributesVServerGroupAttribute["VServerGroupId"].isNull())
					vServerGroupAttributesObject.vServerGroupId = allVServerGroupsNodeVServerGroupAttributesVServerGroupAttribute["VServerGroupId"].asString();
				if(!allVServerGroupsNodeVServerGroupAttributesVServerGroupAttribute["Port"].isNull())
					vServerGroupAttributesObject.port = std::stoi(allVServerGroupsNodeVServerGroupAttributesVServerGroupAttribute["Port"].asString());
				if(!allVServerGroupsNodeVServerGroupAttributesVServerGroupAttribute["Weight"].isNull())
					vServerGroupAttributesObject.weight = std::stoi(allVServerGroupsNodeVServerGroupAttributesVServerGroupAttribute["Weight"].asString());
				vServerGroupsObject.vServerGroupAttributes.push_back(vServerGroupAttributesObject);
			}
			scalingGroupsObject.vServerGroups.push_back(vServerGroupsObject);
		}
		auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
		for (auto value : allVSwitchIds)
			scalingGroupsObject.vSwitchIds.push_back(value.asString());
		auto allRemovalPolicies = value["RemovalPolicies"]["RemovalPolicy"];
		for (auto value : allRemovalPolicies)
			scalingGroupsObject.removalPolicies.push_back(value.asString());
		auto allDBInstanceIds = value["DBInstanceIds"]["DBInstanceId"];
		for (auto value : allDBInstanceIds)
			scalingGroupsObject.dBInstanceIds.push_back(value.asString());
		auto allLoadBalancerIds = value["LoadBalancerIds"]["LoadBalancerId"];
		for (auto value : allLoadBalancerIds)
			scalingGroupsObject.loadBalancerIds.push_back(value.asString());
		auto allSuspendedProcesses = value["SuspendedProcesses"]["SuspendedProcess"];
		for (auto value : allSuspendedProcesses)
			scalingGroupsObject.suspendedProcesses.push_back(value.asString());
		scalingGroups_.push_back(scalingGroupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

