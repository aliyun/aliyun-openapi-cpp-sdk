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

#include <alibabacloud/voicenavigator/model/ModifyUnrecognizingConfigRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ModifyUnrecognizingConfigRequest;

ModifyUnrecognizingConfigRequest::ModifyUnrecognizingConfigRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "ModifyUnrecognizingConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyUnrecognizingConfigRequest::~ModifyUnrecognizingConfigRequest() {}

std::string ModifyUnrecognizingConfigRequest::getFinalAction() const {
  return finalAction_;
}

void ModifyUnrecognizingConfigRequest::setFinalAction(const std::string &finalAction) {
  finalAction_ = finalAction;
  setParameter(std::string("FinalAction"), finalAction);
}

std::string ModifyUnrecognizingConfigRequest::getFinalPrompt() const {
  return finalPrompt_;
}

void ModifyUnrecognizingConfigRequest::setFinalPrompt(const std::string &finalPrompt) {
  finalPrompt_ = finalPrompt;
  setParameter(std::string("FinalPrompt"), finalPrompt);
}

int ModifyUnrecognizingConfigRequest::getThreshold() const {
  return threshold_;
}

void ModifyUnrecognizingConfigRequest::setThreshold(int threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), std::to_string(threshold));
}

std::string ModifyUnrecognizingConfigRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyUnrecognizingConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyUnrecognizingConfigRequest::getFinalActionParams() const {
  return finalActionParams_;
}

void ModifyUnrecognizingConfigRequest::setFinalActionParams(const std::string &finalActionParams) {
  finalActionParams_ = finalActionParams;
  setParameter(std::string("FinalActionParams"), finalActionParams);
}

std::string ModifyUnrecognizingConfigRequest::getPrompt() const {
  return prompt_;
}

void ModifyUnrecognizingConfigRequest::setPrompt(const std::string &prompt) {
  prompt_ = prompt;
  setParameter(std::string("Prompt"), prompt);
}

