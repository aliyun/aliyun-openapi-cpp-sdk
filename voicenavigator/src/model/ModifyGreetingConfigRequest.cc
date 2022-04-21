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

#include <alibabacloud/voicenavigator/model/ModifyGreetingConfigRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ModifyGreetingConfigRequest;

ModifyGreetingConfigRequest::ModifyGreetingConfigRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "ModifyGreetingConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyGreetingConfigRequest::~ModifyGreetingConfigRequest() {}

std::string ModifyGreetingConfigRequest::getGreetingWords() const {
  return greetingWords_;
}

void ModifyGreetingConfigRequest::setGreetingWords(const std::string &greetingWords) {
  greetingWords_ = greetingWords;
  setParameter(std::string("GreetingWords"), greetingWords);
}

std::string ModifyGreetingConfigRequest::getIntentTrigger() const {
  return intentTrigger_;
}

void ModifyGreetingConfigRequest::setIntentTrigger(const std::string &intentTrigger) {
  intentTrigger_ = intentTrigger;
  setParameter(std::string("IntentTrigger"), intentTrigger);
}

std::string ModifyGreetingConfigRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyGreetingConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyGreetingConfigRequest::getSourceType() const {
  return sourceType_;
}

void ModifyGreetingConfigRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

