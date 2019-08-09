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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allScalingInstances = value["ScalingInstances"]["ScalingInstance"];
	for (auto value : allScalingInstances)
	{
		ScalingInstance scalingInstancesObject;
		if(!value["InstanceId"].isNull())
			scalingInstancesObject.instanceId = value["InstanceId"].asString();
		if(!value["ScalingConfigurationId"].isNull())
			scalingInstancesObject.scalingConfigurationId = value["ScalingConfigurationId"].asString();
		if(!value["ScalingGroupId"].isNull())
			scalingInstancesObject.scalingGroupId = value["ScalingGroupId"].asString();
		if(!value["HealthStatus"].isNull())
			scalingInstancesObject.healthStatus = value["HealthStatus"].asString();
		if(!value["LoadBalancerWeight"].isNull())
			scalingInstancesObject.loadBalancerWeight = std::stoi(value["LoadBalancerWeight"].asString());
		if(!value["LifecycleState"].isNull())
			scalingInstancesObject.lifecycleState = value["LifecycleState"].asString();
		if(!value["CreationTime"].isNull())
			scalingInstancesObject.creationTime = value["CreationTime"].asString();
		if(!value["CreationType"].isNull())
			scalingInstancesObject.creationType = value["CreationType"].asString();
		if(!value["LaunchTemplateId"].isNull())
			scalingInstancesObject.launchTemplateId = value["LaunchTemplateId"].asString();
		if(!value["LaunchTemplateVersion"].isNull())
			scalingInstancesObject.launchTemplateVersion = value["LaunchTemplateVersion"].asString();
		if(!value["WarmupState"].isNull())
			scalingInstancesObject.warmupState = value["WarmupState"].asString();
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

