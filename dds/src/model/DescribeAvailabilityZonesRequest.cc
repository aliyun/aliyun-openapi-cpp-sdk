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

#include <alibabacloud/dds/model/DescribeAvailabilityZonesRequest.h>

using AlibabaCloud::Dds::Model::DescribeAvailabilityZonesRequest;

DescribeAvailabilityZonesRequest::DescribeAvailabilityZonesRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeAvailabilityZones") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAvailabilityZonesRequest::~DescribeAvailabilityZonesRequest() {}

long DescribeAvailabilityZonesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAvailabilityZonesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAvailabilityZonesRequest::getEngineVersion() const {
  return engineVersion_;
}

void DescribeAvailabilityZonesRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string DescribeAvailabilityZonesRequest::getStorageType() const {
  return storageType_;
}

void DescribeAvailabilityZonesRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string DescribeAvailabilityZonesRequest::getReplicationFactor() const {
  return replicationFactor_;
}

void DescribeAvailabilityZonesRequest::setReplicationFactor(const std::string &replicationFactor) {
  replicationFactor_ = replicationFactor;
  setParameter(std::string("ReplicationFactor"), replicationFactor);
}

std::string DescribeAvailabilityZonesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAvailabilityZonesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAvailabilityZonesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeAvailabilityZonesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeAvailabilityZonesRequest::getRegionId() const {
  return regionId_;
}

void DescribeAvailabilityZonesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeAvailabilityZonesRequest::getExcludeZoneId() const {
  return excludeZoneId_;
}

void DescribeAvailabilityZonesRequest::setExcludeZoneId(const std::string &excludeZoneId) {
  excludeZoneId_ = excludeZoneId;
  setParameter(std::string("ExcludeZoneId"), excludeZoneId);
}

std::string DescribeAvailabilityZonesRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeAvailabilityZonesRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeAvailabilityZonesRequest::getExcludeSecondaryZoneId() const {
  return excludeSecondaryZoneId_;
}

void DescribeAvailabilityZonesRequest::setExcludeSecondaryZoneId(const std::string &excludeSecondaryZoneId) {
  excludeSecondaryZoneId_ = excludeSecondaryZoneId;
  setParameter(std::string("ExcludeSecondaryZoneId"), excludeSecondaryZoneId);
}

std::string DescribeAvailabilityZonesRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void DescribeAvailabilityZonesRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string DescribeAvailabilityZonesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAvailabilityZonesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAvailabilityZonesRequest::getLevel() const {
  return level_;
}

void DescribeAvailabilityZonesRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string DescribeAvailabilityZonesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAvailabilityZonesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeAvailabilityZonesRequest::getMongoType() const {
  return mongoType_;
}

void DescribeAvailabilityZonesRequest::setMongoType(const std::string &mongoType) {
  mongoType_ = mongoType;
  setParameter(std::string("MongoType"), mongoType);
}

long DescribeAvailabilityZonesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAvailabilityZonesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeAvailabilityZonesRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void DescribeAvailabilityZonesRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string DescribeAvailabilityZonesRequest::getStorageSupport() const {
  return storageSupport_;
}

void DescribeAvailabilityZonesRequest::setStorageSupport(const std::string &storageSupport) {
  storageSupport_ = storageSupport;
  setParameter(std::string("StorageSupport"), storageSupport);
}

std::string DescribeAvailabilityZonesRequest::getDbType() const {
  return dbType_;
}

void DescribeAvailabilityZonesRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setParameter(std::string("DbType"), dbType);
}

std::string DescribeAvailabilityZonesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DescribeAvailabilityZonesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string DescribeAvailabilityZonesRequest::getZoneId() const {
  return zoneId_;
}

void DescribeAvailabilityZonesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

