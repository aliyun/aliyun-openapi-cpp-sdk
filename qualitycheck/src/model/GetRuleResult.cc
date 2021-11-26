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

#include <alibabacloud/qualitycheck/model/GetRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetRuleResult::GetRuleResult() :
	ServiceResult()
{}

GetRuleResult::GetRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRuleResult::~GetRuleResult()
{}

void GetRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allRulesNode = dataNode["Rules"]["RuleInfo"];
	for (auto dataNodeRulesRuleInfo : allRulesNode)
	{
		Data::RuleInfo ruleInfoObject;
		if(!dataNodeRulesRuleInfo["Status"].isNull())
			ruleInfoObject.status = std::stoi(dataNodeRulesRuleInfo["Status"].asString());
		if(!dataNodeRulesRuleInfo["Type"].isNull())
			ruleInfoObject.type = std::stoi(dataNodeRulesRuleInfo["Type"].asString());
		if(!dataNodeRulesRuleInfo["ScoreSubId"].isNull())
			ruleInfoObject.scoreSubId = std::stoi(dataNodeRulesRuleInfo["ScoreSubId"].asString());
		if(!dataNodeRulesRuleInfo["IsOnline"].isNull())
			ruleInfoObject.isOnline = std::stoi(dataNodeRulesRuleInfo["IsOnline"].asString());
		if(!dataNodeRulesRuleInfo["CreateTime"].isNull())
			ruleInfoObject.createTime = dataNodeRulesRuleInfo["CreateTime"].asString();
		if(!dataNodeRulesRuleInfo["CreateEmpid"].isNull())
			ruleInfoObject.createEmpid = dataNodeRulesRuleInfo["CreateEmpid"].asString();
		if(!dataNodeRulesRuleInfo["LastUpdateEmpid"].isNull())
			ruleInfoObject.lastUpdateEmpid = dataNodeRulesRuleInfo["LastUpdateEmpid"].asString();
		if(!dataNodeRulesRuleInfo["IsDelete"].isNull())
			ruleInfoObject.isDelete = std::stoi(dataNodeRulesRuleInfo["IsDelete"].asString());
		if(!dataNodeRulesRuleInfo["Rid"].isNull())
			ruleInfoObject.rid = dataNodeRulesRuleInfo["Rid"].asString();
		if(!dataNodeRulesRuleInfo["RuleScoreType"].isNull())
			ruleInfoObject.ruleScoreType = std::stoi(dataNodeRulesRuleInfo["RuleScoreType"].asString());
		if(!dataNodeRulesRuleInfo["EndTime"].isNull())
			ruleInfoObject.endTime = dataNodeRulesRuleInfo["EndTime"].asString();
		if(!dataNodeRulesRuleInfo["Weight"].isNull())
			ruleInfoObject.weight = dataNodeRulesRuleInfo["Weight"].asString();
		if(!dataNodeRulesRuleInfo["StartTime"].isNull())
			ruleInfoObject.startTime = dataNodeRulesRuleInfo["StartTime"].asString();
		if(!dataNodeRulesRuleInfo["RuleLambda"].isNull())
			ruleInfoObject.ruleLambda = dataNodeRulesRuleInfo["RuleLambda"].asString();
		if(!dataNodeRulesRuleInfo["ScoreSubName"].isNull())
			ruleInfoObject.scoreSubName = dataNodeRulesRuleInfo["ScoreSubName"].asString();
		if(!dataNodeRulesRuleInfo["AutoReview"].isNull())
			ruleInfoObject.autoReview = std::stoi(dataNodeRulesRuleInfo["AutoReview"].asString());
		if(!dataNodeRulesRuleInfo["Comments"].isNull())
			ruleInfoObject.comments = dataNodeRulesRuleInfo["Comments"].asString();
		if(!dataNodeRulesRuleInfo["LastUpdateTime"].isNull())
			ruleInfoObject.lastUpdateTime = dataNodeRulesRuleInfo["LastUpdateTime"].asString();
		if(!dataNodeRulesRuleInfo["ScoreName"].isNull())
			ruleInfoObject.scoreName = dataNodeRulesRuleInfo["ScoreName"].asString();
		if(!dataNodeRulesRuleInfo["Name"].isNull())
			ruleInfoObject.name = dataNodeRulesRuleInfo["Name"].asString();
		if(!dataNodeRulesRuleInfo["ScoreId"].isNull())
			ruleInfoObject.scoreId = std::stoi(dataNodeRulesRuleInfo["ScoreId"].asString());
		auto allBusinessCategoryNameList = value["BusinessCategoryNameList"]["BusinessCategoryNameList"];
		for (auto value : allBusinessCategoryNameList)
			ruleInfoObject.businessCategoryNameList.push_back(value.asString());
		data_.rules.push_back(ruleInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetRuleResult::getMessage()const
{
	return message_;
}

GetRuleResult::Data GetRuleResult::getData()const
{
	return data_;
}

std::string GetRuleResult::getCode()const
{
	return code_;
}

bool GetRuleResult::getSuccess()const
{
	return success_;
}

