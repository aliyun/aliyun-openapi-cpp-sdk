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

#include <alibabacloud/rds/model/DescribeAvailableZonesRequest.h>

using AlibabaCloud::Rds::Model::DescribeAvailableZonesRequest;

DescribeAvailableZonesRequest::DescribeAvailableZonesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeAvailableZones") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAvailableZonesRequest::~DescribeAvailableZonesRequest() {}

std::string DescribeAvailableZonesRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DescribeAvailableZonesRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long DescribeAvailableZonesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAvailableZonesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAvailableZonesRequest::getEngineVersion() const {
  return engineVersion_;
}

void DescribeAvailableZonesRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string DescribeAvailableZonesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAvailableZonesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAvailableZonesRequest::getRegionId() const {
  return regionId_;
}

void DescribeAvailableZonesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeAvailableZonesRequest::getEngine() const {
  return engine_;
}

void DescribeAvailableZonesRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string DescribeAvailableZonesRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void DescribeAvailableZonesRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string DescribeAvailableZonesRequest::getDispenseMode() const {
  return dispenseMode_;
}

void DescribeAvailableZonesRequest::setDispenseMode(const std::string &dispenseMode) {
  dispenseMode_ = dispenseMode;
  setParameter(std::string("DispenseMode"), dispenseMode);
}

std::string DescribeAvailableZonesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAvailableZonesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

bool DescribeAvailableZonesRequest::getCachedAsync() const {
  return cachedAsync_;
}

void DescribeAvailableZonesRequest::setCachedAsync(bool cachedAsync) {
  cachedAsync_ = cachedAsync;
  setParameter(std::string("CachedAsync"), cachedAsync ? "true" : "false");
}

std::string DescribeAvailableZonesRequest::getCommodityCode() const {
  return commodityCode_;
}

void DescribeAvailableZonesRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

long DescribeAvailableZonesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAvailableZonesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool DescribeAvailableZonesRequest::getEvaluateResource() const {
  return evaluateResource_;
}

void DescribeAvailableZonesRequest::setEvaluateResource(bool evaluateResource) {
  evaluateResource_ = evaluateResource;
  setParameter(std::string("EvaluateResource"), evaluateResource ? "true" : "false");
}

std::string DescribeAvailableZonesRequest::getZoneId() const {
  return zoneId_;
}

void DescribeAvailableZonesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeAvailableZonesRequest::getCategory() const {
  return category_;
}

void DescribeAvailableZonesRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

