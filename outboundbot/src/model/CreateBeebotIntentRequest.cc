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

#include <alibabacloud/outboundbot/model/CreateBeebotIntentRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateBeebotIntentRequest;

CreateBeebotIntentRequest::CreateBeebotIntentRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateBeebotIntent") {
  setMethod(HttpRequest::Method::Post);
}

CreateBeebotIntentRequest::~CreateBeebotIntentRequest() {}

CreateBeebotIntentRequest::IntentDefinition CreateBeebotIntentRequest::getIntentDefinition() const {
  return intentDefinition_;
}

void CreateBeebotIntentRequest::setIntentDefinition(const CreateBeebotIntentRequest::IntentDefinition &intentDefinition) {
  intentDefinition_ = intentDefinition;
  setParameter(std::string("IntentDefinition") + ".AliasName", intentDefinition.aliasName);
  setParameter(std::string("IntentDefinition") + ".IntentName", intentDefinition.intentName);
}

std::string CreateBeebotIntentRequest::getScriptId() const {
  return scriptId_;
}

void CreateBeebotIntentRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string CreateBeebotIntentRequest::getInstanceId() const {
  return instanceId_;
}

void CreateBeebotIntentRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

