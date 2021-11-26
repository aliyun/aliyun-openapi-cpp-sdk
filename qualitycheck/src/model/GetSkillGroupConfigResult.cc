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

#include <alibabacloud/qualitycheck/model/GetSkillGroupConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetSkillGroupConfigResult::GetSkillGroupConfigResult() :
	ServiceResult()
{}

GetSkillGroupConfigResult::GetSkillGroupConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSkillGroupConfigResult::~GetSkillGroupConfigResult()
{}

void GetSkillGroupConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Type"].isNull())
		data_.type = std::stoi(dataNode["Type"].asString());
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["UpdateTime"].isNull())
		data_.updateTime = dataNode["UpdateTime"].asString();
	if(!dataNode["AllContentQualityCheck"].isNull())
		data_.allContentQualityCheck = std::stoi(dataNode["AllContentQualityCheck"].asString());
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = dataNode["CreateTime"].asString();
	if(!dataNode["SkillGroupId"].isNull())
		data_.skillGroupId = dataNode["SkillGroupId"].asString();
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!dataNode["VocabId"].isNull())
		data_.vocabId = std::stol(dataNode["VocabId"].asString());
	if(!dataNode["SkillGroupFrom"].isNull())
		data_.skillGroupFrom = std::stoi(dataNode["SkillGroupFrom"].asString());
	if(!dataNode["Rid"].isNull())
		data_.rid = dataNode["Rid"].asString();
	if(!dataNode["SkillGroupName"].isNull())
		data_.skillGroupName = dataNode["SkillGroupName"].asString();
	if(!dataNode["ModelName"].isNull())
		data_.modelName = dataNode["ModelName"].asString();
	if(!dataNode["AllRids"].isNull())
		data_.allRids = dataNode["AllRids"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["ModelId"].isNull())
		data_.modelId = std::stol(dataNode["ModelId"].asString());
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["QualityCheckType"].isNull())
		data_.qualityCheckType = std::stoi(dataNode["QualityCheckType"].asString());
	if(!dataNode["VocabName"].isNull())
		data_.vocabName = dataNode["VocabName"].asString();
	auto allRuleListNode = dataNode["RuleList"]["RuleNameInfo"];
	for (auto dataNodeRuleListRuleNameInfo : allRuleListNode)
	{
		Data::RuleNameInfo ruleNameInfoObject;
		if(!dataNodeRuleListRuleNameInfo["RuleName"].isNull())
			ruleNameInfoObject.ruleName = dataNodeRuleListRuleNameInfo["RuleName"].asString();
		if(!dataNodeRuleListRuleNameInfo["Rid"].isNull())
			ruleNameInfoObject.rid = std::stol(dataNodeRuleListRuleNameInfo["Rid"].asString());
		data_.ruleList.push_back(ruleNameInfoObject);
	}
	auto allAllRuleListNode = dataNode["AllRuleList"]["RuleNameInfo"];
	for (auto dataNodeAllRuleListRuleNameInfo : allAllRuleListNode)
	{
		Data::RuleNameInfo ruleNameInfoObject;
		if(!dataNodeAllRuleListRuleNameInfo["RuleName"].isNull())
			ruleNameInfoObject.ruleName = dataNodeAllRuleListRuleNameInfo["RuleName"].asString();
		if(!dataNodeAllRuleListRuleNameInfo["Rid"].isNull())
			ruleNameInfoObject.rid = std::stol(dataNodeAllRuleListRuleNameInfo["Rid"].asString());
		data_.allRuleList.push_back(ruleNameInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetSkillGroupConfigResult::getMessage()const
{
	return message_;
}

GetSkillGroupConfigResult::Data GetSkillGroupConfigResult::getData()const
{
	return data_;
}

std::string GetSkillGroupConfigResult::getCode()const
{
	return code_;
}

bool GetSkillGroupConfigResult::getSuccess()const
{
	return success_;
}

