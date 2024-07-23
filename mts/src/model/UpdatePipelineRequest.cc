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

#include <alibabacloud/mts/model/UpdatePipelineRequest.h>

using AlibabaCloud::Mts::Model::UpdatePipelineRequest;

UpdatePipelineRequest::UpdatePipelineRequest()
    : RpcServiceRequest("mts", "2014-06-18", "UpdatePipeline") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePipelineRequest::~UpdatePipelineRequest() {}

long UpdatePipelineRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdatePipelineRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdatePipelineRequest::getRole() const {
  return role_;
}

void UpdatePipelineRequest::setRole(const std::string &role) {
  role_ = role;
  setParameter(std::string("Role"), role);
}

std::string UpdatePipelineRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdatePipelineRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdatePipelineRequest::getState() const {
  return state_;
}

void UpdatePipelineRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string UpdatePipelineRequest::getExtendConfig() const {
  return extendConfig_;
}

void UpdatePipelineRequest::setExtendConfig(const std::string &extendConfig) {
  extendConfig_ = extendConfig;
  setParameter(std::string("ExtendConfig"), extendConfig);
}

std::string UpdatePipelineRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdatePipelineRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdatePipelineRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdatePipelineRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string UpdatePipelineRequest::getNotifyConfig() const {
  return notifyConfig_;
}

void UpdatePipelineRequest::setNotifyConfig(const std::string &notifyConfig) {
  notifyConfig_ = notifyConfig;
  setParameter(std::string("NotifyConfig"), notifyConfig);
}

long UpdatePipelineRequest::getOwnerId() const {
  return ownerId_;
}

void UpdatePipelineRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdatePipelineRequest::getPipelineId() const {
  return pipelineId_;
}

void UpdatePipelineRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string UpdatePipelineRequest::getName() const {
  return name_;
}

void UpdatePipelineRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

