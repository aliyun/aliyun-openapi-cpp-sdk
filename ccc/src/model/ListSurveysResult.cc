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

#include <alibabacloud/ccc/model/ListSurveysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListSurveysResult::ListSurveysResult() :
	ServiceResult()
{}

ListSurveysResult::ListSurveysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSurveysResult::~ListSurveysResult()
{}

void ListSurveysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSurveysNode = value["Surveys"]["Survey"];
	for (auto valueSurveysSurvey : allSurveysNode)
	{
		Survey surveysObject;
		if(!valueSurveysSurvey["Id"].isNull())
			surveysObject.id = valueSurveysSurvey["Id"].asString();
		if(!valueSurveysSurvey["ScenarioUuid"].isNull())
			surveysObject.scenarioUuid = valueSurveysSurvey["ScenarioUuid"].asString();
		if(!valueSurveysSurvey["Name"].isNull())
			surveysObject.name = valueSurveysSurvey["Name"].asString();
		if(!valueSurveysSurvey["Description"].isNull())
			surveysObject.description = valueSurveysSurvey["Description"].asString();
		if(!valueSurveysSurvey["Role"].isNull())
			surveysObject.role = valueSurveysSurvey["Role"].asString();
		if(!valueSurveysSurvey["Round"].isNull())
			surveysObject.round = std::stoi(valueSurveysSurvey["Round"].asString());
		if(!valueSurveysSurvey["HotWords"].isNull())
			surveysObject.hotWords = valueSurveysSurvey["HotWords"].asString();
		if(!valueSurveysSurvey["SpeechOptimizationParam"].isNull())
			surveysObject.speechOptimizationParam = valueSurveysSurvey["SpeechOptimizationParam"].asString();
		if(!valueSurveysSurvey["GlobalQuestions"].isNull())
			surveysObject.globalQuestions = valueSurveysSurvey["GlobalQuestions"].asString();
		auto flowNode = value["Flow"];
		if(!flowNode["FlowId"].isNull())
			surveysObject.flow.flowId = flowNode["FlowId"].asString();
		if(!flowNode["IsPublished"].isNull())
			surveysObject.flow.isPublished = flowNode["IsPublished"].asString() == "true";
		if(!flowNode["FlowJson"].isNull())
			surveysObject.flow.flowJson = flowNode["FlowJson"].asString();
		auto asrCustomModelNode = value["AsrCustomModel"];
		if(!asrCustomModelNode["Corpora"].isNull())
			surveysObject.asrCustomModel.corpora = asrCustomModelNode["Corpora"].asString();
		if(!asrCustomModelNode["CustomModelStatus"].isNull())
			surveysObject.asrCustomModel.customModelStatus = std::stoi(asrCustomModelNode["CustomModelStatus"].asString());
		surveys_.push_back(surveysObject);
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

std::vector<ListSurveysResult::Survey> ListSurveysResult::getSurveys()const
{
	return surveys_;
}

std::string ListSurveysResult::getMessage()const
{
	return message_;
}

int ListSurveysResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListSurveysResult::getCode()const
{
	return code_;
}

bool ListSurveysResult::getSuccess()const
{
	return success_;
}

