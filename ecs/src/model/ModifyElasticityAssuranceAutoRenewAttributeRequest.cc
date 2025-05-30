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

#include <alibabacloud/ecs/model/ModifyElasticityAssuranceAutoRenewAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyElasticityAssuranceAutoRenewAttributeRequest;

ModifyElasticityAssuranceAutoRenewAttributeRequest::ModifyElasticityAssuranceAutoRenewAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyElasticityAssuranceAutoRenewAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyElasticityAssuranceAutoRenewAttributeRequest::~ModifyElasticityAssuranceAutoRenewAttributeRequest() {}

long ModifyElasticityAssuranceAutoRenewAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyElasticityAssuranceAutoRenewAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyElasticityAssuranceAutoRenewAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyElasticityAssuranceAutoRenewAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyElasticityAssuranceAutoRenewAttributeRequest::getRenewalStatus() const {
  return renewalStatus_;
}

void ModifyElasticityAssuranceAutoRenewAttributeRequest::setRenewalStatus(const std::string &renewalStatus) {
  renewalStatus_ = renewalStatus;
  setParameter(std::string("RenewalStatus"), renewalStatus);
}

std::vector<std::string> ModifyElasticityAssuranceAutoRenewAttributeRequest::getPrivatePoolOptionsId() const {
  return privatePoolOptionsId_;
}

void ModifyElasticityAssuranceAutoRenewAttributeRequest::setPrivatePoolOptionsId(const std::vector<std::string> &privatePoolOptionsId) {
  privatePoolOptionsId_ = privatePoolOptionsId;
}

int ModifyElasticityAssuranceAutoRenewAttributeRequest::getPeriod() const {
  return period_;
}

void ModifyElasticityAssuranceAutoRenewAttributeRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string ModifyElasticityAssuranceAutoRenewAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyElasticityAssuranceAutoRenewAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyElasticityAssuranceAutoRenewAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyElasticityAssuranceAutoRenewAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyElasticityAssuranceAutoRenewAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyElasticityAssuranceAutoRenewAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyElasticityAssuranceAutoRenewAttributeRequest::getPeriodUnit() const {
  return periodUnit_;
}

void ModifyElasticityAssuranceAutoRenewAttributeRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

