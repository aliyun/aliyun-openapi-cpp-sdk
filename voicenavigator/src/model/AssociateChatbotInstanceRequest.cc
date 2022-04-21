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

#include <alibabacloud/voicenavigator/model/AssociateChatbotInstanceRequest.h>

using AlibabaCloud::VoiceNavigator::Model::AssociateChatbotInstanceRequest;

AssociateChatbotInstanceRequest::AssociateChatbotInstanceRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "AssociateChatbotInstance") {
  setMethod(HttpRequest::Method::Post);
}

AssociateChatbotInstanceRequest::~AssociateChatbotInstanceRequest() {}

std::string AssociateChatbotInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void AssociateChatbotInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AssociateChatbotInstanceRequest::getChatbotInstanceId() const {
  return chatbotInstanceId_;
}

void AssociateChatbotInstanceRequest::setChatbotInstanceId(const std::string &chatbotInstanceId) {
  chatbotInstanceId_ = chatbotInstanceId;
  setParameter(std::string("ChatbotInstanceId"), chatbotInstanceId);
}

std::string AssociateChatbotInstanceRequest::getChatbotName() const {
  return chatbotName_;
}

void AssociateChatbotInstanceRequest::setChatbotName(const std::string &chatbotName) {
  chatbotName_ = chatbotName;
  setParameter(std::string("ChatbotName"), chatbotName);
}

