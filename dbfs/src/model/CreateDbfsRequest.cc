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

#include <alibabacloud/dbfs/model/CreateDbfsRequest.h>

using AlibabaCloud::DBFS::Model::CreateDbfsRequest;

CreateDbfsRequest::CreateDbfsRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "CreateDbfs") {
  setMethod(HttpRequest::Method::Post);
}

CreateDbfsRequest::~CreateDbfsRequest() {}

int CreateDbfsRequest::getSizeG() const {
  return sizeG_;
}

void CreateDbfsRequest::setSizeG(int sizeG) {
  sizeG_ = sizeG;
  setParameter(std::string("SizeG"), std::to_string(sizeG));
}

std::string CreateDbfsRequest::getSnapshotId() const {
  return snapshotId_;
}

void CreateDbfsRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string CreateDbfsRequest::getClientToken() const {
  return clientToken_;
}

void CreateDbfsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDbfsRequest::getUsedScene() const {
  return usedScene_;
}

void CreateDbfsRequest::setUsedScene(const std::string &usedScene) {
  usedScene_ = usedScene;
  setParameter(std::string("UsedScene"), usedScene);
}

std::string CreateDbfsRequest::getFsName() const {
  return fsName_;
}

void CreateDbfsRequest::setFsName(const std::string &fsName) {
  fsName_ = fsName;
  setParameter(std::string("FsName"), fsName);
}

int CreateDbfsRequest::getRaidStripeUnitNumber() const {
  return raidStripeUnitNumber_;
}

void CreateDbfsRequest::setRaidStripeUnitNumber(int raidStripeUnitNumber) {
  raidStripeUnitNumber_ = raidStripeUnitNumber;
  setParameter(std::string("RaidStripeUnitNumber"), std::to_string(raidStripeUnitNumber));
}

bool CreateDbfsRequest::getEncryption() const {
  return encryption_;
}

void CreateDbfsRequest::setEncryption(bool encryption) {
  encryption_ = encryption;
  setParameter(std::string("Encryption"), encryption ? "true" : "false");
}

std::string CreateDbfsRequest::getRegionId() const {
  return regionId_;
}

void CreateDbfsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDbfsRequest::getInstanceType() const {
  return instanceType_;
}

void CreateDbfsRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string CreateDbfsRequest::getAdvancedFeatures() const {
  return advancedFeatures_;
}

void CreateDbfsRequest::setAdvancedFeatures(const std::string &advancedFeatures) {
  advancedFeatures_ = advancedFeatures;
  setParameter(std::string("AdvancedFeatures"), advancedFeatures);
}

std::string CreateDbfsRequest::getPerformanceLevel() const {
  return performanceLevel_;
}

void CreateDbfsRequest::setPerformanceLevel(const std::string &performanceLevel) {
  performanceLevel_ = performanceLevel;
  setParameter(std::string("PerformanceLevel"), performanceLevel);
}

bool CreateDbfsRequest::getEnableRaid() const {
  return enableRaid_;
}

void CreateDbfsRequest::setEnableRaid(bool enableRaid) {
  enableRaid_ = enableRaid;
  setParameter(std::string("EnableRaid"), enableRaid ? "true" : "false");
}

bool CreateDbfsRequest::getDeleteSnapshot() const {
  return deleteSnapshot_;
}

void CreateDbfsRequest::setDeleteSnapshot(bool deleteSnapshot) {
  deleteSnapshot_ = deleteSnapshot;
  setParameter(std::string("DeleteSnapshot"), deleteSnapshot ? "true" : "false");
}

std::string CreateDbfsRequest::getZoneId() const {
  return zoneId_;
}

void CreateDbfsRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateDbfsRequest::getCategory() const {
  return category_;
}

void CreateDbfsRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string CreateDbfsRequest::getKMSKeyId() const {
  return kMSKeyId_;
}

void CreateDbfsRequest::setKMSKeyId(const std::string &kMSKeyId) {
  kMSKeyId_ = kMSKeyId;
  setParameter(std::string("KMSKeyId"), kMSKeyId);
}

