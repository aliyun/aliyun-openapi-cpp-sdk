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
	auto allScalingGroups = value["ScalingGroups"]["ScalingGroup"];
	for (auto value : allScalingGroups)
	{
		ScalingGroup scalingGroupObject;
		if(!value["DefaultCooldown"].isNull())
			scalingGroupObject.defaultCooldown = std::stoi(value["DefaultCooldown"].asString());
		if(!value["MaxSize"].isNull())
			scalingGroupObject.maxSize = std::stoi(value["MaxSize"].asString());
		if(!value["PendingCapacity"].isNull())
			scalingGroupObject.pendingCapacity = std::stoi(value["PendingCapacity"].asString());
		if(!value["RemovingCapacity"].isNull())
			scalingGroupObject.removingCapacity = std::stoi(value["RemovingCapacity"].asString());
		if(!value["ScalingGroupName"].isNull())
			scalingGroupObject.scalingGroupName = value["ScalingGroupName"].asString();
		if(!value["ActiveCapacity"].isNull())
			scalingGroupObject.activeCapacity = std::stoi(value["ActiveCapacity"].asString());
		if(!value["ActiveScalingConfigurationId"].isNull())
			scalingGroupObject.activeScalingConfigurationId = value["ActiveScalingConfigurationId"].asString();
		if(!value["ScalingGroupId"].isNull())
			scalingGroupObject.scalingGroupId = value["ScalingGroupId"].asString();
		if(!value["RegionId"].isNull())
			scalingGroupObject.regionId = value["RegionId"].asString();
		if(!value["TotalCapacity"].isNull())
			scalingGroupObject.totalCapacity = std::stoi(value["TotalCapacity"].asString());
		if(!value["MinSize"].isNull())
			scalingGroupObject.minSize = std::stoi(value["MinSize"].asString());
		if(!value["LifecycleState"].isNull())
			scalingGroupObject.lifecycleState = value["LifecycleState"].asString();
		if(!value["CreationTime"].isNull())
			scalingGroupObject.creationTime = value["CreationTime"].asString();
		if(!value["ModificationTime"].isNull())
			scalingGroupObject.modificationTime = value["ModificationTime"].asString();
		if(!value["VpcId"].isNull())
			scalingGroupObject.vpcId = value["VpcId"].asString();
		if(!value["VSwitchId"].isNull())
			scalingGroupObject.vSwitchId = value["VSwitchId"].asString();
		auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
		for (auto value : allVSwitchIds)
			scalingGroupObject.vSwitchIds.push_back(value.asString());
		auto allRemovalPolicies = value["RemovalPolicies"]["RemovalPolicy"];
		for (auto value : allRemovalPolicies)
			scalingGroupObject.removalPolicies.push_back(value.asString());
		auto allDBInstanceIds = value["DBInstanceIds"]["DBInstanceId"];
		for (auto value : allDBInstanceIds)
			scalingGroupObject.dBInstanceIds.push_back(value.asString());
		auto allLoadBalancerIds = value["LoadBalancerIds"]["LoadBalancerId"];
		for (auto value : allLoadBalancerIds)
			scalingGroupObject.loadBalancerIds.push_back(value.asString());
		scalingGroups_.push_back(scalingGroupObject);
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

void DescribeScalingGroupsResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeScalingGroupsResult::getPageSize()const
{
	return pageSize_;
}

void DescribeScalingGroupsResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeScalingGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeScalingGroupsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

