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

#include <alibabacloud/voicenavigator/model/BeginDialogueRequest.h>

using AlibabaCloud::VoiceNavigator::Model::BeginDialogueRequest;

BeginDialogueRequest::BeginDialogueRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "BeginDialogue") {
  setMethod(HttpRequest::Method::Post);
}

BeginDialogueRequest::~BeginDialogueRequest() {}

std::string BeginDialogueRequest::getConversationId() const {
  return conversationId_;
}

void BeginDialogueRequest::setConversationId(const std::string &conversationId) {
  conversationId_ = conversationId;
  setParameter(std::string("ConversationId"), conversationId);
}

std::string BeginDialogueRequest::getInitialContext() const {
  return initialContext_;
}

void BeginDialogueRequest::setInitialContext(const std::string &initialContext) {
  initialContext_ = initialContext;
  setParameter(std::string("InitialContext"), initialContext);
}

std::string BeginDialogueRequest::getCallingNumber() const {
  return callingNumber_;
}

void BeginDialogueRequest::setCallingNumber(const std::string &callingNumber) {
  callingNumber_ = callingNumber;
  setParameter(std::string("CallingNumber"), callingNumber);
}

std::string BeginDialogueRequest::getInstanceId() const {
  return instanceId_;
}

void BeginDialogueRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string BeginDialogueRequest::getCalledNumber() const {
  return calledNumber_;
}

void BeginDialogueRequest::setCalledNumber(const std::string &calledNumber) {
  calledNumber_ = calledNumber;
  setParameter(std::string("CalledNumber"), calledNumber);
}

long BeginDialogueRequest::getInstanceOwnerId() const {
  return instanceOwnerId_;
}

void BeginDialogueRequest::setInstanceOwnerId(long instanceOwnerId) {
  instanceOwnerId_ = instanceOwnerId;
  setParameter(std::string("InstanceOwnerId"), std::to_string(instanceOwnerId));
}

