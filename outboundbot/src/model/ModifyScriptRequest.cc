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

#include <alibabacloud/outboundbot/model/ModifyScriptRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyScriptRequest;

ModifyScriptRequest::ModifyScriptRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "ModifyScript")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyScriptRequest::~ModifyScriptRequest()
{}

std::string ModifyScriptRequest::getTtsConfig()const
{
	return ttsConfig_;
}

void ModifyScriptRequest::setTtsConfig(const std::string& ttsConfig)
{
	ttsConfig_ = ttsConfig;
	setParameter("TtsConfig", ttsConfig);
}

std::string ModifyScriptRequest::getIndustry()const
{
	return industry_;
}

void ModifyScriptRequest::setIndustry(const std::string& industry)
{
	industry_ = industry;
	setParameter("Industry", industry);
}

std::string ModifyScriptRequest::getScriptName()const
{
	return scriptName_;
}

void ModifyScriptRequest::setScriptName(const std::string& scriptName)
{
	scriptName_ = scriptName;
	setParameter("ScriptName", scriptName);
}

std::string ModifyScriptRequest::getScene()const
{
	return scene_;
}

void ModifyScriptRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

std::string ModifyScriptRequest::getScriptId()const
{
	return scriptId_;
}

void ModifyScriptRequest::setScriptId(const std::string& scriptId)
{
	scriptId_ = scriptId;
	setParameter("ScriptId", scriptId);
}

std::vector<std::string> ModifyScriptRequest::getScriptWaveform()const
{
	return scriptWaveform_;
}

void ModifyScriptRequest::setScriptWaveform(const std::vector<std::string>& scriptWaveform)
{
	scriptWaveform_ = scriptWaveform;
	for(int dep1 = 0; dep1!= scriptWaveform.size(); dep1++) {
		setParameter("ScriptWaveform."+ std::to_string(dep1), scriptWaveform.at(dep1));
	}
}

std::string ModifyScriptRequest::getAsrConfig()const
{
	return asrConfig_;
}

void ModifyScriptRequest::setAsrConfig(const std::string& asrConfig)
{
	asrConfig_ = asrConfig;
	setParameter("AsrConfig", asrConfig);
}

bool ModifyScriptRequest::getMiniPlaybackEnabled()const
{
	return miniPlaybackEnabled_;
}

void ModifyScriptRequest::setMiniPlaybackEnabled(bool miniPlaybackEnabled)
{
	miniPlaybackEnabled_ = miniPlaybackEnabled;
	setParameter("MiniPlaybackEnabled", miniPlaybackEnabled ? "true" : "false");
}

std::string ModifyScriptRequest::getChatbotId()const
{
	return chatbotId_;
}

void ModifyScriptRequest::setChatbotId(const std::string& chatbotId)
{
	chatbotId_ = chatbotId;
	setParameter("ChatbotId", chatbotId);
}

std::string ModifyScriptRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyScriptRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyScriptRequest::getScriptDescription()const
{
	return scriptDescription_;
}

void ModifyScriptRequest::setScriptDescription(const std::string& scriptDescription)
{
	scriptDescription_ = scriptDescription;
	setParameter("ScriptDescription", scriptDescription);
}

std::vector<std::string> ModifyScriptRequest::getScriptContent()const
{
	return scriptContent_;
}

void ModifyScriptRequest::setScriptContent(const std::vector<std::string>& scriptContent)
{
	scriptContent_ = scriptContent;
	for(int dep1 = 0; dep1!= scriptContent.size(); dep1++) {
		setParameter("ScriptContent."+ std::to_string(dep1), scriptContent.at(dep1));
	}
}

