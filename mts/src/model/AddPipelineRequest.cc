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

#include <alibabacloud/mts/model/AddPipelineRequest.h>

using AlibabaCloud::Mts::Model::AddPipelineRequest;

AddPipelineRequest::AddPipelineRequest()
    : RpcServiceRequest("mts", "2014-06-18", "AddPipeline") {
  setMethod(HttpRequest::Method::Post);
}

AddPipelineRequest::~AddPipelineRequest() {}

long AddPipelineRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddPipelineRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddPipelineRequest::getRole() const {
  return role_;
}

void AddPipelineRequest::setRole(const std::string &role) {
  role_ = role;
  setParameter(std::string("Role"), role);
}

std::string AddPipelineRequest::getSpeed() const {
  return speed_;
}

void AddPipelineRequest::setSpeed(const std::string &speed) {
  speed_ = speed;
  setParameter(std::string("Speed"), speed);
}

std::string AddPipelineRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddPipelineRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddPipelineRequest::getExtendConfig() const {
  return extendConfig_;
}

void AddPipelineRequest::setExtendConfig(const std::string &extendConfig) {
  extendConfig_ = extendConfig;
  setParameter(std::string("ExtendConfig"), extendConfig);
}

std::string AddPipelineRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddPipelineRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddPipelineRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddPipelineRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string AddPipelineRequest::getNotifyConfig() const {
  return notifyConfig_;
}

void AddPipelineRequest::setNotifyConfig(const std::string &notifyConfig) {
  notifyConfig_ = notifyConfig;
  setParameter(std::string("NotifyConfig"), notifyConfig);
}

long AddPipelineRequest::getOwnerId() const {
  return ownerId_;
}

void AddPipelineRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddPipelineRequest::getName() const {
  return name_;
}

void AddPipelineRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long AddPipelineRequest::getSpeedLevel() const {
  return speedLevel_;
}

void AddPipelineRequest::setSpeedLevel(long speedLevel) {
  speedLevel_ = speedLevel;
  setParameter(std::string("SpeedLevel"), std::to_string(speedLevel));
}

