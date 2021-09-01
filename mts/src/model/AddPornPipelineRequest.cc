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

#include <alibabacloud/mts/model/AddPornPipelineRequest.h>

using AlibabaCloud::Mts::Model::AddPornPipelineRequest;

AddPornPipelineRequest::AddPornPipelineRequest()
    : RpcServiceRequest("mts", "2014-06-18", "AddPornPipeline") {
  setMethod(HttpRequest::Method::Post);
}

AddPornPipelineRequest::~AddPornPipelineRequest() {}

long AddPornPipelineRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddPornPipelineRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddPornPipelineRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddPornPipelineRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddPornPipelineRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddPornPipelineRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddPornPipelineRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddPornPipelineRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string AddPornPipelineRequest::getNotifyConfig() const {
  return notifyConfig_;
}

void AddPornPipelineRequest::setNotifyConfig(const std::string &notifyConfig) {
  notifyConfig_ = notifyConfig;
  setParameter(std::string("NotifyConfig"), notifyConfig);
}

long AddPornPipelineRequest::getOwnerId() const {
  return ownerId_;
}

void AddPornPipelineRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int AddPornPipelineRequest::getPriority() const {
  return priority_;
}

void AddPornPipelineRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string AddPornPipelineRequest::getName() const {
  return name_;
}

void AddPornPipelineRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

