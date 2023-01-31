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

#include <alibabacloud/vpc/model/DeleteNatGatewayRequest.h>

using AlibabaCloud::Vpc::Model::DeleteNatGatewayRequest;

DeleteNatGatewayRequest::DeleteNatGatewayRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteNatGateway") {
  setMethod(HttpRequest::Method::Post);
}

DeleteNatGatewayRequest::~DeleteNatGatewayRequest() {}

long DeleteNatGatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteNatGatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteNatGatewayRequest::getRegionId() const {
  return regionId_;
}

void DeleteNatGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteNatGatewayRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void DeleteNatGatewayRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

std::string DeleteNatGatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteNatGatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteNatGatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteNatGatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteNatGatewayRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteNatGatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool DeleteNatGatewayRequest::getForce() const {
  return force_;
}

void DeleteNatGatewayRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

