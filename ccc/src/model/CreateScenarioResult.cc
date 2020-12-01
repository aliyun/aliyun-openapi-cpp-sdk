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

#include <alibabacloud/ccc/model/CreateScenarioResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

CreateScenarioResult::CreateScenarioResult() :
	ServiceResult()
{}

CreateScenarioResult::CreateScenarioResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateScenarioResult::~CreateScenarioResult()
{}

void CreateScenarioResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto scenarioNode = value["Scenario"];
	if(!scenarioNode["ScenarioId"].isNull())
		scenario_.scenarioId = scenarioNode["ScenarioId"].asString();
	if(!scenarioNode["ScenarioName"].isNull())
		scenario_.scenarioName = scenarioNode["ScenarioName"].asString();
	if(!scenarioNode["ScenarioDescription"].isNull())
		scenario_.scenarioDescription = scenarioNode["ScenarioDescription"].asString();
	if(!scenarioNode["Type"].isNull())
		scenario_.type = scenarioNode["Type"].asString();
	if(!scenarioNode["IsTemplate"].isNull())
		scenario_.isTemplate = scenarioNode["IsTemplate"].asString() == "true";
	auto allSurveysNode = scenarioNode["Surveys"]["Survey"];
	for (auto scenarioNodeSurveysSurvey : allSurveysNode)
	{
		Scenario::Survey surveyObject;
		if(!scenarioNodeSurveysSurvey["SurveyId"].isNull())
			surveyObject.surveyId = scenarioNodeSurveysSurvey["SurveyId"].asString();
		if(!scenarioNodeSurveysSurvey["SurveyName"].isNull())
			surveyObject.surveyName = scenarioNodeSurveysSurvey["SurveyName"].asString();
		if(!scenarioNodeSurveysSurvey["SurveyDescription"].isNull())
			surveyObject.surveyDescription = scenarioNodeSurveysSurvey["SurveyDescription"].asString();
		if(!scenarioNodeSurveysSurvey["Role"].isNull())
			surveyObject.role = scenarioNodeSurveysSurvey["Role"].asString();
		if(!scenarioNodeSurveysSurvey["Round"].isNull())
			surveyObject.round = std::stoi(scenarioNodeSurveysSurvey["Round"].asString());
		if(!scenarioNodeSurveysSurvey["BeebotId"].isNull())
			surveyObject.beebotId = scenarioNodeSurveysSurvey["BeebotId"].asString();
		auto allIntentsNode = scenarioNodeSurveysSurvey["Intents"]["IntentNode"];
		for (auto scenarioNodeSurveysSurveyIntentsIntentNode : allIntentsNode)
		{
			Scenario::Survey::IntentNode intentsObject;
			if(!scenarioNodeSurveysSurveyIntentsIntentNode["NodeId"].isNull())
				intentsObject.nodeId = scenarioNodeSurveysSurveyIntentsIntentNode["NodeId"].asString();
			if(!scenarioNodeSurveysSurveyIntentsIntentNode["IntentId"].isNull())
				intentsObject.intentId = scenarioNodeSurveysSurveyIntentsIntentNode["IntentId"].asString();
			surveyObject.intents.push_back(intentsObject);
		}
		scenario_.surveys.push_back(surveyObject);
	}
	auto allVariablesNode = scenarioNode["Variables"]["KeyValuePair"];
	for (auto scenarioNodeVariablesKeyValuePair : allVariablesNode)
	{
		Scenario::KeyValuePair keyValuePairObject;
		if(!scenarioNodeVariablesKeyValuePair["Key"].isNull())
			keyValuePairObject.key = scenarioNodeVariablesKeyValuePair["Key"].asString();
		if(!scenarioNodeVariablesKeyValuePair["Value"].isNull())
			keyValuePairObject.value = scenarioNodeVariablesKeyValuePair["Value"].asString();
		scenario_.variables.push_back(keyValuePairObject);
	}
	auto strategyNode = scenarioNode["Strategy"];
	if(!strategyNode["StrategyId"].isNull())
		scenario_.strategy.strategyId = strategyNode["StrategyId"].asString();
	if(!strategyNode["StrategyName"].isNull())
		scenario_.strategy.strategyName = strategyNode["StrategyName"].asString();
	if(!strategyNode["StrategyDescription"].isNull())
		scenario_.strategy.strategyDescription = strategyNode["StrategyDescription"].asString();
	if(!strategyNode["Type"].isNull())
		scenario_.strategy.type = strategyNode["Type"].asString();
	if(!strategyNode["StartTime"].isNull())
		scenario_.strategy.startTime = std::stol(strategyNode["StartTime"].asString());
	if(!strategyNode["EndTime"].isNull())
		scenario_.strategy.endTime = std::stol(strategyNode["EndTime"].asString());
	if(!strategyNode["RepeatBy"].isNull())
		scenario_.strategy.repeatBy = strategyNode["RepeatBy"].asString();
	if(!strategyNode["MaxAttemptsPerDay"].isNull())
		scenario_.strategy.maxAttemptsPerDay = std::stoi(strategyNode["MaxAttemptsPerDay"].asString());
	if(!strategyNode["MinAttemptInterval"].isNull())
		scenario_.strategy.minAttemptInterval = std::stoi(strategyNode["MinAttemptInterval"].asString());
	if(!strategyNode["Customized"].isNull())
		scenario_.strategy.customized = strategyNode["Customized"].asString();
	if(!strategyNode["RoutingStrategy"].isNull())
		scenario_.strategy.routingStrategy = strategyNode["RoutingStrategy"].asString();
	if(!strategyNode["FollowUpStrategy"].isNull())
		scenario_.strategy.followUpStrategy = strategyNode["FollowUpStrategy"].asString();
	if(!strategyNode["IsTemplate"].isNull())
		scenario_.strategy.isTemplate = strategyNode["IsTemplate"].asString() == "true";
	auto allWorkingTimeNode = strategyNode["WorkingTime"]["TimeFrame"];
	for (auto strategyNodeWorkingTimeTimeFrame : allWorkingTimeNode)
	{
		Scenario::Strategy::TimeFrame timeFrameObject;
		if(!strategyNodeWorkingTimeTimeFrame["BeginTime"].isNull())
			timeFrameObject.beginTime = strategyNodeWorkingTimeTimeFrame["BeginTime"].asString();
		if(!strategyNodeWorkingTimeTimeFrame["EndTime"].isNull())
			timeFrameObject.endTime = strategyNodeWorkingTimeTimeFrame["EndTime"].asString();
		scenario_.strategy.workingTime.push_back(timeFrameObject);
	}
		auto allRepeatDays = strategyNode["RepeatDays"]["Integer"];
		for (auto value : allRepeatDays)
			scenario_.strategy.repeatDays.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string CreateScenarioResult::getMessage()const
{
	return message_;
}

int CreateScenarioResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateScenarioResult::getCode()const
{
	return code_;
}

bool CreateScenarioResult::getSuccess()const
{
	return success_;
}

CreateScenarioResult::Scenario CreateScenarioResult::getScenario()const
{
	return scenario_;
}

