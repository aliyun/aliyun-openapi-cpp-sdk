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

#include <alibabacloud/emr/model/ListAutoScalingRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListAutoScalingRulesResult::ListAutoScalingRulesResult() :
	ServiceResult()
{}

ListAutoScalingRulesResult::ListAutoScalingRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAutoScalingRulesResult::~ListAutoScalingRulesResult()
{}

void ListAutoScalingRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScalingRulesNode = value["ScalingRules"]["ScalingRule"];
	for (auto valueScalingRulesScalingRule : allScalingRulesNode)
	{
		ScalingRule scalingRulesObject;
		if(!valueScalingRulesScalingRule["ScalingRuleId"].isNull())
			scalingRulesObject.scalingRuleId = valueScalingRulesScalingRule["ScalingRuleId"].asString();
		if(!valueScalingRulesScalingRule["ScalingRuleName"].isNull())
			scalingRulesObject.scalingRuleName = valueScalingRulesScalingRule["ScalingRuleName"].asString();
		if(!valueScalingRulesScalingRule["ScalingPolicyId"].isNull())
			scalingRulesObject.scalingPolicyId = valueScalingRulesScalingRule["ScalingPolicyId"].asString();
		if(!valueScalingRulesScalingRule["ClusterId"].isNull())
			scalingRulesObject.clusterId = valueScalingRulesScalingRule["ClusterId"].asString();
		if(!valueScalingRulesScalingRule["NodeGroupId"].isNull())
			scalingRulesObject.nodeGroupId = valueScalingRulesScalingRule["NodeGroupId"].asString();
		if(!valueScalingRulesScalingRule["ScalingRuleType"].isNull())
			scalingRulesObject.scalingRuleType = valueScalingRulesScalingRule["ScalingRuleType"].asString();
		if(!valueScalingRulesScalingRule["ScalingActivityType"].isNull())
			scalingRulesObject.scalingActivityType = valueScalingRulesScalingRule["ScalingActivityType"].asString();
		if(!valueScalingRulesScalingRule["AdjustmentValue"].isNull())
			scalingRulesObject.adjustmentValue = std::stoi(valueScalingRulesScalingRule["AdjustmentValue"].asString());
		if(!valueScalingRulesScalingRule["CoolDownInterval"].isNull())
			scalingRulesObject.coolDownInterval = std::stoi(valueScalingRulesScalingRule["CoolDownInterval"].asString());
		if(!valueScalingRulesScalingRule["ScalingRuleState"].isNull())
			scalingRulesObject.scalingRuleState = valueScalingRulesScalingRule["ScalingRuleState"].asString();
		auto byTimeScalingRuleSpecNode = value["ByTimeScalingRuleSpec"];
		if(!byTimeScalingRuleSpecNode["LaunchTime"].isNull())
			scalingRulesObject.byTimeScalingRuleSpec.launchTime = std::stol(byTimeScalingRuleSpecNode["LaunchTime"].asString());
		if(!byTimeScalingRuleSpecNode["EndTime"].isNull())
			scalingRulesObject.byTimeScalingRuleSpec.endTime = std::stol(byTimeScalingRuleSpecNode["EndTime"].asString());
		if(!byTimeScalingRuleSpecNode["RecurrenceType"].isNull())
			scalingRulesObject.byTimeScalingRuleSpec.recurrenceType = byTimeScalingRuleSpecNode["RecurrenceType"].asString();
		if(!byTimeScalingRuleSpecNode["RecurrenceValue"].isNull())
			scalingRulesObject.byTimeScalingRuleSpec.recurrenceValue = byTimeScalingRuleSpecNode["RecurrenceValue"].asString();
		auto byLoadScalingRuleSpecNode = value["ByLoadScalingRuleSpec"];
		if(!byLoadScalingRuleSpecNode["MetricName"].isNull())
			scalingRulesObject.byLoadScalingRuleSpec.metricName = byLoadScalingRuleSpecNode["MetricName"].asString();
		if(!byLoadScalingRuleSpecNode["Statistics"].isNull())
			scalingRulesObject.byLoadScalingRuleSpec.statistics = byLoadScalingRuleSpecNode["Statistics"].asString();
		if(!byLoadScalingRuleSpecNode["ComparisonOperator"].isNull())
			scalingRulesObject.byLoadScalingRuleSpec.comparisonOperator = byLoadScalingRuleSpecNode["ComparisonOperator"].asString();
		if(!byLoadScalingRuleSpecNode["TimeWindow"].isNull())
			scalingRulesObject.byLoadScalingRuleSpec.timeWindow = std::stoi(byLoadScalingRuleSpecNode["TimeWindow"].asString());
		if(!byLoadScalingRuleSpecNode["Threshold"].isNull())
			scalingRulesObject.byLoadScalingRuleSpec.threshold = byLoadScalingRuleSpecNode["Threshold"].asString();
		if(!byLoadScalingRuleSpecNode["EvaluationCount"].isNull())
			scalingRulesObject.byLoadScalingRuleSpec.evaluationCount = std::stoi(byLoadScalingRuleSpecNode["EvaluationCount"].asString());
		scalingRules_.push_back(scalingRulesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<ListAutoScalingRulesResult::ScalingRule> ListAutoScalingRulesResult::getScalingRules()const
{
	return scalingRules_;
}

int ListAutoScalingRulesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAutoScalingRulesResult::getNextToken()const
{
	return nextToken_;
}

int ListAutoScalingRulesResult::getMaxResults()const
{
	return maxResults_;
}

