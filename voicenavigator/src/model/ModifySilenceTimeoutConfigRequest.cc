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

#include <alibabacloud/voicenavigator/model/ModifySilenceTimeoutConfigRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ModifySilenceTimeoutConfigRequest;

ModifySilenceTimeoutConfigRequest::ModifySilenceTimeoutConfigRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "ModifySilenceTimeoutConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifySilenceTimeoutConfigRequest::~ModifySilenceTimeoutConfigRequest() {}

std::string ModifySilenceTimeoutConfigRequest::getFinalAction() const {
  return finalAction_;
}

void ModifySilenceTimeoutConfigRequest::setFinalAction(const std::string &finalAction) {
  finalAction_ = finalAction;
  setParameter(std::string("FinalAction"), finalAction);
}

std::string ModifySilenceTimeoutConfigRequest::getFinalPrompt() const {
  return finalPrompt_;
}

void ModifySilenceTimeoutConfigRequest::setFinalPrompt(const std::string &finalPrompt) {
  finalPrompt_ = finalPrompt;
  setParameter(std::string("FinalPrompt"), finalPrompt);
}

int ModifySilenceTimeoutConfigRequest::getThreshold() const {
  return threshold_;
}

void ModifySilenceTimeoutConfigRequest::setThreshold(int threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), std::to_string(threshold));
}

std::string ModifySilenceTimeoutConfigRequest::getIntentTrigger() const {
  return intentTrigger_;
}

void ModifySilenceTimeoutConfigRequest::setIntentTrigger(const std::string &intentTrigger) {
  intentTrigger_ = intentTrigger;
  setParameter(std::string("IntentTrigger"), intentTrigger);
}

long ModifySilenceTimeoutConfigRequest::getTimeout() const {
  return timeout_;
}

void ModifySilenceTimeoutConfigRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string ModifySilenceTimeoutConfigRequest::getInstanceId() const {
  return instanceId_;
}

void ModifySilenceTimeoutConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifySilenceTimeoutConfigRequest::getSourceType() const {
  return sourceType_;
}

void ModifySilenceTimeoutConfigRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

std::string ModifySilenceTimeoutConfigRequest::getFinalActionParams() const {
  return finalActionParams_;
}

void ModifySilenceTimeoutConfigRequest::setFinalActionParams(const std::string &finalActionParams) {
  finalActionParams_ = finalActionParams;
  setParameter(std::string("FinalActionParams"), finalActionParams);
}

std::string ModifySilenceTimeoutConfigRequest::getPrompt() const {
  return prompt_;
}

void ModifySilenceTimeoutConfigRequest::setPrompt(const std::string &prompt) {
  prompt_ = prompt;
  setParameter(std::string("Prompt"), prompt);
}

