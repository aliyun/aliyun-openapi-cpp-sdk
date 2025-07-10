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

#include <alibabacloud/vpc/model/DeleteVSwitchCidrReservationRequest.h>

using AlibabaCloud::Vpc::Model::DeleteVSwitchCidrReservationRequest;

DeleteVSwitchCidrReservationRequest::DeleteVSwitchCidrReservationRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteVSwitchCidrReservation") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVSwitchCidrReservationRequest::~DeleteVSwitchCidrReservationRequest() {}

long DeleteVSwitchCidrReservationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteVSwitchCidrReservationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteVSwitchCidrReservationRequest::getClientToken() const {
  return clientToken_;
}

void DeleteVSwitchCidrReservationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteVSwitchCidrReservationRequest::getRegionId() const {
  return regionId_;
}

void DeleteVSwitchCidrReservationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteVSwitchCidrReservationRequest::getDryRun() const {
  return dryRun_;
}

void DeleteVSwitchCidrReservationRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteVSwitchCidrReservationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteVSwitchCidrReservationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteVSwitchCidrReservationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteVSwitchCidrReservationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteVSwitchCidrReservationRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteVSwitchCidrReservationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteVSwitchCidrReservationRequest::getVSwitchCidrReservationId() const {
  return vSwitchCidrReservationId_;
}

void DeleteVSwitchCidrReservationRequest::setVSwitchCidrReservationId(const std::string &vSwitchCidrReservationId) {
  vSwitchCidrReservationId_ = vSwitchCidrReservationId;
  setParameter(std::string("VSwitchCidrReservationId"), vSwitchCidrReservationId);
}

