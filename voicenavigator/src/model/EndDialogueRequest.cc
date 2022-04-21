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

#include <alibabacloud/voicenavigator/model/EndDialogueRequest.h>

using AlibabaCloud::VoiceNavigator::Model::EndDialogueRequest;

EndDialogueRequest::EndDialogueRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "EndDialogue") {
  setMethod(HttpRequest::Method::Post);
}

EndDialogueRequest::~EndDialogueRequest() {}

std::string EndDialogueRequest::getConversationId() const {
  return conversationId_;
}

void EndDialogueRequest::setConversationId(const std::string &conversationId) {
  conversationId_ = conversationId;
  setParameter(std::string("ConversationId"), conversationId);
}

std::string EndDialogueRequest::getHangUpParams() const {
  return hangUpParams_;
}

void EndDialogueRequest::setHangUpParams(const std::string &hangUpParams) {
  hangUpParams_ = hangUpParams;
  setParameter(std::string("HangUpParams"), hangUpParams);
}

std::string EndDialogueRequest::getInstanceId() const {
  return instanceId_;
}

void EndDialogueRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long EndDialogueRequest::getInstanceOwnerId() const {
  return instanceOwnerId_;
}

void EndDialogueRequest::setInstanceOwnerId(long instanceOwnerId) {
  instanceOwnerId_ = instanceOwnerId;
  setParameter(std::string("InstanceOwnerId"), std::to_string(instanceOwnerId));
}

