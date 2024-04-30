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

#include <alibabacloud/dcdn/model/DescribeDcdnWafRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnWafRuleResult::DescribeDcdnWafRuleResult() :
	ServiceResult()
{}

DescribeDcdnWafRuleResult::DescribeDcdnWafRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnWafRuleResult::~DescribeDcdnWafRuleResult()
{}

void DescribeDcdnWafRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto ruleNode = value["Rule"];
	if(!ruleNode["RuleStatus"].isNull())
		rule_.ruleStatus = ruleNode["RuleStatus"].asString();
	if(!ruleNode["DefenseScene"].isNull())
		rule_.defenseScene = ruleNode["DefenseScene"].asString();
	if(!ruleNode["PolicyId"].isNull())
		rule_.policyId = std::stol(ruleNode["PolicyId"].asString());
	if(!ruleNode["GmtModified"].isNull())
		rule_.gmtModified = ruleNode["GmtModified"].asString();
	if(!ruleNode["RuleId"].isNull())
		rule_.ruleId = std::stol(ruleNode["RuleId"].asString());
	if(!ruleNode["RuleName"].isNull())
		rule_.ruleName = ruleNode["RuleName"].asString();
	if(!ruleNode["RuleConfig"].isNull())
		rule_.ruleConfig = ruleNode["RuleConfig"].asString();

}

DescribeDcdnWafRuleResult::Rule DescribeDcdnWafRuleResult::getRule()const
{
	return rule_;
}

