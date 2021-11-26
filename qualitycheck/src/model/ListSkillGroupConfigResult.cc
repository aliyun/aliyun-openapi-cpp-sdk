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

#include <alibabacloud/qualitycheck/model/ListSkillGroupConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

ListSkillGroupConfigResult::ListSkillGroupConfigResult() :
	ServiceResult()
{}

ListSkillGroupConfigResult::ListSkillGroupConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSkillGroupConfigResult::~ListSkillGroupConfigResult()
{}

void ListSkillGroupConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["SkillGroupConfig"];
	for (auto valueDataSkillGroupConfig : allDataNode)
	{
		SkillGroupConfig dataObject;
		if(!valueDataSkillGroupConfig["Type"].isNull())
			dataObject.type = std::stoi(valueDataSkillGroupConfig["Type"].asString());
		if(!valueDataSkillGroupConfig["Status"].isNull())
			dataObject.status = std::stoi(valueDataSkillGroupConfig["Status"].asString());
		if(!valueDataSkillGroupConfig["UpdateTime"].isNull())
			dataObject.updateTime = valueDataSkillGroupConfig["UpdateTime"].asString();
		if(!valueDataSkillGroupConfig["AllContentQualityCheck"].isNull())
			dataObject.allContentQualityCheck = std::stoi(valueDataSkillGroupConfig["AllContentQualityCheck"].asString());
		if(!valueDataSkillGroupConfig["CreateTime"].isNull())
			dataObject.createTime = valueDataSkillGroupConfig["CreateTime"].asString();
		if(!valueDataSkillGroupConfig["SkillGroupId"].isNull())
			dataObject.skillGroupId = valueDataSkillGroupConfig["SkillGroupId"].asString();
		if(!valueDataSkillGroupConfig["ScreenSwitch"].isNull())
			dataObject.screenSwitch = valueDataSkillGroupConfig["ScreenSwitch"].asString() == "true";
		if(!valueDataSkillGroupConfig["InstanceId"].isNull())
			dataObject.instanceId = valueDataSkillGroupConfig["InstanceId"].asString();
		if(!valueDataSkillGroupConfig["VocabId"].isNull())
			dataObject.vocabId = std::stol(valueDataSkillGroupConfig["VocabId"].asString());
		if(!valueDataSkillGroupConfig["SkillGroupFrom"].isNull())
			dataObject.skillGroupFrom = std::stoi(valueDataSkillGroupConfig["SkillGroupFrom"].asString());
		if(!valueDataSkillGroupConfig["Rid"].isNull())
			dataObject.rid = valueDataSkillGroupConfig["Rid"].asString();
		if(!valueDataSkillGroupConfig["SkillGroupName"].isNull())
			dataObject.skillGroupName = valueDataSkillGroupConfig["SkillGroupName"].asString();
		if(!valueDataSkillGroupConfig["ModelName"].isNull())
			dataObject.modelName = valueDataSkillGroupConfig["ModelName"].asString();
		if(!valueDataSkillGroupConfig["AllRids"].isNull())
			dataObject.allRids = valueDataSkillGroupConfig["AllRids"].asString();
		if(!valueDataSkillGroupConfig["Name"].isNull())
			dataObject.name = valueDataSkillGroupConfig["Name"].asString();
		if(!valueDataSkillGroupConfig["ModelId"].isNull())
			dataObject.modelId = std::stol(valueDataSkillGroupConfig["ModelId"].asString());
		if(!valueDataSkillGroupConfig["Id"].isNull())
			dataObject.id = std::stol(valueDataSkillGroupConfig["Id"].asString());
		if(!valueDataSkillGroupConfig["QualityCheckType"].isNull())
			dataObject.qualityCheckType = std::stoi(valueDataSkillGroupConfig["QualityCheckType"].asString());
		if(!valueDataSkillGroupConfig["VocabName"].isNull())
			dataObject.vocabName = valueDataSkillGroupConfig["VocabName"].asString();
		auto allRuleListNode = valueDataSkillGroupConfig["RuleList"]["RuleNameInfo"];
		for (auto valueDataSkillGroupConfigRuleListRuleNameInfo : allRuleListNode)
		{
			SkillGroupConfig::RuleNameInfo ruleListObject;
			if(!valueDataSkillGroupConfigRuleListRuleNameInfo["RuleName"].isNull())
				ruleListObject.ruleName = valueDataSkillGroupConfigRuleListRuleNameInfo["RuleName"].asString();
			if(!valueDataSkillGroupConfigRuleListRuleNameInfo["Rid"].isNull())
				ruleListObject.rid = std::stol(valueDataSkillGroupConfigRuleListRuleNameInfo["Rid"].asString());
			dataObject.ruleList.push_back(ruleListObject);
		}
		auto allAllRuleListNode = valueDataSkillGroupConfig["AllRuleList"]["RuleNameInfo"];
		for (auto valueDataSkillGroupConfigAllRuleListRuleNameInfo : allAllRuleListNode)
		{
			SkillGroupConfig::RuleNameInfo allRuleListObject;
			if(!valueDataSkillGroupConfigAllRuleListRuleNameInfo["RuleName"].isNull())
				allRuleListObject.ruleName = valueDataSkillGroupConfigAllRuleListRuleNameInfo["RuleName"].asString();
			if(!valueDataSkillGroupConfigAllRuleListRuleNameInfo["Rid"].isNull())
				allRuleListObject.rid = std::stol(valueDataSkillGroupConfigAllRuleListRuleNameInfo["Rid"].asString());
			dataObject.allRuleList.push_back(allRuleListObject);
		}
		auto allSkillGroupScreensNode = valueDataSkillGroupConfig["SkillGroupScreens"]["SkillGroupScreen"];
		for (auto valueDataSkillGroupConfigSkillGroupScreensSkillGroupScreen : allSkillGroupScreensNode)
		{
			SkillGroupConfig::SkillGroupScreen skillGroupScreensObject;
			if(!valueDataSkillGroupConfigSkillGroupScreensSkillGroupScreen["Value"].isNull())
				skillGroupScreensObject.value = valueDataSkillGroupConfigSkillGroupScreensSkillGroupScreen["Value"].asString();
			if(!valueDataSkillGroupConfigSkillGroupScreensSkillGroupScreen["DataType"].isNull())
				skillGroupScreensObject.dataType = std::stoi(valueDataSkillGroupConfigSkillGroupScreensSkillGroupScreen["DataType"].asString());
			if(!valueDataSkillGroupConfigSkillGroupScreensSkillGroupScreen["Symbol"].isNull())
				skillGroupScreensObject.symbol = std::stoi(valueDataSkillGroupConfigSkillGroupScreensSkillGroupScreen["Symbol"].asString());
			if(!valueDataSkillGroupConfigSkillGroupScreensSkillGroupScreen["Name"].isNull())
				skillGroupScreensObject.name = valueDataSkillGroupConfigSkillGroupScreensSkillGroupScreen["Name"].asString();
			dataObject.skillGroupScreens.push_back(skillGroupScreensObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListSkillGroupConfigResult::getMessage()const
{
	return message_;
}

std::vector<ListSkillGroupConfigResult::SkillGroupConfig> ListSkillGroupConfigResult::getData()const
{
	return data_;
}

std::string ListSkillGroupConfigResult::getCode()const
{
	return code_;
}

bool ListSkillGroupConfigResult::getSuccess()const
{
	return success_;
}

