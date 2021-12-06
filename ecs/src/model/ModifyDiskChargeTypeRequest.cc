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

#include <alibabacloud/ecs/model/ModifyDiskChargeTypeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyDiskChargeTypeRequest;

ModifyDiskChargeTypeRequest::ModifyDiskChargeTypeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyDiskChargeType") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDiskChargeTypeRequest::~ModifyDiskChargeTypeRequest() {}

long ModifyDiskChargeTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDiskChargeTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDiskChargeTypeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDiskChargeTypeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDiskChargeTypeRequest::getDiskChargeType() const {
  return diskChargeType_;
}

void ModifyDiskChargeTypeRequest::setDiskChargeType(const std::string &diskChargeType) {
  diskChargeType_ = diskChargeType;
  setParameter(std::string("DiskChargeType"), diskChargeType);
}

std::string ModifyDiskChargeTypeRequest::getRegionId() const {
  return regionId_;
}

void ModifyDiskChargeTypeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDiskChargeTypeRequest::getDiskIds() const {
  return diskIds_;
}

void ModifyDiskChargeTypeRequest::setDiskIds(const std::string &diskIds) {
  diskIds_ = diskIds;
  setParameter(std::string("DiskIds"), diskIds);
}

bool ModifyDiskChargeTypeRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyDiskChargeTypeRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string ModifyDiskChargeTypeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDiskChargeTypeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDiskChargeTypeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDiskChargeTypeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDiskChargeTypeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDiskChargeTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDiskChargeTypeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyDiskChargeTypeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

