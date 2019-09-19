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
	auto allScenariosNode = value["Scenarios"]["Scenario"];
	for (auto valueScenariosScenario : allScenariosNode)
	{
		Scenario scenariosObject;
		if(!valueScenariosScenario["Id"].isNull())
			scenariosObject.id = valueScenariosScenario["Id"].asString();
		if(!valueScenariosScenario["Name"].isNull())
			scenariosObject.name = valueScenariosScenario["Name"].asString();
		if(!valueScenariosScenario["Description"].isNull())
			scenariosObject.description = valueScenariosScenario["Description"].asString();
		if(!valueScenariosScenario["Type"].isNull())
			scenariosObject.type = valueScenariosScenario["Type"].asString();
		if(!valueScenariosScenario["IsTemplate"].isNull())
			scenariosObject.isTemplate = valueScenariosScenario["IsTemplate"].asString() == "true";
		auto allSurveysNode = allScenariosNode["Surveys"]["Survey"];
		for (auto allScenariosNodeSurveysSurvey : allSurveysNode)
		{
			Scenario::Survey surveysObject;
			if(!allScenariosNodeSurveysSurvey["Id"].isNull())
				surveysObject.id = allScenariosNodeSurveysSurvey["Id"].asString();
			if(!allScenariosNodeSurveysSurvey["Name"].isNull())
				surveysObject.name = allScenariosNodeSurveysSurvey["Name"].asString();
			if(!allScenariosNodeSurveysSurvey["Description"].isNull())
				surveysObject.description = allScenariosNodeSurveysSurvey["Description"].asString();
			if(!allScenariosNodeSurveysSurvey["Role"].isNull())
				surveysObject.role = allScenariosNodeSurveysSurvey["Role"].asString();
			if(!allScenariosNodeSurveysSurvey["Round"].isNull())
				surveysObject.round = std::stoi(allScenariosNodeSurveysSurvey["Round"].asString());
			if(!allScenariosNodeSurveysSurvey["BeebotId"].isNull())
				surveysObject.beebotId = allScenariosNodeSurveysSurvey["BeebotId"].asString();
			auto allIntentsNode = allSurveysNode["Intents"]["IntentNode"];
			for (auto allSurveysNodeIntentsIntentNode : allIntentsNode)
			{
				Scenario::Survey::IntentNode intentsObject;
				if(!allSurveysNodeIntentsIntentNode["NodeId"].isNull())
					intentsObject.nodeId = allSurveysNodeIntentsIntentNode["NodeId"].asString();
				if(!allSurveysNodeIntentsIntentNode["IntentId"].isNull())
					intentsObject.intentId = allSurveysNodeIntentsIntentNode["IntentId"].asString();
				surveysObject.intents.push_back(intentsObject);
			}
			scenariosObject.surveys.push_back(surveysObject);
		}
		auto allVariablesNode = allScenariosNode["Variables"]["KeyValuePair"];
		for (auto allScenariosNodeVariablesKeyValuePair : allVariablesNode)
		{
			Scenario::KeyValuePair variablesObject;
			if(!allScenariosNodeVariablesKeyValuePair["Key"].isNull())
				variablesObject.key = allScenariosNodeVariablesKeyValuePair["Key"].asString();
			if(!allScenariosNodeVariablesKeyValuePair["Value"].isNull())
				variablesObject.value = allScenariosNodeVariablesKeyValuePair["Value"].asString();
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
		auto allWorkingTimeNode = strategyNode["WorkingTime"]["TimeFrame"];
		for (auto strategyNodeWorkingTimeTimeFrame : allWorkingTimeNode)
		{
			Scenario::Strategy::TimeFrame timeFrameObject;
			if(!strategyNodeWorkingTimeTimeFrame["BeginTime"].isNull())
				timeFrameObject.beginTime = strategyNodeWorkingTimeTimeFrame["BeginTime"].asString();
			if(!strategyNodeWorkingTimeTimeFrame["EndTime"].isNull())
				timeFrameObject.endTime = strategyNodeWorkingTimeTimeFrame["EndTime"].asString();
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

