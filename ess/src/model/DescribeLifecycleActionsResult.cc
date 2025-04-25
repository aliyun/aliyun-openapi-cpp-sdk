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

#include <alibabacloud/ess/model/DescribeLifecycleActionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeLifecycleActionsResult::DescribeLifecycleActionsResult() :
	ServiceResult()
{}

DescribeLifecycleActionsResult::DescribeLifecycleActionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLifecycleActionsResult::~DescribeLifecycleActionsResult()
{}

void DescribeLifecycleActionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLifecycleActionsNode = value["LifecycleActions"]["LifecycleAction"];
	for (auto valueLifecycleActionsLifecycleAction : allLifecycleActionsNode)
	{
		LifecycleAction lifecycleActionsObject;
		if(!valueLifecycleActionsLifecycleAction["LifecycleHookId"].isNull())
			lifecycleActionsObject.lifecycleHookId = valueLifecycleActionsLifecycleAction["LifecycleHookId"].asString();
		if(!valueLifecycleActionsLifecycleAction["LifecycleActionToken"].isNull())
			lifecycleActionsObject.lifecycleActionToken = valueLifecycleActionsLifecycleAction["LifecycleActionToken"].asString();
		if(!valueLifecycleActionsLifecycleAction["LifecycleActionStatus"].isNull())
			lifecycleActionsObject.lifecycleActionStatus = valueLifecycleActionsLifecycleAction["LifecycleActionStatus"].asString();
		if(!valueLifecycleActionsLifecycleAction["LifecycleActionResult"].isNull())
			lifecycleActionsObject.lifecycleActionResult = valueLifecycleActionsLifecycleAction["LifecycleActionResult"].asString();
		auto allInstanceIds = value["InstanceIds"]["InstanceId"];
		for (auto value : allInstanceIds)
			lifecycleActionsObject.instanceIds.push_back(value.asString());
		lifecycleActions_.push_back(lifecycleActionsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int DescribeLifecycleActionsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeLifecycleActionsResult::getNextToken()const
{
	return nextToken_;
}

int DescribeLifecycleActionsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<DescribeLifecycleActionsResult::LifecycleAction> DescribeLifecycleActionsResult::getLifecycleActions()const
{
	return lifecycleActions_;
}

