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

#include <alibabacloud/vpc/model/ModifyEipAddressAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyEipAddressAttributeRequest;

ModifyEipAddressAttributeRequest::ModifyEipAddressAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyEipAddressAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyEipAddressAttributeRequest::~ModifyEipAddressAttributeRequest() {}

long ModifyEipAddressAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyEipAddressAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyEipAddressAttributeRequest::getDescription() const {
  return description_;
}

void ModifyEipAddressAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyEipAddressAttributeRequest::getAllocationId() const {
  return allocationId_;
}

void ModifyEipAddressAttributeRequest::setAllocationId(const std::string &allocationId) {
  allocationId_ = allocationId;
  setParameter(std::string("AllocationId"), allocationId);
}

std::string ModifyEipAddressAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyEipAddressAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyEipAddressAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyEipAddressAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyEipAddressAttributeRequest::getBandwidth() const {
  return bandwidth_;
}

void ModifyEipAddressAttributeRequest::setBandwidth(const std::string &bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), bandwidth);
}

std::string ModifyEipAddressAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyEipAddressAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyEipAddressAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyEipAddressAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyEipAddressAttributeRequest::getName() const {
  return name_;
}

void ModifyEipAddressAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

