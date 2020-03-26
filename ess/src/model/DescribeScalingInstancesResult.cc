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

#include <alibabacloud/ess/model/DescribeScalingInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeScalingInstancesResult::DescribeScalingInstancesResult() :
	ServiceResult()
{}

DescribeScalingInstancesResult::DescribeScalingInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScalingInstancesResult::~DescribeScalingInstancesResult()
{}

void DescribeScalingInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScalingInstancesNode = value["ScalingInstances"]["ScalingInstance"];
	for (auto valueScalingInstancesScalingInstance : allScalingInstancesNode)
	{
		ScalingInstance scalingInstancesObject;
		if(!valueScalingInstancesScalingInstance["InstanceId"].isNull())
			scalingInstancesObject.instanceId = valueScalingInstancesScalingInstance["InstanceId"].asString();
		if(!valueScalingInstancesScalingInstance["ScalingConfigurationId"].isNull())
			scalingInstancesObject.scalingConfigurationId = valueScalingInstancesScalingInstance["ScalingConfigurationId"].asString();
		if(!valueScalingInstancesScalingInstance["ScalingGroupId"].isNull())
			scalingInstancesObject.scalingGroupId = valueScalingInstancesScalingInstance["ScalingGroupId"].asString();
		if(!valueScalingInstancesScalingInstance["HealthStatus"].isNull())
			scalingInstancesObject.healthStatus = valueScalingInstancesScalingInstance["HealthStatus"].asString();
		if(!valueScalingInstancesScalingInstance["LoadBalancerWeight"].isNull())
			scalingInstancesObject.loadBalancerWeight = std::stoi(valueScalingInstancesScalingInstance["LoadBalancerWeight"].asString());
		if(!valueScalingInstancesScalingInstance["LifecycleState"].isNull())
			scalingInstancesObject.lifecycleState = valueScalingInstancesScalingInstance["LifecycleState"].asString();
		if(!valueScalingInstancesScalingInstance["CreationTime"].isNull())
			scalingInstancesObject.creationTime = valueScalingInstancesScalingInstance["CreationTime"].asString();
		if(!valueScalingInstancesScalingInstance["CreationType"].isNull())
			scalingInstancesObject.creationType = valueScalingInstancesScalingInstance["CreationType"].asString();
		if(!valueScalingInstancesScalingInstance["LaunchTemplateId"].isNull())
			scalingInstancesObject.launchTemplateId = valueScalingInstancesScalingInstance["LaunchTemplateId"].asString();
		if(!valueScalingInstancesScalingInstance["LaunchTemplateVersion"].isNull())
			scalingInstancesObject.launchTemplateVersion = valueScalingInstancesScalingInstance["LaunchTemplateVersion"].asString();
		if(!valueScalingInstancesScalingInstance["WarmupState"].isNull())
			scalingInstancesObject.warmupState = valueScalingInstancesScalingInstance["WarmupState"].asString();
		if(!valueScalingInstancesScalingInstance["Entrusted"].isNull())
			scalingInstancesObject.entrusted = valueScalingInstancesScalingInstance["Entrusted"].asString() == "true";
		scalingInstances_.push_back(scalingInstancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeScalingInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeScalingInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeScalingInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeScalingInstancesResult::ScalingInstance> DescribeScalingInstancesResult::getScalingInstances()const
{
	return scalingInstances_;
}

