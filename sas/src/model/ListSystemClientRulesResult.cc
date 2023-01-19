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

#include <alibabacloud/sas/model/ListSystemClientRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListSystemClientRulesResult::ListSystemClientRulesResult() :
	ServiceResult()
{}

ListSystemClientRulesResult::ListSystemClientRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSystemClientRulesResult::~ListSystemClientRulesResult()
{}

void ListSystemClientRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRuleListNode = value["RuleList"]["Rule"];
	for (auto valueRuleListRule : allRuleListNode)
	{
		Rule ruleListObject;
		if(!valueRuleListRule["Status"].isNull())
			ruleListObject.status = std::stoi(valueRuleListRule["Status"].asString());
		if(!valueRuleListRule["RuleType"].isNull())
			ruleListObject.ruleType = std::stoi(valueRuleListRule["RuleType"].asString());
		if(!valueRuleListRule["Platform"].isNull())
			ruleListObject.platform = valueRuleListRule["Platform"].asString();
		if(!valueRuleListRule["SwitchId"].isNull())
			ruleListObject.switchId = valueRuleListRule["SwitchId"].asString();
		if(!valueRuleListRule["RuleId"].isNull())
			ruleListObject.ruleId = std::stol(valueRuleListRule["RuleId"].asString());
		if(!valueRuleListRule["RuleName"].isNull())
			ruleListObject.ruleName = valueRuleListRule["RuleName"].asString();
		if(!valueRuleListRule["AggregationName"].isNull())
			ruleListObject.aggregationName = valueRuleListRule["AggregationName"].asString();
		if(!valueRuleListRule["Description"].isNull())
			ruleListObject.description = valueRuleListRule["Description"].asString();
		auto allPoliciesNode = valueRuleListRule["Policies"]["policy"];
		for (auto valueRuleListRulePoliciespolicy : allPoliciesNode)
		{
			Rule::Policy policiesObject;
			if(!valueRuleListRulePoliciespolicy["PolicyName"].isNull())
				policiesObject.policyName = valueRuleListRulePoliciespolicy["PolicyName"].asString();
			if(!valueRuleListRulePoliciespolicy["PolicyKey"].isNull())
				policiesObject.policyKey = valueRuleListRulePoliciespolicy["PolicyKey"].asString();
			ruleListObject.policies.push_back(policiesObject);
		}
		ruleList_.push_back(ruleListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());

}

std::vector<ListSystemClientRulesResult::Rule> ListSystemClientRulesResult::getRuleList()const
{
	return ruleList_;
}

ListSystemClientRulesResult::PageInfo ListSystemClientRulesResult::getPageInfo()const
{
	return pageInfo_;
}

