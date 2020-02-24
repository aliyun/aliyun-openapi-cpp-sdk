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

#include <alibabacloud/voicenavigator/model/ModifyAskingBackConfigRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ModifyAskingBackConfigRequest;

ModifyAskingBackConfigRequest::ModifyAskingBackConfigRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "ModifyAskingBackConfig")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyAskingBackConfigRequest::~ModifyAskingBackConfigRequest()
{}

std::string ModifyAskingBackConfigRequest::getNegativeFeedbackPrompt()const
{
	return negativeFeedbackPrompt_;
}

void ModifyAskingBackConfigRequest::setNegativeFeedbackPrompt(const std::string& negativeFeedbackPrompt)
{
	negativeFeedbackPrompt_ = negativeFeedbackPrompt;
	setParameter("NegativeFeedbackPrompt", negativeFeedbackPrompt);
}

std::string ModifyAskingBackConfigRequest::getNegativeFeedbackAction()const
{
	return negativeFeedbackAction_;
}

void ModifyAskingBackConfigRequest::setNegativeFeedbackAction(const std::string& negativeFeedbackAction)
{
	negativeFeedbackAction_ = negativeFeedbackAction;
	setParameter("NegativeFeedbackAction", negativeFeedbackAction);
}

bool ModifyAskingBackConfigRequest::getEnabled()const
{
	return enabled_;
}

void ModifyAskingBackConfigRequest::setEnabled(bool enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", enabled ? "true" : "false");
}

bool ModifyAskingBackConfigRequest::getEnableNegativeFeedback()const
{
	return enableNegativeFeedback_;
}

void ModifyAskingBackConfigRequest::setEnableNegativeFeedback(bool enableNegativeFeedback)
{
	enableNegativeFeedback_ = enableNegativeFeedback;
	setParameter("EnableNegativeFeedback", enableNegativeFeedback ? "true" : "false");
}

std::string ModifyAskingBackConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyAskingBackConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyAskingBackConfigRequest::getPrompt()const
{
	return prompt_;
}

void ModifyAskingBackConfigRequest::setPrompt(const std::string& prompt)
{
	prompt_ = prompt;
	setParameter("Prompt", prompt);
}

std::vector<std::string> ModifyAskingBackConfigRequest::getNegativeFeedbackUtterances()const
{
	return negativeFeedbackUtterances_;
}

void ModifyAskingBackConfigRequest::setNegativeFeedbackUtterances(const std::vector<std::string>& negativeFeedbackUtterances)
{
	negativeFeedbackUtterances_ = negativeFeedbackUtterances;
	for(int dep1 = 0; dep1!= negativeFeedbackUtterances.size(); dep1++) {
		setParameter("NegativeFeedbackUtterances."+ std::to_string(dep1), negativeFeedbackUtterances.at(dep1));
	}
}

std::string ModifyAskingBackConfigRequest::getNegativeFeedbackActionParams()const
{
	return negativeFeedbackActionParams_;
}

void ModifyAskingBackConfigRequest::setNegativeFeedbackActionParams(const std::string& negativeFeedbackActionParams)
{
	negativeFeedbackActionParams_ = negativeFeedbackActionParams;
	setParameter("NegativeFeedbackActionParams", negativeFeedbackActionParams);
}

