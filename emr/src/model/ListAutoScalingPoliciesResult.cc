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

#include <alibabacloud/emr/model/ListAutoScalingPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListAutoScalingPoliciesResult::ListAutoScalingPoliciesResult() :
	ServiceResult()
{}

ListAutoScalingPoliciesResult::ListAutoScalingPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAutoScalingPoliciesResult::~ListAutoScalingPoliciesResult()
{}

void ListAutoScalingPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScalingPoliciesNode = value["ScalingPolicies"]["ScalingPolicy"];
	for (auto valueScalingPoliciesScalingPolicy : allScalingPoliciesNode)
	{
		ScalingPolicy scalingPoliciesObject;
		if(!valueScalingPoliciesScalingPolicy["ScalingPolicyId"].isNull())
			scalingPoliciesObject.scalingPolicyId = valueScalingPoliciesScalingPolicy["ScalingPolicyId"].asString();
		if(!valueScalingPoliciesScalingPolicy["NodeGroupId"].isNull())
			scalingPoliciesObject.nodeGroupId = valueScalingPoliciesScalingPolicy["NodeGroupId"].asString();
		if(!valueScalingPoliciesScalingPolicy["ClusterId"].isNull())
			scalingPoliciesObject.clusterId = valueScalingPoliciesScalingPolicy["ClusterId"].asString();
		if(!valueScalingPoliciesScalingPolicy["DefrostTime"].isNull())
			scalingPoliciesObject.defrostTime = std::stol(valueScalingPoliciesScalingPolicy["DefrostTime"].asString());
		if(!valueScalingPoliciesScalingPolicy["FrostReason"].isNull())
			scalingPoliciesObject.frostReason = valueScalingPoliciesScalingPolicy["FrostReason"].asString();
		if(!valueScalingPoliciesScalingPolicy["ScalingPolicyState"].isNull())
			scalingPoliciesObject.scalingPolicyState = valueScalingPoliciesScalingPolicy["ScalingPolicyState"].asString();
		scalingPolicies_.push_back(scalingPoliciesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<ListAutoScalingPoliciesResult::ScalingPolicy> ListAutoScalingPoliciesResult::getScalingPolicies()const
{
	return scalingPolicies_;
}

int ListAutoScalingPoliciesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAutoScalingPoliciesResult::getNextToken()const
{
	return nextToken_;
}

int ListAutoScalingPoliciesResult::getMaxResults()const
{
	return maxResults_;
}

