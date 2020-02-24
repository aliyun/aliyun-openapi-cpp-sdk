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

#include <alibabacloud/voicenavigator/model/ModifyKnowledgeRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ModifyKnowledgeRequest;

ModifyKnowledgeRequest::ModifyKnowledgeRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "ModifyKnowledge")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyKnowledgeRequest::~ModifyKnowledgeRequest()
{}

std::string ModifyKnowledgeRequest::getUserUtterance()const
{
	return userUtterance_;
}

void ModifyKnowledgeRequest::setUserUtterance(const std::string& userUtterance)
{
	userUtterance_ = userUtterance;
	setParameter("UserUtterance", userUtterance);
}

bool ModifyKnowledgeRequest::getInterruptible()const
{
	return interruptible_;
}

void ModifyKnowledgeRequest::setInterruptible(bool interruptible)
{
	interruptible_ = interruptible;
	setParameter("Interruptible", interruptible ? "true" : "false");
}

std::string ModifyKnowledgeRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyKnowledgeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyKnowledgeRequest::getNavigationScriptId()const
{
	return navigationScriptId_;
}

void ModifyKnowledgeRequest::setNavigationScriptId(const std::string& navigationScriptId)
{
	navigationScriptId_ = navigationScriptId;
	setParameter("NavigationScriptId", navigationScriptId);
}

std::string ModifyKnowledgeRequest::getAnswer()const
{
	return answer_;
}

void ModifyKnowledgeRequest::setAnswer(const std::string& answer)
{
	answer_ = answer;
	setParameter("Answer", answer);
}

std::vector<std::string> ModifyKnowledgeRequest::getSimilarUtterances()const
{
	return similarUtterances_;
}

void ModifyKnowledgeRequest::setSimilarUtterances(const std::vector<std::string>& similarUtterances)
{
	similarUtterances_ = similarUtterances;
	for(int dep1 = 0; dep1!= similarUtterances.size(); dep1++) {
		setParameter("SimilarUtterances."+ std::to_string(dep1), similarUtterances.at(dep1));
	}
}

