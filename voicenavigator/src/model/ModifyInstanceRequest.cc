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

#include <alibabacloud/voicenavigator/model/ModifyInstanceRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ModifyInstanceRequest;

ModifyInstanceRequest::ModifyInstanceRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "ModifyInstance") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceRequest::~ModifyInstanceRequest() {}

std::string ModifyInstanceRequest::getDescription() const {
  return description_;
}

void ModifyInstanceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long ModifyInstanceRequest::getConcurrency() const {
  return concurrency_;
}

void ModifyInstanceRequest::setConcurrency(long concurrency) {
  concurrency_ = concurrency;
  setParameter(std::string("Concurrency"), std::to_string(concurrency));
}

std::string ModifyInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceRequest::getChatbotInstanceId() const {
  return chatbotInstanceId_;
}

void ModifyInstanceRequest::setChatbotInstanceId(const std::string &chatbotInstanceId) {
  chatbotInstanceId_ = chatbotInstanceId;
  setParameter(std::string("ChatbotInstanceId"), chatbotInstanceId);
}

