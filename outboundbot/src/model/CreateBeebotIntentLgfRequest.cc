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

#include <alibabacloud/outboundbot/model/CreateBeebotIntentLgfRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateBeebotIntentLgfRequest;

CreateBeebotIntentLgfRequest::CreateBeebotIntentLgfRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateBeebotIntentLgf") {
  setMethod(HttpRequest::Method::Post);
}

CreateBeebotIntentLgfRequest::~CreateBeebotIntentLgfRequest() {}

std::string CreateBeebotIntentLgfRequest::getScriptId() const {
  return scriptId_;
}

void CreateBeebotIntentLgfRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string CreateBeebotIntentLgfRequest::getInstanceId() const {
  return instanceId_;
}

void CreateBeebotIntentLgfRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

CreateBeebotIntentLgfRequest::LgfDefinition CreateBeebotIntentLgfRequest::getLgfDefinition() const {
  return lgfDefinition_;
}

void CreateBeebotIntentLgfRequest::setLgfDefinition(const CreateBeebotIntentLgfRequest::LgfDefinition &lgfDefinition) {
  lgfDefinition_ = lgfDefinition;
  setParameter(std::string("LgfDefinition") + ".RuleText", lgfDefinition.ruleText);
  setParameter(std::string("LgfDefinition") + ".IntentId", std::to_string(lgfDefinition.intentId));
}

