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

#include <alibabacloud/live/model/DeleteLiveMessageGroupMessageRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveMessageGroupMessageRequest;

DeleteLiveMessageGroupMessageRequest::DeleteLiveMessageGroupMessageRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteLiveMessageGroupMessage") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveMessageGroupMessageRequest::~DeleteLiveMessageGroupMessageRequest() {}

std::string DeleteLiveMessageGroupMessageRequest::getGroupId() const {
  return groupId_;
}

void DeleteLiveMessageGroupMessageRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DeleteLiveMessageGroupMessageRequest::getMessageId() const {
  return messageId_;
}

void DeleteLiveMessageGroupMessageRequest::setMessageId(const std::string &messageId) {
  messageId_ = messageId;
  setParameter(std::string("MessageId"), messageId);
}

std::string DeleteLiveMessageGroupMessageRequest::getDataCenter() const {
  return dataCenter_;
}

void DeleteLiveMessageGroupMessageRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string DeleteLiveMessageGroupMessageRequest::getAppId() const {
  return appId_;
}

void DeleteLiveMessageGroupMessageRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DeleteLiveMessageGroupMessageRequest::getDeleterId() const {
  return deleterId_;
}

void DeleteLiveMessageGroupMessageRequest::setDeleterId(const std::string &deleterId) {
  deleterId_ = deleterId;
  setParameter(std::string("DeleterId"), deleterId);
}

std::string DeleteLiveMessageGroupMessageRequest::getDeleterInfo() const {
  return deleterInfo_;
}

void DeleteLiveMessageGroupMessageRequest::setDeleterInfo(const std::string &deleterInfo) {
  deleterInfo_ = deleterInfo;
  setParameter(std::string("DeleterInfo"), deleterInfo);
}

