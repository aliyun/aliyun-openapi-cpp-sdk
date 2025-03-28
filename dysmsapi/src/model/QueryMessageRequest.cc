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

#include <alibabacloud/dysmsapi/model/QueryMessageRequest.h>

using AlibabaCloud::Dysmsapi::Model::QueryMessageRequest;

QueryMessageRequest::QueryMessageRequest()
    : RpcServiceRequest("dysmsapi", "2018-05-01", "QueryMessage") {
  setMethod(HttpRequest::Method::Post);
}

QueryMessageRequest::~QueryMessageRequest() {}

long QueryMessageRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryMessageRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryMessageRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryMessageRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryMessageRequest::getMessageId() const {
  return messageId_;
}

void QueryMessageRequest::setMessageId(const std::string &messageId) {
  messageId_ = messageId;
  setParameter(std::string("MessageId"), messageId);
}

long QueryMessageRequest::getOwnerId() const {
  return ownerId_;
}

void QueryMessageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryMessageRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryMessageRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

