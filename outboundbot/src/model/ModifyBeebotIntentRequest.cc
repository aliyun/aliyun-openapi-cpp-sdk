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

#include <alibabacloud/outboundbot/model/ModifyBeebotIntentRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyBeebotIntentRequest;

ModifyBeebotIntentRequest::ModifyBeebotIntentRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ModifyBeebotIntent") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBeebotIntentRequest::~ModifyBeebotIntentRequest() {}

ModifyBeebotIntentRequest::IntentDefinition ModifyBeebotIntentRequest::getIntentDefinition() const {
  return intentDefinition_;
}

void ModifyBeebotIntentRequest::setIntentDefinition(const ModifyBeebotIntentRequest::IntentDefinition &intentDefinition) {
  intentDefinition_ = intentDefinition;
  setParameter(std::string("IntentDefinition") + ".AliasName", intentDefinition.aliasName);
  setParameter(std::string("IntentDefinition") + ".IntentName", intentDefinition.intentName);
}

long ModifyBeebotIntentRequest::getIntentId() const {
  return intentId_;
}

void ModifyBeebotIntentRequest::setIntentId(long intentId) {
  intentId_ = intentId;
  setParameter(std::string("IntentId"), std::to_string(intentId));
}

std::string ModifyBeebotIntentRequest::getScriptId() const {
  return scriptId_;
}

void ModifyBeebotIntentRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string ModifyBeebotIntentRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyBeebotIntentRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

