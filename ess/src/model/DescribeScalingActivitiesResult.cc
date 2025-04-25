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

#include <alibabacloud/ess/model/DescribeScalingActivitiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeScalingActivitiesResult::DescribeScalingActivitiesResult() :
	ServiceResult()
{}

DescribeScalingActivitiesResult::DescribeScalingActivitiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScalingActivitiesResult::~DescribeScalingActivitiesResult()
{}

void DescribeScalingActivitiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScalingActivitiesNode = value["ScalingActivities"]["ScalingActivity"];
	for (auto valueScalingActivitiesScalingActivity : allScalingActivitiesNode)
	{
		ScalingActivity scalingActivitiesObject;
		if(!valueScalingActivitiesScalingActivity["Progress"].isNull())
			scalingActivitiesObject.progress = std::stoi(valueScalingActivitiesScalingActivity["Progress"].asString());
		if(!valueScalingActivitiesScalingActivity["ScalingInstanceNumber"].isNull())
			scalingActivitiesObject.scalingInstanceNumber = std::stoi(valueScalingActivitiesScalingActivity["ScalingInstanceNumber"].asString());
		if(!valueScalingActivitiesScalingActivity["AttachedCapacity"].isNull())
			scalingActivitiesObject.attachedCapacity = valueScalingActivitiesScalingActivity["AttachedCapacity"].asString();
		if(!valueScalingActivitiesScalingActivity["TotalCapacity"].isNull())
			scalingActivitiesObject.totalCapacity = valueScalingActivitiesScalingActivity["TotalCapacity"].asString();
		if(!valueScalingActivitiesScalingActivity["ScalingGroupId"].isNull())
			scalingActivitiesObject.scalingGroupId = valueScalingActivitiesScalingActivity["ScalingGroupId"].asString();
		if(!valueScalingActivitiesScalingActivity["AutoCreatedCapacity"].isNull())
			scalingActivitiesObject.autoCreatedCapacity = valueScalingActivitiesScalingActivity["AutoCreatedCapacity"].asString();
		if(!valueScalingActivitiesScalingActivity["EndTime"].isNull())
			scalingActivitiesObject.endTime = valueScalingActivitiesScalingActivity["EndTime"].asString();
		if(!valueScalingActivitiesScalingActivity["StartTime"].isNull())
			scalingActivitiesObject.startTime = valueScalingActivitiesScalingActivity["StartTime"].asString();
		if(!valueScalingActivitiesScalingActivity["Description"].isNull())
			scalingActivitiesObject.description = valueScalingActivitiesScalingActivity["Description"].asString();
		if(!valueScalingActivitiesScalingActivity["StatusCode"].isNull())
			scalingActivitiesObject.statusCode = valueScalingActivitiesScalingActivity["StatusCode"].asString();
		if(!valueScalingActivitiesScalingActivity["Cause"].isNull())
			scalingActivitiesObject.cause = valueScalingActivitiesScalingActivity["Cause"].asString();
		if(!valueScalingActivitiesScalingActivity["ScalingActivityId"].isNull())
			scalingActivitiesObject.scalingActivityId = valueScalingActivitiesScalingActivity["ScalingActivityId"].asString();
		if(!valueScalingActivitiesScalingActivity["StatusMessage"].isNull())
			scalingActivitiesObject.statusMessage = valueScalingActivitiesScalingActivity["StatusMessage"].asString();
		if(!valueScalingActivitiesScalingActivity["CreatedCapacity"].isNull())
			scalingActivitiesObject.createdCapacity = std::stoi(valueScalingActivitiesScalingActivity["CreatedCapacity"].asString());
		if(!valueScalingActivitiesScalingActivity["DestroyedCapacity"].isNull())
			scalingActivitiesObject.destroyedCapacity = std::stoi(valueScalingActivitiesScalingActivity["DestroyedCapacity"].asString());
		if(!valueScalingActivitiesScalingActivity["StartedCapacity"].isNull())
			scalingActivitiesObject.startedCapacity = std::stoi(valueScalingActivitiesScalingActivity["StartedCapacity"].asString());
		if(!valueScalingActivitiesScalingActivity["StoppedCapacity"].isNull())
			scalingActivitiesObject.stoppedCapacity = std::stoi(valueScalingActivitiesScalingActivity["StoppedCapacity"].asString());
		if(!valueScalingActivitiesScalingActivity["ErrorCode"].isNull())
			scalingActivitiesObject.errorCode = valueScalingActivitiesScalingActivity["ErrorCode"].asString();
		if(!valueScalingActivitiesScalingActivity["ErrorMessage"].isNull())
			scalingActivitiesObject.errorMessage = valueScalingActivitiesScalingActivity["ErrorMessage"].asString();
		if(!valueScalingActivitiesScalingActivity["Detail"].isNull())
			scalingActivitiesObject.detail = valueScalingActivitiesScalingActivity["Detail"].asString();
		if(!valueScalingActivitiesScalingActivity["TriggerSourceType"].isNull())
			scalingActivitiesObject.triggerSourceType = valueScalingActivitiesScalingActivity["TriggerSourceType"].asString();
		if(!valueScalingActivitiesScalingActivity["TriggerSourceId"].isNull())
			scalingActivitiesObject.triggerSourceId = valueScalingActivitiesScalingActivity["TriggerSourceId"].asString();
		if(!valueScalingActivitiesScalingActivity["ActivityMetadata"].isNull())
			scalingActivitiesObject.activityMetadata = valueScalingActivitiesScalingActivity["ActivityMetadata"].asString();
		if(!valueScalingActivitiesScalingActivity["InstanceRefreshTaskId"].isNull())
			scalingActivitiesObject.instanceRefreshTaskId = valueScalingActivitiesScalingActivity["InstanceRefreshTaskId"].asString();
		auto allErrorMessagesNode = valueScalingActivitiesScalingActivity["ErrorMessages"]["ErrorMessagesItem"];
		for (auto valueScalingActivitiesScalingActivityErrorMessagesErrorMessagesItem : allErrorMessagesNode)
		{
			ScalingActivity::ErrorMessagesItem errorMessagesObject;
			if(!valueScalingActivitiesScalingActivityErrorMessagesErrorMessagesItem["Description"].isNull())
				errorMessagesObject.description = valueScalingActivitiesScalingActivityErrorMessagesErrorMessagesItem["Description"].asString();
			if(!valueScalingActivitiesScalingActivityErrorMessagesErrorMessagesItem["Code"].isNull())
				errorMessagesObject.code = valueScalingActivitiesScalingActivityErrorMessagesErrorMessagesItem["Code"].asString();
			if(!valueScalingActivitiesScalingActivityErrorMessagesErrorMessagesItem["Message"].isNull())
				errorMessagesObject.message = valueScalingActivitiesScalingActivityErrorMessagesErrorMessagesItem["Message"].asString();
			auto allFailedInstanceIds = value["FailedInstanceIds"]["FailedInstanceIds"];
			for (auto value : allFailedInstanceIds)
				errorMessagesObject.failedInstanceIds.push_back(value.asString());
			scalingActivitiesObject.errorMessages.push_back(errorMessagesObject);
		}
		auto lifecycleHookContextNode = value["LifecycleHookContext"];
		if(!lifecycleHookContextNode["DisableLifecycleHook"].isNull())
			scalingActivitiesObject.lifecycleHookContext.disableLifecycleHook = lifecycleHookContextNode["DisableLifecycleHook"].asString() == "true";
			auto allIgnoredLifecycleHookIds = lifecycleHookContextNode["IgnoredLifecycleHookIds"]["IgnoredLifecycleHookId"];
			for (auto value : allIgnoredLifecycleHookIds)
				scalingActivitiesObject.lifecycleHookContext.ignoredLifecycleHookIds.push_back(value.asString());
		auto allCreatedInstances = value["CreatedInstances"]["CreatedInstance"];
		for (auto value : allCreatedInstances)
			scalingActivitiesObject.createdInstances.push_back(value.asString());
		auto allDestroyedInstances = value["DestroyedInstances"]["DestroyedInstance"];
		for (auto value : allDestroyedInstances)
			scalingActivitiesObject.destroyedInstances.push_back(value.asString());
		auto allStartedInstances = value["StartedInstances"]["StartedInstance"];
		for (auto value : allStartedInstances)
			scalingActivitiesObject.startedInstances.push_back(value.asString());
		auto allStoppedInstances = value["StoppedInstances"]["StoppedInstance"];
		for (auto value : allStoppedInstances)
			scalingActivitiesObject.stoppedInstances.push_back(value.asString());
		scalingActivities_.push_back(scalingActivitiesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeScalingActivitiesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeScalingActivitiesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeScalingActivitiesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeScalingActivitiesResult::ScalingActivity> DescribeScalingActivitiesResult::getScalingActivities()const
{
	return scalingActivities_;
}

