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

#include <alibabacloud/ecs/model/RenewElasticityAssurancesRequest.h>

using AlibabaCloud::Ecs::Model::RenewElasticityAssurancesRequest;

RenewElasticityAssurancesRequest::RenewElasticityAssurancesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "RenewElasticityAssurances") {
  setMethod(HttpRequest::Method::Post);
}

RenewElasticityAssurancesRequest::~RenewElasticityAssurancesRequest() {}

long RenewElasticityAssurancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RenewElasticityAssurancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RenewElasticityAssurancesRequest::getClientToken() const {
  return clientToken_;
}

void RenewElasticityAssurancesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RenewElasticityAssurancesRequest::getRegionId() const {
  return regionId_;
}

void RenewElasticityAssurancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> RenewElasticityAssurancesRequest::getPrivatePoolOptionsId() const {
  return privatePoolOptionsId_;
}

void RenewElasticityAssurancesRequest::setPrivatePoolOptionsId(const std::vector<std::string> &privatePoolOptionsId) {
  privatePoolOptionsId_ = privatePoolOptionsId;
}

int RenewElasticityAssurancesRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void RenewElasticityAssurancesRequest::setAutoRenewPeriod(int autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

int RenewElasticityAssurancesRequest::getPeriod() const {
  return period_;
}

void RenewElasticityAssurancesRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool RenewElasticityAssurancesRequest::getAutoPay() const {
  return autoPay_;
}

void RenewElasticityAssurancesRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string RenewElasticityAssurancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RenewElasticityAssurancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RenewElasticityAssurancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RenewElasticityAssurancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RenewElasticityAssurancesRequest::getOwnerId() const {
  return ownerId_;
}

void RenewElasticityAssurancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RenewElasticityAssurancesRequest::getPeriodUnit() const {
  return periodUnit_;
}

void RenewElasticityAssurancesRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

bool RenewElasticityAssurancesRequest::getAutoRenew() const {
  return autoRenew_;
}

void RenewElasticityAssurancesRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

