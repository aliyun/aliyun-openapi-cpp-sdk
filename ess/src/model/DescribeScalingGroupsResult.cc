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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allScalingGroups = value["ScalingGroups"]["ScalingGroup"];
	for (auto value : allScalingGroups)
	{
		ScalingGroup scalingGroupsObject;
		if(!value["DefaultCooldown"].isNull())
			scalingGroupsObject.defaultCooldown = std::stoi(value["DefaultCooldown"].asString());
		if(!value["MaxSize"].isNull())
			scalingGroupsObject.maxSize = std::stoi(value["MaxSize"].asString());
		if(!value["PendingWaitCapacity"].isNull())
			scalingGroupsObject.pendingWaitCapacity = std::stoi(value["PendingWaitCapacity"].asString());
		if(!value["RemovingWaitCapacity"].isNull())
			scalingGroupsObject.removingWaitCapacity = std::stoi(value["RemovingWaitCapacity"].asString());
		if(!value["PendingCapacity"].isNull())
			scalingGroupsObject.pendingCapacity = std::stoi(value["PendingCapacity"].asString());
		if(!value["RemovingCapacity"].isNull())
			scalingGroupsObject.removingCapacity = std::stoi(value["RemovingCapacity"].asString());
		if(!value["ScalingGroupName"].isNull())
			scalingGroupsObject.scalingGroupName = value["ScalingGroupName"].asString();
		if(!value["ActiveCapacity"].isNull())
			scalingGroupsObject.activeCapacity = std::stoi(value["ActiveCapacity"].asString());
		if(!value["StandbyCapacity"].isNull())
			scalingGroupsObject.standbyCapacity = std::stoi(value["StandbyCapacity"].asString());
		if(!value["ProtectedCapacity"].isNull())
			scalingGroupsObject.protectedCapacity = std::stoi(value["ProtectedCapacity"].asString());
		if(!value["ActiveScalingConfigurationId"].isNull())
			scalingGroupsObject.activeScalingConfigurationId = value["ActiveScalingConfigurationId"].asString();
		if(!value["LaunchTemplateId"].isNull())
			scalingGroupsObject.launchTemplateId = value["LaunchTemplateId"].asString();
		if(!value["LaunchTemplateVersion"].isNull())
			scalingGroupsObject.launchTemplateVersion = value["LaunchTemplateVersion"].asString();
		if(!value["ScalingGroupId"].isNull())
			scalingGroupsObject.scalingGroupId = value["ScalingGroupId"].asString();
		if(!value["RegionId"].isNull())
			scalingGroupsObject.regionId = value["RegionId"].asString();
		if(!value["TotalCapacity"].isNull())
			scalingGroupsObject.totalCapacity = std::stoi(value["TotalCapacity"].asString());
		if(!value["MinSize"].isNull())
			scalingGroupsObject.minSize = std::stoi(value["MinSize"].asString());
		if(!value["LifecycleState"].isNull())
			scalingGroupsObject.lifecycleState = value["LifecycleState"].asString();
		if(!value["CreationTime"].isNull())
			scalingGroupsObject.creationTime = value["CreationTime"].asString();
		if(!value["ModificationTime"].isNull())
			scalingGroupsObject.modificationTime = value["ModificationTime"].asString();
		if(!value["VpcId"].isNull())
			scalingGroupsObject.vpcId = value["VpcId"].asString();
		if(!value["VSwitchId"].isNull())
			scalingGroupsObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["MultiAZPolicy"].isNull())
			scalingGroupsObject.multiAZPolicy = value["MultiAZPolicy"].asString();
		if(!value["HealthCheckType"].isNull())
			scalingGroupsObject.healthCheckType = value["HealthCheckType"].asString();
		if(!value["ScalingPolicy"].isNull())
			scalingGroupsObject.scalingPolicy = value["ScalingPolicy"].asString();
		if(!value["StoppedCapacity"].isNull())
			scalingGroupsObject.stoppedCapacity = std::stoi(value["StoppedCapacity"].asString());
		if(!value["OnDemandBaseCapacity"].isNull())
			scalingGroupsObject.onDemandBaseCapacity = std::stoi(value["OnDemandBaseCapacity"].asString());
		if(!value["OnDemandPercentageAboveBaseCapacity"].isNull())
			scalingGroupsObject.onDemandPercentageAboveBaseCapacity = std::stoi(value["OnDemandPercentageAboveBaseCapacity"].asString());
		if(!value["SpotInstanceRemedy"].isNull())
			scalingGroupsObject.spotInstanceRemedy = value["SpotInstanceRemedy"].asString() == "true";
		if(!value["SpotInstancePools"].isNull())
			scalingGroupsObject.spotInstancePools = std::stoi(value["SpotInstancePools"].asString());
		auto allVServerGroups = value["VServerGroups"]["VServerGroup"];
		for (auto value : allVServerGroups)
		{
			ScalingGroup::VServerGroup vServerGroupsObject;
			if(!value["LoadBalancerId"].isNull())
				vServerGroupsObject.loadBalancerId = value["LoadBalancerId"].asString();
			auto allVServerGroupAttributes = value["VServerGroupAttributes"]["VServerGroupAttribute"];
			for (auto value : allVServerGroupAttributes)
			{
				ScalingGroup::VServerGroup::VServerGroupAttribute vServerGroupAttributesObject;
				if(!value["VServerGroupId"].isNull())
					vServerGroupAttributesObject.vServerGroupId = value["VServerGroupId"].asString();
				if(!value["Port"].isNull())
					vServerGroupAttributesObject.port = std::stoi(value["Port"].asString());
				if(!value["Weight"].isNull())
					vServerGroupAttributesObject.weight = std::stoi(value["Weight"].asString());
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

