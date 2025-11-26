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

#include <alibabacloud/outboundbot/model/ModifyAgentProfileRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyAgentProfileRequest;

ModifyAgentProfileRequest::ModifyAgentProfileRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ModifyAgentProfile") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAgentProfileRequest::~ModifyAgentProfileRequest() {}

std::string ModifyAgentProfileRequest::getModelConfig() const {
  return modelConfig_;
}

void ModifyAgentProfileRequest::setModelConfig(const std::string &modelConfig) {
  modelConfig_ = modelConfig;
  setBodyParameter(std::string("ModelConfig"), modelConfig);
}

std::string ModifyAgentProfileRequest::getDescription() const {
  return description_;
}

void ModifyAgentProfileRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string ModifyAgentProfileRequest::getVariablesJson() const {
  return variablesJson_;
}

void ModifyAgentProfileRequest::setVariablesJson(const std::string &variablesJson) {
  variablesJson_ = variablesJson;
  setBodyParameter(std::string("VariablesJson"), variablesJson);
}

std::string ModifyAgentProfileRequest::getInstructionJson() const {
  return instructionJson_;
}

void ModifyAgentProfileRequest::setInstructionJson(const std::string &instructionJson) {
  instructionJson_ = instructionJson;
  setBodyParameter(std::string("InstructionJson"), instructionJson);
}

std::string ModifyAgentProfileRequest::getScenario() const {
  return scenario_;
}

void ModifyAgentProfileRequest::setScenario(const std::string &scenario) {
  scenario_ = scenario;
  setBodyParameter(std::string("Scenario"), scenario);
}

std::string ModifyAgentProfileRequest::getApiPluginJson() const {
  return apiPluginJson_;
}

void ModifyAgentProfileRequest::setApiPluginJson(const std::string &apiPluginJson) {
  apiPluginJson_ = apiPluginJson;
  setBodyParameter(std::string("ApiPluginJson"), apiPluginJson);
}

std::string ModifyAgentProfileRequest::getModel() const {
  return model_;
}

void ModifyAgentProfileRequest::setModel(const std::string &model) {
  model_ = model;
  setBodyParameter(std::string("Model"), model);
}

std::string ModifyAgentProfileRequest::getLabelsJson() const {
  return labelsJson_;
}

void ModifyAgentProfileRequest::setLabelsJson(const std::string &labelsJson) {
  labelsJson_ = labelsJson;
  setBodyParameter(std::string("LabelsJson"), labelsJson);
}

std::string ModifyAgentProfileRequest::getAgentProfileId() const {
  return agentProfileId_;
}

void ModifyAgentProfileRequest::setAgentProfileId(const std::string &agentProfileId) {
  agentProfileId_ = agentProfileId;
  setBodyParameter(std::string("AgentProfileId"), agentProfileId);
}

std::vector<ModifyAgentProfileRequest::long> ModifyAgentProfileRequest::getFaqCategoryIds() const {
  return faqCategoryIds_;
}

void ModifyAgentProfileRequest::setFaqCategoryIds(const std::vector<ModifyAgentProfileRequest::long> &faqCategoryIds) {
  faqCategoryIds_ = faqCategoryIds;
  for(int dep1 = 0; dep1 != faqCategoryIds.size(); dep1++) {
    setBodyParameter(std::string("FaqCategoryIds") + "." + std::to_string(dep1 + 1), std::to_string(faqCategoryIds[dep1]));
  }
}

std::string ModifyAgentProfileRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyAgentProfileRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyAgentProfileRequest::getPromptJson() const {
  return promptJson_;
}

void ModifyAgentProfileRequest::setPromptJson(const std::string &promptJson) {
  promptJson_ = promptJson;
  setBodyParameter(std::string("PromptJson"), promptJson);
}

std::string ModifyAgentProfileRequest::getPrompt() const {
  return prompt_;
}

void ModifyAgentProfileRequest::setPrompt(const std::string &prompt) {
  prompt_ = prompt;
  setBodyParameter(std::string("Prompt"), prompt);
}

