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

#include <alibabacloud/mns-open/model/SetSubscriptionAttributesRequest.h>

using AlibabaCloud::Mns_open::Model::SetSubscriptionAttributesRequest;

SetSubscriptionAttributesRequest::SetSubscriptionAttributesRequest()
    : RpcServiceRequest("mns-open", "2022-01-19", "SetSubscriptionAttributes") {
  setMethod(HttpRequest::Method::Post);
}

SetSubscriptionAttributesRequest::~SetSubscriptionAttributesRequest() {}

std::string SetSubscriptionAttributesRequest::getSubscriptionName() const {
  return subscriptionName_;
}

void SetSubscriptionAttributesRequest::setSubscriptionName(const std::string &subscriptionName) {
  subscriptionName_ = subscriptionName;
  setParameter(std::string("SubscriptionName"), subscriptionName);
}

std::string SetSubscriptionAttributesRequest::getTopicName() const {
  return topicName_;
}

void SetSubscriptionAttributesRequest::setTopicName(const std::string &topicName) {
  topicName_ = topicName;
  setParameter(std::string("TopicName"), topicName);
}

std::string SetSubscriptionAttributesRequest::getNotifyStrategy() const {
  return notifyStrategy_;
}

void SetSubscriptionAttributesRequest::setNotifyStrategy(const std::string &notifyStrategy) {
  notifyStrategy_ = notifyStrategy;
  setParameter(std::string("NotifyStrategy"), notifyStrategy);
}

