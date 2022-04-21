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

#include <alibabacloud/outboundbot/model/ModifyIntentRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyIntentRequest;

ModifyIntentRequest::ModifyIntentRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ModifyIntent") {
  setMethod(HttpRequest::Method::Post);
}

ModifyIntentRequest::~ModifyIntentRequest() {}

std::string ModifyIntentRequest::getUtterances() const {
  return utterances_;
}

void ModifyIntentRequest::setUtterances(const std::string &utterances) {
  utterances_ = utterances;
  setParameter(std::string("Utterances"), utterances);
}

std::string ModifyIntentRequest::getKeywords() const {
  return keywords_;
}

void ModifyIntentRequest::setKeywords(const std::string &keywords) {
  keywords_ = keywords;
  setParameter(std::string("Keywords"), keywords);
}

std::string ModifyIntentRequest::getIntentDescription() const {
  return intentDescription_;
}

void ModifyIntentRequest::setIntentDescription(const std::string &intentDescription) {
  intentDescription_ = intentDescription;
  setParameter(std::string("IntentDescription"), intentDescription);
}

std::string ModifyIntentRequest::getIntentId() const {
  return intentId_;
}

void ModifyIntentRequest::setIntentId(const std::string &intentId) {
  intentId_ = intentId;
  setParameter(std::string("IntentId"), intentId);
}

std::string ModifyIntentRequest::getScriptId() const {
  return scriptId_;
}

void ModifyIntentRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string ModifyIntentRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyIntentRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyIntentRequest::getIntentName() const {
  return intentName_;
}

void ModifyIntentRequest::setIntentName(const std::string &intentName) {
  intentName_ = intentName;
  setParameter(std::string("IntentName"), intentName);
}

