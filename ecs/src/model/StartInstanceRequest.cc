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

#include <alibabacloud/ecs/model/StartInstanceRequest.h>

using AlibabaCloud::Ecs::Model::StartInstanceRequest;

StartInstanceRequest::StartInstanceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "StartInstance") {
  setMethod(HttpRequest::Method::Post);
}

StartInstanceRequest::~StartInstanceRequest() {}

long StartInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void StartInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool StartInstanceRequest::getInitLocalDisk() const {
  return initLocalDisk_;
}

void StartInstanceRequest::setInitLocalDisk(bool initLocalDisk) {
  initLocalDisk_ = initLocalDisk;
  setParameter(std::string("InitLocalDisk"), initLocalDisk ? "true" : "false");
}

bool StartInstanceRequest::getDryRun() const {
  return dryRun_;
}

void StartInstanceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string StartInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void StartInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string StartInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void StartInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long StartInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void StartInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string StartInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void StartInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

