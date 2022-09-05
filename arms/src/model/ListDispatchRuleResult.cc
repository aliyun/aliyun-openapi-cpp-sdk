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

#include <alibabacloud/arms/model/ListDispatchRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListDispatchRuleResult::ListDispatchRuleResult() :
	ServiceResult()
{}

ListDispatchRuleResult::ListDispatchRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDispatchRuleResult::~ListDispatchRuleResult()
{}

void ListDispatchRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDispatchRulesNode = value["DispatchRules"]["DispatchRule"];
	for (auto valueDispatchRulesDispatchRule : allDispatchRulesNode)
	{
		DispatchRule dispatchRulesObject;
		if(!valueDispatchRulesDispatchRule["Name"].isNull())
			dispatchRulesObject.name = valueDispatchRulesDispatchRule["Name"].asString();
		if(!valueDispatchRulesDispatchRule["State"].isNull())
			dispatchRulesObject.state = valueDispatchRulesDispatchRule["State"].asString();
		if(!valueDispatchRulesDispatchRule["RuleId"].isNull())
			dispatchRulesObject.ruleId = std::stol(valueDispatchRulesDispatchRule["RuleId"].asString());
		dispatchRules_.push_back(dispatchRulesObject);
	}

}

std::vector<ListDispatchRuleResult::DispatchRule> ListDispatchRuleResult::getDispatchRules()const
{
	return dispatchRules_;
}

