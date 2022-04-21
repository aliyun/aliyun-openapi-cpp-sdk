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

#include <alibabacloud/voicenavigator/model/CreateInstanceRequest.h>

using AlibabaCloud::VoiceNavigator::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "CreateInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateInstanceRequest::~CreateInstanceRequest() {}

std::string CreateInstanceRequest::getDescription() const {
  return description_;
}

void CreateInstanceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long CreateInstanceRequest::getConcurrency() const {
  return concurrency_;
}

void CreateInstanceRequest::setConcurrency(long concurrency) {
  concurrency_ = concurrency;
  setParameter(std::string("Concurrency"), std::to_string(concurrency));
}

std::string CreateInstanceRequest::getChatbotInstanceId() const {
  return chatbotInstanceId_;
}

void CreateInstanceRequest::setChatbotInstanceId(const std::string &chatbotInstanceId) {
  chatbotInstanceId_ = chatbotInstanceId;
  setParameter(std::string("ChatbotInstanceId"), chatbotInstanceId);
}

std::string CreateInstanceRequest::getName() const {
  return name_;
}

void CreateInstanceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateInstanceRequest::getNluServiceType() const {
  return nluServiceType_;
}

void CreateInstanceRequest::setNluServiceType(const std::string &nluServiceType) {
  nluServiceType_ = nluServiceType;
  setParameter(std::string("NluServiceType"), nluServiceType);
}

std::string CreateInstanceRequest::getChatbotName() const {
  return chatbotName_;
}

void CreateInstanceRequest::setChatbotName(const std::string &chatbotName) {
  chatbotName_ = chatbotName;
  setParameter(std::string("ChatbotName"), chatbotName);
}

