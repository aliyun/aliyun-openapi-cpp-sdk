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

#include <alibabacloud/bssopenapi/model/GetResourcePackagePriceRequest.h>

using AlibabaCloud::BssOpenApi::Model::GetResourcePackagePriceRequest;

GetResourcePackagePriceRequest::GetResourcePackagePriceRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "GetResourcePackagePrice") {
  setMethod(HttpRequest::Method::Post);
}

GetResourcePackagePriceRequest::~GetResourcePackagePriceRequest() {}

std::string GetResourcePackagePriceRequest::getProductCode() const {
  return productCode_;
}

void GetResourcePackagePriceRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string GetResourcePackagePriceRequest::getSpecification() const {
  return specification_;
}

void GetResourcePackagePriceRequest::setSpecification(const std::string &specification) {
  specification_ = specification;
  setParameter(std::string("Specification"), specification);
}

long GetResourcePackagePriceRequest::getOwnerId() const {
  return ownerId_;
}

void GetResourcePackagePriceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetResourcePackagePriceRequest::getEffectiveDate() const {
  return effectiveDate_;
}

void GetResourcePackagePriceRequest::setEffectiveDate(const std::string &effectiveDate) {
  effectiveDate_ = effectiveDate;
  setParameter(std::string("EffectiveDate"), effectiveDate);
}

int GetResourcePackagePriceRequest::getDuration() const {
  return duration_;
}

void GetResourcePackagePriceRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string GetResourcePackagePriceRequest::getInstanceId() const {
  return instanceId_;
}

void GetResourcePackagePriceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetResourcePackagePriceRequest::getPackageType() const {
  return packageType_;
}

void GetResourcePackagePriceRequest::setPackageType(const std::string &packageType) {
  packageType_ = packageType;
  setParameter(std::string("PackageType"), packageType);
}

std::string GetResourcePackagePriceRequest::getPricingCycle() const {
  return pricingCycle_;
}

void GetResourcePackagePriceRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

std::string GetResourcePackagePriceRequest::getOrderType() const {
  return orderType_;
}

void GetResourcePackagePriceRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

