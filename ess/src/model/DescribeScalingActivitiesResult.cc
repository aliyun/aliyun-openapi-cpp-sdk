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
		if(!valueScalingActivitiesScalingActivity["ScalingActivityId"].isNull())
			scalingActivitiesObject.scalingActivityId = valueScalingActivitiesScalingActivity["ScalingActivityId"].asString();
		if(!valueScalingActivitiesScalingActivity["ScalingGroupId"].isNull())
			scalingActivitiesObject.scalingGroupId = valueScalingActivitiesScalingActivity["ScalingGroupId"].asString();
		if(!valueScalingActivitiesScalingActivity["Description"].isNull())
			scalingActivitiesObject.description = valueScalingActivitiesScalingActivity["Description"].asString();
		if(!valueScalingActivitiesScalingActivity["Cause"].isNull())
			scalingActivitiesObject.cause = valueScalingActivitiesScalingActivity["Cause"].asString();
		if(!valueScalingActivitiesScalingActivity["StartTime"].isNull())
			scalingActivitiesObject.startTime = valueScalingActivitiesScalingActivity["StartTime"].asString();
		if(!valueScalingActivitiesScalingActivity["EndTime"].isNull())
			scalingActivitiesObject.endTime = valueScalingActivitiesScalingActivity["EndTime"].asString();
		if(!valueScalingActivitiesScalingActivity["Progress"].isNull())
			scalingActivitiesObject.progress = std::stoi(valueScalingActivitiesScalingActivity["Progress"].asString());
		if(!valueScalingActivitiesScalingActivity["StatusCode"].isNull())
			scalingActivitiesObject.statusCode = valueScalingActivitiesScalingActivity["StatusCode"].asString();
		if(!valueScalingActivitiesScalingActivity["StatusMessage"].isNull())
			scalingActivitiesObject.statusMessage = valueScalingActivitiesScalingActivity["StatusMessage"].asString();
		if(!valueScalingActivitiesScalingActivity["TotalCapacity"].isNull())
			scalingActivitiesObject.totalCapacity = valueScalingActivitiesScalingActivity["TotalCapacity"].asString();
		if(!valueScalingActivitiesScalingActivity["AttachedCapacity"].isNull())
			scalingActivitiesObject.attachedCapacity = valueScalingActivitiesScalingActivity["AttachedCapacity"].asString();
		if(!valueScalingActivitiesScalingActivity["AutoCreatedCapacity"].isNull())
			scalingActivitiesObject.autoCreatedCapacity = valueScalingActivitiesScalingActivity["AutoCreatedCapacity"].asString();
		if(!valueScalingActivitiesScalingActivity["ScalingInstanceNumber"].isNull())
			scalingActivitiesObject.scalingInstanceNumber = std::stoi(valueScalingActivitiesScalingActivity["ScalingInstanceNumber"].asString());
		scalingActivities_.push_back(scalingActivitiesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

