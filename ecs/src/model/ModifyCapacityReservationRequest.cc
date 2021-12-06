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

#include <alibabacloud/ecs/model/ModifyCapacityReservationRequest.h>

using AlibabaCloud::Ecs::Model::ModifyCapacityReservationRequest;

ModifyCapacityReservationRequest::ModifyCapacityReservationRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyCapacityReservation") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCapacityReservationRequest::~ModifyCapacityReservationRequest() {}

long ModifyCapacityReservationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyCapacityReservationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyCapacityReservationRequest::getDescription() const {
  return description_;
}

void ModifyCapacityReservationRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyCapacityReservationRequest::getStartTime() const {
  return startTime_;
}

void ModifyCapacityReservationRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string ModifyCapacityReservationRequest::getPlatform() const {
  return platform_;
}

void ModifyCapacityReservationRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

std::string ModifyCapacityReservationRequest::getRegionId() const {
  return regionId_;
}

void ModifyCapacityReservationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyCapacityReservationRequest::getPrivatePoolOptionsId() const {
  return privatePoolOptionsId_;
}

void ModifyCapacityReservationRequest::setPrivatePoolOptionsId(const std::string &privatePoolOptionsId) {
  privatePoolOptionsId_ = privatePoolOptionsId;
  setParameter(std::string("PrivatePoolOptions.Id"), privatePoolOptionsId);
}

std::string ModifyCapacityReservationRequest::getEndTimeType() const {
  return endTimeType_;
}

void ModifyCapacityReservationRequest::setEndTimeType(const std::string &endTimeType) {
  endTimeType_ = endTimeType;
  setParameter(std::string("EndTimeType"), endTimeType);
}

std::string ModifyCapacityReservationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyCapacityReservationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyCapacityReservationRequest::getPrivatePoolOptionsName() const {
  return privatePoolOptionsName_;
}

void ModifyCapacityReservationRequest::setPrivatePoolOptionsName(const std::string &privatePoolOptionsName) {
  privatePoolOptionsName_ = privatePoolOptionsName;
  setParameter(std::string("PrivatePoolOptions.Name"), privatePoolOptionsName);
}

std::string ModifyCapacityReservationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyCapacityReservationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyCapacityReservationRequest::getEndTime() const {
  return endTime_;
}

void ModifyCapacityReservationRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long ModifyCapacityReservationRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyCapacityReservationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyCapacityReservationRequest::getPackageType() const {
  return packageType_;
}

void ModifyCapacityReservationRequest::setPackageType(const std::string &packageType) {
  packageType_ = packageType;
  setParameter(std::string("PackageType"), packageType);
}

int ModifyCapacityReservationRequest::getInstanceAmount() const {
  return instanceAmount_;
}

void ModifyCapacityReservationRequest::setInstanceAmount(int instanceAmount) {
  instanceAmount_ = instanceAmount;
  setParameter(std::string("InstanceAmount"), std::to_string(instanceAmount));
}

