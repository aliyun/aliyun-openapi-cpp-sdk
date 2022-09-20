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

#include <alibabacloud/mns-open/model/SubscribeRequest.h>

using AlibabaCloud::Mns_open::Model::SubscribeRequest;

SubscribeRequest::SubscribeRequest()
    : RpcServiceRequest("mns-open", "2022-01-19", "Subscribe") {
  setMethod(HttpRequest::Method::Post);
}

SubscribeRequest::~SubscribeRequest() {}

std::string SubscribeRequest::getTopicName() const {
  return topicName_;
}

void SubscribeRequest::setTopicName(const std::string &topicName) {
  topicName_ = topicName;
  setParameter(std::string("TopicName"), topicName);
}

std::string SubscribeRequest::getMessageTag() const {
  return messageTag_;
}

void SubscribeRequest::setMessageTag(const std::string &messageTag) {
  messageTag_ = messageTag;
  setParameter(std::string("MessageTag"), messageTag);
}

std::string SubscribeRequest::getEndpoint() const {
  return endpoint_;
}

void SubscribeRequest::setEndpoint(const std::string &endpoint) {
  endpoint_ = endpoint;
  setParameter(std::string("Endpoint"), endpoint);
}

std::string SubscribeRequest::getSubscriptionName() const {
  return subscriptionName_;
}

void SubscribeRequest::setSubscriptionName(const std::string &subscriptionName) {
  subscriptionName_ = subscriptionName;
  setParameter(std::string("SubscriptionName"), subscriptionName);
}

std::string SubscribeRequest::getNotifyStrategy() const {
  return notifyStrategy_;
}

void SubscribeRequest::setNotifyStrategy(const std::string &notifyStrategy) {
  notifyStrategy_ = notifyStrategy;
  setParameter(std::string("NotifyStrategy"), notifyStrategy);
}

std::string SubscribeRequest::getNotifyContentFormat() const {
  return notifyContentFormat_;
}

void SubscribeRequest::setNotifyContentFormat(const std::string &notifyContentFormat) {
  notifyContentFormat_ = notifyContentFormat;
  setParameter(std::string("NotifyContentFormat"), notifyContentFormat);
}

std::string SubscribeRequest::getPushType() const {
  return pushType_;
}

void SubscribeRequest::setPushType(const std::string &pushType) {
  pushType_ = pushType;
  setParameter(std::string("PushType"), pushType);
}

