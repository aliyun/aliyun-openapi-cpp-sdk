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

#include <alibabacloud/gpdb/model/UpgradeDBInstanceRequest.h>

using AlibabaCloud::Gpdb::Model::UpgradeDBInstanceRequest;

UpgradeDBInstanceRequest::UpgradeDBInstanceRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "UpgradeDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeDBInstanceRequest::~UpgradeDBInstanceRequest() {}

std::string UpgradeDBInstanceRequest::getInstanceSpec() const {
  return instanceSpec_;
}

void UpgradeDBInstanceRequest::setInstanceSpec(const std::string &instanceSpec) {
  instanceSpec_ = instanceSpec;
  setParameter(std::string("InstanceSpec"), instanceSpec);
}

std::string UpgradeDBInstanceRequest::getStorageSize() const {
  return storageSize_;
}

void UpgradeDBInstanceRequest::setStorageSize(const std::string &storageSize) {
  storageSize_ = storageSize;
  setParameter(std::string("StorageSize"), storageSize);
}

std::string UpgradeDBInstanceRequest::getSegStorageType() const {
  return segStorageType_;
}

void UpgradeDBInstanceRequest::setSegStorageType(const std::string &segStorageType) {
  segStorageType_ = segStorageType;
  setParameter(std::string("SegStorageType"), segStorageType);
}

std::string UpgradeDBInstanceRequest::getMasterNodeNum() const {
  return masterNodeNum_;
}

void UpgradeDBInstanceRequest::setMasterNodeNum(const std::string &masterNodeNum) {
  masterNodeNum_ = masterNodeNum;
  setParameter(std::string("MasterNodeNum"), masterNodeNum);
}

long UpgradeDBInstanceRequest::getUpgradeType() const {
  return upgradeType_;
}

void UpgradeDBInstanceRequest::setUpgradeType(long upgradeType) {
  upgradeType_ = upgradeType;
  setParameter(std::string("UpgradeType"), std::to_string(upgradeType));
}

std::string UpgradeDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpgradeDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpgradeDBInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UpgradeDBInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string UpgradeDBInstanceRequest::getSegNodeNum() const {
  return segNodeNum_;
}

void UpgradeDBInstanceRequest::setSegNodeNum(const std::string &segNodeNum) {
  segNodeNum_ = segNodeNum;
  setParameter(std::string("SegNodeNum"), segNodeNum);
}

std::string UpgradeDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void UpgradeDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpgradeDBInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void UpgradeDBInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string UpgradeDBInstanceRequest::getDBInstanceGroupCount() const {
  return dBInstanceGroupCount_;
}

void UpgradeDBInstanceRequest::setDBInstanceGroupCount(const std::string &dBInstanceGroupCount) {
  dBInstanceGroupCount_ = dBInstanceGroupCount;
  setParameter(std::string("DBInstanceGroupCount"), dBInstanceGroupCount);
}

long UpgradeDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void UpgradeDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpgradeDBInstanceRequest::getSegDiskPerformanceLevel() const {
  return segDiskPerformanceLevel_;
}

void UpgradeDBInstanceRequest::setSegDiskPerformanceLevel(const std::string &segDiskPerformanceLevel) {
  segDiskPerformanceLevel_ = segDiskPerformanceLevel;
  setParameter(std::string("SegDiskPerformanceLevel"), segDiskPerformanceLevel);
}

std::string UpgradeDBInstanceRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void UpgradeDBInstanceRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string UpgradeDBInstanceRequest::getPayType() const {
  return payType_;
}

void UpgradeDBInstanceRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

