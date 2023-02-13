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

#include <alibabacloud/ecs/model/ModifyReservedInstanceAutoRenewAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyReservedInstanceAutoRenewAttributeRequest;

ModifyReservedInstanceAutoRenewAttributeRequest::ModifyReservedInstanceAutoRenewAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyReservedInstanceAutoRenewAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyReservedInstanceAutoRenewAttributeRequest::~ModifyReservedInstanceAutoRenewAttributeRequest() {}

long ModifyReservedInstanceAutoRenewAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyReservedInstanceAutoRenewAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyReservedInstanceAutoRenewAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyReservedInstanceAutoRenewAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyReservedInstanceAutoRenewAttributeRequest::getRenewalStatus() const {
  return renewalStatus_;
}

void ModifyReservedInstanceAutoRenewAttributeRequest::setRenewalStatus(const std::string &renewalStatus) {
  renewalStatus_ = renewalStatus;
  setParameter(std::string("RenewalStatus"), renewalStatus);
}

int ModifyReservedInstanceAutoRenewAttributeRequest::getPeriod() const {
  return period_;
}

void ModifyReservedInstanceAutoRenewAttributeRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string ModifyReservedInstanceAutoRenewAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyReservedInstanceAutoRenewAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyReservedInstanceAutoRenewAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyReservedInstanceAutoRenewAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyReservedInstanceAutoRenewAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyReservedInstanceAutoRenewAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyReservedInstanceAutoRenewAttributeRequest::getPeriodUnit() const {
  return periodUnit_;
}

void ModifyReservedInstanceAutoRenewAttributeRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::vector<std::string> ModifyReservedInstanceAutoRenewAttributeRequest::getReservedInstanceId() const {
  return reservedInstanceId_;
}

void ModifyReservedInstanceAutoRenewAttributeRequest::setReservedInstanceId(const std::vector<std::string> &reservedInstanceId) {
  reservedInstanceId_ = reservedInstanceId;
}

