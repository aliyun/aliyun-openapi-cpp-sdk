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

#include <alibabacloud/vpc/model/ModifyVSwitchCidrReservationAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVSwitchCidrReservationAttributeRequest;

ModifyVSwitchCidrReservationAttributeRequest::ModifyVSwitchCidrReservationAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyVSwitchCidrReservationAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVSwitchCidrReservationAttributeRequest::~ModifyVSwitchCidrReservationAttributeRequest() {}

long ModifyVSwitchCidrReservationAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyVSwitchCidrReservationAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyVSwitchCidrReservationAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyVSwitchCidrReservationAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyVSwitchCidrReservationAttributeRequest::getVSwitchCidrReservationDescription() const {
  return vSwitchCidrReservationDescription_;
}

void ModifyVSwitchCidrReservationAttributeRequest::setVSwitchCidrReservationDescription(const std::string &vSwitchCidrReservationDescription) {
  vSwitchCidrReservationDescription_ = vSwitchCidrReservationDescription;
  setParameter(std::string("VSwitchCidrReservationDescription"), vSwitchCidrReservationDescription);
}

std::string ModifyVSwitchCidrReservationAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyVSwitchCidrReservationAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyVSwitchCidrReservationAttributeRequest::getVSwitchCidrReservationName() const {
  return vSwitchCidrReservationName_;
}

void ModifyVSwitchCidrReservationAttributeRequest::setVSwitchCidrReservationName(const std::string &vSwitchCidrReservationName) {
  vSwitchCidrReservationName_ = vSwitchCidrReservationName;
  setParameter(std::string("VSwitchCidrReservationName"), vSwitchCidrReservationName);
}

bool ModifyVSwitchCidrReservationAttributeRequest::getDryRun() const {
  return dryRun_;
}

void ModifyVSwitchCidrReservationAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyVSwitchCidrReservationAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyVSwitchCidrReservationAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyVSwitchCidrReservationAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyVSwitchCidrReservationAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyVSwitchCidrReservationAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyVSwitchCidrReservationAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyVSwitchCidrReservationAttributeRequest::getVSwitchCidrReservationId() const {
  return vSwitchCidrReservationId_;
}

void ModifyVSwitchCidrReservationAttributeRequest::setVSwitchCidrReservationId(const std::string &vSwitchCidrReservationId) {
  vSwitchCidrReservationId_ = vSwitchCidrReservationId;
  setParameter(std::string("VSwitchCidrReservationId"), vSwitchCidrReservationId);
}

