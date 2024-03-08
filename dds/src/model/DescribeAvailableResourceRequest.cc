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

#include <alibabacloud/dds/model/DescribeAvailableResourceRequest.h>

using AlibabaCloud::Dds::Model::DescribeAvailableResourceRequest;

DescribeAvailableResourceRequest::DescribeAvailableResourceRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeAvailableResource") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAvailableResourceRequest::~DescribeAvailableResourceRequest() {}

long DescribeAvailableResourceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAvailableResourceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAvailableResourceRequest::getEngineVersion() const {
  return engineVersion_;
}

void DescribeAvailableResourceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string DescribeAvailableResourceRequest::getStorageType() const {
  return storageType_;
}

void DescribeAvailableResourceRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string DescribeAvailableResourceRequest::getReplicationFactor() const {
  return replicationFactor_;
}

void DescribeAvailableResourceRequest::setReplicationFactor(const std::string &replicationFactor) {
  replicationFactor_ = replicationFactor;
  setParameter(std::string("ReplicationFactor"), replicationFactor);
}

std::string DescribeAvailableResourceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAvailableResourceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAvailableResourceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeAvailableResourceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeAvailableResourceRequest::getRegionId() const {
  return regionId_;
}

void DescribeAvailableResourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeAvailableResourceRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void DescribeAvailableResourceRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string DescribeAvailableResourceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAvailableResourceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAvailableResourceRequest::getLevel() const {
  return level_;
}

void DescribeAvailableResourceRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string DescribeAvailableResourceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAvailableResourceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeAvailableResourceRequest::getMongoType() const {
  return mongoType_;
}

void DescribeAvailableResourceRequest::setMongoType(const std::string &mongoType) {
  mongoType_ = mongoType;
  setParameter(std::string("MongoType"), mongoType);
}

long DescribeAvailableResourceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAvailableResourceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeAvailableResourceRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void DescribeAvailableResourceRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string DescribeAvailableResourceRequest::getStorageSupport() const {
  return storageSupport_;
}

void DescribeAvailableResourceRequest::setStorageSupport(const std::string &storageSupport) {
  storageSupport_ = storageSupport;
  setParameter(std::string("StorageSupport"), storageSupport);
}

std::string DescribeAvailableResourceRequest::getDbType() const {
  return dbType_;
}

void DescribeAvailableResourceRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setParameter(std::string("DbType"), dbType);
}

std::string DescribeAvailableResourceRequest::getZoneId() const {
  return zoneId_;
}

void DescribeAvailableResourceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

