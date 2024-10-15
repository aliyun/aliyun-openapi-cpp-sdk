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

#include <alibabacloud/ecs/model/PurchaseElasticityAssuranceRequest.h>

using AlibabaCloud::Ecs::Model::PurchaseElasticityAssuranceRequest;

PurchaseElasticityAssuranceRequest::PurchaseElasticityAssuranceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "PurchaseElasticityAssurance") {
  setMethod(HttpRequest::Method::Post);
}

PurchaseElasticityAssuranceRequest::~PurchaseElasticityAssuranceRequest() {}

long PurchaseElasticityAssuranceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void PurchaseElasticityAssuranceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string PurchaseElasticityAssuranceRequest::getClientToken() const {
  return clientToken_;
}

void PurchaseElasticityAssuranceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string PurchaseElasticityAssuranceRequest::getStartTime() const {
  return startTime_;
}

void PurchaseElasticityAssuranceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string PurchaseElasticityAssuranceRequest::getPrivatePoolOptionsMatchCriteria() const {
  return privatePoolOptionsMatchCriteria_;
}

void PurchaseElasticityAssuranceRequest::setPrivatePoolOptionsMatchCriteria(const std::string &privatePoolOptionsMatchCriteria) {
  privatePoolOptionsMatchCriteria_ = privatePoolOptionsMatchCriteria;
  setParameter(std::string("PrivatePoolOptions.MatchCriteria"), privatePoolOptionsMatchCriteria);
}

std::string PurchaseElasticityAssuranceRequest::getRegionId() const {
  return regionId_;
}

void PurchaseElasticityAssuranceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string PurchaseElasticityAssuranceRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void PurchaseElasticityAssuranceRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string PurchaseElasticityAssuranceRequest::getPrivatePoolOptionsId() const {
  return privatePoolOptionsId_;
}

void PurchaseElasticityAssuranceRequest::setPrivatePoolOptionsId(const std::string &privatePoolOptionsId) {
  privatePoolOptionsId_ = privatePoolOptionsId;
  setParameter(std::string("PrivatePoolOptions.Id"), privatePoolOptionsId);
}

int PurchaseElasticityAssuranceRequest::getPeriod() const {
  return period_;
}

void PurchaseElasticityAssuranceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string PurchaseElasticityAssuranceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void PurchaseElasticityAssuranceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string PurchaseElasticityAssuranceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void PurchaseElasticityAssuranceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long PurchaseElasticityAssuranceRequest::getOwnerId() const {
  return ownerId_;
}

void PurchaseElasticityAssuranceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string PurchaseElasticityAssuranceRequest::getResourceType() const {
  return resourceType_;
}

void PurchaseElasticityAssuranceRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string PurchaseElasticityAssuranceRequest::getPeriodUnit() const {
  return periodUnit_;
}

void PurchaseElasticityAssuranceRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string PurchaseElasticityAssuranceRequest::getPackageType() const {
  return packageType_;
}

void PurchaseElasticityAssuranceRequest::setPackageType(const std::string &packageType) {
  packageType_ = packageType;
  setParameter(std::string("PackageType"), packageType);
}

