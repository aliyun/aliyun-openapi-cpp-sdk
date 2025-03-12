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

#include <alibabacloud/ecs/model/ModifyElasticityAssuranceRequest.h>

using AlibabaCloud::Ecs::Model::ModifyElasticityAssuranceRequest;

ModifyElasticityAssuranceRequest::ModifyElasticityAssuranceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyElasticityAssurance") {
  setMethod(HttpRequest::Method::Post);
}

ModifyElasticityAssuranceRequest::~ModifyElasticityAssuranceRequest() {}

long ModifyElasticityAssuranceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyElasticityAssuranceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyElasticityAssuranceRequest::getClientToken() const {
  return clientToken_;
}

void ModifyElasticityAssuranceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyElasticityAssuranceRequest::getDescription() const {
  return description_;
}

void ModifyElasticityAssuranceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyElasticityAssuranceRequest::getRegionId() const {
  return regionId_;
}

void ModifyElasticityAssuranceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyElasticityAssuranceRequest::getPrivatePoolOptionsId() const {
  return privatePoolOptionsId_;
}

void ModifyElasticityAssuranceRequest::setPrivatePoolOptionsId(const std::string &privatePoolOptionsId) {
  privatePoolOptionsId_ = privatePoolOptionsId;
  setParameter(std::string("PrivatePoolOptions.Id"), privatePoolOptionsId);
}

std::string ModifyElasticityAssuranceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyElasticityAssuranceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyElasticityAssuranceRequest::getPrivatePoolOptionsName() const {
  return privatePoolOptionsName_;
}

void ModifyElasticityAssuranceRequest::setPrivatePoolOptionsName(const std::string &privatePoolOptionsName) {
  privatePoolOptionsName_ = privatePoolOptionsName;
  setParameter(std::string("PrivatePoolOptions.Name"), privatePoolOptionsName);
}

std::string ModifyElasticityAssuranceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyElasticityAssuranceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyElasticityAssuranceRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyElasticityAssuranceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<ModifyElasticityAssuranceRequest::RecurrenceRules> ModifyElasticityAssuranceRequest::getRecurrenceRules() const {
  return recurrenceRules_;
}

void ModifyElasticityAssuranceRequest::setRecurrenceRules(const std::vector<ModifyElasticityAssuranceRequest::RecurrenceRules> &recurrenceRules) {
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

std::string ModifyElasticityAssuranceRequest::getPackageType() const {
  return packageType_;
}

void ModifyElasticityAssuranceRequest::setPackageType(const std::string &packageType) {
  packageType_ = packageType;
  setParameter(std::string("PackageType"), packageType);
}

int ModifyElasticityAssuranceRequest::getInstanceAmount() const {
  return instanceAmount_;
}

void ModifyElasticityAssuranceRequest::setInstanceAmount(int instanceAmount) {
  instanceAmount_ = instanceAmount;
  setParameter(std::string("InstanceAmount"), std::to_string(instanceAmount));
}

