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

#include <alibabacloud/ccc/model/ListScenarioTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListScenarioTemplatesResult::ListScenarioTemplatesResult() :
	ServiceResult()
{}

ListScenarioTemplatesResult::ListScenarioTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScenarioTemplatesResult::~ListScenarioTemplatesResult()
{}

void ListScenarioTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScenarioTemplatesNode = value["ScenarioTemplates"]["Scenario"];
	for (auto valueScenarioTemplatesScenario : allScenarioTemplatesNode)
	{
		Scenario scenarioTemplatesObject;
		if(!valueScenarioTemplatesScenario["Id"].isNull())
			scenarioTemplatesObject.id = valueScenarioTemplatesScenario["Id"].asString();
		if(!valueScenarioTemplatesScenario["Name"].isNull())
			scenarioTemplatesObject.name = valueScenarioTemplatesScenario["Name"].asString();
		if(!valueScenarioTemplatesScenario["Description"].isNull())
			scenarioTemplatesObject.description = valueScenarioTemplatesScenario["Description"].asString();
		if(!valueScenarioTemplatesScenario["Type"].isNull())
			scenarioTemplatesObject.type = valueScenarioTemplatesScenario["Type"].asString();
		if(!valueScenarioTemplatesScenario["IsTemplate"].isNull())
			scenarioTemplatesObject.isTemplate = valueScenarioTemplatesScenario["IsTemplate"].asString() == "true";
		auto allSurveysNode = valueScenarioTemplatesScenario["Surveys"]["Survey"];
		for (auto valueScenarioTemplatesScenarioSurveysSurvey : allSurveysNode)
		{
			Scenario::Survey surveysObject;
			if(!valueScenarioTemplatesScenarioSurveysSurvey["Id"].isNull())
				surveysObject.id = valueScenarioTemplatesScenarioSurveysSurvey["Id"].asString();
			if(!valueScenarioTemplatesScenarioSurveysSurvey["Name"].isNull())
				surveysObject.name = valueScenarioTemplatesScenarioSurveysSurvey["Name"].asString();
			if(!valueScenarioTemplatesScenarioSurveysSurvey["Description"].isNull())
				surveysObject.description = valueScenarioTemplatesScenarioSurveysSurvey["Description"].asString();
			if(!valueScenarioTemplatesScenarioSurveysSurvey["Role"].isNull())
				surveysObject.role = valueScenarioTemplatesScenarioSurveysSurvey["Role"].asString();
			if(!valueScenarioTemplatesScenarioSurveysSurvey["Round"].isNull())
				surveysObject.round = std::stoi(valueScenarioTemplatesScenarioSurveysSurvey["Round"].asString());
			if(!valueScenarioTemplatesScenarioSurveysSurvey["BeebotId"].isNull())
				surveysObject.beebotId = valueScenarioTemplatesScenarioSurveysSurvey["BeebotId"].asString();
			if(!valueScenarioTemplatesScenarioSurveysSurvey["GlobalQuestions"].isNull())
				surveysObject.globalQuestions = valueScenarioTemplatesScenarioSurveysSurvey["GlobalQuestions"].asString();
			auto allIntentsNode = valueScenarioTemplatesScenarioSurveysSurvey["Intents"]["IntentNode"];
			for (auto valueScenarioTemplatesScenarioSurveysSurveyIntentsIntentNode : allIntentsNode)
			{
				Scenario::Survey::IntentNode intentsObject;
				if(!valueScenarioTemplatesScenarioSurveysSurveyIntentsIntentNode["NodeId"].isNull())
					intentsObject.nodeId = valueScenarioTemplatesScenarioSurveysSurveyIntentsIntentNode["NodeId"].asString();
				if(!valueScenarioTemplatesScenarioSurveysSurveyIntentsIntentNode["IntentId"].isNull())
					intentsObject.intentId = valueScenarioTemplatesScenarioSurveysSurveyIntentsIntentNode["IntentId"].asString();
				surveysObject.intents.push_back(intentsObject);
			}
			auto flowNode = value["Flow"];
			if(!flowNode["FlowId"].isNull())
				surveysObject.flow.flowId = flowNode["FlowId"].asString();
			if(!flowNode["IsPublished"].isNull())
				surveysObject.flow.isPublished = flowNode["IsPublished"].asString() == "true";
			if(!flowNode["FlowJson"].isNull())
				surveysObject.flow.flowJson = flowNode["FlowJson"].asString();
			scenarioTemplatesObject.surveys.push_back(surveysObject);
		}
		auto allVariablesNode = valueScenarioTemplatesScenario["Variables"]["KeyValuePair"];
		for (auto valueScenarioTemplatesScenarioVariablesKeyValuePair : allVariablesNode)
		{
			Scenario::KeyValuePair variablesObject;
			if(!valueScenarioTemplatesScenarioVariablesKeyValuePair["Key"].isNull())
				variablesObject.key = valueScenarioTemplatesScenarioVariablesKeyValuePair["Key"].asString();
			if(!valueScenarioTemplatesScenarioVariablesKeyValuePair["Value"].isNull())
				variablesObject.value = valueScenarioTemplatesScenarioVariablesKeyValuePair["Value"].asString();
			scenarioTemplatesObject.variables.push_back(variablesObject);
		}
		scenarioTemplates_.push_back(scenarioTemplatesObject);
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

std::string ListScenarioTemplatesResult::getMessage()const
{
	return message_;
}

int ListScenarioTemplatesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListScenarioTemplatesResult::Scenario> ListScenarioTemplatesResult::getScenarioTemplates()const
{
	return scenarioTemplates_;
}

std::string ListScenarioTemplatesResult::getCode()const
{
	return code_;
}

bool ListScenarioTemplatesResult::getSuccess()const
{
	return success_;
}

