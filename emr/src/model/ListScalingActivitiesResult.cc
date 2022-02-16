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

#include <alibabacloud/emr/model/ListScalingActivitiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListScalingActivitiesResult::ListScalingActivitiesResult() :
	ServiceResult()
{}

ListScalingActivitiesResult::ListScalingActivitiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScalingActivitiesResult::~ListScalingActivitiesResult()
{}

void ListScalingActivitiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScalingActivitiesNode = value["ScalingActivities"]["ScalingActivity"];
	for (auto valueScalingActivitiesScalingActivity : allScalingActivitiesNode)
	{
		ScalingActivity scalingActivitiesObject;
		if(!valueScalingActivitiesScalingActivity["Id"].isNull())
			scalingActivitiesObject.id = valueScalingActivitiesScalingActivity["Id"].asString();
		if(!valueScalingActivitiesScalingActivity["StartTime"].isNull())
			scalingActivitiesObject.startTime = std::stol(valueScalingActivitiesScalingActivity["StartTime"].asString());
		if(!valueScalingActivitiesScalingActivity["EndTime"].isNull())
			scalingActivitiesObject.endTime = std::stol(valueScalingActivitiesScalingActivity["EndTime"].asString());
		if(!valueScalingActivitiesScalingActivity["ExpectNum"].isNull())
			scalingActivitiesObject.expectNum = std::stoi(valueScalingActivitiesScalingActivity["ExpectNum"].asString());
		if(!valueScalingActivitiesScalingActivity["InstanceIds"].isNull())
			scalingActivitiesObject.instanceIds = valueScalingActivitiesScalingActivity["InstanceIds"].asString();
		if(!valueScalingActivitiesScalingActivity["NodeIds"].isNull())
			scalingActivitiesObject.nodeIds = valueScalingActivitiesScalingActivity["NodeIds"].asString();
		if(!valueScalingActivitiesScalingActivity["TotalCapacity"].isNull())
			scalingActivitiesObject.totalCapacity = std::stoi(valueScalingActivitiesScalingActivity["TotalCapacity"].asString());
		if(!valueScalingActivitiesScalingActivity["Cause"].isNull())
			scalingActivitiesObject.cause = valueScalingActivitiesScalingActivity["Cause"].asString();
		if(!valueScalingActivitiesScalingActivity["Description"].isNull())
			scalingActivitiesObject.description = valueScalingActivitiesScalingActivity["Description"].asString();
		if(!valueScalingActivitiesScalingActivity["Transition"].isNull())
			scalingActivitiesObject.transition = valueScalingActivitiesScalingActivity["Transition"].asString();
		if(!valueScalingActivitiesScalingActivity["ScalingRuleName"].isNull())
			scalingActivitiesObject.scalingRuleName = valueScalingActivitiesScalingActivity["ScalingRuleName"].asString();
		if(!valueScalingActivitiesScalingActivity["EssScalingRuleId"].isNull())
			scalingActivitiesObject.essScalingRuleId = valueScalingActivitiesScalingActivity["EssScalingRuleId"].asString();
		if(!valueScalingActivitiesScalingActivity["Status"].isNull())
			scalingActivitiesObject.status = valueScalingActivitiesScalingActivity["Status"].asString();
		if(!valueScalingActivitiesScalingActivity["ScalingGroupId"].isNull())
			scalingActivitiesObject.scalingGroupId = valueScalingActivitiesScalingActivity["ScalingGroupId"].asString();
		if(!valueScalingActivitiesScalingActivity["HostGroupName"].isNull())
			scalingActivitiesObject.hostGroupName = valueScalingActivitiesScalingActivity["HostGroupName"].asString();
		scalingActivities_.push_back(scalingActivitiesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListScalingActivitiesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListScalingActivitiesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListScalingActivitiesResult::ScalingActivity> ListScalingActivitiesResult::getScalingActivities()const
{
	return scalingActivities_;
}

int ListScalingActivitiesResult::getMaxResults()const
{
	return maxResults_;
}

