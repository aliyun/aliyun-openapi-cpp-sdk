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

#include <alibabacloud/emr/model/ListScalingGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListScalingGroupsResult::ListScalingGroupsResult() :
	ServiceResult()
{}

ListScalingGroupsResult::ListScalingGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScalingGroupsResult::~ListScalingGroupsResult()
{}

void ListScalingGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScalingGroupsNode = value["ScalingGroups"]["ScalingGroup"];
	for (auto valueScalingGroupsScalingGroup : allScalingGroupsNode)
	{
		ScalingGroup scalingGroupsObject;
		if(!valueScalingGroupsScalingGroup["ScalingGroupId"].isNull())
			scalingGroupsObject.scalingGroupId = valueScalingGroupsScalingGroup["ScalingGroupId"].asString();
		if(!valueScalingGroupsScalingGroup["ClusterId"].isNull())
			scalingGroupsObject.clusterId = valueScalingGroupsScalingGroup["ClusterId"].asString();
		if(!valueScalingGroupsScalingGroup["Description"].isNull())
			scalingGroupsObject.description = valueScalingGroupsScalingGroup["Description"].asString();
		if(!valueScalingGroupsScalingGroup["Name"].isNull())
			scalingGroupsObject.name = valueScalingGroupsScalingGroup["Name"].asString();
		if(!valueScalingGroupsScalingGroup["ConfigState"].isNull())
			scalingGroupsObject.configState = valueScalingGroupsScalingGroup["ConfigState"].asString();
		if(!valueScalingGroupsScalingGroup["ActiveState"].isNull())
			scalingGroupsObject.activeState = valueScalingGroupsScalingGroup["ActiveState"].asString();
		if(!valueScalingGroupsScalingGroup["ScalingInMode"].isNull())
			scalingGroupsObject.scalingInMode = valueScalingGroupsScalingGroup["ScalingInMode"].asString();
		if(!valueScalingGroupsScalingGroup["ScalingMinSize"].isNull())
			scalingGroupsObject.scalingMinSize = std::stoi(valueScalingGroupsScalingGroup["ScalingMinSize"].asString());
		if(!valueScalingGroupsScalingGroup["ScalingMaxSize"].isNull())
			scalingGroupsObject.scalingMaxSize = std::stoi(valueScalingGroupsScalingGroup["ScalingMaxSize"].asString());
		if(!valueScalingGroupsScalingGroup["NodeCount"].isNull())
			scalingGroupsObject.nodeCount = std::stoi(valueScalingGroupsScalingGroup["NodeCount"].asString());
		scalingGroups_.push_back(scalingGroupsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListScalingGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListScalingGroupsResult::ScalingGroup> ListScalingGroupsResult::getScalingGroups()const
{
	return scalingGroups_;
}

std::string ListScalingGroupsResult::getNextToken()const
{
	return nextToken_;
}

int ListScalingGroupsResult::getMaxResults()const
{
	return maxResults_;
}

