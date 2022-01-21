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

#include <alibabacloud/cms/model/DescribeEventRuleListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeEventRuleListResult::DescribeEventRuleListResult() :
	ServiceResult()
{}

DescribeEventRuleListResult::DescribeEventRuleListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventRuleListResult::~DescribeEventRuleListResult()
{}

void DescribeEventRuleListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventRulesNode = value["EventRules"]["EventRule"];
	for (auto valueEventRulesEventRule : allEventRulesNode)
	{
		EventRule eventRulesObject;
		if(!valueEventRulesEventRule["EventType"].isNull())
			eventRulesObject.eventType = valueEventRulesEventRule["EventType"].asString();
		if(!valueEventRulesEventRule["Description"].isNull())
			eventRulesObject.description = valueEventRulesEventRule["Description"].asString();
		if(!valueEventRulesEventRule["GroupId"].isNull())
			eventRulesObject.groupId = valueEventRulesEventRule["GroupId"].asString();
		if(!valueEventRulesEventRule["Name"].isNull())
			eventRulesObject.name = valueEventRulesEventRule["Name"].asString();
		if(!valueEventRulesEventRule["State"].isNull())
			eventRulesObject.state = valueEventRulesEventRule["State"].asString();
		if(!valueEventRulesEventRule["SilenceTime"].isNull())
			eventRulesObject.silenceTime = std::stol(valueEventRulesEventRule["SilenceTime"].asString());
		auto allEventPatternNode = valueEventRulesEventRule["EventPattern"]["EventPatternItem"];
		for (auto valueEventRulesEventRuleEventPatternEventPatternItem : allEventPatternNode)
		{
			EventRule::EventPatternItem eventPatternObject;
			if(!valueEventRulesEventRuleEventPatternEventPatternItem["Product"].isNull())
				eventPatternObject.product = valueEventRulesEventRuleEventPatternEventPatternItem["Product"].asString();
			if(!valueEventRulesEventRuleEventPatternEventPatternItem["CustomFilters"].isNull())
				eventPatternObject.customFilters = valueEventRulesEventRuleEventPatternEventPatternItem["CustomFilters"].asString();
			if(!valueEventRulesEventRuleEventPatternEventPatternItem["SQLFilter"].isNull())
				eventPatternObject.sQLFilter = valueEventRulesEventRuleEventPatternEventPatternItem["SQLFilter"].asString();
			auto keywordFilterNode = value["KeywordFilter"];
			if(!keywordFilterNode["Relation"].isNull())
				eventPatternObject.keywordFilter.relation = keywordFilterNode["Relation"].asString();
				auto allKeywords = keywordFilterNode["Keywords"]["Keywords"];
				for (auto value : allKeywords)
					eventPatternObject.keywordFilter.keywords.push_back(value.asString());
			auto allLevelList = value["LevelList"]["LevelList"];
			for (auto value : allLevelList)
				eventPatternObject.levelList.push_back(value.asString());
			auto allEventTypeList = value["EventTypeList"]["EventTypeList"];
			for (auto value : allEventTypeList)
				eventPatternObject.eventTypeList.push_back(value.asString());
			auto allNameList = value["NameList"]["NameList"];
			for (auto value : allNameList)
				eventPatternObject.nameList.push_back(value.asString());
			eventRulesObject.eventPattern.push_back(eventPatternObject);
		}
		eventRules_.push_back(eventRulesObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeEventRuleListResult::getMessage()const
{
	return message_;
}

int DescribeEventRuleListResult::getTotal()const
{
	return total_;
}

std::vector<DescribeEventRuleListResult::EventRule> DescribeEventRuleListResult::getEventRules()const
{
	return eventRules_;
}

std::string DescribeEventRuleListResult::getCode()const
{
	return code_;
}

bool DescribeEventRuleListResult::getSuccess()const
{
	return success_;
}

