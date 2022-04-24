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

#include <alibabacloud/bssopenapi/model/RenewResourcePackageRequest.h>

using AlibabaCloud::BssOpenApi::Model::RenewResourcePackageRequest;

RenewResourcePackageRequest::RenewResourcePackageRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "RenewResourcePackage") {
  setMethod(HttpRequest::Method::Post);
}

RenewResourcePackageRequest::~RenewResourcePackageRequest() {}

long RenewResourcePackageRequest::getOwnerId() const {
  return ownerId_;
}

void RenewResourcePackageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RenewResourcePackageRequest::getEffectiveDate() const {
  return effectiveDate_;
}

void RenewResourcePackageRequest::setEffectiveDate(const std::string &effectiveDate) {
  effectiveDate_ = effectiveDate;
  setParameter(std::string("EffectiveDate"), effectiveDate);
}

int RenewResourcePackageRequest::getDuration() const {
  return duration_;
}

void RenewResourcePackageRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string RenewResourcePackageRequest::getInstanceId() const {
  return instanceId_;
}

void RenewResourcePackageRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string RenewResourcePackageRequest::getPricingCycle() const {
  return pricingCycle_;
}

void RenewResourcePackageRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

