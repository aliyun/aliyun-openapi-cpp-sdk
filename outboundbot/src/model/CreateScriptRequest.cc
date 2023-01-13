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

CreateScriptRequest::CreateScriptRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateScript") {
  setMethod(HttpRequest::Method::Post);
}

CreateScriptRequest::~CreateScriptRequest() {}

std::string CreateScriptRequest::getTtsConfig() const {
  return ttsConfig_;
}

void CreateScriptRequest::setTtsConfig(const std::string &ttsConfig) {
  ttsConfig_ = ttsConfig;
  setParameter(std::string("TtsConfig"), ttsConfig);
}

std::string CreateScriptRequest::getIndustry() const {
  return industry_;
}

void CreateScriptRequest::setIndustry(const std::string &industry) {
  industry_ = industry;
  setParameter(std::string("Industry"), industry);
}

std::string CreateScriptRequest::getScriptName() const {
  return scriptName_;
}

void CreateScriptRequest::setScriptName(const std::string &scriptName) {
  scriptName_ = scriptName;
  setParameter(std::string("ScriptName"), scriptName);
}

std::string CreateScriptRequest::getScene() const {
  return scene_;
}

void CreateScriptRequest::setScene(const std::string &scene) {
  scene_ = scene;
  setParameter(std::string("Scene"), scene);
}

std::vector<std::string> CreateScriptRequest::getScriptWaveform() const {
  return scriptWaveform_;
}

void CreateScriptRequest::setScriptWaveform(const std::vector<std::string> &scriptWaveform) {
  scriptWaveform_ = scriptWaveform;
}

std::string CreateScriptRequest::getAsrConfig() const {
  return asrConfig_;
}

void CreateScriptRequest::setAsrConfig(const std::string &asrConfig) {
  asrConfig_ = asrConfig;
  setParameter(std::string("AsrConfig"), asrConfig);
}

std::string CreateScriptRequest::getMiniPlaybackConfigListJsonString() const {
  return miniPlaybackConfigListJsonString_;
}

void CreateScriptRequest::setMiniPlaybackConfigListJsonString(const std::string &miniPlaybackConfigListJsonString) {
  miniPlaybackConfigListJsonString_ = miniPlaybackConfigListJsonString;
  setParameter(std::string("MiniPlaybackConfigListJsonString"), miniPlaybackConfigListJsonString);
}

bool CreateScriptRequest::getEmotionEnable() const {
  return emotionEnable_;
}

void CreateScriptRequest::setEmotionEnable(bool emotionEnable) {
  emotionEnable_ = emotionEnable;
  setParameter(std::string("EmotionEnable"), emotionEnable ? "true" : "false");
}

bool CreateScriptRequest::getNewBargeInEnable() const {
  return newBargeInEnable_;
}

void CreateScriptRequest::setNewBargeInEnable(bool newBargeInEnable) {
  newBargeInEnable_ = newBargeInEnable;
  setParameter(std::string("NewBargeInEnable"), newBargeInEnable ? "true" : "false");
}

bool CreateScriptRequest::getMiniPlaybackEnable() const {
  return miniPlaybackEnable_;
}

void CreateScriptRequest::setMiniPlaybackEnable(bool miniPlaybackEnable) {
  miniPlaybackEnable_ = miniPlaybackEnable;
  setParameter(std::string("MiniPlaybackEnable"), miniPlaybackEnable ? "true" : "false");
}

std::string CreateScriptRequest::getChatbotId() const {
  return chatbotId_;
}

void CreateScriptRequest::setChatbotId(const std::string &chatbotId) {
  chatbotId_ = chatbotId;
  setParameter(std::string("ChatbotId"), chatbotId);
}

std::string CreateScriptRequest::getInstanceId() const {
  return instanceId_;
}

void CreateScriptRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateScriptRequest::getScriptDescription() const {
  return scriptDescription_;
}

void CreateScriptRequest::setScriptDescription(const std::string &scriptDescription) {
  scriptDescription_ = scriptDescription;
  setParameter(std::string("ScriptDescription"), scriptDescription);
}

bool CreateScriptRequest::getLongWaitEnable() const {
  return longWaitEnable_;
}

void CreateScriptRequest::setLongWaitEnable(bool longWaitEnable) {
  longWaitEnable_ = longWaitEnable;
  setParameter(std::string("LongWaitEnable"), longWaitEnable ? "true" : "false");
}

std::vector<std::string> CreateScriptRequest::getScriptContent() const {
  return scriptContent_;
}

void CreateScriptRequest::setScriptContent(const std::vector<std::string> &scriptContent) {
  scriptContent_ = scriptContent;
}

