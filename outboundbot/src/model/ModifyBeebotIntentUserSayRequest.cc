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

#include <alibabacloud/outboundbot/model/ModifyBeebotIntentUserSayRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyBeebotIntentUserSayRequest;

ModifyBeebotIntentUserSayRequest::ModifyBeebotIntentUserSayRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ModifyBeebotIntentUserSay") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBeebotIntentUserSayRequest::~ModifyBeebotIntentUserSayRequest() {}

std::string ModifyBeebotIntentUserSayRequest::getScriptId() const {
  return scriptId_;
}

void ModifyBeebotIntentUserSayRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string ModifyBeebotIntentUserSayRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyBeebotIntentUserSayRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyBeebotIntentUserSayRequest::getUserSayId() const {
  return userSayId_;
}

void ModifyBeebotIntentUserSayRequest::setUserSayId(const std::string &userSayId) {
  userSayId_ = userSayId;
  setParameter(std::string("UserSayId"), userSayId);
}

ModifyBeebotIntentUserSayRequest::UserSayDefinition ModifyBeebotIntentUserSayRequest::getUserSayDefinition() const {
  return userSayDefinition_;
}

void ModifyBeebotIntentUserSayRequest::setUserSayDefinition(const ModifyBeebotIntentUserSayRequest::UserSayDefinition &userSayDefinition) {
  userSayDefinition_ = userSayDefinition;
  setParameter(std::string("UserSayDefinition") + ".IntentId", std::to_string(userSayDefinition.intentId));
  setParameter(std::string("UserSayDefinition") + ".Content", userSayDefinition.content);
}

