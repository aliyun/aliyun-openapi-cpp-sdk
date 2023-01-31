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

#include <alibabacloud/vpc/model/UpdateNatGatewayNatTypeRequest.h>

using AlibabaCloud::Vpc::Model::UpdateNatGatewayNatTypeRequest;

UpdateNatGatewayNatTypeRequest::UpdateNatGatewayNatTypeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UpdateNatGatewayNatType") {
  setMethod(HttpRequest::Method::Post);
}

UpdateNatGatewayNatTypeRequest::~UpdateNatGatewayNatTypeRequest() {}

long UpdateNatGatewayNatTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateNatGatewayNatTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateNatGatewayNatTypeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateNatGatewayNatTypeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateNatGatewayNatTypeRequest::getRegionId() const {
  return regionId_;
}

void UpdateNatGatewayNatTypeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateNatGatewayNatTypeRequest::getNatType() const {
  return natType_;
}

void UpdateNatGatewayNatTypeRequest::setNatType(const std::string &natType) {
  natType_ = natType;
  setParameter(std::string("NatType"), natType);
}

std::string UpdateNatGatewayNatTypeRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void UpdateNatGatewayNatTypeRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

bool UpdateNatGatewayNatTypeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateNatGatewayNatTypeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateNatGatewayNatTypeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateNatGatewayNatTypeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateNatGatewayNatTypeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateNatGatewayNatTypeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateNatGatewayNatTypeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateNatGatewayNatTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateNatGatewayNatTypeRequest::getVSwitchId() const {
  return vSwitchId_;
}

void UpdateNatGatewayNatTypeRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

