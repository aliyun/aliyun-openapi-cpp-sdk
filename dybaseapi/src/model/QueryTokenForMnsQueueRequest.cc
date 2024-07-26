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

#include <alibabacloud/dybaseapi/model/QueryTokenForMnsQueueRequest.h>

using AlibabaCloud::Dybaseapi::Model::QueryTokenForMnsQueueRequest;

QueryTokenForMnsQueueRequest::QueryTokenForMnsQueueRequest()
    : RpcServiceRequest("dybaseapi", "2017-05-25", "QueryTokenForMnsQueue") {
  setMethod(HttpRequest::Method::Post);
}

QueryTokenForMnsQueueRequest::~QueryTokenForMnsQueueRequest() {}

std::string QueryTokenForMnsQueueRequest::getQueueName() const {
  return queueName_;
}

void QueryTokenForMnsQueueRequest::setQueueName(const std::string &queueName) {
  queueName_ = queueName;
  setParameter(std::string("QueueName"), queueName);
}

long QueryTokenForMnsQueueRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryTokenForMnsQueueRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryTokenForMnsQueueRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryTokenForMnsQueueRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryTokenForMnsQueueRequest::getMessageType() const {
  return messageType_;
}

void QueryTokenForMnsQueueRequest::setMessageType(const std::string &messageType) {
  messageType_ = messageType;
  setParameter(std::string("MessageType"), messageType);
}

long QueryTokenForMnsQueueRequest::getOwnerId() const {
  return ownerId_;
}

void QueryTokenForMnsQueueRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryTokenForMnsQueueRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryTokenForMnsQueueRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

