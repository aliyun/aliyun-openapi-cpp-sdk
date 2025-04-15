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

#include <alibabacloud/ecs/model/CreateElasticityAssuranceRequest.h>

using AlibabaCloud::Ecs::Model::CreateElasticityAssuranceRequest;

CreateElasticityAssuranceRequest::CreateElasticityAssuranceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateElasticityAssurance") {
  setMethod(HttpRequest::Method::Post);
}

CreateElasticityAssuranceRequest::~CreateElasticityAssuranceRequest() {}

long CreateElasticityAssuranceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateElasticityAssuranceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateElasticityAssuranceRequest::getStartTime() const {
  return startTime_;
}

void CreateElasticityAssuranceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string CreateElasticityAssuranceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateElasticityAssuranceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateElasticityAssuranceRequest::getPrivatePoolOptionsMatchCriteria() const {
  return privatePoolOptionsMatchCriteria_;
}

void CreateElasticityAssuranceRequest::setPrivatePoolOptionsMatchCriteria(const std::string &privatePoolOptionsMatchCriteria) {
  privatePoolOptionsMatchCriteria_ = privatePoolOptionsMatchCriteria;
  setParameter(std::string("PrivatePoolOptions.MatchCriteria"), privatePoolOptionsMatchCriteria);
}

std::vector<CreateElasticityAssuranceRequest::Tag> CreateElasticityAssuranceRequest::getTag() const {
  return tag_;
}

void CreateElasticityAssuranceRequest::setTag(const std::vector<CreateElasticityAssuranceRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

int CreateElasticityAssuranceRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void CreateElasticityAssuranceRequest::setAutoRenewPeriod(int autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

int CreateElasticityAssuranceRequest::getPeriod() const {
  return period_;
}

void CreateElasticityAssuranceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string CreateElasticityAssuranceRequest::getAssuranceTimes() const {
  return assuranceTimes_;
}

void CreateElasticityAssuranceRequest::setAssuranceTimes(const std::string &assuranceTimes) {
  assuranceTimes_ = assuranceTimes;
  setParameter(std::string("AssuranceTimes"), assuranceTimes);
}

long CreateElasticityAssuranceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateElasticityAssuranceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int CreateElasticityAssuranceRequest::getInstanceCpuCoreCount() const {
  return instanceCpuCoreCount_;
}

void CreateElasticityAssuranceRequest::setInstanceCpuCoreCount(int instanceCpuCoreCount) {
  instanceCpuCoreCount_ = instanceCpuCoreCount;
  setParameter(std::string("InstanceCpuCoreCount"), std::to_string(instanceCpuCoreCount));
}

std::string CreateElasticityAssuranceRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateElasticityAssuranceRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

bool CreateElasticityAssuranceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateElasticityAssuranceRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::vector<std::string> CreateElasticityAssuranceRequest::getZoneId() const {
  return zoneId_;
}

void CreateElasticityAssuranceRequest::setZoneId(const std::vector<std::string> &zoneId) {
  zoneId_ = zoneId;
}

std::string CreateElasticityAssuranceRequest::getPackageType() const {
  return packageType_;
}

void CreateElasticityAssuranceRequest::setPackageType(const std::string &packageType) {
  packageType_ = packageType;
  setParameter(std::string("PackageType"), packageType);
}

int CreateElasticityAssuranceRequest::getInstanceAmount() const {
  return instanceAmount_;
}

void CreateElasticityAssuranceRequest::setInstanceAmount(int instanceAmount) {
  instanceAmount_ = instanceAmount;
  setParameter(std::string("InstanceAmount"), std::to_string(instanceAmount));
}

std::string CreateElasticityAssuranceRequest::getClientToken() const {
  return clientToken_;
}

void CreateElasticityAssuranceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateElasticityAssuranceRequest::getDescription() const {
  return description_;
}

void CreateElasticityAssuranceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateElasticityAssuranceRequest::getPlatform() const {
  return platform_;
}

void CreateElasticityAssuranceRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

std::string CreateElasticityAssuranceRequest::getRegionId() const {
  return regionId_;
}

void CreateElasticityAssuranceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> CreateElasticityAssuranceRequest::getInstanceType() const {
  return instanceType_;
}

void CreateElasticityAssuranceRequest::setInstanceType(const std::vector<std::string> &instanceType) {
  instanceType_ = instanceType;
}

std::string CreateElasticityAssuranceRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void CreateElasticityAssuranceRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string CreateElasticityAssuranceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateElasticityAssuranceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateElasticityAssuranceRequest::getPrivatePoolOptionsName() const {
  return privatePoolOptionsName_;
}

void CreateElasticityAssuranceRequest::setPrivatePoolOptionsName(const std::string &privatePoolOptionsName) {
  privatePoolOptionsName_ = privatePoolOptionsName;
  setParameter(std::string("PrivatePoolOptions.Name"), privatePoolOptionsName);
}

std::string CreateElasticityAssuranceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateElasticityAssuranceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateElasticityAssuranceRequest::getResourceType() const {
  return resourceType_;
}

void CreateElasticityAssuranceRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::vector<CreateElasticityAssuranceRequest::RecurrenceRules> CreateElasticityAssuranceRequest::getRecurrenceRules() const {
  return recurrenceRules_;
}

void CreateElasticityAssuranceRequest::setRecurrenceRules(const std::vector<CreateElasticityAssuranceRequest::RecurrenceRules> &recurrenceRules) {
  recurrenceRules_ = recurrenceRules;
  for(int dep1 = 0; dep1 != recurrenceRules.size(); dep1++) {
  auto recurrenceRulesObj = recurrenceRules.at(dep1);
  std::string recurrenceRulesObjStr = std::string("RecurrenceRules") + "." + std::to_string(dep1 + 1);
    setParameter(recurrenceRulesObjStr + ".RecurrenceType", recurrenceRulesObj.recurrenceType);
    setParameter(recurrenceRulesObjStr + ".RecurrenceValue", recurrenceRulesObj.recurrenceValue);
    setParameter(recurrenceRulesObjStr + ".StartHour", std::to_string(recurrenceRulesObj.startHour));
    setParameter(recurrenceRulesObjStr + ".EndHour", std::to_string(recurrenceRulesObj.endHour));
  }
}

std::string CreateElasticityAssuranceRequest::getChargeType() const {
  return chargeType_;
}

void CreateElasticityAssuranceRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

