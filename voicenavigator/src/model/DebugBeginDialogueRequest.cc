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

#include <alibabacloud/voicenavigator/model/DebugBeginDialogueRequest.h>

using AlibabaCloud::VoiceNavigator::Model::DebugBeginDialogueRequest;

DebugBeginDialogueRequest::DebugBeginDialogueRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "DebugBeginDialogue") {
  setMethod(HttpRequest::Method::Post);
}

DebugBeginDialogueRequest::~DebugBeginDialogueRequest() {}

std::string DebugBeginDialogueRequest::getConversationId() const {
  return conversationId_;
}

void DebugBeginDialogueRequest::setConversationId(const std::string &conversationId) {
  conversationId_ = conversationId;
  setParameter(std::string("ConversationId"), conversationId);
}

std::string DebugBeginDialogueRequest::getInitialContext() const {
  return initialContext_;
}

void DebugBeginDialogueRequest::setInitialContext(const std::string &initialContext) {
  initialContext_ = initialContext;
  setParameter(std::string("InitialContext"), initialContext);
}

std::string DebugBeginDialogueRequest::getCallingNumber() const {
  return callingNumber_;
}

void DebugBeginDialogueRequest::setCallingNumber(const std::string &callingNumber) {
  callingNumber_ = callingNumber;
  setParameter(std::string("CallingNumber"), callingNumber);
}

std::string DebugBeginDialogueRequest::getInstanceId() const {
  return instanceId_;
}

void DebugBeginDialogueRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DebugBeginDialogueRequest::getCalledNumber() const {
  return calledNumber_;
}

void DebugBeginDialogueRequest::setCalledNumber(const std::string &calledNumber) {
  calledNumber_ = calledNumber;
  setParameter(std::string("CalledNumber"), calledNumber);
}

