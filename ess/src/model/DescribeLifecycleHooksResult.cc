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

#include <alibabacloud/ess/model/DescribeLifecycleHooksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeLifecycleHooksResult::DescribeLifecycleHooksResult() :
	ServiceResult()
{}

DescribeLifecycleHooksResult::DescribeLifecycleHooksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLifecycleHooksResult::~DescribeLifecycleHooksResult()
{}

void DescribeLifecycleHooksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLifecycleHooksNode = value["LifecycleHooks"]["LifecycleHook"];
	for (auto valueLifecycleHooksLifecycleHook : allLifecycleHooksNode)
	{
		LifecycleHook lifecycleHooksObject;
		if(!valueLifecycleHooksLifecycleHook["DefaultResult"].isNull())
			lifecycleHooksObject.defaultResult = valueLifecycleHooksLifecycleHook["DefaultResult"].asString();
		if(!valueLifecycleHooksLifecycleHook["LifecycleHookId"].isNull())
			lifecycleHooksObject.lifecycleHookId = valueLifecycleHooksLifecycleHook["LifecycleHookId"].asString();
		if(!valueLifecycleHooksLifecycleHook["LifecycleHookName"].isNull())
			lifecycleHooksObject.lifecycleHookName = valueLifecycleHooksLifecycleHook["LifecycleHookName"].asString();
		if(!valueLifecycleHooksLifecycleHook["LifecycleTransition"].isNull())
			lifecycleHooksObject.lifecycleTransition = valueLifecycleHooksLifecycleHook["LifecycleTransition"].asString();
		if(!valueLifecycleHooksLifecycleHook["NotificationMetadata"].isNull())
			lifecycleHooksObject.notificationMetadata = valueLifecycleHooksLifecycleHook["NotificationMetadata"].asString();
		if(!valueLifecycleHooksLifecycleHook["NotificationArn"].isNull())
			lifecycleHooksObject.notificationArn = valueLifecycleHooksLifecycleHook["NotificationArn"].asString();
		if(!valueLifecycleHooksLifecycleHook["HeartbeatTimeout"].isNull())
			lifecycleHooksObject.heartbeatTimeout = std::stoi(valueLifecycleHooksLifecycleHook["HeartbeatTimeout"].asString());
		if(!valueLifecycleHooksLifecycleHook["ScalingGroupId"].isNull())
			lifecycleHooksObject.scalingGroupId = valueLifecycleHooksLifecycleHook["ScalingGroupId"].asString();
		if(!valueLifecycleHooksLifecycleHook["LifecycleHookStatus"].isNull())
			lifecycleHooksObject.lifecycleHookStatus = valueLifecycleHooksLifecycleHook["LifecycleHookStatus"].asString();
		lifecycleHooks_.push_back(lifecycleHooksObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeLifecycleHooksResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeLifecycleHooksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLifecycleHooksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeLifecycleHooksResult::LifecycleHook> DescribeLifecycleHooksResult::getLifecycleHooks()const
{
	return lifecycleHooks_;
}

