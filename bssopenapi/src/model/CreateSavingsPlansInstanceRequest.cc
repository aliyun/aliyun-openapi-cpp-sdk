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

#include <alibabacloud/bssopenapi/model/CreateSavingsPlansInstanceRequest.h>

using AlibabaCloud::BssOpenApi::Model::CreateSavingsPlansInstanceRequest;

CreateSavingsPlansInstanceRequest::CreateSavingsPlansInstanceRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "CreateSavingsPlansInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateSavingsPlansInstanceRequest::~CreateSavingsPlansInstanceRequest() {}

std::string CreateSavingsPlansInstanceRequest::getSpecification() const {
  return specification_;
}

void CreateSavingsPlansInstanceRequest::setSpecification(const std::string &specification) {
  specification_ = specification;
  setParameter(std::string("Specification"), specification);
}

std::string CreateSavingsPlansInstanceRequest::getPoolValue() const {
  return poolValue_;
}

void CreateSavingsPlansInstanceRequest::setPoolValue(const std::string &poolValue) {
  poolValue_ = poolValue;
  setParameter(std::string("PoolValue"), poolValue);
}

std::string CreateSavingsPlansInstanceRequest::getCommodityCode() const {
  return commodityCode_;
}

void CreateSavingsPlansInstanceRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

std::string CreateSavingsPlansInstanceRequest::getType() const {
  return type_;
}

void CreateSavingsPlansInstanceRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateSavingsPlansInstanceRequest::getEffectiveDate() const {
  return effectiveDate_;
}

void CreateSavingsPlansInstanceRequest::setEffectiveDate(const std::string &effectiveDate) {
  effectiveDate_ = effectiveDate;
  setParameter(std::string("EffectiveDate"), effectiveDate);
}

std::string CreateSavingsPlansInstanceRequest::getDuration() const {
  return duration_;
}

void CreateSavingsPlansInstanceRequest::setDuration(const std::string &duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), duration);
}

std::string CreateSavingsPlansInstanceRequest::getSpecType() const {
  return specType_;
}

void CreateSavingsPlansInstanceRequest::setSpecType(const std::string &specType) {
  specType_ = specType;
  setParameter(std::string("SpecType"), specType);
}

std::map<std::string, std::string> CreateSavingsPlansInstanceRequest::getExtendMap() const {
  return extendMap_;
}

void CreateSavingsPlansInstanceRequest::setExtendMap(const std::map<std::string, std::string> &extendMap) {
  extendMap_ = extendMap;
  for(auto const &iter1 : extendMap) {
    setParameter(std::string("ExtendMap") + "." + iter1.first, iter1.second);
  }
}

std::string CreateSavingsPlansInstanceRequest::getPayMode() const {
  return payMode_;
}

void CreateSavingsPlansInstanceRequest::setPayMode(const std::string &payMode) {
  payMode_ = payMode;
  setParameter(std::string("PayMode"), payMode);
}

std::string CreateSavingsPlansInstanceRequest::getRegion() const {
  return region_;
}

void CreateSavingsPlansInstanceRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string CreateSavingsPlansInstanceRequest::getPricingCycle() const {
  return pricingCycle_;
}

void CreateSavingsPlansInstanceRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

