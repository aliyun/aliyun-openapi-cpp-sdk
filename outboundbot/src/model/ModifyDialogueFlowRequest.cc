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

#include <alibabacloud/outboundbot/model/ModifyDialogueFlowRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyDialogueFlowRequest;

ModifyDialogueFlowRequest::ModifyDialogueFlowRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ModifyDialogueFlow") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDialogueFlowRequest::~ModifyDialogueFlowRequest() {}

bool ModifyDialogueFlowRequest::getIsDrafted() const {
  return isDrafted_;
}

void ModifyDialogueFlowRequest::setIsDrafted(bool isDrafted) {
  isDrafted_ = isDrafted;
  setParameter(std::string("IsDrafted"), isDrafted ? "true" : "false");
}

std::string ModifyDialogueFlowRequest::getScriptId() const {
  return scriptId_;
}

void ModifyDialogueFlowRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string ModifyDialogueFlowRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyDialogueFlowRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyDialogueFlowRequest::getDialogueFlowDefinition() const {
  return dialogueFlowDefinition_;
}

void ModifyDialogueFlowRequest::setDialogueFlowDefinition(const std::string &dialogueFlowDefinition) {
  dialogueFlowDefinition_ = dialogueFlowDefinition;
  setParameter(std::string("DialogueFlowDefinition"), dialogueFlowDefinition);
}

std::string ModifyDialogueFlowRequest::getDialogueFlowId() const {
  return dialogueFlowId_;
}

void ModifyDialogueFlowRequest::setDialogueFlowId(const std::string &dialogueFlowId) {
  dialogueFlowId_ = dialogueFlowId;
  setParameter(std::string("DialogueFlowId"), dialogueFlowId);
}

