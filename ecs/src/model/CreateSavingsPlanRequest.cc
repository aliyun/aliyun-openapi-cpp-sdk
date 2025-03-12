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

#include <alibabacloud/ecs/model/CreateSavingsPlanRequest.h>

using AlibabaCloud::Ecs::Model::CreateSavingsPlanRequest;

CreateSavingsPlanRequest::CreateSavingsPlanRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateSavingsPlan") {
  setMethod(HttpRequest::Method::Post);
}

CreateSavingsPlanRequest::~CreateSavingsPlanRequest() {}

std::string CreateSavingsPlanRequest::getInstanceTypeFamilyGroup() const {
  return instanceTypeFamilyGroup_;
}

void CreateSavingsPlanRequest::setInstanceTypeFamilyGroup(const std::string &instanceTypeFamilyGroup) {
  instanceTypeFamilyGroup_ = instanceTypeFamilyGroup;
  setParameter(std::string("InstanceTypeFamilyGroup"), instanceTypeFamilyGroup);
}

std::string CreateSavingsPlanRequest::getPlanType() const {
  return planType_;
}

void CreateSavingsPlanRequest::setPlanType(const std::string &planType) {
  planType_ = planType;
  setParameter(std::string("PlanType"), planType);
}

std::string CreateSavingsPlanRequest::getRegionId() const {
  return regionId_;
}

void CreateSavingsPlanRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateSavingsPlanRequest::getCommittedAmount() const {
  return committedAmount_;
}

void CreateSavingsPlanRequest::setCommittedAmount(const std::string &committedAmount) {
  committedAmount_ = committedAmount;
  setParameter(std::string("CommittedAmount"), committedAmount);
}

std::string CreateSavingsPlanRequest::getPeriod() const {
  return period_;
}

void CreateSavingsPlanRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::vector<std::string> CreateSavingsPlanRequest::getResourceId() const {
  return resourceId_;
}

void CreateSavingsPlanRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string CreateSavingsPlanRequest::getInstanceTypeFamily() const {
  return instanceTypeFamily_;
}

void CreateSavingsPlanRequest::setInstanceTypeFamily(const std::string &instanceTypeFamily) {
  instanceTypeFamily_ = instanceTypeFamily;
  setParameter(std::string("InstanceTypeFamily"), instanceTypeFamily);
}

std::string CreateSavingsPlanRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateSavingsPlanRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string CreateSavingsPlanRequest::getOfferingType() const {
  return offeringType_;
}

void CreateSavingsPlanRequest::setOfferingType(const std::string &offeringType) {
  offeringType_ = offeringType;
  setParameter(std::string("OfferingType"), offeringType);
}

std::string CreateSavingsPlanRequest::getChargeType() const {
  return chargeType_;
}

void CreateSavingsPlanRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

