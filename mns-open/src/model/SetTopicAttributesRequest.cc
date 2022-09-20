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

#include <alibabacloud/mns-open/model/SetTopicAttributesRequest.h>

using AlibabaCloud::Mns_open::Model::SetTopicAttributesRequest;

SetTopicAttributesRequest::SetTopicAttributesRequest()
    : RpcServiceRequest("mns-open", "2022-01-19", "SetTopicAttributes") {
  setMethod(HttpRequest::Method::Post);
}

SetTopicAttributesRequest::~SetTopicAttributesRequest() {}

std::string SetTopicAttributesRequest::getTopicName() const {
  return topicName_;
}

void SetTopicAttributesRequest::setTopicName(const std::string &topicName) {
  topicName_ = topicName;
  setParameter(std::string("TopicName"), topicName);
}

long SetTopicAttributesRequest::getMaxMessageSize() const {
  return maxMessageSize_;
}

void SetTopicAttributesRequest::setMaxMessageSize(long maxMessageSize) {
  maxMessageSize_ = maxMessageSize;
  setParameter(std::string("MaxMessageSize"), std::to_string(maxMessageSize));
}

bool SetTopicAttributesRequest::getEnableLogging() const {
  return enableLogging_;
}

void SetTopicAttributesRequest::setEnableLogging(bool enableLogging) {
  enableLogging_ = enableLogging;
  setParameter(std::string("EnableLogging"), enableLogging ? "true" : "false");
}

