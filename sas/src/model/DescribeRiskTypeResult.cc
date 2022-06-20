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

#include <alibabacloud/sas/model/DescribeRiskTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeRiskTypeResult::DescribeRiskTypeResult() :
	ServiceResult()
{}

DescribeRiskTypeResult::DescribeRiskTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRiskTypeResult::~DescribeRiskTypeResult()
{}

void DescribeRiskTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRiskTypesNode = value["RiskTypes"]["RiskType"];
	for (auto valueRiskTypesRiskType : allRiskTypesNode)
	{
		RiskType riskTypesObject;
		if(!valueRiskTypesRiskType["TypeName"].isNull())
			riskTypesObject.typeName = valueRiskTypesRiskType["TypeName"].asString();
		if(!valueRiskTypesRiskType["Alias"].isNull())
			riskTypesObject.alias = valueRiskTypesRiskType["Alias"].asString();
		auto allSubTypesNode = valueRiskTypesRiskType["SubTypes"]["SubType"];
		for (auto valueRiskTypesRiskTypeSubTypesSubType : allSubTypesNode)
		{
			RiskType::SubType subTypesObject;
			if(!valueRiskTypesRiskTypeSubTypesSubType["TypeName"].isNull())
				subTypesObject.typeName = valueRiskTypesRiskTypeSubTypesSubType["TypeName"].asString();
			if(!valueRiskTypesRiskTypeSubTypesSubType["Alias"].isNull())
				subTypesObject.alias = valueRiskTypesRiskTypeSubTypesSubType["Alias"].asString();
			auto allCheckDetailsNode = valueRiskTypesRiskTypeSubTypesSubType["CheckDetails"]["CheckDetail"];
			for (auto valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetail : allCheckDetailsNode)
			{
				RiskType::SubType::CheckDetail checkDetailsObject;
				if(!valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetail["CheckId"].isNull())
					checkDetailsObject.checkId = std::stol(valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetail["CheckId"].asString());
				if(!valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetail["CheckItem"].isNull())
					checkDetailsObject.checkItem = valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetail["CheckItem"].asString();
				if(!valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetail["CheckDesc"].isNull())
					checkDetailsObject.checkDesc = valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetail["CheckDesc"].asString();
				auto allRulesNode = valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetail["Rules"]["Rule"];
				for (auto valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRule : allRulesNode)
				{
					RiskType::SubType::CheckDetail::Rule rulesObject;
					if(!valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRule["Optional"].isNull())
						rulesObject.optional = std::stoi(valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRule["Optional"].asString());
					if(!valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRule["RuleDesc"].isNull())
						rulesObject.ruleDesc = valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRule["RuleDesc"].asString();
					if(!valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRule["DefaultValue"].isNull())
						rulesObject.defaultValue = std::stoi(valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRule["DefaultValue"].asString());
					if(!valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRule["RuleId"].isNull())
						rulesObject.ruleId = valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRule["RuleId"].asString();
					auto allParamListNode = valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRule["ParamList"]["Param"];
					for (auto valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam : allParamListNode)
					{
						RiskType::SubType::CheckDetail::Rule::Param paramListObject;
						if(!valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamDefaultValue"].isNull())
							paramListObject.paramDefaultValue = valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamDefaultValue"].asString();
						if(!valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamName"].isNull())
							paramListObject.paramName = valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamName"].asString();
						if(!valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["MaxValue"].isNull())
							paramListObject.maxValue = std::stoi(valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["MaxValue"].asString());
						if(!valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamType"].isNull())
							paramListObject.paramType = std::stoi(valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamType"].asString());
						if(!valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamDesc"].isNull())
							paramListObject.paramDesc = valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamDesc"].asString();
						if(!valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["MinValue"].isNull())
							paramListObject.minValue = std::stoi(valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["MinValue"].asString());
						if(!valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["EnumValue"].isNull())
							paramListObject.enumValue = valueRiskTypesRiskTypeSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["EnumValue"].asString();
						rulesObject.paramList.push_back(paramListObject);
					}
					checkDetailsObject.rules.push_back(rulesObject);
				}
				subTypesObject.checkDetails.push_back(checkDetailsObject);
			}
			riskTypesObject.subTypes.push_back(subTypesObject);
		}
		riskTypes_.push_back(riskTypesObject);
	}

}

std::vector<DescribeRiskTypeResult::RiskType> DescribeRiskTypeResult::getRiskTypes()const
{
	return riskTypes_;
}

