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

#include <alibabacloud/ecs/model/ModifyManagedInstanceRequest.h>

using AlibabaCloud::Ecs::Model::ModifyManagedInstanceRequest;

ModifyManagedInstanceRequest::ModifyManagedInstanceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyManagedInstance") {
  setMethod(HttpRequest::Method::Post);
}

ModifyManagedInstanceRequest::~ModifyManagedInstanceRequest() {}

long ModifyManagedInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyManagedInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyManagedInstanceRequest::getRegionId() const {
  return regionId_;
}

void ModifyManagedInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyManagedInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyManagedInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyManagedInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyManagedInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyManagedInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyManagedInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyManagedInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyManagedInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyManagedInstanceRequest::getInstanceName() const {
  return instanceName_;
}

void ModifyManagedInstanceRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

