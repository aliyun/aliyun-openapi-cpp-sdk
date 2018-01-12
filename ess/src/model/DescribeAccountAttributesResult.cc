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

#include <alibabacloud/ess/model/DescribeAccountAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeAccountAttributesResult::DescribeAccountAttributesResult() :
	ServiceResult()
{}

DescribeAccountAttributesResult::DescribeAccountAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccountAttributesResult::~DescribeAccountAttributesResult()
{}

void DescribeAccountAttributesResult::parse(const std::string &payload)
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

int DescribeAccountAttributesResult::getMaxNumberOfScalingRules()const
{
	return maxNumberOfScalingRules_;
}

void DescribeAccountAttributesResult::setMaxNumberOfScalingRules(int maxNumberOfScalingRules)
{
	maxNumberOfScalingRules_ = maxNumberOfScalingRules;
}

int DescribeAccountAttributesResult::getMaxNumberOfScalingInstances()const
{
	return maxNumberOfScalingInstances_;
}

void DescribeAccountAttributesResult::setMaxNumberOfScalingInstances(int maxNumberOfScalingInstances)
{
	maxNumberOfScalingInstances_ = maxNumberOfScalingInstances;
}

int DescribeAccountAttributesResult::getMaxNumberOfScheduledTasks()const
{
	return maxNumberOfScheduledTasks_;
}

void DescribeAccountAttributesResult::setMaxNumberOfScheduledTasks(int maxNumberOfScheduledTasks)
{
	maxNumberOfScheduledTasks_ = maxNumberOfScheduledTasks;
}

int DescribeAccountAttributesResult::getMaxNumberOfLoadBalancers()const
{
	return maxNumberOfLoadBalancers_;
}

void DescribeAccountAttributesResult::setMaxNumberOfLoadBalancers(int maxNumberOfLoadBalancers)
{
	maxNumberOfLoadBalancers_ = maxNumberOfLoadBalancers;
}

int DescribeAccountAttributesResult::getMaxNumberOfMinSize()const
{
	return maxNumberOfMinSize_;
}

void DescribeAccountAttributesResult::setMaxNumberOfMinSize(int maxNumberOfMinSize)
{
	maxNumberOfMinSize_ = maxNumberOfMinSize;
}

int DescribeAccountAttributesResult::getMaxNumberOfScalingGroups()const
{
	return maxNumberOfScalingGroups_;
}

void DescribeAccountAttributesResult::setMaxNumberOfScalingGroups(int maxNumberOfScalingGroups)
{
	maxNumberOfScalingGroups_ = maxNumberOfScalingGroups;
}

int DescribeAccountAttributesResult::getMaxNumberOfScalingConfigurations()const
{
	return maxNumberOfScalingConfigurations_;
}

void DescribeAccountAttributesResult::setMaxNumberOfScalingConfigurations(int maxNumberOfScalingConfigurations)
{
	maxNumberOfScalingConfigurations_ = maxNumberOfScalingConfigurations;
}

int DescribeAccountAttributesResult::getMaxNumberOfDBInstances()const
{
	return maxNumberOfDBInstances_;
}

void DescribeAccountAttributesResult::setMaxNumberOfDBInstances(int maxNumberOfDBInstances)
{
	maxNumberOfDBInstances_ = maxNumberOfDBInstances;
}

int DescribeAccountAttributesResult::getMaxNumberOfMaxSize()const
{
	return maxNumberOfMaxSize_;
}

void DescribeAccountAttributesResult::setMaxNumberOfMaxSize(int maxNumberOfMaxSize)
{
	maxNumberOfMaxSize_ = maxNumberOfMaxSize;
}

