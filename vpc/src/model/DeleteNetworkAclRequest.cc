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

#include <alibabacloud/vpc/model/DeleteNetworkAclRequest.h>

using AlibabaCloud::Vpc::Model::DeleteNetworkAclRequest;

DeleteNetworkAclRequest::DeleteNetworkAclRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteNetworkAcl") {
  setMethod(HttpRequest::Method::Post);
}

DeleteNetworkAclRequest::~DeleteNetworkAclRequest() {}

long DeleteNetworkAclRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteNetworkAclRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteNetworkAclRequest::getClientToken() const {
  return clientToken_;
}

void DeleteNetworkAclRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteNetworkAclRequest::getRegionId() const {
  return regionId_;
}

void DeleteNetworkAclRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteNetworkAclRequest::getNetworkAclId() const {
  return networkAclId_;
}

void DeleteNetworkAclRequest::setNetworkAclId(const std::string &networkAclId) {
  networkAclId_ = networkAclId;
  setParameter(std::string("NetworkAclId"), networkAclId);
}

bool DeleteNetworkAclRequest::getDryRun() const {
  return dryRun_;
}

void DeleteNetworkAclRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteNetworkAclRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteNetworkAclRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteNetworkAclRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteNetworkAclRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteNetworkAclRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteNetworkAclRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

