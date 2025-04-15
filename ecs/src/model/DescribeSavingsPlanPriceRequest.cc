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

#include <alibabacloud/ecs/model/DescribeSavingsPlanPriceRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSavingsPlanPriceRequest;

DescribeSavingsPlanPriceRequest::DescribeSavingsPlanPriceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeSavingsPlanPrice") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSavingsPlanPriceRequest::~DescribeSavingsPlanPriceRequest() {}

std::string DescribeSavingsPlanPriceRequest::getInstanceTypeFamilyGroup() const {
  return instanceTypeFamilyGroup_;
}

void DescribeSavingsPlanPriceRequest::setInstanceTypeFamilyGroup(const std::string &instanceTypeFamilyGroup) {
  instanceTypeFamilyGroup_ = instanceTypeFamilyGroup;
  setParameter(std::string("InstanceTypeFamilyGroup"), instanceTypeFamilyGroup);
}

std::string DescribeSavingsPlanPriceRequest::getPlanType() const {
  return planType_;
}

void DescribeSavingsPlanPriceRequest::setPlanType(const std::string &planType) {
  planType_ = planType;
  setParameter(std::string("PlanType"), planType);
}

std::string DescribeSavingsPlanPriceRequest::getRegionId() const {
  return regionId_;
}

void DescribeSavingsPlanPriceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSavingsPlanPriceRequest::getCommittedAmount() const {
  return committedAmount_;
}

void DescribeSavingsPlanPriceRequest::setCommittedAmount(const std::string &committedAmount) {
  committedAmount_ = committedAmount;
  setParameter(std::string("CommittedAmount"), committedAmount);
}

int DescribeSavingsPlanPriceRequest::getPeriod() const {
  return period_;
}

void DescribeSavingsPlanPriceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::vector<std::string> DescribeSavingsPlanPriceRequest::getResourceId() const {
  return resourceId_;
}

void DescribeSavingsPlanPriceRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string DescribeSavingsPlanPriceRequest::getInstanceTypeFamily() const {
  return instanceTypeFamily_;
}

void DescribeSavingsPlanPriceRequest::setInstanceTypeFamily(const std::string &instanceTypeFamily) {
  instanceTypeFamily_ = instanceTypeFamily;
  setParameter(std::string("InstanceTypeFamily"), instanceTypeFamily);
}

std::string DescribeSavingsPlanPriceRequest::getPeriodUnit() const {
  return periodUnit_;
}

void DescribeSavingsPlanPriceRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string DescribeSavingsPlanPriceRequest::getOfferingType() const {
  return offeringType_;
}

void DescribeSavingsPlanPriceRequest::setOfferingType(const std::string &offeringType) {
  offeringType_ = offeringType;
  setParameter(std::string("OfferingType"), offeringType);
}

