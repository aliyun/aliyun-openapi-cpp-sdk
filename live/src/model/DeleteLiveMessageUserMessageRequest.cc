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

#include <alibabacloud/live/model/DeleteLiveMessageUserMessageRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveMessageUserMessageRequest;

DeleteLiveMessageUserMessageRequest::DeleteLiveMessageUserMessageRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteLiveMessageUserMessage") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveMessageUserMessageRequest::~DeleteLiveMessageUserMessageRequest() {}

std::string DeleteLiveMessageUserMessageRequest::getMessageId() const {
  return messageId_;
}

void DeleteLiveMessageUserMessageRequest::setMessageId(const std::string &messageId) {
  messageId_ = messageId;
  setParameter(std::string("MessageId"), messageId);
}

std::string DeleteLiveMessageUserMessageRequest::getDataCenter() const {
  return dataCenter_;
}

void DeleteLiveMessageUserMessageRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string DeleteLiveMessageUserMessageRequest::getReceiverId() const {
  return receiverId_;
}

void DeleteLiveMessageUserMessageRequest::setReceiverId(const std::string &receiverId) {
  receiverId_ = receiverId;
  setParameter(std::string("ReceiverId"), receiverId);
}

std::string DeleteLiveMessageUserMessageRequest::getAppId() const {
  return appId_;
}

void DeleteLiveMessageUserMessageRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DeleteLiveMessageUserMessageRequest::getDeleterId() const {
  return deleterId_;
}

void DeleteLiveMessageUserMessageRequest::setDeleterId(const std::string &deleterId) {
  deleterId_ = deleterId;
  setParameter(std::string("DeleterId"), deleterId);
}

std::string DeleteLiveMessageUserMessageRequest::getDeleterInfo() const {
  return deleterInfo_;
}

void DeleteLiveMessageUserMessageRequest::setDeleterInfo(const std::string &deleterInfo) {
  deleterInfo_ = deleterInfo;
  setParameter(std::string("DeleterInfo"), deleterInfo);
}

