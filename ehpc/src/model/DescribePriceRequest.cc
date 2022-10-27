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

#include <alibabacloud/ehpc/model/DescribePriceRequest.h>

using AlibabaCloud::EHPC::Model::DescribePriceRequest;

DescribePriceRequest::DescribePriceRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "DescribePrice") {
  setMethod(HttpRequest::Method::Get);
}

DescribePriceRequest::~DescribePriceRequest() {}

std::vector<DescribePriceRequest::Commodities> DescribePriceRequest::getCommodities() const {
  return commodities_;
}

void DescribePriceRequest::setCommodities(const std::vector<DescribePriceRequest::Commodities> &commodities) {
  commodities_ = commodities;
  for(int dep1 = 0; dep1 != commodities.size(); dep1++) {
  auto commoditiesObj = commodities.at(dep1);
  std::string commoditiesObjStr = std::string("Commodities") + "." + std::to_string(dep1 + 1);
    setParameter(commoditiesObjStr + ".Amount", std::to_string(commoditiesObj.amount));
    setParameter(commoditiesObjStr + ".Period", std::to_string(commoditiesObj.period));
    setParameter(commoditiesObjStr + ".NodeType", commoditiesObj.nodeType);
    for(int dep2 = 0; dep2 != commoditiesObj.dataDisks.size(); dep2++) {
    auto dataDisksObj = commoditiesObj.dataDisks.at(dep2);
    std::string dataDisksObjStr = commoditiesObjStr + ".DataDisks" + "." + std::to_string(dep2 + 1);
      setParameter(dataDisksObjStr + ".size", std::to_string(dataDisksObj.size));
      setParameter(dataDisksObjStr + ".encrypted", dataDisksObj.encrypted ? "true" : "false");
      setParameter(dataDisksObjStr + ".performanceLevel", dataDisksObj.performanceLevel);
      setParameter(dataDisksObjStr + ".category", dataDisksObj.category);
      setParameter(dataDisksObjStr + ".deleteWithInstance", dataDisksObj.deleteWithInstance ? "true" : "false");
    }
    setParameter(commoditiesObjStr + ".SystemDiskCategory", commoditiesObj.systemDiskCategory);
    setParameter(commoditiesObjStr + ".InternetChargeType", commoditiesObj.internetChargeType);
    setParameter(commoditiesObjStr + ".SystemDiskPerformanceLevel", commoditiesObj.systemDiskPerformanceLevel);
    setParameter(commoditiesObjStr + ".SystemDiskSize", std::to_string(commoditiesObj.systemDiskSize));
    setParameter(commoditiesObjStr + ".InternetMaxBandWidthOut", std::to_string(commoditiesObj.internetMaxBandWidthOut));
    setParameter(commoditiesObjStr + ".InstanceType", commoditiesObj.instanceType);
    setParameter(commoditiesObjStr + ".NetworkType", commoditiesObj.networkType);
  }
}

std::string DescribePriceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribePriceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribePriceRequest::getPriceUnit() const {
  return priceUnit_;
}

void DescribePriceRequest::setPriceUnit(const std::string &priceUnit) {
  priceUnit_ = priceUnit;
  setParameter(std::string("PriceUnit"), priceUnit);
}

std::string DescribePriceRequest::getChargeType() const {
  return chargeType_;
}

void DescribePriceRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string DescribePriceRequest::getOrderType() const {
  return orderType_;
}

void DescribePriceRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

