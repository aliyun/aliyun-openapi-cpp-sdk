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

#include <alibabacloud/r-kvstore/model/DescribePriceRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribePriceRequest;

DescribePriceRequest::DescribePriceRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribePrice") {
  setMethod(HttpRequest::Method::Post);
}

DescribePriceRequest::~DescribePriceRequest() {}

long DescribePriceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePriceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePriceRequest::getNodeType() const {
  return nodeType_;
}

void DescribePriceRequest::setNodeType(const std::string &nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("NodeType"), nodeType);
}

std::string DescribePriceRequest::getInstances() const {
  return instances_;
}

void DescribePriceRequest::setInstances(const std::string &instances) {
  instances_ = instances;
  setParameter(std::string("Instances"), instances);
}

std::string DescribePriceRequest::getCouponNo() const {
  return couponNo_;
}

void DescribePriceRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

std::string DescribePriceRequest::getEngineVersion() const {
  return engineVersion_;
}

void DescribePriceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string DescribePriceRequest::getInstanceClass() const {
  return instanceClass_;
}

void DescribePriceRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

std::string DescribePriceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribePriceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long DescribePriceRequest::getCapacity() const {
  return capacity_;
}

void DescribePriceRequest::setCapacity(long capacity) {
  capacity_ = capacity;
  setParameter(std::string("Capacity"), std::to_string(capacity));
}

std::string DescribePriceRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribePriceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribePriceRequest::getRegionId() const {
  return regionId_;
}

void DescribePriceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribePriceRequest::getBusinessInfo() const {
  return businessInfo_;
}

void DescribePriceRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

int DescribePriceRequest::getShardCount() const {
  return shardCount_;
}

void DescribePriceRequest::setShardCount(int shardCount) {
  shardCount_ = shardCount;
  setParameter(std::string("ShardCount"), std::to_string(shardCount));
}

long DescribePriceRequest::getPeriod() const {
  return period_;
}

void DescribePriceRequest::setPeriod(long period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string DescribePriceRequest::getProduct() const {
  return product_;
}

void DescribePriceRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

long DescribePriceRequest::getQuantity() const {
  return quantity_;
}

void DescribePriceRequest::setQuantity(long quantity) {
  quantity_ = quantity;
  setParameter(std::string("Quantity"), std::to_string(quantity));
}

std::string DescribePriceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePriceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePriceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribePriceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribePriceRequest::getOrderParamOut() const {
  return orderParamOut_;
}

void DescribePriceRequest::setOrderParamOut(const std::string &orderParamOut) {
  orderParamOut_ = orderParamOut;
  setParameter(std::string("OrderParamOut"), orderParamOut);
}

long DescribePriceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePriceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribePriceRequest::getInstanceId() const {
  return instanceId_;
}

void DescribePriceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribePriceRequest::getZoneId() const {
  return zoneId_;
}

void DescribePriceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribePriceRequest::getChargeType() const {
  return chargeType_;
}

void DescribePriceRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string DescribePriceRequest::getCategory() const {
  return category_;
}

void DescribePriceRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

bool DescribePriceRequest::getForceUpgrade() const {
  return forceUpgrade_;
}

void DescribePriceRequest::setForceUpgrade(bool forceUpgrade) {
  forceUpgrade_ = forceUpgrade;
  setParameter(std::string("ForceUpgrade"), forceUpgrade ? "true" : "false");
}

std::string DescribePriceRequest::getOrderType() const {
  return orderType_;
}

void DescribePriceRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

