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

#include <alibabacloud/ecs/model/ReleaseCapacityReservationRequest.h>

using AlibabaCloud::Ecs::Model::ReleaseCapacityReservationRequest;

ReleaseCapacityReservationRequest::ReleaseCapacityReservationRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ReleaseCapacityReservation") {
  setMethod(HttpRequest::Method::Post);
}

ReleaseCapacityReservationRequest::~ReleaseCapacityReservationRequest() {}

long ReleaseCapacityReservationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ReleaseCapacityReservationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ReleaseCapacityReservationRequest::getRegionId() const {
  return regionId_;
}

void ReleaseCapacityReservationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ReleaseCapacityReservationRequest::getPrivatePoolOptionsId() const {
  return privatePoolOptionsId_;
}

void ReleaseCapacityReservationRequest::setPrivatePoolOptionsId(const std::string &privatePoolOptionsId) {
  privatePoolOptionsId_ = privatePoolOptionsId;
  setParameter(std::string("PrivatePoolOptions.Id"), privatePoolOptionsId);
}

bool ReleaseCapacityReservationRequest::getDryRun() const {
  return dryRun_;
}

void ReleaseCapacityReservationRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ReleaseCapacityReservationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ReleaseCapacityReservationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ReleaseCapacityReservationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ReleaseCapacityReservationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ReleaseCapacityReservationRequest::getOwnerId() const {
  return ownerId_;
}

void ReleaseCapacityReservationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

