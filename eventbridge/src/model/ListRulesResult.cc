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

#include <alibabacloud/eventbridge/model/ListRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

ListRulesResult::ListRulesResult() :
	ServiceResult()
{}

ListRulesResult::ListRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRulesResult::~ListRulesResult()
{}

void ListRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allRulesNode = dataNode["Rules"]["RulesItem"];
	for (auto dataNodeRulesRulesItem : allRulesNode)
	{
		Data::RulesItem rulesItemObject;
		if(!dataNodeRulesRulesItem["DetailMap"].isNull())
			rulesItemObject.detailMap = dataNodeRulesRulesItem["DetailMap"].asString();
		if(!dataNodeRulesRulesItem["Status"].isNull())
			rulesItemObject.status = dataNodeRulesRulesItem["Status"].asString();
		if(!dataNodeRulesRulesItem["EventBusName"].isNull())
			rulesItemObject.eventBusName = dataNodeRulesRulesItem["EventBusName"].asString();
		if(!dataNodeRulesRulesItem["RuleARN"].isNull())
			rulesItemObject.ruleARN = dataNodeRulesRulesItem["RuleARN"].asString();
		if(!dataNodeRulesRulesItem["Description"].isNull())
			rulesItemObject.description = dataNodeRulesRulesItem["Description"].asString();
		if(!dataNodeRulesRulesItem["FilterPattern"].isNull())
			rulesItemObject.filterPattern = dataNodeRulesRulesItem["FilterPattern"].asString();
		if(!dataNodeRulesRulesItem["CreatedTimestamp"].isNull())
			rulesItemObject.createdTimestamp = std::stol(dataNodeRulesRulesItem["CreatedTimestamp"].asString());
		if(!dataNodeRulesRulesItem["RuleName"].isNull())
			rulesItemObject.ruleName = dataNodeRulesRulesItem["RuleName"].asString();
		auto allTargetsNode = dataNodeRulesRulesItem["Targets"]["TargetsItem"];
		for (auto dataNodeRulesRulesItemTargetsTargetsItem : allTargetsNode)
		{
			Data::RulesItem::TargetsItem targetsObject;
			if(!dataNodeRulesRulesItemTargetsTargetsItem["Type"].isNull())
				targetsObject.type = dataNodeRulesRulesItemTargetsTargetsItem["Type"].asString();
			if(!dataNodeRulesRulesItemTargetsTargetsItem["Endpoint"].isNull())
				targetsObject.endpoint = dataNodeRulesRulesItemTargetsTargetsItem["Endpoint"].asString();
			if(!dataNodeRulesRulesItemTargetsTargetsItem["Id"].isNull())
				targetsObject.id = dataNodeRulesRulesItemTargetsTargetsItem["Id"].asString();
			if(!dataNodeRulesRulesItemTargetsTargetsItem["PushSelector"].isNull())
				targetsObject.pushSelector = dataNodeRulesRulesItemTargetsTargetsItem["PushSelector"].asString();
			if(!dataNodeRulesRulesItemTargetsTargetsItem["ErrorsTolerance"].isNull())
				targetsObject.errorsTolerance = dataNodeRulesRulesItemTargetsTargetsItem["ErrorsTolerance"].asString();
			rulesItemObject.targets.push_back(targetsObject);
		}
		data_.rules.push_back(rulesItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListRulesResult::getMessage()const
{
	return message_;
}

ListRulesResult::Data ListRulesResult::getData()const
{
	return data_;
}

std::string ListRulesResult::getCode()const
{
	return code_;
}

bool ListRulesResult::getSuccess()const
{
	return success_;
}

