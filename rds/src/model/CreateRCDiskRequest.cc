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

#include <alibabacloud/rds/model/CreateRCDiskRequest.h>

using AlibabaCloud::Rds::Model::CreateRCDiskRequest;

CreateRCDiskRequest::CreateRCDiskRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateRCDisk") {
  setMethod(HttpRequest::Method::Post);
}

CreateRCDiskRequest::~CreateRCDiskRequest() {}

std::string CreateRCDiskRequest::getSnapshotId() const {
  return snapshotId_;
}

void CreateRCDiskRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string CreateRCDiskRequest::getDescription() const {
  return description_;
}

void CreateRCDiskRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateRCDiskRequest::getDiskName() const {
  return diskName_;
}

void CreateRCDiskRequest::setDiskName(const std::string &diskName) {
  diskName_ = diskName;
  setParameter(std::string("DiskName"), diskName);
}

std::string CreateRCDiskRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateRCDiskRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateRCDiskRequest::getRegionId() const {
  return regionId_;
}

void CreateRCDiskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateRCDiskRequest::getDiskCategory() const {
  return diskCategory_;
}

void CreateRCDiskRequest::setDiskCategory(const std::string &diskCategory) {
  diskCategory_ = diskCategory;
  setParameter(std::string("DiskCategory"), diskCategory);
}

std::vector<CreateRCDiskRequest::Tag> CreateRCDiskRequest::getTag() const {
  return tag_;
}

void CreateRCDiskRequest::setTag(const std::vector<CreateRCDiskRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateRCDiskRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void CreateRCDiskRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

int CreateRCDiskRequest::getPeriod() const {
  return period_;
}

void CreateRCDiskRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool CreateRCDiskRequest::getAutoPay() const {
  return autoPay_;
}

void CreateRCDiskRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateRCDiskRequest::getPerformanceLevel() const {
  return performanceLevel_;
}

void CreateRCDiskRequest::setPerformanceLevel(const std::string &performanceLevel) {
  performanceLevel_ = performanceLevel;
  setParameter(std::string("PerformanceLevel"), performanceLevel);
}

std::string CreateRCDiskRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateRCDiskRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string CreateRCDiskRequest::getInstanceId() const {
  return instanceId_;
}

void CreateRCDiskRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int CreateRCDiskRequest::getSize() const {
  return size_;
}

void CreateRCDiskRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

bool CreateRCDiskRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateRCDiskRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateRCDiskRequest::getZoneId() const {
  return zoneId_;
}

void CreateRCDiskRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

