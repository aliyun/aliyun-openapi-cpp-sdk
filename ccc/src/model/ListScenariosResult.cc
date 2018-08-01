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

#include <alibabacloud/ccc/model/ListScenariosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListScenariosResult::ListScenariosResult() :
	ServiceResult()
{}

ListScenariosResult::ListScenariosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScenariosResult::~ListScenariosResult()
{}

void ListScenariosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allScenarios = value["Scenarios"]["Scenario"];
	for (auto value : allScenarios)
	{
		Scenario scenariosObject;
		if(!value["Id"].isNull())
			scenariosObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			scenariosObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			scenariosObject.description = value["Description"].asString();
		if(!value["Type"].isNull())
			scenariosObject.type = value["Type"].asString();
		if(!value["IsTemplate"].isNull())
			scenariosObject.isTemplate = value["IsTemplate"].asString() == "true";
		auto allSurveys = value["Surveys"]["Survey"];
		for (auto value : allSurveys)
		{
			Scenario::Survey surveysObject;
			if(!value["Id"].isNull())
				surveysObject.id = value["Id"].asString();
			if(!value["Name"].isNull())
				surveysObject.name = value["Name"].asString();
			if(!value["Description"].isNull())
				surveysObject.description = value["Description"].asString();
			if(!value["Role"].isNull())
				surveysObject.role = value["Role"].asString();
			if(!value["Round"].isNull())
				surveysObject.round = std::stoi(value["Round"].asString());
			if(!value["BeebotId"].isNull())
				surveysObject.beebotId = value["BeebotId"].asString();
			auto allIntents = value["Intents"]["IntentNode"];
			for (auto value : allIntents)
			{
				Scenario::Survey::IntentNode intentsObject;
				if(!value["NodeId"].isNull())
					intentsObject.nodeId = value["NodeId"].asString();
				if(!value["IntentId"].isNull())
					intentsObject.intentId = value["IntentId"].asString();
				surveysObject.intents.push_back(intentsObject);
			}
			scenariosObject.surveys.push_back(surveysObject);
		}
		auto allVariables = value["Variables"]["KeyValuePair"];
		for (auto value : allVariables)
		{
			Scenario::KeyValuePair variablesObject;
			if(!value["Key"].isNull())
				variablesObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				variablesObject.value = value["Value"].asString();
			scenariosObject.variables.push_back(variablesObject);
		}
		auto strategyNode = value["Strategy"];
		if(!strategyNode["Id"].isNull())
			scenariosObject.strategy.id = strategyNode["Id"].asString();
		if(!strategyNode["Name"].isNull())
			scenariosObject.strategy.name = strategyNode["Name"].asString();
		if(!strategyNode["Description"].isNull())
			scenariosObject.strategy.description = strategyNode["Description"].asString();
		if(!strategyNode["Type"].isNull())
			scenariosObject.strategy.type = strategyNode["Type"].asString();
		if(!strategyNode["StartTime"].isNull())
			scenariosObject.strategy.startTime = std::stol(strategyNode["StartTime"].asString());
		if(!strategyNode["EndTime"].isNull())
			scenariosObject.strategy.endTime = std::stol(strategyNode["EndTime"].asString());
		if(!strategyNode["RepeatBy"].isNull())
			scenariosObject.strategy.repeatBy = strategyNode["RepeatBy"].asString();
		if(!strategyNode["MaxAttemptsPerDay"].isNull())
			scenariosObject.strategy.maxAttemptsPerDay = std::stoi(strategyNode["MaxAttemptsPerDay"].asString());
		if(!strategyNode["MinAttemptInterval"].isNull())
			scenariosObject.strategy.minAttemptInterval = std::stoi(strategyNode["MinAttemptInterval"].asString());
		if(!strategyNode["Customized"].isNull())
			scenariosObject.strategy.customized = strategyNode["Customized"].asString();
		if(!strategyNode["RoutingStrategy"].isNull())
			scenariosObject.strategy.routingStrategy = strategyNode["RoutingStrategy"].asString();
		if(!strategyNode["FollowUpStrategy"].isNull())
			scenariosObject.strategy.followUpStrategy = strategyNode["FollowUpStrategy"].asString();
		if(!strategyNode["IsTemplate"].isNull())
			scenariosObject.strategy.isTemplate = strategyNode["IsTemplate"].asString() == "true";
		auto allWorkingTime = value["WorkingTime"]["TimeFrame"];
		for (auto value : allWorkingTime)
		{
			Scenario::Strategy::TimeFrame timeFrameObject;
			if(!value["BeginTime"].isNull())
				timeFrameObject.beginTime = value["BeginTime"].asString();
			if(!value["EndTime"].isNull())
				timeFrameObject.endTime = value["EndTime"].asString();
			scenariosObject.strategy.workingTime.push_back(timeFrameObject);
		}
			auto allRepeatDays = strategyNode["RepeatDays"]["Integer"];
			for (auto value : allRepeatDays)
				scenariosObject.strategy.repeatDays.push_back(value.asString());
		scenarios_.push_back(scenariosObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListScenariosResult::getMessage()const
{
	return message_;
}

std::vector<ListScenariosResult::Scenario> ListScenariosResult::getScenarios()const
{
	return scenarios_;
}

int ListScenariosResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListScenariosResult::getCode()const
{
	return code_;
}

bool ListScenariosResult::getSuccess()const
{
	return success_;
}

