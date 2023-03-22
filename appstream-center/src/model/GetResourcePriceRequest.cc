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

#include <alibabacloud/appstream-center/model/GetResourcePriceRequest.h>

using AlibabaCloud::Appstream_center::Model::GetResourcePriceRequest;

GetResourcePriceRequest::GetResourcePriceRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "GetResourcePrice") {
  setMethod(HttpRequest::Method::Post);
}

GetResourcePriceRequest::~GetResourcePriceRequest() {}

std::string GetResourcePriceRequest::getBizRegionId() const {
  return bizRegionId_;
}

void GetResourcePriceRequest::setBizRegionId(const std::string &bizRegionId) {
  bizRegionId_ = bizRegionId;
  setParameter(std::string("BizRegionId"), bizRegionId);
}

long GetResourcePriceRequest::getPeriod() const {
  return period_;
}

void GetResourcePriceRequest::setPeriod(long period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

long GetResourcePriceRequest::getAmount() const {
  return amount_;
}

void GetResourcePriceRequest::setAmount(long amount) {
  amount_ = amount;
  setParameter(std::string("Amount"), std::to_string(amount));
}

std::string GetResourcePriceRequest::getNodeInstanceType() const {
  return nodeInstanceType_;
}

void GetResourcePriceRequest::setNodeInstanceType(const std::string &nodeInstanceType) {
  nodeInstanceType_ = nodeInstanceType;
  setParameter(std::string("NodeInstanceType"), nodeInstanceType);
}

std::string GetResourcePriceRequest::getProductType() const {
  return productType_;
}

void GetResourcePriceRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string GetResourcePriceRequest::getPeriodUnit() const {
  return periodUnit_;
}

void GetResourcePriceRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string GetResourcePriceRequest::getChargeType() const {
  return chargeType_;
}

void GetResourcePriceRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

