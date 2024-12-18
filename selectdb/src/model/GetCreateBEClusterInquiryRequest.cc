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

#include <alibabacloud/selectdb/model/GetCreateBEClusterInquiryRequest.h>

using AlibabaCloud::Selectdb::Model::GetCreateBEClusterInquiryRequest;

GetCreateBEClusterInquiryRequest::GetCreateBEClusterInquiryRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "GetCreateBEClusterInquiry") {
  setMethod(HttpRequest::Method::Get);
}

GetCreateBEClusterInquiryRequest::~GetCreateBEClusterInquiryRequest() {}

long GetCreateBEClusterInquiryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetCreateBEClusterInquiryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long GetCreateBEClusterInquiryRequest::getCacheSize() const {
  return cacheSize_;
}

void GetCreateBEClusterInquiryRequest::setCacheSize(long cacheSize) {
  cacheSize_ = cacheSize;
  setParameter(std::string("CacheSize"), std::to_string(cacheSize));
}

std::string GetCreateBEClusterInquiryRequest::getRegionId() const {
  return regionId_;
}

void GetCreateBEClusterInquiryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long GetCreateBEClusterInquiryRequest::getPreCacheSize() const {
  return preCacheSize_;
}

void GetCreateBEClusterInquiryRequest::setPreCacheSize(long preCacheSize) {
  preCacheSize_ = preCacheSize;
  setParameter(std::string("PreCacheSize"), std::to_string(preCacheSize));
}

long GetCreateBEClusterInquiryRequest::getComputeSize() const {
  return computeSize_;
}

void GetCreateBEClusterInquiryRequest::setComputeSize(long computeSize) {
  computeSize_ = computeSize;
  setParameter(std::string("ComputeSize"), std::to_string(computeSize));
}

std::string GetCreateBEClusterInquiryRequest::getDbInstanceId() const {
  return dbInstanceId_;
}

void GetCreateBEClusterInquiryRequest::setDbInstanceId(const std::string &dbInstanceId) {
  dbInstanceId_ = dbInstanceId;
  setParameter(std::string("DbInstanceId"), dbInstanceId);
}

long GetCreateBEClusterInquiryRequest::getPreComputeSize() const {
  return preComputeSize_;
}

void GetCreateBEClusterInquiryRequest::setPreComputeSize(long preComputeSize) {
  preComputeSize_ = preComputeSize;
  setParameter(std::string("PreComputeSize"), std::to_string(preComputeSize));
}

long GetCreateBEClusterInquiryRequest::getQuantity() const {
  return quantity_;
}

void GetCreateBEClusterInquiryRequest::setQuantity(long quantity) {
  quantity_ = quantity;
  setParameter(std::string("Quantity"), std::to_string(quantity));
}

std::string GetCreateBEClusterInquiryRequest::getCommodityCode() const {
  return commodityCode_;
}

void GetCreateBEClusterInquiryRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

std::string GetCreateBEClusterInquiryRequest::getChargeType() const {
  return chargeType_;
}

void GetCreateBEClusterInquiryRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string GetCreateBEClusterInquiryRequest::getPricingCycle() const {
  return pricingCycle_;
}

void GetCreateBEClusterInquiryRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

