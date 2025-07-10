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

#include <alibabacloud/vpc/model/MoveVpnResourceGroupRequest.h>

using AlibabaCloud::Vpc::Model::MoveVpnResourceGroupRequest;

MoveVpnResourceGroupRequest::MoveVpnResourceGroupRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "MoveVpnResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

MoveVpnResourceGroupRequest::~MoveVpnResourceGroupRequest() {}

long MoveVpnResourceGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void MoveVpnResourceGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string MoveVpnResourceGroupRequest::getRegionId() const {
  return regionId_;
}

void MoveVpnResourceGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string MoveVpnResourceGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void MoveVpnResourceGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string MoveVpnResourceGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void MoveVpnResourceGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long MoveVpnResourceGroupRequest::getOwnerId() const {
  return ownerId_;
}

void MoveVpnResourceGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string MoveVpnResourceGroupRequest::getResourceType() const {
  return resourceType_;
}

void MoveVpnResourceGroupRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string MoveVpnResourceGroupRequest::getInstanceId() const {
  return instanceId_;
}

void MoveVpnResourceGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string MoveVpnResourceGroupRequest::getNewResourceGroupId() const {
  return newResourceGroupId_;
}

void MoveVpnResourceGroupRequest::setNewResourceGroupId(const std::string &newResourceGroupId) {
  newResourceGroupId_ = newResourceGroupId;
  setParameter(std::string("NewResourceGroupId"), newResourceGroupId);
}

