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

#include <alibabacloud/ecs/model/ModifyInstanceAutoRenewAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceAutoRenewAttributeRequest;

ModifyInstanceAutoRenewAttributeRequest::ModifyInstanceAutoRenewAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceAutoRenewAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceAutoRenewAttributeRequest::~ModifyInstanceAutoRenewAttributeRequest() {}

long ModifyInstanceAutoRenewAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceAutoRenewAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ModifyInstanceAutoRenewAttributeRequest::getDuration() const {
  return duration_;
}

void ModifyInstanceAutoRenewAttributeRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string ModifyInstanceAutoRenewAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyInstanceAutoRenewAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyInstanceAutoRenewAttributeRequest::getRenewalStatus() const {
  return renewalStatus_;
}

void ModifyInstanceAutoRenewAttributeRequest::setRenewalStatus(const std::string &renewalStatus) {
  renewalStatus_ = renewalStatus;
  setParameter(std::string("RenewalStatus"), renewalStatus);
}

std::string ModifyInstanceAutoRenewAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceAutoRenewAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceAutoRenewAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceAutoRenewAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstanceAutoRenewAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceAutoRenewAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceAutoRenewAttributeRequest::getPeriodUnit() const {
  return periodUnit_;
}

void ModifyInstanceAutoRenewAttributeRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string ModifyInstanceAutoRenewAttributeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceAutoRenewAttributeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool ModifyInstanceAutoRenewAttributeRequest::getAutoRenew() const {
  return autoRenew_;
}

void ModifyInstanceAutoRenewAttributeRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

