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

#include <alibabacloud/ecs/model/DeleteAutoProvisioningGroupRequest.h>

using AlibabaCloud::Ecs::Model::DeleteAutoProvisioningGroupRequest;

DeleteAutoProvisioningGroupRequest::DeleteAutoProvisioningGroupRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteAutoProvisioningGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAutoProvisioningGroupRequest::~DeleteAutoProvisioningGroupRequest() {}

long DeleteAutoProvisioningGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteAutoProvisioningGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteAutoProvisioningGroupRequest::getRegionId() const {
  return regionId_;
}

void DeleteAutoProvisioningGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteAutoProvisioningGroupRequest::getTerminateInstances() const {
  return terminateInstances_;
}

void DeleteAutoProvisioningGroupRequest::setTerminateInstances(bool terminateInstances) {
  terminateInstances_ = terminateInstances;
  setParameter(std::string("TerminateInstances"), terminateInstances ? "true" : "false");
}

std::string DeleteAutoProvisioningGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteAutoProvisioningGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteAutoProvisioningGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteAutoProvisioningGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteAutoProvisioningGroupRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteAutoProvisioningGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteAutoProvisioningGroupRequest::getAutoProvisioningGroupId() const {
  return autoProvisioningGroupId_;
}

void DeleteAutoProvisioningGroupRequest::setAutoProvisioningGroupId(const std::string &autoProvisioningGroupId) {
  autoProvisioningGroupId_ = autoProvisioningGroupId;
  setParameter(std::string("AutoProvisioningGroupId"), autoProvisioningGroupId);
}

