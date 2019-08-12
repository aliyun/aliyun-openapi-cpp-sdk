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

#include <alibabacloud/ccc/model/CreateSurveyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

CreateSurveyResult::CreateSurveyResult() :
	ServiceResult()
{}

CreateSurveyResult::CreateSurveyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateSurveyResult::~CreateSurveyResult()
{}

void CreateSurveyResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto surveyNode = value["Survey"];
	if(!surveyNode["Id"].isNull())
		survey_.id = surveyNode["Id"].asString();
	if(!surveyNode["ScenarioUuid"].isNull())
		survey_.scenarioUuid = surveyNode["ScenarioUuid"].asString();
	if(!surveyNode["Name"].isNull())
		survey_.name = surveyNode["Name"].asString();
	if(!surveyNode["Description"].isNull())
		survey_.description = surveyNode["Description"].asString();
	if(!surveyNode["Role"].isNull())
		survey_.role = surveyNode["Role"].asString();
	if(!surveyNode["Round"].isNull())
		survey_.round = std::stoi(surveyNode["Round"].asString());
	if(!surveyNode["HotWords"].isNull())
		survey_.hotWords = surveyNode["HotWords"].asString();
	if(!surveyNode["SpeechOptimizationParam"].isNull())
		survey_.speechOptimizationParam = surveyNode["SpeechOptimizationParam"].asString();
	if(!surveyNode["GlobalQuestions"].isNull())
		survey_.globalQuestions = surveyNode["GlobalQuestions"].asString();
	auto flowNode = surveyNode["Flow"];
	if(!flowNode["FlowId"].isNull())
		survey_.flow.flowId = flowNode["FlowId"].asString();
	if(!flowNode["IsPublished"].isNull())
		survey_.flow.isPublished = flowNode["IsPublished"].asString() == "true";
	if(!flowNode["FlowJson"].isNull())
		survey_.flow.flowJson = flowNode["FlowJson"].asString();
	auto asrCustomModelNode = surveyNode["AsrCustomModel"];
	if(!asrCustomModelNode["Corpora"].isNull())
		survey_.asrCustomModel.corpora = asrCustomModelNode["Corpora"].asString();
	if(!asrCustomModelNode["CustomModelStatus"].isNull())
		survey_.asrCustomModel.customModelStatus = std::stoi(asrCustomModelNode["CustomModelStatus"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

CreateSurveyResult::Survey CreateSurveyResult::getSurvey()const
{
	return survey_;
}

std::string CreateSurveyResult::getMessage()const
{
	return message_;
}

int CreateSurveyResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateSurveyResult::getCode()const
{
	return code_;
}

bool CreateSurveyResult::getSuccess()const
{
	return success_;
}

