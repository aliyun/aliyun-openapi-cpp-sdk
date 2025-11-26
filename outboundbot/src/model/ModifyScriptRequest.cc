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

ModifyScriptRequest::ModifyScriptRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ModifyScript") {
  setMethod(HttpRequest::Method::Post);
}

ModifyScriptRequest::~ModifyScriptRequest() {}

std::string ModifyScriptRequest::getChatConfig() const {
  return chatConfig_;
}

void ModifyScriptRequest::setChatConfig(const std::string &chatConfig) {
  chatConfig_ = chatConfig;
  setParameter(std::string("ChatConfig"), chatConfig);
}

std::string ModifyScriptRequest::getTtsConfig() const {
  return ttsConfig_;
}

void ModifyScriptRequest::setTtsConfig(const std::string &ttsConfig) {
  ttsConfig_ = ttsConfig;
  setParameter(std::string("TtsConfig"), ttsConfig);
}

std::string ModifyScriptRequest::getIndustry() const {
  return industry_;
}

void ModifyScriptRequest::setIndustry(const std::string &industry) {
  industry_ = industry;
  setParameter(std::string("Industry"), industry);
}

std::string ModifyScriptRequest::getScriptName() const {
  return scriptName_;
}

void ModifyScriptRequest::setScriptName(const std::string &scriptName) {
  scriptName_ = scriptName;
  setParameter(std::string("ScriptName"), scriptName);
}

std::string ModifyScriptRequest::getNluEngine() const {
  return nluEngine_;
}

void ModifyScriptRequest::setNluEngine(const std::string &nluEngine) {
  nluEngine_ = nluEngine;
  setParameter(std::string("NluEngine"), nluEngine);
}

std::string ModifyScriptRequest::getLabelConfig() const {
  return labelConfig_;
}

void ModifyScriptRequest::setLabelConfig(const std::string &labelConfig) {
  labelConfig_ = labelConfig;
  setParameter(std::string("LabelConfig"), labelConfig);
}

std::string ModifyScriptRequest::getScene() const {
  return scene_;
}

void ModifyScriptRequest::setScene(const std::string &scene) {
  scene_ = scene;
  setParameter(std::string("Scene"), scene);
}

std::string ModifyScriptRequest::getScriptId() const {
  return scriptId_;
}

void ModifyScriptRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string ModifyScriptRequest::getNluAccessType() const {
  return nluAccessType_;
}

void ModifyScriptRequest::setNluAccessType(const std::string &nluAccessType) {
  nluAccessType_ = nluAccessType;
  setParameter(std::string("NluAccessType"), nluAccessType);
}

std::vector<std::string> ModifyScriptRequest::getScriptWaveform() const {
  return scriptWaveform_;
}

void ModifyScriptRequest::setScriptWaveform(const std::vector<std::string> &scriptWaveform) {
  scriptWaveform_ = scriptWaveform;
}

std::string ModifyScriptRequest::getAsrConfig() const {
  return asrConfig_;
}

void ModifyScriptRequest::setAsrConfig(const std::string &asrConfig) {
  asrConfig_ = asrConfig;
  setParameter(std::string("AsrConfig"), asrConfig);
}

bool ModifyScriptRequest::getAgentLlm() const {
  return agentLlm_;
}

void ModifyScriptRequest::setAgentLlm(bool agentLlm) {
  agentLlm_ = agentLlm;
  setParameter(std::string("AgentLlm"), agentLlm ? "true" : "false");
}

std::string ModifyScriptRequest::getMiniPlaybackConfigListJsonString() const {
  return miniPlaybackConfigListJsonString_;
}

void ModifyScriptRequest::setMiniPlaybackConfigListJsonString(const std::string &miniPlaybackConfigListJsonString) {
  miniPlaybackConfigListJsonString_ = miniPlaybackConfigListJsonString;
  setParameter(std::string("MiniPlaybackConfigListJsonString"), miniPlaybackConfigListJsonString);
}

bool ModifyScriptRequest::getEmotionEnable() const {
  return emotionEnable_;
}

void ModifyScriptRequest::setEmotionEnable(bool emotionEnable) {
  emotionEnable_ = emotionEnable;
  setParameter(std::string("EmotionEnable"), emotionEnable ? "true" : "false");
}

long ModifyScriptRequest::getAgentId() const {
  return agentId_;
}

void ModifyScriptRequest::setAgentId(long agentId) {
  agentId_ = agentId;
  setParameter(std::string("AgentId"), std::to_string(agentId));
}

std::string ModifyScriptRequest::getNlsConfig() const {
  return nlsConfig_;
}

void ModifyScriptRequest::setNlsConfig(const std::string &nlsConfig) {
  nlsConfig_ = nlsConfig;
  setParameter(std::string("NlsConfig"), nlsConfig);
}

bool ModifyScriptRequest::getNewBargeInEnable() const {
  return newBargeInEnable_;
}

void ModifyScriptRequest::setNewBargeInEnable(bool newBargeInEnable) {
  newBargeInEnable_ = newBargeInEnable;
  setParameter(std::string("NewBargeInEnable"), newBargeInEnable ? "true" : "false");
}

std::string ModifyScriptRequest::getAgentKey() const {
  return agentKey_;
}

void ModifyScriptRequest::setAgentKey(const std::string &agentKey) {
  agentKey_ = agentKey;
  setParameter(std::string("AgentKey"), agentKey);
}

bool ModifyScriptRequest::getMiniPlaybackEnable() const {
  return miniPlaybackEnable_;
}

void ModifyScriptRequest::setMiniPlaybackEnable(bool miniPlaybackEnable) {
  miniPlaybackEnable_ = miniPlaybackEnable;
  setParameter(std::string("MiniPlaybackEnable"), miniPlaybackEnable ? "true" : "false");
}

std::string ModifyScriptRequest::getChatbotId() const {
  return chatbotId_;
}

void ModifyScriptRequest::setChatbotId(const std::string &chatbotId) {
  chatbotId_ = chatbotId;
  setParameter(std::string("ChatbotId"), chatbotId);
}

std::string ModifyScriptRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyScriptRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyScriptRequest::getScriptDescription() const {
  return scriptDescription_;
}

void ModifyScriptRequest::setScriptDescription(const std::string &scriptDescription) {
  scriptDescription_ = scriptDescription;
  setParameter(std::string("ScriptDescription"), scriptDescription);
}

bool ModifyScriptRequest::getLongWaitEnable() const {
  return longWaitEnable_;
}

void ModifyScriptRequest::setLongWaitEnable(bool longWaitEnable) {
  longWaitEnable_ = longWaitEnable;
  setParameter(std::string("LongWaitEnable"), longWaitEnable ? "true" : "false");
}

std::vector<std::string> ModifyScriptRequest::getScriptContent() const {
  return scriptContent_;
}

void ModifyScriptRequest::setScriptContent(const std::vector<std::string> &scriptContent) {
  scriptContent_ = scriptContent;
}

