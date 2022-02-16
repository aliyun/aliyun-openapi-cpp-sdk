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

#include <alibabacloud/emr/model/ListAutoScalingActivitiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListAutoScalingActivitiesResult::ListAutoScalingActivitiesResult() :
	ServiceResult()
{}

ListAutoScalingActivitiesResult::ListAutoScalingActivitiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAutoScalingActivitiesResult::~ListAutoScalingActivitiesResult()
{}

void ListAutoScalingActivitiesResult::parse(const std::string &payload)
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
		if(!valueScalingActivitiesScalingActivity["ScalingRuleId"].isNull())
			scalingActivitiesObject.scalingRuleId = valueScalingActivitiesScalingActivity["ScalingRuleId"].asString();
		if(!valueScalingActivitiesScalingActivity["ScalingActivityType"].isNull())
			scalingActivitiesObject.scalingActivityType = valueScalingActivitiesScalingActivity["ScalingActivityType"].asString();
		if(!valueScalingActivitiesScalingActivity["ScalingPolicyId"].isNull())
			scalingActivitiesObject.scalingPolicyId = valueScalingActivitiesScalingActivity["ScalingPolicyId"].asString();
		if(!valueScalingActivitiesScalingActivity["ClusterId"].isNull())
			scalingActivitiesObject.clusterId = valueScalingActivitiesScalingActivity["ClusterId"].asString();
		if(!valueScalingActivitiesScalingActivity["NodeGroupId"].isNull())
			scalingActivitiesObject.nodeGroupId = valueScalingActivitiesScalingActivity["NodeGroupId"].asString();
		if(!valueScalingActivitiesScalingActivity["StartTime"].isNull())
			scalingActivitiesObject.startTime = std::stol(valueScalingActivitiesScalingActivity["StartTime"].asString());
		if(!valueScalingActivitiesScalingActivity["EndTime"].isNull())
			scalingActivitiesObject.endTime = std::stol(valueScalingActivitiesScalingActivity["EndTime"].asString());
		if(!valueScalingActivitiesScalingActivity["ScalingActivityState"].isNull())
			scalingActivitiesObject.scalingActivityState = valueScalingActivitiesScalingActivity["ScalingActivityState"].asString();
		if(!valueScalingActivitiesScalingActivity["OperationId"].isNull())
			scalingActivitiesObject.operationId = valueScalingActivitiesScalingActivity["OperationId"].asString();
		if(!valueScalingActivitiesScalingActivity["Description"].isNull())
			scalingActivitiesObject.description = valueScalingActivitiesScalingActivity["Description"].asString();
		auto failedReasonNode = value["FailedReason"];
		if(!failedReasonNode["ErrorCode"].isNull())
			scalingActivitiesObject.failedReason.errorCode = failedReasonNode["ErrorCode"].asString();
		if(!failedReasonNode["ErrorMsg"].isNull())
			scalingActivitiesObject.failedReason.errorMsg = failedReasonNode["ErrorMsg"].asString();
		if(!failedReasonNode["ErrorMessage"].isNull())
			scalingActivitiesObject.failedReason.errorMessage = failedReasonNode["ErrorMessage"].asString();
		if(!failedReasonNode["RequestId"].isNull())
			scalingActivitiesObject.failedReason.requestId = failedReasonNode["RequestId"].asString();
		scalingActivities_.push_back(scalingActivitiesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListAutoScalingActivitiesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAutoScalingActivitiesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListAutoScalingActivitiesResult::ScalingActivity> ListAutoScalingActivitiesResult::getScalingActivities()const
{
	return scalingActivities_;
}

int ListAutoScalingActivitiesResult::getMaxResults()const
{
	return maxResults_;
}

