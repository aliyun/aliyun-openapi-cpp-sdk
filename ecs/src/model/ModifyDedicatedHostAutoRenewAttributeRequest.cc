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

#include <alibabacloud/ecs/model/ModifyDedicatedHostAutoRenewAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyDedicatedHostAutoRenewAttributeRequest;

ModifyDedicatedHostAutoRenewAttributeRequest::ModifyDedicatedHostAutoRenewAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyDedicatedHostAutoRenewAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDedicatedHostAutoRenewAttributeRequest::~ModifyDedicatedHostAutoRenewAttributeRequest() {}

std::string ModifyDedicatedHostAutoRenewAttributeRequest::getDedicatedHostIds() const {
  return dedicatedHostIds_;
}

void ModifyDedicatedHostAutoRenewAttributeRequest::setDedicatedHostIds(const std::string &dedicatedHostIds) {
  dedicatedHostIds_ = dedicatedHostIds;
  setParameter(std::string("DedicatedHostIds"), dedicatedHostIds);
}

long ModifyDedicatedHostAutoRenewAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDedicatedHostAutoRenewAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ModifyDedicatedHostAutoRenewAttributeRequest::getDuration() const {
  return duration_;
}

void ModifyDedicatedHostAutoRenewAttributeRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string ModifyDedicatedHostAutoRenewAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyDedicatedHostAutoRenewAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDedicatedHostAutoRenewAttributeRequest::getRenewalStatus() const {
  return renewalStatus_;
}

void ModifyDedicatedHostAutoRenewAttributeRequest::setRenewalStatus(const std::string &renewalStatus) {
  renewalStatus_ = renewalStatus;
  setParameter(std::string("RenewalStatus"), renewalStatus);
}

std::string ModifyDedicatedHostAutoRenewAttributeRequest::getAutoRenewWithEcs() const {
  return autoRenewWithEcs_;
}

void ModifyDedicatedHostAutoRenewAttributeRequest::setAutoRenewWithEcs(const std::string &autoRenewWithEcs) {
  autoRenewWithEcs_ = autoRenewWithEcs;
  setParameter(std::string("AutoRenewWithEcs"), autoRenewWithEcs);
}

std::string ModifyDedicatedHostAutoRenewAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDedicatedHostAutoRenewAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDedicatedHostAutoRenewAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDedicatedHostAutoRenewAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDedicatedHostAutoRenewAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDedicatedHostAutoRenewAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDedicatedHostAutoRenewAttributeRequest::getPeriodUnit() const {
  return periodUnit_;
}

void ModifyDedicatedHostAutoRenewAttributeRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

bool ModifyDedicatedHostAutoRenewAttributeRequest::getAutoRenew() const {
  return autoRenew_;
}

void ModifyDedicatedHostAutoRenewAttributeRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

