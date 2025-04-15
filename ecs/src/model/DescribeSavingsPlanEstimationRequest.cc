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

#include <alibabacloud/ecs/model/DescribeSavingsPlanEstimationRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSavingsPlanEstimationRequest;

DescribeSavingsPlanEstimationRequest::DescribeSavingsPlanEstimationRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeSavingsPlanEstimation") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSavingsPlanEstimationRequest::~DescribeSavingsPlanEstimationRequest() {}

std::string DescribeSavingsPlanEstimationRequest::getPlanType() const {
  return planType_;
}

void DescribeSavingsPlanEstimationRequest::setPlanType(const std::string &planType) {
  planType_ = planType;
  setParameter(std::string("PlanType"), planType);
}

std::string DescribeSavingsPlanEstimationRequest::getRegionId() const {
  return regionId_;
}

void DescribeSavingsPlanEstimationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSavingsPlanEstimationRequest::getEstimationResource() const {
  return estimationResource_;
}

void DescribeSavingsPlanEstimationRequest::setEstimationResource(const std::string &estimationResource) {
  estimationResource_ = estimationResource;
  setParameter(std::string("EstimationResource"), estimationResource);
}

std::string DescribeSavingsPlanEstimationRequest::getResourceId() const {
  return resourceId_;
}

void DescribeSavingsPlanEstimationRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string DescribeSavingsPlanEstimationRequest::getPeriod() const {
  return period_;
}

void DescribeSavingsPlanEstimationRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string DescribeSavingsPlanEstimationRequest::getInstanceTypeScope() const {
  return instanceTypeScope_;
}

void DescribeSavingsPlanEstimationRequest::setInstanceTypeScope(const std::string &instanceTypeScope) {
  instanceTypeScope_ = instanceTypeScope;
  setParameter(std::string("InstanceTypeScope"), instanceTypeScope);
}

std::string DescribeSavingsPlanEstimationRequest::getPeriodUnit() const {
  return periodUnit_;
}

void DescribeSavingsPlanEstimationRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string DescribeSavingsPlanEstimationRequest::getOfferingType() const {
  return offeringType_;
}

void DescribeSavingsPlanEstimationRequest::setOfferingType(const std::string &offeringType) {
  offeringType_ = offeringType;
  setParameter(std::string("OfferingType"), offeringType);
}

