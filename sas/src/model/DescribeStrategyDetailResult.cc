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

#include <alibabacloud/sas/model/DescribeStrategyDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeStrategyDetailResult::DescribeStrategyDetailResult() :
	ServiceResult()
{}

DescribeStrategyDetailResult::DescribeStrategyDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStrategyDetailResult::~DescribeStrategyDetailResult()
{}

void DescribeStrategyDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto strategyNode = value["Strategy"];
	if(!strategyNode["Type"].isNull())
		strategy_.type = std::stoi(strategyNode["Type"].asString());
	if(!strategyNode["CycleDays"].isNull())
		strategy_.cycleDays = std::stoi(strategyNode["CycleDays"].asString());
	if(!strategyNode["Name"].isNull())
		strategy_.name = strategyNode["Name"].asString();
	if(!strategyNode["Id"].isNull())
		strategy_.id = std::stoi(strategyNode["Id"].asString());
	if(!strategyNode["CycleStartTime"].isNull())
		strategy_.cycleStartTime = std::stoi(strategyNode["CycleStartTime"].asString());
	if(!strategyNode["StartTime"].isNull())
		strategy_.startTime = strategyNode["StartTime"].asString();
	if(!strategyNode["EndTime"].isNull())
		strategy_.endTime = strategyNode["EndTime"].asString();
	if(!strategyNode["CustomType"].isNull())
		strategy_.customType = strategyNode["CustomType"].asString();
	if(!strategyNode["TargetType"].isNull())
		strategy_.targetType = strategyNode["TargetType"].asString();
	if(!strategyNode["RiskSubTypeName"].isNull())
		strategy_.riskSubTypeName = strategyNode["RiskSubTypeName"].asString();
	auto allRiskTypeWhiteListQueryResultListNode = strategyNode["RiskTypeWhiteListQueryResultList"]["RiskTypeWhiteListQueryResult"];
	for (auto strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResult : allRiskTypeWhiteListQueryResultListNode)
	{
		Strategy::RiskTypeWhiteListQueryResult riskTypeWhiteListQueryResultObject;
		if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResult["TypeName"].isNull())
			riskTypeWhiteListQueryResultObject.typeName = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResult["TypeName"].asString();
		if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResult["Alias"].isNull())
			riskTypeWhiteListQueryResultObject.alias = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResult["Alias"].asString();
		if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResult["On"].isNull())
			riskTypeWhiteListQueryResultObject.on = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResult["On"].asString() == "true";
		auto allSubTypesNode = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResult["SubTypes"]["SubType"];
		for (auto strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubType : allSubTypesNode)
		{
			Strategy::RiskTypeWhiteListQueryResult::SubType subTypesObject;
			if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubType["TypeName"].isNull())
				subTypesObject.typeName = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubType["TypeName"].asString();
			if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubType["Alias"].isNull())
				subTypesObject.alias = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubType["Alias"].asString();
			if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubType["On"].isNull())
				subTypesObject.on = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubType["On"].asString() == "true";
			auto allCheckDetailsNode = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubType["CheckDetails"]["CheckDetail"];
			for (auto strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetail : allCheckDetailsNode)
			{
				Strategy::RiskTypeWhiteListQueryResult::SubType::CheckDetail checkDetailsObject;
				if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetail["CheckId"].isNull())
					checkDetailsObject.checkId = std::stol(strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetail["CheckId"].asString());
				if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetail["CheckItem"].isNull())
					checkDetailsObject.checkItem = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetail["CheckItem"].asString();
				if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetail["CheckDesc"].isNull())
					checkDetailsObject.checkDesc = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetail["CheckDesc"].asString();
				auto allRulesNode = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetail["Rules"]["Rule"];
				for (auto strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRule : allRulesNode)
				{
					Strategy::RiskTypeWhiteListQueryResult::SubType::CheckDetail::Rule rulesObject;
					if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRule["Optional"].isNull())
						rulesObject.optional = std::stoi(strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRule["Optional"].asString());
					if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRule["RuleDesc"].isNull())
						rulesObject.ruleDesc = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRule["RuleDesc"].asString();
					if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRule["DefaultValue"].isNull())
						rulesObject.defaultValue = std::stoi(strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRule["DefaultValue"].asString());
					if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRule["RuleId"].isNull())
						rulesObject.ruleId = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRule["RuleId"].asString();
					auto allParamListNode = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRule["ParamList"]["Param"];
					for (auto strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam : allParamListNode)
					{
						Strategy::RiskTypeWhiteListQueryResult::SubType::CheckDetail::Rule::Param paramListObject;
						if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamDefaultValue"].isNull())
							paramListObject.paramDefaultValue = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamDefaultValue"].asString();
						if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["Value"].isNull())
							paramListObject.value = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["Value"].asString();
						if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamName"].isNull())
							paramListObject.paramName = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamName"].asString();
						if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["MaxValue"].isNull())
							paramListObject.maxValue = std::stoi(strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["MaxValue"].asString());
						if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamType"].isNull())
							paramListObject.paramType = std::stoi(strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamType"].asString());
						if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamDesc"].isNull())
							paramListObject.paramDesc = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["ParamDesc"].asString();
						if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["MinValue"].isNull())
							paramListObject.minValue = std::stoi(strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["MinValue"].asString());
						if(!strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["EnumValue"].isNull())
							paramListObject.enumValue = strategyNodeRiskTypeWhiteListQueryResultListRiskTypeWhiteListQueryResultSubTypesSubTypeCheckDetailsCheckDetailRulesRuleParamListParam["EnumValue"].asString();
						rulesObject.paramList.push_back(paramListObject);
					}
					checkDetailsObject.rules.push_back(rulesObject);
				}
				subTypesObject.checkDetails.push_back(checkDetailsObject);
			}
			riskTypeWhiteListQueryResultObject.subTypes.push_back(subTypesObject);
		}
		strategy_.riskTypeWhiteListQueryResultList.push_back(riskTypeWhiteListQueryResultObject);
	}

}

DescribeStrategyDetailResult::Strategy DescribeStrategyDetailResult::getStrategy()const
{
	return strategy_;
}

