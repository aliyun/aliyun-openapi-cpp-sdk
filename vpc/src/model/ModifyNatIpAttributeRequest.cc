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

#include <alibabacloud/vpc/model/ModifyNatIpAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyNatIpAttributeRequest;

ModifyNatIpAttributeRequest::ModifyNatIpAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyNatIpAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyNatIpAttributeRequest::~ModifyNatIpAttributeRequest() {}

long ModifyNatIpAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyNatIpAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyNatIpAttributeRequest::getNatIpName() const {
  return natIpName_;
}

void ModifyNatIpAttributeRequest::setNatIpName(const std::string &natIpName) {
  natIpName_ = natIpName;
  setParameter(std::string("NatIpName"), natIpName);
}

std::string ModifyNatIpAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyNatIpAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyNatIpAttributeRequest::getNatIpDescription() const {
  return natIpDescription_;
}

void ModifyNatIpAttributeRequest::setNatIpDescription(const std::string &natIpDescription) {
  natIpDescription_ = natIpDescription;
  setParameter(std::string("NatIpDescription"), natIpDescription);
}

std::string ModifyNatIpAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyNatIpAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyNatIpAttributeRequest::getDryRun() const {
  return dryRun_;
}

void ModifyNatIpAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyNatIpAttributeRequest::getNatIpId() const {
  return natIpId_;
}

void ModifyNatIpAttributeRequest::setNatIpId(const std::string &natIpId) {
  natIpId_ = natIpId;
  setParameter(std::string("NatIpId"), natIpId);
}

std::string ModifyNatIpAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyNatIpAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyNatIpAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyNatIpAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyNatIpAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyNatIpAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

