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

#include <alibabacloud/dysmsapi/model/SendMessageToGlobeRequest.h>

using AlibabaCloud::Dysmsapi::Model::SendMessageToGlobeRequest;

SendMessageToGlobeRequest::SendMessageToGlobeRequest()
    : RpcServiceRequest("dysmsapi", "2018-05-01", "SendMessageToGlobe") {
  setMethod(HttpRequest::Method::Post);
}

SendMessageToGlobeRequest::~SendMessageToGlobeRequest() {}

long SendMessageToGlobeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SendMessageToGlobeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SendMessageToGlobeRequest::getType() const {
  return type_;
}

void SendMessageToGlobeRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string SendMessageToGlobeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SendMessageToGlobeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SendMessageToGlobeRequest::getFrom() const {
  return from_;
}

void SendMessageToGlobeRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

std::string SendMessageToGlobeRequest::getTaskId() const {
  return taskId_;
}

void SendMessageToGlobeRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string SendMessageToGlobeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SendMessageToGlobeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long SendMessageToGlobeRequest::getOwnerId() const {
  return ownerId_;
}

void SendMessageToGlobeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SendMessageToGlobeRequest::getMessage() const {
  return message_;
}

void SendMessageToGlobeRequest::setMessage(const std::string &message) {
  message_ = message;
  setParameter(std::string("Message"), message);
}

long SendMessageToGlobeRequest::getValidityPeriod() const {
  return validityPeriod_;
}

void SendMessageToGlobeRequest::setValidityPeriod(long validityPeriod) {
  validityPeriod_ = validityPeriod;
  setParameter(std::string("ValidityPeriod"), std::to_string(validityPeriod));
}

std::string SendMessageToGlobeRequest::getTo() const {
  return to_;
}

void SendMessageToGlobeRequest::setTo(const std::string &to) {
  to_ = to;
  setParameter(std::string("To"), to);
}

std::string SendMessageToGlobeRequest::getChannelId() const {
  return channelId_;
}

void SendMessageToGlobeRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}

