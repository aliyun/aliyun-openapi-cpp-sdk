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

#include <alibabacloud/ess/model/DescribeLimitationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeLimitationResult::DescribeLimitationResult() :
	ServiceResult()
{}

DescribeLimitationResult::DescribeLimitationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLimitationResult::~DescribeLimitationResult()
{}

void DescribeLimitationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["MaxNumberOfScheduledTasks"].isNull())
		maxNumberOfScheduledTasks_ = std::stoi(value["MaxNumberOfScheduledTasks"].asString());
	if(!value["MaxNumberOfLoadBalancers"].isNull())
		maxNumberOfLoadBalancers_ = std::stoi(value["MaxNumberOfLoadBalancers"].asString());
	if(!value["MaxNumberOfMaxSize"].isNull())
		maxNumberOfMaxSize_ = std::stoi(value["MaxNumberOfMaxSize"].asString());
	if(!value["MaxNumberOfAlbServerGroup"].isNull())
		maxNumberOfAlbServerGroup_ = std::stoi(value["MaxNumberOfAlbServerGroup"].asString());
	if(!value["MaxNumberOfNlbServerGroup"].isNull())
		maxNumberOfNlbServerGroup_ = std::stoi(value["MaxNumberOfNlbServerGroup"].asString());
	if(!value["MaxNumberOfDBInstances"].isNull())
		maxNumberOfDBInstances_ = std::stoi(value["MaxNumberOfDBInstances"].asString());
	if(!value["MaxNumberOfScalingConfigurations"].isNull())
		maxNumberOfScalingConfigurations_ = std::stoi(value["MaxNumberOfScalingConfigurations"].asString());
	if(!value["MaxNumberOfMinSize"].isNull())
		maxNumberOfMinSize_ = std::stoi(value["MaxNumberOfMinSize"].asString());
	if(!value["MaxNumberOfLifecycleHooks"].isNull())
		maxNumberOfLifecycleHooks_ = std::stoi(value["MaxNumberOfLifecycleHooks"].asString());
	if(!value["MaxNumberOfScalingInstances"].isNull())
		maxNumberOfScalingInstances_ = std::stoi(value["MaxNumberOfScalingInstances"].asString());
	if(!value["MaxNumberOfScalingGroups"].isNull())
		maxNumberOfScalingGroups_ = std::stoi(value["MaxNumberOfScalingGroups"].asString());
	if(!value["MaxNumberOfNotificationConfigurations"].isNull())
		maxNumberOfNotificationConfigurations_ = std::stoi(value["MaxNumberOfNotificationConfigurations"].asString());
	if(!value["MaxNumberOfVServerGroups"].isNull())
		maxNumberOfVServerGroups_ = std::stoi(value["MaxNumberOfVServerGroups"].asString());
	if(!value["MaxNumberOfScalingRules"].isNull())
		maxNumberOfScalingRules_ = std::stoi(value["MaxNumberOfScalingRules"].asString());

}

int DescribeLimitationResult::getMaxNumberOfScalingInstances()const
{
	return maxNumberOfScalingInstances_;
}

int DescribeLimitationResult::getMaxNumberOfScheduledTasks()const
{
	return maxNumberOfScheduledTasks_;
}

int DescribeLimitationResult::getMaxNumberOfVServerGroups()const
{
	return maxNumberOfVServerGroups_;
}

int DescribeLimitationResult::getMaxNumberOfLoadBalancers()const
{
	return maxNumberOfLoadBalancers_;
}

int DescribeLimitationResult::getMaxNumberOfAlbServerGroup()const
{
	return maxNumberOfAlbServerGroup_;
}

int DescribeLimitationResult::getMaxNumberOfMinSize()const
{
	return maxNumberOfMinSize_;
}

int DescribeLimitationResult::getMaxNumberOfScalingGroups()const
{
	return maxNumberOfScalingGroups_;
}

int DescribeLimitationResult::getMaxNumberOfNotificationConfigurations()const
{
	return maxNumberOfNotificationConfigurations_;
}

int DescribeLimitationResult::getMaxNumberOfMaxSize()const
{
	return maxNumberOfMaxSize_;
}

int DescribeLimitationResult::getMaxNumberOfDBInstances()const
{
	return maxNumberOfDBInstances_;
}

int DescribeLimitationResult::getMaxNumberOfLifecycleHooks()const
{
	return maxNumberOfLifecycleHooks_;
}

int DescribeLimitationResult::getMaxNumberOfScalingRules()const
{
	return maxNumberOfScalingRules_;
}

int DescribeLimitationResult::getMaxNumberOfNlbServerGroup()const
{
	return maxNumberOfNlbServerGroup_;
}

int DescribeLimitationResult::getMaxNumberOfScalingConfigurations()const
{
	return maxNumberOfScalingConfigurations_;
}

