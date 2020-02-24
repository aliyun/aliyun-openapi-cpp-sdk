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

#include <alibabacloud/voicenavigator/model/ModifyRedirectionRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ModifyRedirectionRequest;

ModifyRedirectionRequest::ModifyRedirectionRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "ModifyRedirection")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyRedirectionRequest::~ModifyRedirectionRequest()
{}

std::string ModifyRedirectionRequest::getRedirectionType()const
{
	return redirectionType_;
}

void ModifyRedirectionRequest::setRedirectionType(const std::string& redirectionType)
{
	redirectionType_ = redirectionType;
	setParameter("RedirectionType", redirectionType);
}

std::string ModifyRedirectionRequest::getUserUtterance()const
{
	return userUtterance_;
}

void ModifyRedirectionRequest::setUserUtterance(const std::string& userUtterance)
{
	userUtterance_ = userUtterance;
	setParameter("UserUtterance", userUtterance);
}

bool ModifyRedirectionRequest::getInterruptible()const
{
	return interruptible_;
}

void ModifyRedirectionRequest::setInterruptible(bool interruptible)
{
	interruptible_ = interruptible;
	setParameter("Interruptible", interruptible ? "true" : "false");
}

std::string ModifyRedirectionRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyRedirectionRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyRedirectionRequest::getNavigationScriptId()const
{
	return navigationScriptId_;
}

void ModifyRedirectionRequest::setNavigationScriptId(const std::string& navigationScriptId)
{
	navigationScriptId_ = navigationScriptId;
	setParameter("NavigationScriptId", navigationScriptId);
}

std::vector<std::string> ModifyRedirectionRequest::getSimilarUtterances()const
{
	return similarUtterances_;
}

void ModifyRedirectionRequest::setSimilarUtterances(const std::vector<std::string>& similarUtterances)
{
	similarUtterances_ = similarUtterances;
	for(int dep1 = 0; dep1!= similarUtterances.size(); dep1++) {
		setParameter("SimilarUtterances."+ std::to_string(dep1), similarUtterances.at(dep1));
	}
}

std::string ModifyRedirectionRequest::getRedirectionTarget()const
{
	return redirectionTarget_;
}

void ModifyRedirectionRequest::setRedirectionTarget(const std::string& redirectionTarget)
{
	redirectionTarget_ = redirectionTarget;
	setParameter("RedirectionTarget", redirectionTarget);
}

std::string ModifyRedirectionRequest::getPrompt()const
{
	return prompt_;
}

void ModifyRedirectionRequest::setPrompt(const std::string& prompt)
{
	prompt_ = prompt;
	setParameter("Prompt", prompt);
}

