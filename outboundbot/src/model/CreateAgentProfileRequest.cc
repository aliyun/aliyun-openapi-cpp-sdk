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

#include <alibabacloud/outboundbot/model/CreateAgentProfileRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateAgentProfileRequest;

CreateAgentProfileRequest::CreateAgentProfileRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateAgentProfile") {
  setMethod(HttpRequest::Method::Post);
}

CreateAgentProfileRequest::~CreateAgentProfileRequest() {}

std::string CreateAgentProfileRequest::getModelConfig() const {
  return modelConfig_;
}

void CreateAgentProfileRequest::setModelConfig(const std::string &modelConfig) {
  modelConfig_ = modelConfig;
  setBodyParameter(std::string("ModelConfig"), modelConfig);
}

std::string CreateAgentProfileRequest::getAppIp() const {
  return appIp_;
}

void CreateAgentProfileRequest::setAppIp(const std::string &appIp) {
  appIp_ = appIp;
  setBodyParameter(std::string("AppIp"), appIp);
}

std::string CreateAgentProfileRequest::getDescription() const {
  return description_;
}

void CreateAgentProfileRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateAgentProfileRequest::getAgentProfileTemplateId() const {
  return agentProfileTemplateId_;
}

void CreateAgentProfileRequest::setAgentProfileTemplateId(const std::string &agentProfileTemplateId) {
  agentProfileTemplateId_ = agentProfileTemplateId;
  setBodyParameter(std::string("AgentProfileTemplateId"), agentProfileTemplateId);
}

std::string CreateAgentProfileRequest::getScriptId() const {
  return scriptId_;
}

void CreateAgentProfileRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setBodyParameter(std::string("ScriptId"), scriptId);
}

std::string CreateAgentProfileRequest::getVariablesJson() const {
  return variablesJson_;
}

void CreateAgentProfileRequest::setVariablesJson(const std::string &variablesJson) {
  variablesJson_ = variablesJson;
  setBodyParameter(std::string("VariablesJson"), variablesJson);
}

std::string CreateAgentProfileRequest::getInstructionJson() const {
  return instructionJson_;
}

void CreateAgentProfileRequest::setInstructionJson(const std::string &instructionJson) {
  instructionJson_ = instructionJson;
  setBodyParameter(std::string("InstructionJson"), instructionJson);
}

std::string CreateAgentProfileRequest::getScenario() const {
  return scenario_;
}

void CreateAgentProfileRequest::setScenario(const std::string &scenario) {
  scenario_ = scenario;
  setBodyParameter(std::string("Scenario"), scenario);
}

std::string CreateAgentProfileRequest::getModel() const {
  return model_;
}

void CreateAgentProfileRequest::setModel(const std::string &model) {
  model_ = model;
  setBodyParameter(std::string("Model"), model);
}

std::string CreateAgentProfileRequest::getLabelsJson() const {
  return labelsJson_;
}

void CreateAgentProfileRequest::setLabelsJson(const std::string &labelsJson) {
  labelsJson_ = labelsJson;
  setBodyParameter(std::string("LabelsJson"), labelsJson);
}

std::string CreateAgentProfileRequest::getFaqCategoryIds() const {
  return faqCategoryIds_;
}

void CreateAgentProfileRequest::setFaqCategoryIds(const std::string &faqCategoryIds) {
  faqCategoryIds_ = faqCategoryIds;
  setBodyParameter(std::string("FaqCategoryIds"), faqCategoryIds);
}

std::string CreateAgentProfileRequest::getInstanceId() const {
  return instanceId_;
}

void CreateAgentProfileRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string CreateAgentProfileRequest::getPromptJson() const {
  return promptJson_;
}

void CreateAgentProfileRequest::setPromptJson(const std::string &promptJson) {
  promptJson_ = promptJson;
  setBodyParameter(std::string("PromptJson"), promptJson);
}

std::string CreateAgentProfileRequest::getPrompt() const {
  return prompt_;
}

void CreateAgentProfileRequest::setPrompt(const std::string &prompt) {
  prompt_ = prompt;
  setBodyParameter(std::string("Prompt"), prompt);
}

