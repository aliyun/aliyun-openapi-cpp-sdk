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

#include <alibabacloud/quickbi-public/model/ModifyAiproEmbedConfigRequest.h>

using AlibabaCloud::Quickbi_public::Model::ModifyAiproEmbedConfigRequest;

ModifyAiproEmbedConfigRequest::ModifyAiproEmbedConfigRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "ModifyAiproEmbedConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAiproEmbedConfigRequest::~ModifyAiproEmbedConfigRequest() {}

int ModifyAiproEmbedConfigRequest::getUploadEnabled() const {
  return uploadEnabled_;
}

void ModifyAiproEmbedConfigRequest::setUploadEnabled(int uploadEnabled) {
  uploadEnabled_ = uploadEnabled;
  setParameter(std::string("UploadEnabled"), std::to_string(uploadEnabled));
}

std::string ModifyAiproEmbedConfigRequest::getAccessPoint() const {
  return accessPoint_;
}

void ModifyAiproEmbedConfigRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string ModifyAiproEmbedConfigRequest::getShowName() const {
  return showName_;
}

void ModifyAiproEmbedConfigRequest::setShowName(const std::string &showName) {
  showName_ = showName;
  setParameter(std::string("ShowName"), showName);
}

std::string ModifyAiproEmbedConfigRequest::getAiProId() const {
  return aiProId_;
}

void ModifyAiproEmbedConfigRequest::setAiProId(const std::string &aiProId) {
  aiProId_ = aiProId;
  setParameter(std::string("AiProId"), aiProId);
}

std::string ModifyAiproEmbedConfigRequest::getSignType() const {
  return signType_;
}

void ModifyAiproEmbedConfigRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

int ModifyAiproEmbedConfigRequest::getChatHistoryStatus() const {
  return chatHistoryStatus_;
}

void ModifyAiproEmbedConfigRequest::setChatHistoryStatus(int chatHistoryStatus) {
  chatHistoryStatus_ = chatHistoryStatus;
  setParameter(std::string("ChatHistoryStatus"), std::to_string(chatHistoryStatus));
}

int ModifyAiproEmbedConfigRequest::getMemoryEnabled() const {
  return memoryEnabled_;
}

void ModifyAiproEmbedConfigRequest::setMemoryEnabled(int memoryEnabled) {
  memoryEnabled_ = memoryEnabled;
  setParameter(std::string("MemoryEnabled"), std::to_string(memoryEnabled));
}

std::string ModifyAiproEmbedConfigRequest::getAgentName() const {
  return agentName_;
}

void ModifyAiproEmbedConfigRequest::setAgentName(const std::string &agentName) {
  agentName_ = agentName;
  setParameter(std::string("AgentName"), agentName);
}

std::string ModifyAiproEmbedConfigRequest::getConfig() const {
  return config_;
}

void ModifyAiproEmbedConfigRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

