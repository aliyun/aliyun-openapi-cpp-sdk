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

#include <alibabacloud/cbn/model/ListTrafficMarkingPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTrafficMarkingPoliciesResult::ListTrafficMarkingPoliciesResult() :
	ServiceResult()
{}

ListTrafficMarkingPoliciesResult::ListTrafficMarkingPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTrafficMarkingPoliciesResult::~ListTrafficMarkingPoliciesResult()
{}

void ListTrafficMarkingPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTrafficMarkingPoliciesNode = value["TrafficMarkingPolicies"]["TrafficMarkingPolicy"];
	for (auto valueTrafficMarkingPoliciesTrafficMarkingPolicy : allTrafficMarkingPoliciesNode)
	{
		TrafficMarkingPolicy trafficMarkingPoliciesObject;
		if(!valueTrafficMarkingPoliciesTrafficMarkingPolicy["TrafficMarkingPolicyStatus"].isNull())
			trafficMarkingPoliciesObject.trafficMarkingPolicyStatus = valueTrafficMarkingPoliciesTrafficMarkingPolicy["TrafficMarkingPolicyStatus"].asString();
		if(!valueTrafficMarkingPoliciesTrafficMarkingPolicy["TrafficMarkingPolicyId"].isNull())
			trafficMarkingPoliciesObject.trafficMarkingPolicyId = valueTrafficMarkingPoliciesTrafficMarkingPolicy["TrafficMarkingPolicyId"].asString();
		if(!valueTrafficMarkingPoliciesTrafficMarkingPolicy["MarkingDscp"].isNull())
			trafficMarkingPoliciesObject.markingDscp = std::stoi(valueTrafficMarkingPoliciesTrafficMarkingPolicy["MarkingDscp"].asString());
		if(!valueTrafficMarkingPoliciesTrafficMarkingPolicy["TrafficMarkingPolicyName"].isNull())
			trafficMarkingPoliciesObject.trafficMarkingPolicyName = valueTrafficMarkingPoliciesTrafficMarkingPolicy["TrafficMarkingPolicyName"].asString();
		if(!valueTrafficMarkingPoliciesTrafficMarkingPolicy["Priority"].isNull())
			trafficMarkingPoliciesObject.priority = std::stoi(valueTrafficMarkingPoliciesTrafficMarkingPolicy["Priority"].asString());
		if(!valueTrafficMarkingPoliciesTrafficMarkingPolicy["TrafficMarkingPolicyDescription"].isNull())
			trafficMarkingPoliciesObject.trafficMarkingPolicyDescription = valueTrafficMarkingPoliciesTrafficMarkingPolicy["TrafficMarkingPolicyDescription"].asString();
		if(!valueTrafficMarkingPoliciesTrafficMarkingPolicy["TransitRouterId"].isNull())
			trafficMarkingPoliciesObject.transitRouterId = valueTrafficMarkingPoliciesTrafficMarkingPolicy["TransitRouterId"].asString();
		auto allTrafficMatchRulesNode = valueTrafficMarkingPoliciesTrafficMarkingPolicy["TrafficMatchRules"]["TrafficMatchRule"];
		for (auto valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule : allTrafficMatchRulesNode)
		{
			TrafficMarkingPolicy::TrafficMatchRule trafficMatchRulesObject;
			if(!valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["MatchDscp"].isNull())
				trafficMatchRulesObject.matchDscp = std::stoi(valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["MatchDscp"].asString());
			if(!valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["DstCidr"].isNull())
				trafficMatchRulesObject.dstCidr = valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["DstCidr"].asString();
			if(!valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["TrafficMatchRuleDescription"].isNull())
				trafficMatchRulesObject.trafficMatchRuleDescription = valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["TrafficMatchRuleDescription"].asString();
			if(!valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["Protocol"].isNull())
				trafficMatchRulesObject.protocol = valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["Protocol"].asString();
			if(!valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["TrafficMatchRuleId"].isNull())
				trafficMatchRulesObject.trafficMatchRuleId = valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["TrafficMatchRuleId"].asString();
			if(!valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["SrcCidr"].isNull())
				trafficMatchRulesObject.srcCidr = valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["SrcCidr"].asString();
			if(!valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["TrafficMatchRuleName"].isNull())
				trafficMatchRulesObject.trafficMatchRuleName = valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["TrafficMatchRuleName"].asString();
			if(!valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["TrafficMatchRuleStatus"].isNull())
				trafficMatchRulesObject.trafficMatchRuleStatus = valueTrafficMarkingPoliciesTrafficMarkingPolicyTrafficMatchRulesTrafficMatchRule["TrafficMatchRuleStatus"].asString();
			auto allDstPortRange = value["DstPortRange"]["DstPortRange"];
			for (auto value : allDstPortRange)
				trafficMatchRulesObject.dstPortRange.push_back(value.asString());
			auto allSrcPortRange = value["SrcPortRange"]["SrcPortRange"];
			for (auto value : allSrcPortRange)
				trafficMatchRulesObject.srcPortRange.push_back(value.asString());
			trafficMarkingPoliciesObject.trafficMatchRules.push_back(trafficMatchRulesObject);
		}
		trafficMarkingPolicies_.push_back(trafficMarkingPoliciesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListTrafficMarkingPoliciesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTrafficMarkingPoliciesResult::getNextToken()const
{
	return nextToken_;
}

int ListTrafficMarkingPoliciesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTrafficMarkingPoliciesResult::TrafficMarkingPolicy> ListTrafficMarkingPoliciesResult::getTrafficMarkingPolicies()const
{
	return trafficMarkingPolicies_;
}

