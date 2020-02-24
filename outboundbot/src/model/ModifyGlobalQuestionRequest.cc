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

#include <alibabacloud/outboundbot/model/ModifyGlobalQuestionRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyGlobalQuestionRequest;

ModifyGlobalQuestionRequest::ModifyGlobalQuestionRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "ModifyGlobalQuestion")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyGlobalQuestionRequest::~ModifyGlobalQuestionRequest()
{}

std::string ModifyGlobalQuestionRequest::getGlobalQuestionId()const
{
	return globalQuestionId_;
}

void ModifyGlobalQuestionRequest::setGlobalQuestionId(const std::string& globalQuestionId)
{
	globalQuestionId_ = globalQuestionId;
	setParameter("GlobalQuestionId", globalQuestionId);
}

std::string ModifyGlobalQuestionRequest::getGlobalQuestionName()const
{
	return globalQuestionName_;
}

void ModifyGlobalQuestionRequest::setGlobalQuestionName(const std::string& globalQuestionName)
{
	globalQuestionName_ = globalQuestionName;
	setParameter("GlobalQuestionName", globalQuestionName);
}

std::string ModifyGlobalQuestionRequest::getQuestions()const
{
	return questions_;
}

void ModifyGlobalQuestionRequest::setQuestions(const std::string& questions)
{
	questions_ = questions;
	setParameter("Questions", questions);
}

std::string ModifyGlobalQuestionRequest::getAnswers()const
{
	return answers_;
}

void ModifyGlobalQuestionRequest::setAnswers(const std::string& answers)
{
	answers_ = answers;
	setParameter("Answers", answers);
}

std::string ModifyGlobalQuestionRequest::getScriptId()const
{
	return scriptId_;
}

void ModifyGlobalQuestionRequest::setScriptId(const std::string& scriptId)
{
	scriptId_ = scriptId;
	setParameter("ScriptId", scriptId);
}

std::string ModifyGlobalQuestionRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyGlobalQuestionRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyGlobalQuestionRequest::getGlobalQuestionType()const
{
	return globalQuestionType_;
}

void ModifyGlobalQuestionRequest::setGlobalQuestionType(const std::string& globalQuestionType)
{
	globalQuestionType_ = globalQuestionType;
	setParameter("GlobalQuestionType", globalQuestionType);
}

