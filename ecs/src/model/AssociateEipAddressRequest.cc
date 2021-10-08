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

#include <alibabacloud/ecs/model/AssociateEipAddressRequest.h>

using AlibabaCloud::Ecs::Model::AssociateEipAddressRequest;

AssociateEipAddressRequest::AssociateEipAddressRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "AssociateEipAddress") {
  setMethod(HttpRequest::Method::Post);
}

AssociateEipAddressRequest::~AssociateEipAddressRequest() {}

long AssociateEipAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AssociateEipAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AssociateEipAddressRequest::getAllocationId() const {
  return allocationId_;
}

void AssociateEipAddressRequest::setAllocationId(const std::string &allocationId) {
  allocationId_ = allocationId;
  setParameter(std::string("AllocationId"), allocationId);
}

std::string AssociateEipAddressRequest::getRegionId() const {
  return regionId_;
}

void AssociateEipAddressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AssociateEipAddressRequest::getInstanceType() const {
  return instanceType_;
}

void AssociateEipAddressRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string AssociateEipAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AssociateEipAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AssociateEipAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AssociateEipAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AssociateEipAddressRequest::getOwnerId() const {
  return ownerId_;
}

void AssociateEipAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AssociateEipAddressRequest::getInstanceId() const {
  return instanceId_;
}

void AssociateEipAddressRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

