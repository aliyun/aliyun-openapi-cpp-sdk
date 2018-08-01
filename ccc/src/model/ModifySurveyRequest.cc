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

#include <alibabacloud/ccc/model/ModifySurveyRequest.h>

using AlibabaCloud::CCC::Model::ModifySurveyRequest;

ModifySurveyRequest::ModifySurveyRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ModifySurvey")
{}

ModifySurveyRequest::~ModifySurveyRequest()
{}

std::string ModifySurveyRequest::getSurveyId()const
{
	return surveyId_;
}

void ModifySurveyRequest::setSurveyId(const std::string& surveyId)
{
	surveyId_ = surveyId;
	setParameter("SurveyId", surveyId);
}

std::string ModifySurveyRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifySurveyRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifySurveyRequest::getRole()const
{
	return role_;
}

void ModifySurveyRequest::setRole(const std::string& role)
{
	role_ = role;
	setParameter("Role", role);
}

int ModifySurveyRequest::getRound()const
{
	return round_;
}

void ModifySurveyRequest::setRound(int round)
{
	round_ = round;
	setParameter("Round", std::to_string(round));
}

std::string ModifySurveyRequest::getFlowJson()const
{
	return flowJson_;
}

void ModifySurveyRequest::setFlowJson(const std::string& flowJson)
{
	flowJson_ = flowJson;
	setParameter("FlowJson", flowJson);
}

std::string ModifySurveyRequest::getName()const
{
	return name_;
}

void ModifySurveyRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifySurveyRequest::getGlobalQuestions()const
{
	return globalQuestions_;
}

void ModifySurveyRequest::setGlobalQuestions(const std::string& globalQuestions)
{
	globalQuestions_ = globalQuestions;
	setParameter("GlobalQuestions", globalQuestions);
}

std::string ModifySurveyRequest::getDescription()const
{
	return description_;
}

void ModifySurveyRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifySurveyRequest::getCorpora()const
{
	return corpora_;
}

void ModifySurveyRequest::setCorpora(const std::string& corpora)
{
	corpora_ = corpora;
	setParameter("Corpora", corpora);
}

std::string ModifySurveyRequest::getSpeechOptimizationParam()const
{
	return speechOptimizationParam_;
}

void ModifySurveyRequest::setSpeechOptimizationParam(const std::string& speechOptimizationParam)
{
	speechOptimizationParam_ = speechOptimizationParam;
	setParameter("SpeechOptimizationParam", speechOptimizationParam);
}

std::string ModifySurveyRequest::getScenarioId()const
{
	return scenarioId_;
}

void ModifySurveyRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setParameter("ScenarioId", scenarioId);
}

std::string ModifySurveyRequest::getFlowId()const
{
	return flowId_;
}

void ModifySurveyRequest::setFlowId(const std::string& flowId)
{
	flowId_ = flowId;
	setParameter("FlowId", flowId);
}

