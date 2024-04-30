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

#include <alibabacloud/dcdn/model/DescribeDcdnWafRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnWafRulesResult::DescribeDcdnWafRulesResult() :
	ServiceResult()
{}

DescribeDcdnWafRulesResult::DescribeDcdnWafRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnWafRulesResult::~DescribeDcdnWafRulesResult()
{}

void DescribeDcdnWafRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRulesNode = value["Rules"]["RuleItem"];
	for (auto valueRulesRuleItem : allRulesNode)
	{
		RuleItem rulesObject;
		if(!valueRulesRuleItem["RuleStatus"].isNull())
			rulesObject.ruleStatus = valueRulesRuleItem["RuleStatus"].asString();
		if(!valueRulesRuleItem["DefenseScene"].isNull())
			rulesObject.defenseScene = valueRulesRuleItem["DefenseScene"].asString();
		if(!valueRulesRuleItem["PolicyId"].isNull())
			rulesObject.policyId = std::stol(valueRulesRuleItem["PolicyId"].asString());
		if(!valueRulesRuleItem["GmtModified"].isNull())
			rulesObject.gmtModified = valueRulesRuleItem["GmtModified"].asString();
		if(!valueRulesRuleItem["RuleId"].isNull())
			rulesObject.ruleId = std::stol(valueRulesRuleItem["RuleId"].asString());
		if(!valueRulesRuleItem["RuleName"].isNull())
			rulesObject.ruleName = valueRulesRuleItem["RuleName"].asString();
		if(!valueRulesRuleItem["RuleConfig"].isNull())
			rulesObject.ruleConfig = valueRulesRuleItem["RuleConfig"].asString();
		rules_.push_back(rulesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDcdnWafRulesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDcdnWafRulesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDcdnWafRulesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDcdnWafRulesResult::RuleItem> DescribeDcdnWafRulesResult::getRules()const
{
	return rules_;
}

