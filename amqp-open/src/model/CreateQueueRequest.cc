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

#include <alibabacloud/amqp-open/model/CreateQueueRequest.h>

using AlibabaCloud::Amqp_open::Model::CreateQueueRequest;

CreateQueueRequest::CreateQueueRequest()
    : RpcServiceRequest("amqp-open", "2019-12-12", "CreateQueue") {
  setMethod(HttpRequest::Method::Post);
}

CreateQueueRequest::~CreateQueueRequest() {}

std::string CreateQueueRequest::getQueueName() const {
  return queueName_;
}

void CreateQueueRequest::setQueueName(const std::string &queueName) {
  queueName_ = queueName;
  setBodyParameter(std::string("QueueName"), queueName);
}

std::string CreateQueueRequest::getDeadLetterRoutingKey() const {
  return deadLetterRoutingKey_;
}

void CreateQueueRequest::setDeadLetterRoutingKey(const std::string &deadLetterRoutingKey) {
  deadLetterRoutingKey_ = deadLetterRoutingKey;
  setBodyParameter(std::string("DeadLetterRoutingKey"), deadLetterRoutingKey);
}

long CreateQueueRequest::getMaxLength() const {
  return maxLength_;
}

void CreateQueueRequest::setMaxLength(long maxLength) {
  maxLength_ = maxLength;
  setBodyParameter(std::string("MaxLength"), std::to_string(maxLength));
}

long CreateQueueRequest::getAutoExpireState() const {
  return autoExpireState_;
}

void CreateQueueRequest::setAutoExpireState(long autoExpireState) {
  autoExpireState_ = autoExpireState;
  setBodyParameter(std::string("AutoExpireState"), std::to_string(autoExpireState));
}

std::string CreateQueueRequest::getDeadLetterExchange() const {
  return deadLetterExchange_;
}

void CreateQueueRequest::setDeadLetterExchange(const std::string &deadLetterExchange) {
  deadLetterExchange_ = deadLetterExchange;
  setBodyParameter(std::string("DeadLetterExchange"), deadLetterExchange);
}

std::string CreateQueueRequest::getInstanceId() const {
  return instanceId_;
}

void CreateQueueRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

bool CreateQueueRequest::getExclusiveState() const {
  return exclusiveState_;
}

void CreateQueueRequest::setExclusiveState(bool exclusiveState) {
  exclusiveState_ = exclusiveState;
  setBodyParameter(std::string("ExclusiveState"), exclusiveState ? "true" : "false");
}

bool CreateQueueRequest::getAutoDeleteState() const {
  return autoDeleteState_;
}

void CreateQueueRequest::setAutoDeleteState(bool autoDeleteState) {
  autoDeleteState_ = autoDeleteState;
  setBodyParameter(std::string("AutoDeleteState"), autoDeleteState ? "true" : "false");
}

long CreateQueueRequest::getMessageTTL() const {
  return messageTTL_;
}

void CreateQueueRequest::setMessageTTL(long messageTTL) {
  messageTTL_ = messageTTL;
  setBodyParameter(std::string("MessageTTL"), std::to_string(messageTTL));
}

std::string CreateQueueRequest::getVirtualHost() const {
  return virtualHost_;
}

void CreateQueueRequest::setVirtualHost(const std::string &virtualHost) {
  virtualHost_ = virtualHost;
  setBodyParameter(std::string("VirtualHost"), virtualHost);
}

int CreateQueueRequest::getMaximumPriority() const {
  return maximumPriority_;
}

void CreateQueueRequest::setMaximumPriority(int maximumPriority) {
  maximumPriority_ = maximumPriority;
  setBodyParameter(std::string("MaximumPriority"), std::to_string(maximumPriority));
}

