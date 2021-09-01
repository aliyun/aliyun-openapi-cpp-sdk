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

#include <alibabacloud/mts/model/AddCensorPipelineRequest.h>

using AlibabaCloud::Mts::Model::AddCensorPipelineRequest;

AddCensorPipelineRequest::AddCensorPipelineRequest()
    : RpcServiceRequest("mts", "2014-06-18", "AddCensorPipeline") {
  setMethod(HttpRequest::Method::Post);
}

AddCensorPipelineRequest::~AddCensorPipelineRequest() {}

long AddCensorPipelineRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddCensorPipelineRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddCensorPipelineRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddCensorPipelineRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddCensorPipelineRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddCensorPipelineRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddCensorPipelineRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddCensorPipelineRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string AddCensorPipelineRequest::getNotifyConfig() const {
  return notifyConfig_;
}

void AddCensorPipelineRequest::setNotifyConfig(const std::string &notifyConfig) {
  notifyConfig_ = notifyConfig;
  setParameter(std::string("NotifyConfig"), notifyConfig);
}

long AddCensorPipelineRequest::getOwnerId() const {
  return ownerId_;
}

void AddCensorPipelineRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int AddCensorPipelineRequest::getPriority() const {
  return priority_;
}

void AddCensorPipelineRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string AddCensorPipelineRequest::getName() const {
  return name_;
}

void AddCensorPipelineRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

