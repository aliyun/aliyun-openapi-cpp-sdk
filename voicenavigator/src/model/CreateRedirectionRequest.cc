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

#include <alibabacloud/voicenavigator/model/CreateRedirectionRequest.h>

using AlibabaCloud::VoiceNavigator::Model::CreateRedirectionRequest;

CreateRedirectionRequest::CreateRedirectionRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "CreateRedirection")
{
	setMethod(HttpRequest::Method::Post);
}

CreateRedirectionRequest::~CreateRedirectionRequest()
{}

std::string CreateRedirectionRequest::getRedirectionType()const
{
	return redirectionType_;
}

void CreateRedirectionRequest::setRedirectionType(const std::string& redirectionType)
{
	redirectionType_ = redirectionType;
	setParameter("RedirectionType", redirectionType);
}

std::string CreateRedirectionRequest::getUserUtterance()const
{
	return userUtterance_;
}

void CreateRedirectionRequest::setUserUtterance(const std::string& userUtterance)
{
	userUtterance_ = userUtterance;
	setParameter("UserUtterance", userUtterance);
}

bool CreateRedirectionRequest::getInterruptible()const
{
	return interruptible_;
}

void CreateRedirectionRequest::setInterruptible(bool interruptible)
{
	interruptible_ = interruptible;
	setParameter("Interruptible", interruptible ? "true" : "false");
}

std::string CreateRedirectionRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateRedirectionRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::vector<std::string> CreateRedirectionRequest::getSimilarUtterances()const
{
	return similarUtterances_;
}

void CreateRedirectionRequest::setSimilarUtterances(const std::vector<std::string>& similarUtterances)
{
	similarUtterances_ = similarUtterances;
	for(int dep1 = 0; dep1!= similarUtterances.size(); dep1++) {
		setParameter("SimilarUtterances."+ std::to_string(dep1), similarUtterances.at(dep1));
	}
}

std::string CreateRedirectionRequest::getRedirectionTarget()const
{
	return redirectionTarget_;
}

void CreateRedirectionRequest::setRedirectionTarget(const std::string& redirectionTarget)
{
	redirectionTarget_ = redirectionTarget;
	setParameter("RedirectionTarget", redirectionTarget);
}

std::string CreateRedirectionRequest::getPrompt()const
{
	return prompt_;
}

void CreateRedirectionRequest::setPrompt(const std::string& prompt)
{
	prompt_ = prompt;
	setParameter("Prompt", prompt);
}

std::string CreateRedirectionRequest::getCategoryId()const
{
	return categoryId_;
}

void CreateRedirectionRequest::setCategoryId(const std::string& categoryId)
{
	categoryId_ = categoryId;
	setParameter("CategoryId", categoryId);
}

