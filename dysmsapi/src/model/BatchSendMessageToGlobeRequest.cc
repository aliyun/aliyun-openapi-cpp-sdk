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

#include <alibabacloud/dysmsapi/model/BatchSendMessageToGlobeRequest.h>

using AlibabaCloud::Dysmsapi::Model::BatchSendMessageToGlobeRequest;

BatchSendMessageToGlobeRequest::BatchSendMessageToGlobeRequest()
    : RpcServiceRequest("dysmsapi", "2018-05-01", "BatchSendMessageToGlobe") {
  setMethod(HttpRequest::Method::Post);
}

BatchSendMessageToGlobeRequest::~BatchSendMessageToGlobeRequest() {}

long BatchSendMessageToGlobeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void BatchSendMessageToGlobeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string BatchSendMessageToGlobeRequest::getType() const {
  return type_;
}

void BatchSendMessageToGlobeRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string BatchSendMessageToGlobeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void BatchSendMessageToGlobeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string BatchSendMessageToGlobeRequest::getFrom() const {
  return from_;
}

void BatchSendMessageToGlobeRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

std::string BatchSendMessageToGlobeRequest::getTaskId() const {
  return taskId_;
}

void BatchSendMessageToGlobeRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string BatchSendMessageToGlobeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void BatchSendMessageToGlobeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long BatchSendMessageToGlobeRequest::getOwnerId() const {
  return ownerId_;
}

void BatchSendMessageToGlobeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string BatchSendMessageToGlobeRequest::getMessage() const {
  return message_;
}

void BatchSendMessageToGlobeRequest::setMessage(const std::string &message) {
  message_ = message;
  setParameter(std::string("Message"), message);
}

long BatchSendMessageToGlobeRequest::getValidityPeriod() const {
  return validityPeriod_;
}

void BatchSendMessageToGlobeRequest::setValidityPeriod(long validityPeriod) {
  validityPeriod_ = validityPeriod;
  setParameter(std::string("ValidityPeriod"), std::to_string(validityPeriod));
}

std::string BatchSendMessageToGlobeRequest::getTo() const {
  return to_;
}

void BatchSendMessageToGlobeRequest::setTo(const std::string &to) {
  to_ = to;
  setParameter(std::string("To"), to);
}

std::string BatchSendMessageToGlobeRequest::getChannelId() const {
  return channelId_;
}

void BatchSendMessageToGlobeRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}

