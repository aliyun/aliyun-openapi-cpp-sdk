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

#include <alibabacloud/ecs/model/CreateCapacityReservationRequest.h>

using AlibabaCloud::Ecs::Model::CreateCapacityReservationRequest;

CreateCapacityReservationRequest::CreateCapacityReservationRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateCapacityReservation") {
  setMethod(HttpRequest::Method::Post);
}

CreateCapacityReservationRequest::~CreateCapacityReservationRequest() {}

long CreateCapacityReservationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCapacityReservationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCapacityReservationRequest::getStartTime() const {
  return startTime_;
}

void CreateCapacityReservationRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string CreateCapacityReservationRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateCapacityReservationRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateCapacityReservationRequest::getPrivatePoolOptionsMatchCriteria() const {
  return privatePoolOptionsMatchCriteria_;
}

void CreateCapacityReservationRequest::setPrivatePoolOptionsMatchCriteria(const std::string &privatePoolOptionsMatchCriteria) {
  privatePoolOptionsMatchCriteria_ = privatePoolOptionsMatchCriteria;
  setParameter(std::string("PrivatePoolOptions.MatchCriteria"), privatePoolOptionsMatchCriteria);
}

std::vector<CreateCapacityReservationRequest::Tag> CreateCapacityReservationRequest::getTag() const {
  return tag_;
}

void CreateCapacityReservationRequest::setTag(const std::vector<CreateCapacityReservationRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

int CreateCapacityReservationRequest::getEfficientStatus() const {
  return efficientStatus_;
}

void CreateCapacityReservationRequest::setEfficientStatus(int efficientStatus) {
  efficientStatus_ = efficientStatus;
  setParameter(std::string("EfficientStatus"), std::to_string(efficientStatus));
}

int CreateCapacityReservationRequest::getPeriod() const {
  return period_;
}

void CreateCapacityReservationRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string CreateCapacityReservationRequest::getEndTimeType() const {
  return endTimeType_;
}

void CreateCapacityReservationRequest::setEndTimeType(const std::string &endTimeType) {
  endTimeType_ = endTimeType;
  setParameter(std::string("EndTimeType"), endTimeType);
}

long CreateCapacityReservationRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCapacityReservationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCapacityReservationRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateCapacityReservationRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::vector<std::string> CreateCapacityReservationRequest::getZoneId() const {
  return zoneId_;
}

void CreateCapacityReservationRequest::setZoneId(const std::vector<std::string> &zoneId) {
  zoneId_ = zoneId;
}

std::string CreateCapacityReservationRequest::getPackageType() const {
  return packageType_;
}

void CreateCapacityReservationRequest::setPackageType(const std::string &packageType) {
  packageType_ = packageType;
  setParameter(std::string("PackageType"), packageType);
}

int CreateCapacityReservationRequest::getInstanceAmount() const {
  return instanceAmount_;
}

void CreateCapacityReservationRequest::setInstanceAmount(int instanceAmount) {
  instanceAmount_ = instanceAmount;
  setParameter(std::string("InstanceAmount"), std::to_string(instanceAmount));
}

std::string CreateCapacityReservationRequest::getClientToken() const {
  return clientToken_;
}

void CreateCapacityReservationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateCapacityReservationRequest::getDescription() const {
  return description_;
}

void CreateCapacityReservationRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateCapacityReservationRequest::getPlatform() const {
  return platform_;
}

void CreateCapacityReservationRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

std::string CreateCapacityReservationRequest::getRegionId() const {
  return regionId_;
}

void CreateCapacityReservationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateCapacityReservationRequest::getInstanceType() const {
  return instanceType_;
}

void CreateCapacityReservationRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string CreateCapacityReservationRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void CreateCapacityReservationRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string CreateCapacityReservationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCapacityReservationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateCapacityReservationRequest::getPrivatePoolOptionsName() const {
  return privatePoolOptionsName_;
}

void CreateCapacityReservationRequest::setPrivatePoolOptionsName(const std::string &privatePoolOptionsName) {
  privatePoolOptionsName_ = privatePoolOptionsName;
  setParameter(std::string("PrivatePoolOptions.Name"), privatePoolOptionsName);
}

std::string CreateCapacityReservationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateCapacityReservationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateCapacityReservationRequest::getEndTime() const {
  return endTime_;
}

void CreateCapacityReservationRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string CreateCapacityReservationRequest::getResourceType() const {
  return resourceType_;
}

void CreateCapacityReservationRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string CreateCapacityReservationRequest::getTimeSlot() const {
  return timeSlot_;
}

void CreateCapacityReservationRequest::setTimeSlot(const std::string &timeSlot) {
  timeSlot_ = timeSlot;
  setParameter(std::string("TimeSlot"), timeSlot);
}

std::string CreateCapacityReservationRequest::getChargeType() const {
  return chargeType_;
}

void CreateCapacityReservationRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

