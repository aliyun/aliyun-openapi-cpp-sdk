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

#include <alibabacloud/voicenavigator/model/SilenceTimeoutRequest.h>

using AlibabaCloud::VoiceNavigator::Model::SilenceTimeoutRequest;

SilenceTimeoutRequest::SilenceTimeoutRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "SilenceTimeout") {
  setMethod(HttpRequest::Method::Post);
}

SilenceTimeoutRequest::~SilenceTimeoutRequest() {}

std::string SilenceTimeoutRequest::getConversationId() const {
  return conversationId_;
}

void SilenceTimeoutRequest::setConversationId(const std::string &conversationId) {
  conversationId_ = conversationId;
  setParameter(std::string("ConversationId"), conversationId);
}

std::string SilenceTimeoutRequest::getInitialContext() const {
  return initialContext_;
}

void SilenceTimeoutRequest::setInitialContext(const std::string &initialContext) {
  initialContext_ = initialContext;
  setParameter(std::string("InitialContext"), initialContext);
}

std::string SilenceTimeoutRequest::getInstanceId() const {
  return instanceId_;
}

void SilenceTimeoutRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long SilenceTimeoutRequest::getInstanceOwnerId() const {
  return instanceOwnerId_;
}

void SilenceTimeoutRequest::setInstanceOwnerId(long instanceOwnerId) {
  instanceOwnerId_ = instanceOwnerId;
  setParameter(std::string("InstanceOwnerId"), std::to_string(instanceOwnerId));
}

