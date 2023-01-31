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

#include <alibabacloud/vpc/model/DeletePublicIpAddressPoolCidrBlockRequest.h>

using AlibabaCloud::Vpc::Model::DeletePublicIpAddressPoolCidrBlockRequest;

DeletePublicIpAddressPoolCidrBlockRequest::DeletePublicIpAddressPoolCidrBlockRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeletePublicIpAddressPoolCidrBlock") {
  setMethod(HttpRequest::Method::Post);
}

DeletePublicIpAddressPoolCidrBlockRequest::~DeletePublicIpAddressPoolCidrBlockRequest() {}

std::string DeletePublicIpAddressPoolCidrBlockRequest::getPublicIpAddressPoolId() const {
  return publicIpAddressPoolId_;
}

void DeletePublicIpAddressPoolCidrBlockRequest::setPublicIpAddressPoolId(const std::string &publicIpAddressPoolId) {
  publicIpAddressPoolId_ = publicIpAddressPoolId;
  setParameter(std::string("PublicIpAddressPoolId"), publicIpAddressPoolId);
}

long DeletePublicIpAddressPoolCidrBlockRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeletePublicIpAddressPoolCidrBlockRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeletePublicIpAddressPoolCidrBlockRequest::getClientToken() const {
  return clientToken_;
}

void DeletePublicIpAddressPoolCidrBlockRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeletePublicIpAddressPoolCidrBlockRequest::getRegionId() const {
  return regionId_;
}

void DeletePublicIpAddressPoolCidrBlockRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeletePublicIpAddressPoolCidrBlockRequest::getDryRun() const {
  return dryRun_;
}

void DeletePublicIpAddressPoolCidrBlockRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeletePublicIpAddressPoolCidrBlockRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeletePublicIpAddressPoolCidrBlockRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeletePublicIpAddressPoolCidrBlockRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeletePublicIpAddressPoolCidrBlockRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeletePublicIpAddressPoolCidrBlockRequest::getOwnerId() const {
  return ownerId_;
}

void DeletePublicIpAddressPoolCidrBlockRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeletePublicIpAddressPoolCidrBlockRequest::getCidrBlock() const {
  return cidrBlock_;
}

void DeletePublicIpAddressPoolCidrBlockRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}

