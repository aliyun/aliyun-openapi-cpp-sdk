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

#include <alibabacloud/ccc/model/CreateSurveyRequest.h>

using AlibabaCloud::CCC::Model::CreateSurveyRequest;

CreateSurveyRequest::CreateSurveyRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CreateSurvey")
{}

CreateSurveyRequest::~CreateSurveyRequest()
{}

std::string CreateSurveyRequest::getRole()const
{
	return role_;
}

void CreateSurveyRequest::setRole(const std::string& role)
{
	role_ = role;
	setCoreParameter("Role", role);
}

std::string CreateSurveyRequest::getDescription()const
{
	return description_;
}

void CreateSurveyRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateSurveyRequest::getSpeechOptimizationParam()const
{
	return speechOptimizationParam_;
}

void CreateSurveyRequest::setSpeechOptimizationParam(const std::string& speechOptimizationParam)
{
	speechOptimizationParam_ = speechOptimizationParam;
	setCoreParameter("SpeechOptimizationParam", speechOptimizationParam);
}

std::string CreateSurveyRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateSurveyRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

int CreateSurveyRequest::getRound()const
{
	return round_;
}

void CreateSurveyRequest::setRound(int round)
{
	round_ = round;
	setCoreParameter("Round", std::to_string(round));
}

std::string CreateSurveyRequest::getFlowJson()const
{
	return flowJson_;
}

void CreateSurveyRequest::setFlowJson(const std::string& flowJson)
{
	flowJson_ = flowJson;
	setCoreParameter("FlowJson", flowJson);
}

std::string CreateSurveyRequest::getName()const
{
	return name_;
}

void CreateSurveyRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateSurveyRequest::getGlobalQuestions()const
{
	return globalQuestions_;
}

void CreateSurveyRequest::setGlobalQuestions(const std::string& globalQuestions)
{
	globalQuestions_ = globalQuestions;
	setCoreParameter("GlobalQuestions", globalQuestions);
}

std::string CreateSurveyRequest::getCorpora()const
{
	return corpora_;
}

void CreateSurveyRequest::setCorpora(const std::string& corpora)
{
	corpora_ = corpora;
	setCoreParameter("Corpora", corpora);
}

std::string CreateSurveyRequest::getScenarioId()const
{
	return scenarioId_;
}

void CreateSurveyRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setCoreParameter("ScenarioId", scenarioId);
}

