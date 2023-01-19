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

#include <alibabacloud/sas/model/DescribeCheckFixDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeCheckFixDetailsResult::DescribeCheckFixDetailsResult() :
	ServiceResult()
{}

DescribeCheckFixDetailsResult::DescribeCheckFixDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCheckFixDetailsResult::~DescribeCheckFixDetailsResult()
{}

void DescribeCheckFixDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCheckFixDetailsNode = value["CheckFixDetails"]["Data"];
	for (auto valueCheckFixDetailsData : allCheckFixDetailsNode)
	{
		Data checkFixDetailsObject;
		if(!valueCheckFixDetailsData["CheckId"].isNull())
			checkFixDetailsObject.checkId = std::stol(valueCheckFixDetailsData["CheckId"].asString());
		if(!valueCheckFixDetailsData["CheckItem"].isNull())
			checkFixDetailsObject.checkItem = valueCheckFixDetailsData["CheckItem"].asString();
		if(!valueCheckFixDetailsData["CheckDesc"].isNull())
			checkFixDetailsObject.checkDesc = valueCheckFixDetailsData["CheckDesc"].asString();
		auto allRulesNode = valueCheckFixDetailsData["Rules"]["Rule"];
		for (auto valueCheckFixDetailsDataRulesRule : allRulesNode)
		{
			Data::Rule rulesObject;
			if(!valueCheckFixDetailsDataRulesRule["RuleId"].isNull())
				rulesObject.ruleId = valueCheckFixDetailsDataRulesRule["RuleId"].asString();
			if(!valueCheckFixDetailsDataRulesRule["RuleDesc"].isNull())
				rulesObject.ruleDesc = valueCheckFixDetailsDataRulesRule["RuleDesc"].asString();
			if(!valueCheckFixDetailsDataRulesRule["VarName"].isNull())
				rulesObject.varName = valueCheckFixDetailsDataRulesRule["VarName"].asString();
			if(!valueCheckFixDetailsDataRulesRule["DefaultValue"].isNull())
				rulesObject.defaultValue = std::stoi(valueCheckFixDetailsDataRulesRule["DefaultValue"].asString());
			if(!valueCheckFixDetailsDataRulesRule["Optional"].isNull())
				rulesObject.optional = std::stoi(valueCheckFixDetailsDataRulesRule["Optional"].asString());
			if(!valueCheckFixDetailsDataRulesRule["CheckId"].isNull())
				rulesObject.checkId = std::stol(valueCheckFixDetailsDataRulesRule["CheckId"].asString());
			if(!valueCheckFixDetailsDataRulesRule["Value"].isNull())
				rulesObject.value = std::stoi(valueCheckFixDetailsDataRulesRule["Value"].asString());
			auto allParamListNode = valueCheckFixDetailsDataRulesRule["ParamList"]["ParamListItem"];
			for (auto valueCheckFixDetailsDataRulesRuleParamListParamListItem : allParamListNode)
			{
				Data::Rule::ParamListItem paramListObject;
				if(!valueCheckFixDetailsDataRulesRuleParamListParamListItem["ParamName"].isNull())
					paramListObject.paramName = valueCheckFixDetailsDataRulesRuleParamListParamListItem["ParamName"].asString();
				if(!valueCheckFixDetailsDataRulesRuleParamListParamListItem["ParamDesc"].isNull())
					paramListObject.paramDesc = valueCheckFixDetailsDataRulesRuleParamListParamListItem["ParamDesc"].asString();
				if(!valueCheckFixDetailsDataRulesRuleParamListParamListItem["ParamDefaultValue"].isNull())
					paramListObject.paramDefaultValue = valueCheckFixDetailsDataRulesRuleParamListParamListItem["ParamDefaultValue"].asString();
				if(!valueCheckFixDetailsDataRulesRuleParamListParamListItem["ParamType"].isNull())
					paramListObject.paramType = std::stoi(valueCheckFixDetailsDataRulesRuleParamListParamListItem["ParamType"].asString());
				if(!valueCheckFixDetailsDataRulesRuleParamListParamListItem["MinValue"].isNull())
					paramListObject.minValue = std::stoi(valueCheckFixDetailsDataRulesRuleParamListParamListItem["MinValue"].asString());
				if(!valueCheckFixDetailsDataRulesRuleParamListParamListItem["MaxValue"].isNull())
					paramListObject.maxValue = std::stoi(valueCheckFixDetailsDataRulesRuleParamListParamListItem["MaxValue"].asString());
				if(!valueCheckFixDetailsDataRulesRuleParamListParamListItem["EnumValue"].isNull())
					paramListObject.enumValue = valueCheckFixDetailsDataRulesRuleParamListParamListItem["EnumValue"].asString();
				if(!valueCheckFixDetailsDataRulesRuleParamListParamListItem["Value"].isNull())
					paramListObject.value = valueCheckFixDetailsDataRulesRuleParamListParamListItem["Value"].asString();
				if(!valueCheckFixDetailsDataRulesRuleParamListParamListItem["RuleId"].isNull())
					paramListObject.ruleId = valueCheckFixDetailsDataRulesRuleParamListParamListItem["RuleId"].asString();
				rulesObject.paramList.push_back(paramListObject);
			}
			checkFixDetailsObject.rules.push_back(rulesObject);
		}
		checkFixDetails_.push_back(checkFixDetailsObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::vector<DescribeCheckFixDetailsResult::Data> DescribeCheckFixDetailsResult::getCheckFixDetails()const
{
	return checkFixDetails_;
}

int DescribeCheckFixDetailsResult::getCount()const
{
	return count_;
}

