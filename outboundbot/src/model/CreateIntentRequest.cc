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

#include <alibabacloud/outboundbot/model/CreateIntentRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateIntentRequest;

CreateIntentRequest::CreateIntentRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateIntent") {
  setMethod(HttpRequest::Method::Post);
}

CreateIntentRequest::~CreateIntentRequest() {}

std::string CreateIntentRequest::getUtterances() const {
  return utterances_;
}

void CreateIntentRequest::setUtterances(const std::string &utterances) {
  utterances_ = utterances;
  setParameter(std::string("Utterances"), utterances);
}

std::string CreateIntentRequest::getKeywords() const {
  return keywords_;
}

void CreateIntentRequest::setKeywords(const std::string &keywords) {
  keywords_ = keywords;
  setParameter(std::string("Keywords"), keywords);
}

std::string CreateIntentRequest::getIntentDescription() const {
  return intentDescription_;
}

void CreateIntentRequest::setIntentDescription(const std::string &intentDescription) {
  intentDescription_ = intentDescription;
  setParameter(std::string("IntentDescription"), intentDescription);
}

std::string CreateIntentRequest::getScriptId() const {
  return scriptId_;
}

void CreateIntentRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string CreateIntentRequest::getInstanceId() const {
  return instanceId_;
}

void CreateIntentRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateIntentRequest::getIntentName() const {
  return intentName_;
}

void CreateIntentRequest::setIntentName(const std::string &intentName) {
  intentName_ = intentName;
  setParameter(std::string("IntentName"), intentName);
}

