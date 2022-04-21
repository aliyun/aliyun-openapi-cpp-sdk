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

#include <alibabacloud/voicenavigator/model/DebugDialogueRequest.h>

using AlibabaCloud::VoiceNavigator::Model::DebugDialogueRequest;

DebugDialogueRequest::DebugDialogueRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "DebugDialogue") {
  setMethod(HttpRequest::Method::Post);
}

DebugDialogueRequest::~DebugDialogueRequest() {}

std::string DebugDialogueRequest::getConversationId() const {
  return conversationId_;
}

void DebugDialogueRequest::setConversationId(const std::string &conversationId) {
  conversationId_ = conversationId;
  setParameter(std::string("ConversationId"), conversationId);
}

std::string DebugDialogueRequest::getInstanceId() const {
  return instanceId_;
}

void DebugDialogueRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DebugDialogueRequest::getAdditionalContext() const {
  return additionalContext_;
}

void DebugDialogueRequest::setAdditionalContext(const std::string &additionalContext) {
  additionalContext_ = additionalContext;
  setParameter(std::string("AdditionalContext"), additionalContext);
}

std::string DebugDialogueRequest::getUtterance() const {
  return utterance_;
}

void DebugDialogueRequest::setUtterance(const std::string &utterance) {
  utterance_ = utterance;
  setParameter(std::string("Utterance"), utterance);
}

