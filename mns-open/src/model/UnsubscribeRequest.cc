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

#include <alibabacloud/mns-open/model/UnsubscribeRequest.h>

using AlibabaCloud::Mns_open::Model::UnsubscribeRequest;

UnsubscribeRequest::UnsubscribeRequest()
    : RpcServiceRequest("mns-open", "2022-01-19", "Unsubscribe") {
  setMethod(HttpRequest::Method::Post);
}

UnsubscribeRequest::~UnsubscribeRequest() {}

std::string UnsubscribeRequest::getSubscriptionName() const {
  return subscriptionName_;
}

void UnsubscribeRequest::setSubscriptionName(const std::string &subscriptionName) {
  subscriptionName_ = subscriptionName;
  setParameter(std::string("SubscriptionName"), subscriptionName);
}

std::string UnsubscribeRequest::getTopicName() const {
  return topicName_;
}

void UnsubscribeRequest::setTopicName(const std::string &topicName) {
  topicName_ = topicName;
  setParameter(std::string("TopicName"), topicName);
}

