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
		auto allSurveysNode = allScenarioTemplatesNode["Surveys"]["Survey"];
		for (auto allScenarioTemplatesNodeSurveysSurvey : allSurveysNode)
		{
			Scenario::Survey surveysObject;
			if(!allScenarioTemplatesNodeSurveysSurvey["Id"].isNull())
				surveysObject.id = allScenarioTemplatesNodeSurveysSurvey["Id"].asString();
			if(!allScenarioTemplatesNodeSurveysSurvey["Name"].isNull())
				surveysObject.name = allScenarioTemplatesNodeSurveysSurvey["Name"].asString();
			if(!allScenarioTemplatesNodeSurveysSurvey["Description"].isNull())
				surveysObject.description = allScenarioTemplatesNodeSurveysSurvey["Description"].asString();
			if(!allScenarioTemplatesNodeSurveysSurvey["Role"].isNull())
				surveysObject.role = allScenarioTemplatesNodeSurveysSurvey["Role"].asString();
			if(!allScenarioTemplatesNodeSurveysSurvey["Round"].isNull())
				surveysObject.round = std::stoi(allScenarioTemplatesNodeSurveysSurvey["Round"].asString());
			if(!allScenarioTemplatesNodeSurveysSurvey["BeebotId"].isNull())
				surveysObject.beebotId = allScenarioTemplatesNodeSurveysSurvey["BeebotId"].asString();
			if(!allScenarioTemplatesNodeSurveysSurvey["GlobalQuestions"].isNull())
				surveysObject.globalQuestions = allScenarioTemplatesNodeSurveysSurvey["GlobalQuestions"].asString();
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
			auto flowNode = value["Flow"];
			if(!flowNode["FlowId"].isNull())
				surveysObject.flow.flowId = flowNode["FlowId"].asString();
			if(!flowNode["IsPublished"].isNull())
				surveysObject.flow.isPublished = flowNode["IsPublished"].asString() == "true";
			if(!flowNode["FlowJson"].isNull())
				surveysObject.flow.flowJson = flowNode["FlowJson"].asString();
			scenarioTemplatesObject.surveys.push_back(surveysObject);
		}
		auto allVariablesNode = allScenarioTemplatesNode["Variables"]["KeyValuePair"];
		for (auto allScenarioTemplatesNodeVariablesKeyValuePair : allVariablesNode)
		{
			Scenario::KeyValuePair variablesObject;
			if(!allScenarioTemplatesNodeVariablesKeyValuePair["Key"].isNull())
				variablesObject.key = allScenarioTemplatesNodeVariablesKeyValuePair["Key"].asString();
			if(!allScenarioTemplatesNodeVariablesKeyValuePair["Value"].isNull())
				variablesObject.value = allScenarioTemplatesNodeVariablesKeyValuePair["Value"].asString();
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

