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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allScenarioTemplates = value["ScenarioTemplates"]["Scenario"];
	for (auto value : allScenarioTemplates)
	{
		Scenario scenarioTemplatesObject;
		if(!value["Id"].isNull())
			scenarioTemplatesObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			scenarioTemplatesObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			scenarioTemplatesObject.description = value["Description"].asString();
		if(!value["Type"].isNull())
			scenarioTemplatesObject.type = value["Type"].asString();
		if(!value["IsTemplate"].isNull())
			scenarioTemplatesObject.isTemplate = value["IsTemplate"].asString() == "true";
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
			if(!value["GlobalQuestions"].isNull())
				surveysObject.globalQuestions = value["GlobalQuestions"].asString();
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
			auto flowNode = value["Flow"];
			if(!flowNode["FlowId"].isNull())
				surveysObject.flow.flowId = flowNode["FlowId"].asString();
			if(!flowNode["IsPublished"].isNull())
				surveysObject.flow.isPublished = flowNode["IsPublished"].asString() == "true";
			if(!flowNode["FlowJson"].isNull())
				surveysObject.flow.flowJson = flowNode["FlowJson"].asString();
			scenarioTemplatesObject.surveys.push_back(surveysObject);
		}
		auto allVariables = value["Variables"]["KeyValuePair"];
		for (auto value : allVariables)
		{
			Scenario::KeyValuePair variablesObject;
			if(!value["Key"].isNull())
				variablesObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				variablesObject.value = value["Value"].asString();
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

