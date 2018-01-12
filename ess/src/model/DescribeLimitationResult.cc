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
	if(!value["MaxNumberOfScalingGroups"].isNull())
		maxNumberOfScalingGroups_ = std::stoi(value["MaxNumberOfScalingGroups"].asString());
	if(!value["MaxNumberOfScalingConfigurations"].isNull())
		maxNumberOfScalingConfigurations_ = std::stoi(value["MaxNumberOfScalingConfigurations"].asString());
	if(!value["MaxNumberOfScalingRules"].isNull())
		maxNumberOfScalingRules_ = std::stoi(value["MaxNumberOfScalingRules"].asString());
	if(!value["MaxNumberOfScheduledTasks"].isNull())
		maxNumberOfScheduledTasks_ = std::stoi(value["MaxNumberOfScheduledTasks"].asString());
	if(!value["MaxNumberOfScalingInstances"].isNull())
		maxNumberOfScalingInstances_ = std::stoi(value["MaxNumberOfScalingInstances"].asString());
	if(!value["MaxNumberOfDBInstances"].isNull())
		maxNumberOfDBInstances_ = std::stoi(value["MaxNumberOfDBInstances"].asString());
	if(!value["MaxNumberOfLoadBalancers"].isNull())
		maxNumberOfLoadBalancers_ = std::stoi(value["MaxNumberOfLoadBalancers"].asString());
	if(!value["MaxNumberOfMinSize"].isNull())
		maxNumberOfMinSize_ = std::stoi(value["MaxNumberOfMinSize"].asString());
	if(!value["MaxNumberOfMaxSize"].isNull())
		maxNumberOfMaxSize_ = std::stoi(value["MaxNumberOfMaxSize"].asString());

}

int DescribeLimitationResult::getMaxNumberOfScalingRules()const
{
	return maxNumberOfScalingRules_;
}

void DescribeLimitationResult::setMaxNumberOfScalingRules(int maxNumberOfScalingRules)
{
	maxNumberOfScalingRules_ = maxNumberOfScalingRules;
}

int DescribeLimitationResult::getMaxNumberOfScalingInstances()const
{
	return maxNumberOfScalingInstances_;
}

void DescribeLimitationResult::setMaxNumberOfScalingInstances(int maxNumberOfScalingInstances)
{
	maxNumberOfScalingInstances_ = maxNumberOfScalingInstances;
}

int DescribeLimitationResult::getMaxNumberOfScheduledTasks()const
{
	return maxNumberOfScheduledTasks_;
}

void DescribeLimitationResult::setMaxNumberOfScheduledTasks(int maxNumberOfScheduledTasks)
{
	maxNumberOfScheduledTasks_ = maxNumberOfScheduledTasks;
}

int DescribeLimitationResult::getMaxNumberOfLoadBalancers()const
{
	return maxNumberOfLoadBalancers_;
}

void DescribeLimitationResult::setMaxNumberOfLoadBalancers(int maxNumberOfLoadBalancers)
{
	maxNumberOfLoadBalancers_ = maxNumberOfLoadBalancers;
}

int DescribeLimitationResult::getMaxNumberOfMinSize()const
{
	return maxNumberOfMinSize_;
}

void DescribeLimitationResult::setMaxNumberOfMinSize(int maxNumberOfMinSize)
{
	maxNumberOfMinSize_ = maxNumberOfMinSize;
}

int DescribeLimitationResult::getMaxNumberOfScalingGroups()const
{
	return maxNumberOfScalingGroups_;
}

void DescribeLimitationResult::setMaxNumberOfScalingGroups(int maxNumberOfScalingGroups)
{
	maxNumberOfScalingGroups_ = maxNumberOfScalingGroups;
}

int DescribeLimitationResult::getMaxNumberOfScalingConfigurations()const
{
	return maxNumberOfScalingConfigurations_;
}

void DescribeLimitationResult::setMaxNumberOfScalingConfigurations(int maxNumberOfScalingConfigurations)
{
	maxNumberOfScalingConfigurations_ = maxNumberOfScalingConfigurations;
}

int DescribeLimitationResult::getMaxNumberOfDBInstances()const
{
	return maxNumberOfDBInstances_;
}

void DescribeLimitationResult::setMaxNumberOfDBInstances(int maxNumberOfDBInstances)
{
	maxNumberOfDBInstances_ = maxNumberOfDBInstances;
}

int DescribeLimitationResult::getMaxNumberOfMaxSize()const
{
	return maxNumberOfMaxSize_;
}

void DescribeLimitationResult::setMaxNumberOfMaxSize(int maxNumberOfMaxSize)
{
	maxNumberOfMaxSize_ = maxNumberOfMaxSize;
}

