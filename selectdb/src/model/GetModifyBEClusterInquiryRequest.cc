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

#include <alibabacloud/selectdb/model/GetModifyBEClusterInquiryRequest.h>

using AlibabaCloud::Selectdb::Model::GetModifyBEClusterInquiryRequest;

GetModifyBEClusterInquiryRequest::GetModifyBEClusterInquiryRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "GetModifyBEClusterInquiry") {
  setMethod(HttpRequest::Method::Get);
}

GetModifyBEClusterInquiryRequest::~GetModifyBEClusterInquiryRequest() {}

long GetModifyBEClusterInquiryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetModifyBEClusterInquiryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long GetModifyBEClusterInquiryRequest::getCacheSize() const {
  return cacheSize_;
}

void GetModifyBEClusterInquiryRequest::setCacheSize(long cacheSize) {
  cacheSize_ = cacheSize;
  setParameter(std::string("CacheSize"), std::to_string(cacheSize));
}

std::string GetModifyBEClusterInquiryRequest::getRegionId() const {
  return regionId_;
}

void GetModifyBEClusterInquiryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long GetModifyBEClusterInquiryRequest::getPreCacheSize() const {
  return preCacheSize_;
}

void GetModifyBEClusterInquiryRequest::setPreCacheSize(long preCacheSize) {
  preCacheSize_ = preCacheSize;
  setParameter(std::string("PreCacheSize"), std::to_string(preCacheSize));
}

long GetModifyBEClusterInquiryRequest::getComputeSize() const {
  return computeSize_;
}

void GetModifyBEClusterInquiryRequest::setComputeSize(long computeSize) {
  computeSize_ = computeSize;
  setParameter(std::string("ComputeSize"), std::to_string(computeSize));
}

std::string GetModifyBEClusterInquiryRequest::getDbInstanceId() const {
  return dbInstanceId_;
}

void GetModifyBEClusterInquiryRequest::setDbInstanceId(const std::string &dbInstanceId) {
  dbInstanceId_ = dbInstanceId;
  setParameter(std::string("DbInstanceId"), dbInstanceId);
}

long GetModifyBEClusterInquiryRequest::getPreComputeSize() const {
  return preComputeSize_;
}

void GetModifyBEClusterInquiryRequest::setPreComputeSize(long preComputeSize) {
  preComputeSize_ = preComputeSize;
  setParameter(std::string("PreComputeSize"), std::to_string(preComputeSize));
}

long GetModifyBEClusterInquiryRequest::getQuantity() const {
  return quantity_;
}

void GetModifyBEClusterInquiryRequest::setQuantity(long quantity) {
  quantity_ = quantity;
  setParameter(std::string("Quantity"), std::to_string(quantity));
}

std::string GetModifyBEClusterInquiryRequest::getClusterId() const {
  return clusterId_;
}

void GetModifyBEClusterInquiryRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetModifyBEClusterInquiryRequest::getCommodityCode() const {
  return commodityCode_;
}

void GetModifyBEClusterInquiryRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

std::string GetModifyBEClusterInquiryRequest::getChargeType() const {
  return chargeType_;
}

void GetModifyBEClusterInquiryRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string GetModifyBEClusterInquiryRequest::getPricingCycle() const {
  return pricingCycle_;
}

void GetModifyBEClusterInquiryRequest::setPricingCycle(const std::string &pricingCycle) {
  pricingCycle_ = pricingCycle;
  setParameter(std::string("PricingCycle"), pricingCycle);
}

