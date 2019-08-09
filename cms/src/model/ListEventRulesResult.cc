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

#include <alibabacloud/cms/model/ListEventRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ListEventRulesResult::ListEventRulesResult() :
	ServiceResult()
{}

ListEventRulesResult::ListEventRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEventRulesResult::~ListEventRulesResult()
{}

void ListEventRulesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allDatapoints = value["Datapoints"]["EventRule"];
	for (auto value : allDatapoints)
	{
		EventRule datapointsObject;
		if(!value["Name"].isNull())
			datapointsObject.name = value["Name"].asString();
		if(!value["GroupId"].isNull())
			datapointsObject.groupId = value["GroupId"].asString();
		if(!value["EventType"].isNull())
			datapointsObject.eventType = value["EventType"].asString();
		if(!value["State"].isNull())
			datapointsObject.state = value["State"].asString();
		if(!value["Description"].isNull())
			datapointsObject.description = value["Description"].asString();
		auto allEventPattern = value["EventPattern"]["EventPatternItem"];
		for (auto value : allEventPattern)
		{
			EventRule::EventPatternItem eventPatternObject;
			if(!value["Product"].isNull())
				eventPatternObject.product = value["Product"].asString();
			auto allNameList = value["NameList"]["NameList"];
			for (auto value : allNameList)
				eventPatternObject.nameList.push_back(value.asString());
			auto allStatusList = value["StatusList"]["StatusList"];
			for (auto value : allStatusList)
				eventPatternObject.statusList.push_back(value.asString());
			auto allLevelList = value["LevelList"]["LevelList"];
			for (auto value : allLevelList)
				eventPatternObject.levelList.push_back(value.asString());
			auto allEventTypeList = value["EventTypeList"]["EventTypeList"];
			for (auto value : allEventTypeList)
				eventPatternObject.eventTypeList.push_back(value.asString());
			datapointsObject.eventPattern.push_back(eventPatternObject);
		}
		datapoints_.push_back(datapointsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListEventRulesResult::getMessage()const
{
	return message_;
}

std::string ListEventRulesResult::getNextToken()const
{
	return nextToken_;
}

int ListEventRulesResult::getCurrentPage()const
{
	return currentPage_;
}

int ListEventRulesResult::getTotal()const
{
	return total_;
}

std::vector<ListEventRulesResult::EventRule> ListEventRulesResult::getDatapoints()const
{
	return datapoints_;
}

std::string ListEventRulesResult::getCode()const
{
	return code_;
}

bool ListEventRulesResult::getSuccess()const
{
	return success_;
}

