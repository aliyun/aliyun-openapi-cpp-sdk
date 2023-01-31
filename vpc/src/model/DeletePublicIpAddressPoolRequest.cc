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

#include <alibabacloud/vpc/model/DeletePublicIpAddressPoolRequest.h>

using AlibabaCloud::Vpc::Model::DeletePublicIpAddressPoolRequest;

DeletePublicIpAddressPoolRequest::DeletePublicIpAddressPoolRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeletePublicIpAddressPool") {
  setMethod(HttpRequest::Method::Post);
}

DeletePublicIpAddressPoolRequest::~DeletePublicIpAddressPoolRequest() {}

std::string DeletePublicIpAddressPoolRequest::getPublicIpAddressPoolId() const {
  return publicIpAddressPoolId_;
}

void DeletePublicIpAddressPoolRequest::setPublicIpAddressPoolId(const std::string &publicIpAddressPoolId) {
  publicIpAddressPoolId_ = publicIpAddressPoolId;
  setParameter(std::string("PublicIpAddressPoolId"), publicIpAddressPoolId);
}

long DeletePublicIpAddressPoolRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeletePublicIpAddressPoolRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeletePublicIpAddressPoolRequest::getClientToken() const {
  return clientToken_;
}

void DeletePublicIpAddressPoolRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeletePublicIpAddressPoolRequest::getRegionId() const {
  return regionId_;
}

void DeletePublicIpAddressPoolRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeletePublicIpAddressPoolRequest::getDryRun() const {
  return dryRun_;
}

void DeletePublicIpAddressPoolRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeletePublicIpAddressPoolRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeletePublicIpAddressPoolRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeletePublicIpAddressPoolRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeletePublicIpAddressPoolRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeletePublicIpAddressPoolRequest::getOwnerId() const {
  return ownerId_;
}

void DeletePublicIpAddressPoolRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

