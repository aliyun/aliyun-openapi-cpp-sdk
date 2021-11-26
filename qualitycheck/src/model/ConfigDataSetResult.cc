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

#include <alibabacloud/qualitycheck/model/ConfigDataSetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

ConfigDataSetResult::ConfigDataSetResult() :
	ServiceResult()
{}

ConfigDataSetResult::ConfigDataSetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ConfigDataSetResult::~ConfigDataSetResult()
{}

void ConfigDataSetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["RoleConfigStatus"].isNull())
		data_.roleConfigStatus = std::stoi(dataNode["RoleConfigStatus"].asString());
	if(!dataNode["ChannelType"].isNull())
		data_.channelType = std::stoi(dataNode["ChannelType"].asString());
	if(!dataNode["JudgeType"].isNull())
		data_.judgeType = std::stoi(dataNode["JudgeType"].asString());
	if(!dataNode["SetId"].isNull())
		data_.setId = std::stol(dataNode["SetId"].asString());
	auto ruleInfoNode = dataNode["RuleInfo"];
	auto allConditionsNode = ruleInfoNode["Conditions"]["ConditionBasicInfo"];
	for (auto ruleInfoNodeConditionsConditionBasicInfo : allConditionsNode)
	{
		Data::RuleInfo::ConditionBasicInfo conditionBasicInfoObject;
		if(!ruleInfoNodeConditionsConditionBasicInfo["Lambda"].isNull())
			conditionBasicInfoObject.lambda = ruleInfoNodeConditionsConditionBasicInfo["Lambda"].asString();
		if(!ruleInfoNodeConditionsConditionBasicInfo["Cid"].isNull())
			conditionBasicInfoObject.cid = ruleInfoNodeConditionsConditionBasicInfo["Cid"].asString();
		auto allOperatorsNode = ruleInfoNodeConditionsConditionBasicInfo["Operators"]["OperatorBasicInfo"];
		for (auto ruleInfoNodeConditionsConditionBasicInfoOperatorsOperatorBasicInfo : allOperatorsNode)
		{
			Data::RuleInfo::ConditionBasicInfo::OperatorBasicInfo operatorsObject;
			if(!ruleInfoNodeConditionsConditionBasicInfoOperatorsOperatorBasicInfo["Type"].isNull())
				operatorsObject.type = ruleInfoNodeConditionsConditionBasicInfoOperatorsOperatorBasicInfo["Type"].asString();
			if(!ruleInfoNodeConditionsConditionBasicInfoOperatorsOperatorBasicInfo["Oid"].isNull())
				operatorsObject.oid = ruleInfoNodeConditionsConditionBasicInfoOperatorsOperatorBasicInfo["Oid"].asString();
			auto paramNode = value["Param"];
			if(!paramNode["InSentence"].isNull())
				operatorsObject.param.inSentence = paramNode["InSentence"].asString() == "true";
				auto allKeywords = paramNode["Keywords"]["Keywords"];
				for (auto value : allKeywords)
					operatorsObject.param.keywords.push_back(value.asString());
			conditionBasicInfoObject.operators.push_back(operatorsObject);
		}
		auto checkRangeNode = value["CheckRange"];
		if(!checkRangeNode["Role"].isNull())
			conditionBasicInfoObject.checkRange.role = checkRangeNode["Role"].asString();
		if(!checkRangeNode["RoleId"].isNull())
			conditionBasicInfoObject.checkRange.roleId = std::stoi(checkRangeNode["RoleId"].asString());
		auto anchorNode = checkRangeNode["Anchor"];
		if(!anchorNode["HitTime"].isNull())
			conditionBasicInfoObject.checkRange.anchor.hitTime = std::stoi(anchorNode["HitTime"].asString());
		if(!anchorNode["Cid"].isNull())
			conditionBasicInfoObject.checkRange.anchor.cid = anchorNode["Cid"].asString();
		if(!anchorNode["Location"].isNull())
			conditionBasicInfoObject.checkRange.anchor.location = anchorNode["Location"].asString();
		auto rangeNode = checkRangeNode["Range"];
		if(!rangeNode["To"].isNull())
			conditionBasicInfoObject.checkRange.range.to = std::stoi(rangeNode["To"].asString());
		if(!rangeNode["From"].isNull())
			conditionBasicInfoObject.checkRange.range.from = std::stoi(rangeNode["From"].asString());
		data_.ruleInfo.conditions.push_back(conditionBasicInfoObject);
	}
	auto allRulesNode = ruleInfoNode["Rules"]["RuleBasicInfo"];
	for (auto ruleInfoNodeRulesRuleBasicInfo : allRulesNode)
	{
		Data::RuleInfo::RuleBasicInfo ruleBasicInfoObject;
		if(!ruleInfoNodeRulesRuleBasicInfo["Lambda"].isNull())
			ruleBasicInfoObject.lambda = ruleInfoNodeRulesRuleBasicInfo["Lambda"].asString();
		if(!ruleInfoNodeRulesRuleBasicInfo["ExternalProperty"].isNull())
			ruleBasicInfoObject.externalProperty = std::stoi(ruleInfoNodeRulesRuleBasicInfo["ExternalProperty"].asString());
		if(!ruleInfoNodeRulesRuleBasicInfo["Rid"].isNull())
			ruleBasicInfoObject.rid = ruleInfoNodeRulesRuleBasicInfo["Rid"].asString();
		data_.ruleInfo.rules.push_back(ruleBasicInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ConfigDataSetResult::getMessage()const
{
	return message_;
}

ConfigDataSetResult::Data ConfigDataSetResult::getData()const
{
	return data_;
}

std::string ConfigDataSetResult::getCode()const
{
	return code_;
}

bool ConfigDataSetResult::getSuccess()const
{
	return success_;
}

