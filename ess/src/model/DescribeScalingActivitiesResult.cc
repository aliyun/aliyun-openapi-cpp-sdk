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
	auto allScalingActivities = value["ScalingActivities"]["ScalingActivity"];
	for (auto value : allScalingActivities)
	{
		ScalingActivity scalingActivityObject;
		if(!value["ScalingActivityId"].isNull())
			scalingActivityObject.scalingActivityId = value["ScalingActivityId"].asString();
		if(!value["ScalingGroupId"].isNull())
			scalingActivityObject.scalingGroupId = value["ScalingGroupId"].asString();
		if(!value["Description"].isNull())
			scalingActivityObject.description = value["Description"].asString();
		if(!value["Cause"].isNull())
			scalingActivityObject.cause = value["Cause"].asString();
		if(!value["StartTime"].isNull())
			scalingActivityObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			scalingActivityObject.endTime = value["EndTime"].asString();
		if(!value["Progress"].isNull())
			scalingActivityObject.progress = std::stoi(value["Progress"].asString());
		if(!value["StatusCode"].isNull())
			scalingActivityObject.statusCode = value["StatusCode"].asString();
		if(!value["StatusMessage"].isNull())
			scalingActivityObject.statusMessage = value["StatusMessage"].asString();
		if(!value["TotalCapacity"].isNull())
			scalingActivityObject.totalCapacity = value["TotalCapacity"].asString();
		if(!value["AttachedCapacity"].isNull())
			scalingActivityObject.attachedCapacity = value["AttachedCapacity"].asString();
		if(!value["AutoCreatedCapacity"].isNull())
			scalingActivityObject.autoCreatedCapacity = value["AutoCreatedCapacity"].asString();
		scalingActivities_.push_back(scalingActivityObject);
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

void DescribeScalingActivitiesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeScalingActivitiesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeScalingActivitiesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeScalingActivitiesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeScalingActivitiesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

