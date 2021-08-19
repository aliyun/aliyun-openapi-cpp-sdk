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

#include <alibabacloud/outboundbot/model/CreateScriptRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateScriptRequest;

CreateScriptRequest::CreateScriptRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "CreateScript")
{
	setMethod(HttpRequest::Method::Post);
}

CreateScriptRequest::~CreateScriptRequest()
{}

std::string CreateScriptRequest::getTtsConfig()const
{
	return ttsConfig_;
}

void CreateScriptRequest::setTtsConfig(const std::string& ttsConfig)
{
	ttsConfig_ = ttsConfig;
	setParameter("TtsConfig", ttsConfig);
}

std::string CreateScriptRequest::getIndustry()const
{
	return industry_;
}

void CreateScriptRequest::setIndustry(const std::string& industry)
{
	industry_ = industry;
	setParameter("Industry", industry);
}

std::string CreateScriptRequest::getScriptName()const
{
	return scriptName_;
}

void CreateScriptRequest::setScriptName(const std::string& scriptName)
{
	scriptName_ = scriptName;
	setParameter("ScriptName", scriptName);
}

std::string CreateScriptRequest::getScene()const
{
	return scene_;
}

void CreateScriptRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

std::string CreateScriptRequest::getChatbotId()const
{
	return chatbotId_;
}

void CreateScriptRequest::setChatbotId(const std::string& chatbotId)
{
	chatbotId_ = chatbotId;
	setParameter("ChatbotId", chatbotId);
}

std::string CreateScriptRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateScriptRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::vector<std::string> CreateScriptRequest::getScriptWaveform()const
{
	return scriptWaveform_;
}

void CreateScriptRequest::setScriptWaveform(const std::vector<std::string>& scriptWaveform)
{
	scriptWaveform_ = scriptWaveform;
	for(int dep1 = 0; dep1!= scriptWaveform.size(); dep1++) {
		setParameter("ScriptWaveform."+ std::to_string(dep1), scriptWaveform.at(dep1));
	}
}

std::string CreateScriptRequest::getAsrConfig()const
{
	return asrConfig_;
}

void CreateScriptRequest::setAsrConfig(const std::string& asrConfig)
{
	asrConfig_ = asrConfig;
	setParameter("AsrConfig", asrConfig);
}

std::string CreateScriptRequest::getScriptDescription()const
{
	return scriptDescription_;
}

void CreateScriptRequest::setScriptDescription(const std::string& scriptDescription)
{
	scriptDescription_ = scriptDescription;
	setParameter("ScriptDescription", scriptDescription);
}

std::vector<std::string> CreateScriptRequest::getScriptContent()const
{
	return scriptContent_;
}

void CreateScriptRequest::setScriptContent(const std::vector<std::string>& scriptContent)
{
	scriptContent_ = scriptContent;
	for(int dep1 = 0; dep1!= scriptContent.size(); dep1++) {
		setParameter("ScriptContent."+ std::to_string(dep1), scriptContent.at(dep1));
	}
}

