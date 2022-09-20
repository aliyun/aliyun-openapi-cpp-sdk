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

#include <alibabacloud/mns-open/model/CreateTopicRequest.h>

using AlibabaCloud::Mns_open::Model::CreateTopicRequest;

CreateTopicRequest::CreateTopicRequest()
    : RpcServiceRequest("mns-open", "2022-01-19", "CreateTopic") {
  setMethod(HttpRequest::Method::Post);
}

CreateTopicRequest::~CreateTopicRequest() {}

std::string CreateTopicRequest::getTopicName() const {
  return topicName_;
}

void CreateTopicRequest::setTopicName(const std::string &topicName) {
  topicName_ = topicName;
  setBodyParameter(std::string("TopicName"), topicName);
}

long CreateTopicRequest::getMaxMessageSize() const {
  return maxMessageSize_;
}

void CreateTopicRequest::setMaxMessageSize(long maxMessageSize) {
  maxMessageSize_ = maxMessageSize;
  setBodyParameter(std::string("MaxMessageSize"), std::to_string(maxMessageSize));
}

bool CreateTopicRequest::getEnableLogging() const {
  return enableLogging_;
}

void CreateTopicRequest::setEnableLogging(bool enableLogging) {
  enableLogging_ = enableLogging;
  setBodyParameter(std::string("EnableLogging"), enableLogging ? "true" : "false");
}

