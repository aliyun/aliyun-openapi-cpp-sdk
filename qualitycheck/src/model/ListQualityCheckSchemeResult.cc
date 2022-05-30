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

#include <alibabacloud/qualitycheck/model/ListQualityCheckSchemeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

ListQualityCheckSchemeResult::ListQualityCheckSchemeResult() :
	ServiceResult()
{}

ListQualityCheckSchemeResult::ListQualityCheckSchemeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListQualityCheckSchemeResult::~ListQualityCheckSchemeResult()
{}

void ListQualityCheckSchemeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["SchemeId"].isNull())
			dataObject.schemeId = std::stol(valueDatadataItem["SchemeId"].asString());
		if(!valueDatadataItem["Name"].isNull())
			dataObject.name = valueDatadataItem["Name"].asString();
		if(!valueDatadataItem["Description"].isNull())
			dataObject.description = valueDatadataItem["Description"].asString();
		if(!valueDatadataItem["DataType"].isNull())
			dataObject.dataType = std::stoi(valueDatadataItem["DataType"].asString());
		if(!valueDatadataItem["Type"].isNull())
			dataObject.type = std::stoi(valueDatadataItem["Type"].asString());
		if(!valueDatadataItem["TemplateType"].isNull())
			dataObject.templateType = std::stoi(valueDatadataItem["TemplateType"].asString());
		if(!valueDatadataItem["Status"].isNull())
			dataObject.status = std::stoi(valueDatadataItem["Status"].asString());
		if(!valueDatadataItem["CreateUserName"].isNull())
			dataObject.createUserName = valueDatadataItem["CreateUserName"].asString();
		if(!valueDatadataItem["CreateTime"].isNull())
			dataObject.createTime = valueDatadataItem["CreateTime"].asString();
		if(!valueDatadataItem["UpdateUserName"].isNull())
			dataObject.updateUserName = valueDatadataItem["UpdateUserName"].asString();
		if(!valueDatadataItem["UpdateTime"].isNull())
			dataObject.updateTime = valueDatadataItem["UpdateTime"].asString();
		if(!valueDatadataItem["Version"].isNull())
			dataObject.version = std::stol(valueDatadataItem["Version"].asString());
		auto allSchemeCheckTypeListNode = valueDatadataItem["SchemeCheckTypeList"]["schemeCheckTypeListItem"];
		for (auto valueDatadataItemSchemeCheckTypeListschemeCheckTypeListItem : allSchemeCheckTypeListNode)
		{
			DataItem::SchemeCheckTypeListItem schemeCheckTypeListObject;
			if(!valueDatadataItemSchemeCheckTypeListschemeCheckTypeListItem["CheckType"].isNull())
				schemeCheckTypeListObject.checkType = std::stoi(valueDatadataItemSchemeCheckTypeListschemeCheckTypeListItem["CheckType"].asString());
			if(!valueDatadataItemSchemeCheckTypeListschemeCheckTypeListItem["Enable"].isNull())
				schemeCheckTypeListObject.enable = std::stoi(valueDatadataItemSchemeCheckTypeListschemeCheckTypeListItem["Enable"].asString());
			if(!valueDatadataItemSchemeCheckTypeListschemeCheckTypeListItem["CheckName"].isNull())
				schemeCheckTypeListObject.checkName = valueDatadataItemSchemeCheckTypeListschemeCheckTypeListItem["CheckName"].asString();
			if(!valueDatadataItemSchemeCheckTypeListschemeCheckTypeListItem["TargetType"].isNull())
				schemeCheckTypeListObject.targetType = std::stoi(valueDatadataItemSchemeCheckTypeListschemeCheckTypeListItem["TargetType"].asString());
			if(!valueDatadataItemSchemeCheckTypeListschemeCheckTypeListItem["Score"].isNull())
				schemeCheckTypeListObject.score = std::stoi(valueDatadataItemSchemeCheckTypeListschemeCheckTypeListItem["Score"].asString());
			dataObject.schemeCheckTypeList.push_back(schemeCheckTypeListObject);
		}
		auto allRuleListNode = valueDatadataItem["RuleList"]["ruleListItem"];
		for (auto valueDatadataItemRuleListruleListItem : allRuleListNode)
		{
			DataItem::RuleListItem ruleListObject;
			auto allRulesNode = valueDatadataItemRuleListruleListItem["Rules"]["rulesItem"];
			for (auto valueDatadataItemRuleListruleListItemRulesrulesItem : allRulesNode)
			{
				DataItem::RuleListItem::RulesItem rulesObject;
				if(!valueDatadataItemRuleListruleListItemRulesrulesItem["Rid"].isNull())
					rulesObject.rid = std::stol(valueDatadataItemRuleListruleListItemRulesrulesItem["Rid"].asString());
				if(!valueDatadataItemRuleListruleListItemRulesrulesItem["Name"].isNull())
					rulesObject.name = valueDatadataItemRuleListruleListItemRulesrulesItem["Name"].asString();
				if(!valueDatadataItemRuleListruleListItemRulesrulesItem["RuleScoreType"].isNull())
					rulesObject.ruleScoreType = std::stoi(valueDatadataItemRuleListruleListItemRulesrulesItem["RuleScoreType"].asString());
				if(!valueDatadataItemRuleListruleListItemRulesrulesItem["ScoreNum"].isNull())
					rulesObject.scoreNum = std::stoi(valueDatadataItemRuleListruleListItemRulesrulesItem["ScoreNum"].asString());
				if(!valueDatadataItemRuleListruleListItemRulesrulesItem["ScoreType"].isNull())
					rulesObject.scoreType = std::stoi(valueDatadataItemRuleListruleListItemRulesrulesItem["ScoreType"].asString());
				if(!valueDatadataItemRuleListruleListItemRulesrulesItem["CheckType"].isNull())
					rulesObject.checkType = std::stoi(valueDatadataItemRuleListruleListItemRulesrulesItem["CheckType"].asString());
				if(!valueDatadataItemRuleListruleListItemRulesrulesItem["TargetType"].isNull())
					rulesObject.targetType = std::stoi(valueDatadataItemRuleListruleListItemRulesrulesItem["TargetType"].asString());
				if(!valueDatadataItemRuleListruleListItemRulesrulesItem["ScoreNumType"].isNull())
					rulesObject.scoreNumType = std::stoi(valueDatadataItemRuleListruleListItemRulesrulesItem["ScoreNumType"].asString());
				ruleListObject.rules.push_back(rulesObject);
			}
			dataObject.ruleList.push_back(ruleListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ResultCountId"].isNull())
		resultCountId_ = value["ResultCountId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::string ListQualityCheckSchemeResult::getMessage()const
{
	return message_;
}

int ListQualityCheckSchemeResult::getPageSize()const
{
	return pageSize_;
}

int ListQualityCheckSchemeResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListQualityCheckSchemeResult::DataItem> ListQualityCheckSchemeResult::getData()const
{
	return data_;
}

int ListQualityCheckSchemeResult::getCount()const
{
	return count_;
}

std::string ListQualityCheckSchemeResult::getCode()const
{
	return code_;
}

bool ListQualityCheckSchemeResult::getSuccess()const
{
	return success_;
}

std::string ListQualityCheckSchemeResult::getResultCountId()const
{
	return resultCountId_;
}

