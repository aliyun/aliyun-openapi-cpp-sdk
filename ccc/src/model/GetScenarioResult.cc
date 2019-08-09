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

#include <alibabacloud/ccc/model/GetScenarioResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetScenarioResult::GetScenarioResult() :
	ServiceResult()
{}

GetScenarioResult::GetScenarioResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetScenarioResult::~GetScenarioResult()
{}

void GetScenarioResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto scenarioNode = value["Scenario"];
	if(!scenarioNode["Id"].isNull())
		scenario_.id = scenarioNode["Id"].asString();
	if(!scenarioNode["Name"].isNull())
		scenario_.name = scenarioNode["Name"].asString();
	if(!scenarioNode["Description"].isNull())
		scenario_.description = scenarioNode["Description"].asString();
	if(!scenarioNode["Type"].isNull())
		scenario_.type = scenarioNode["Type"].asString();
	if(!scenarioNode["IsTemplate"].isNull())
		scenario_.isTemplate = scenarioNode["IsTemplate"].asString() == "true";
	auto allSurveys = value["Surveys"]["Survey"];
	for (auto value : allSurveys)
	{
		Scenario::Survey surveyObject;
		if(!value["Id"].isNull())
			surveyObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			surveyObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			surveyObject.description = value["Description"].asString();
		if(!value["Role"].isNull())
			surveyObject.role = value["Role"].asString();
		if(!value["Round"].isNull())
			surveyObject.round = std::stoi(value["Round"].asString());
		if(!value["BeebotId"].isNull())
			surveyObject.beebotId = value["BeebotId"].asString();
		auto allIntents = value["Intents"]["IntentNode"];
		for (auto value : allIntents)
		{
			Scenario::Survey::IntentNode intentsObject;
			if(!value["NodeId"].isNull())
				intentsObject.nodeId = value["NodeId"].asString();
			if(!value["IntentId"].isNull())
				intentsObject.intentId = value["IntentId"].asString();
			surveyObject.intents.push_back(intentsObject);
		}
		scenario_.surveys.push_back(surveyObject);
	}
	auto allVariables = value["Variables"]["KeyValuePair"];
	for (auto value : allVariables)
	{
		Scenario::KeyValuePair keyValuePairObject;
		if(!value["Key"].isNull())
			keyValuePairObject.key = value["Key"].asString();
		if(!value["Value"].isNull())
			keyValuePairObject.value = value["Value"].asString();
		scenario_.variables.push_back(keyValuePairObject);
	}
	auto strategyNode = scenarioNode["Strategy"];
	if(!strategyNode["Id"].isNull())
		scenario_.strategy.id = strategyNode["Id"].asString();
	if(!strategyNode["Name"].isNull())
		scenario_.strategy.name = strategyNode["Name"].asString();
	if(!strategyNode["Description"].isNull())
		scenario_.strategy.description = strategyNode["Description"].asString();
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
	auto allWorkingTime = value["WorkingTime"]["TimeFrame"];
	for (auto value : allWorkingTime)
	{
		Scenario::Strategy::TimeFrame timeFrameObject;
		if(!value["BeginTime"].isNull())
			timeFrameObject.beginTime = value["BeginTime"].asString();
		if(!value["EndTime"].isNull())
			timeFrameObject.endTime = value["EndTime"].asString();
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

std::string GetScenarioResult::getMessage()const
{
	return message_;
}

int GetScenarioResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetScenarioResult::getCode()const
{
	return code_;
}

bool GetScenarioResult::getSuccess()const
{
	return success_;
}

GetScenarioResult::Scenario GetScenarioResult::getScenario()const
{
	return scenario_;
}

