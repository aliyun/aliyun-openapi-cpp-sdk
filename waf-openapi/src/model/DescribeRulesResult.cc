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

#include <alibabacloud/waf-openapi/model/DescribeRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeRulesResult::DescribeRulesResult() :
	ServiceResult()
{}

DescribeRulesResult::DescribeRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRulesResult::~DescribeRulesResult()
{}

void DescribeRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRulesNode = value["Rules"]["RulesItem"];
	for (auto valueRulesRulesItem : allRulesNode)
	{
		RulesItem rulesObject;
		if(!valueRulesRulesItem["RiskLevel"].isNull())
			rulesObject.riskLevel = std::stoi(valueRulesRulesItem["RiskLevel"].asString());
		if(!valueRulesRulesItem["UpdateTime"].isNull())
			rulesObject.updateTime = std::stol(valueRulesRulesItem["UpdateTime"].asString());
		if(!valueRulesRulesItem["Description"].isNull())
			rulesObject.description = valueRulesRulesItem["Description"].asString();
		if(!valueRulesRulesItem["CveUrl"].isNull())
			rulesObject.cveUrl = valueRulesRulesItem["CveUrl"].asString();
		if(!valueRulesRulesItem["ApplicationType"].isNull())
			rulesObject.applicationType = std::stoi(valueRulesRulesItem["ApplicationType"].asString());
		if(!valueRulesRulesItem["CveId"].isNull())
			rulesObject.cveId = valueRulesRulesItem["CveId"].asString();
		if(!valueRulesRulesItem["ProtectionType"].isNull())
			rulesObject.protectionType = std::stoi(valueRulesRulesItem["ProtectionType"].asString());
		if(!valueRulesRulesItem["RuleName"].isNull())
			rulesObject.ruleName = valueRulesRulesItem["RuleName"].asString();
		if(!valueRulesRulesItem["RuleId"].isNull())
			rulesObject.ruleId = std::stol(valueRulesRulesItem["RuleId"].asString());
		rules_.push_back(rulesObject);
	}
	if(!value["RuleGroupTemplateId"].isNull())
		ruleGroupTemplateId_ = value["RuleGroupTemplateId"].asString();
	if(!value["RuleGroupName"].isNull())
		ruleGroupName_ = value["RuleGroupName"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["RuleGroupTemplateName"].isNull())
		ruleGroupTemplateName_ = value["RuleGroupTemplateName"].asString();
	if(!value["IsSubscribe"].isNull())
		isSubscribe_ = std::stol(value["IsSubscribe"].asString());

}

int DescribeRulesResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeRulesResult::getRuleGroupTemplateId()const
{
	return ruleGroupTemplateId_;
}

std::string DescribeRulesResult::getRuleGroupName()const
{
	return ruleGroupName_;
}

long DescribeRulesResult::getIsSubscribe()const
{
	return isSubscribe_;
}

std::vector<DescribeRulesResult::RulesItem> DescribeRulesResult::getRules()const
{
	return rules_;
}

std::string DescribeRulesResult::getRuleGroupTemplateName()const
{
	return ruleGroupTemplateName_;
}

