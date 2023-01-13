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

#include <alibabacloud/cbn/model/MoveResourceGroupRequest.h>

using AlibabaCloud::Cbn::Model::MoveResourceGroupRequest;

MoveResourceGroupRequest::MoveResourceGroupRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "MoveResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

MoveResourceGroupRequest::~MoveResourceGroupRequest() {}

long MoveResourceGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void MoveResourceGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string MoveResourceGroupRequest::getClientToken() const {
  return clientToken_;
}

void MoveResourceGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string MoveResourceGroupRequest::getResourceId() const {
  return resourceId_;
}

void MoveResourceGroupRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

bool MoveResourceGroupRequest::getDryRun() const {
  return dryRun_;
}

void MoveResourceGroupRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string MoveResourceGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void MoveResourceGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string MoveResourceGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void MoveResourceGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long MoveResourceGroupRequest::getOwnerId() const {
  return ownerId_;
}

void MoveResourceGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string MoveResourceGroupRequest::getResourceType() const {
  return resourceType_;
}

void MoveResourceGroupRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string MoveResourceGroupRequest::getVersion() const {
  return version_;
}

void MoveResourceGroupRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string MoveResourceGroupRequest::getNewResourceGroupId() const {
  return newResourceGroupId_;
}

void MoveResourceGroupRequest::setNewResourceGroupId(const std::string &newResourceGroupId) {
  newResourceGroupId_ = newResourceGroupId;
  setParameter(std::string("NewResourceGroupId"), newResourceGroupId);
}

