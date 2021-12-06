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

#include <alibabacloud/ecs/model/DeleteNatGatewayRequest.h>

using AlibabaCloud::Ecs::Model::DeleteNatGatewayRequest;

DeleteNatGatewayRequest::DeleteNatGatewayRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteNatGateway") {
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

