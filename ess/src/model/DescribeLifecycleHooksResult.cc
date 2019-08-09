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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allLifecycleHooks = value["LifecycleHooks"]["LifecycleHook"];
	for (auto value : allLifecycleHooks)
	{
		LifecycleHook lifecycleHooksObject;
		if(!value["ScalingGroupId"].isNull())
			lifecycleHooksObject.scalingGroupId = value["ScalingGroupId"].asString();
		if(!value["LifecycleHookId"].isNull())
			lifecycleHooksObject.lifecycleHookId = value["LifecycleHookId"].asString();
		if(!value["LifecycleHookName"].isNull())
			lifecycleHooksObject.lifecycleHookName = value["LifecycleHookName"].asString();
		if(!value["DefaultResult"].isNull())
			lifecycleHooksObject.defaultResult = value["DefaultResult"].asString();
		if(!value["HeartbeatTimeout"].isNull())
			lifecycleHooksObject.heartbeatTimeout = std::stoi(value["HeartbeatTimeout"].asString());
		if(!value["LifecycleTransition"].isNull())
			lifecycleHooksObject.lifecycleTransition = value["LifecycleTransition"].asString();
		if(!value["NotificationMetadata"].isNull())
			lifecycleHooksObject.notificationMetadata = value["NotificationMetadata"].asString();
		if(!value["NotificationArn"].isNull())
			lifecycleHooksObject.notificationArn = value["NotificationArn"].asString();
		lifecycleHooks_.push_back(lifecycleHooksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

