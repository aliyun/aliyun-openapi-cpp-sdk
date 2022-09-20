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

#include <alibabacloud/mns-open/model/SetQueueAttributesRequest.h>

using AlibabaCloud::Mns_open::Model::SetQueueAttributesRequest;

SetQueueAttributesRequest::SetQueueAttributesRequest()
    : RpcServiceRequest("mns-open", "2022-01-19", "SetQueueAttributes") {
  setMethod(HttpRequest::Method::Post);
}

SetQueueAttributesRequest::~SetQueueAttributesRequest() {}

std::string SetQueueAttributesRequest::getQueueName() const {
  return queueName_;
}

void SetQueueAttributesRequest::setQueueName(const std::string &queueName) {
  queueName_ = queueName;
  setParameter(std::string("QueueName"), queueName);
}

long SetQueueAttributesRequest::getMessageRetentionPeriod() const {
  return messageRetentionPeriod_;
}

void SetQueueAttributesRequest::setMessageRetentionPeriod(long messageRetentionPeriod) {
  messageRetentionPeriod_ = messageRetentionPeriod;
  setParameter(std::string("MessageRetentionPeriod"), std::to_string(messageRetentionPeriod));
}

bool SetQueueAttributesRequest::getEnableLogging() const {
  return enableLogging_;
}

void SetQueueAttributesRequest::setEnableLogging(bool enableLogging) {
  enableLogging_ = enableLogging;
  setParameter(std::string("EnableLogging"), enableLogging ? "true" : "false");
}

long SetQueueAttributesRequest::getVisibilityTimeout() const {
  return visibilityTimeout_;
}

void SetQueueAttributesRequest::setVisibilityTimeout(long visibilityTimeout) {
  visibilityTimeout_ = visibilityTimeout;
  setParameter(std::string("VisibilityTimeout"), std::to_string(visibilityTimeout));
}

long SetQueueAttributesRequest::getDelaySeconds() const {
  return delaySeconds_;
}

void SetQueueAttributesRequest::setDelaySeconds(long delaySeconds) {
  delaySeconds_ = delaySeconds;
  setParameter(std::string("DelaySeconds"), std::to_string(delaySeconds));
}

long SetQueueAttributesRequest::getMaximumMessageSize() const {
  return maximumMessageSize_;
}

void SetQueueAttributesRequest::setMaximumMessageSize(long maximumMessageSize) {
  maximumMessageSize_ = maximumMessageSize;
  setParameter(std::string("MaximumMessageSize"), std::to_string(maximumMessageSize));
}

long SetQueueAttributesRequest::getPollingWaitSeconds() const {
  return pollingWaitSeconds_;
}

void SetQueueAttributesRequest::setPollingWaitSeconds(long pollingWaitSeconds) {
  pollingWaitSeconds_ = pollingWaitSeconds;
  setParameter(std::string("PollingWaitSeconds"), std::to_string(pollingWaitSeconds));
}

