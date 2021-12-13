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

#include <alibabacloud/gpdb/model/UpgradeDBVersionRequest.h>

using AlibabaCloud::Gpdb::Model::UpgradeDBVersionRequest;

UpgradeDBVersionRequest::UpgradeDBVersionRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "UpgradeDBVersion") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeDBVersionRequest::~UpgradeDBVersionRequest() {}

std::string UpgradeDBVersionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpgradeDBVersionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpgradeDBVersionRequest::getSwitchTimeMode() const {
  return switchTimeMode_;
}

void UpgradeDBVersionRequest::setSwitchTimeMode(const std::string &switchTimeMode) {
  switchTimeMode_ = switchTimeMode;
  setParameter(std::string("SwitchTimeMode"), switchTimeMode);
}

std::string UpgradeDBVersionRequest::getRegionId() const {
  return regionId_;
}

void UpgradeDBVersionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpgradeDBVersionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void UpgradeDBVersionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string UpgradeDBVersionRequest::getSwitchTime() const {
  return switchTime_;
}

void UpgradeDBVersionRequest::setSwitchTime(const std::string &switchTime) {
  switchTime_ = switchTime;
  setParameter(std::string("SwitchTime"), switchTime);
}

std::string UpgradeDBVersionRequest::getMajorVersion() const {
  return majorVersion_;
}

void UpgradeDBVersionRequest::setMajorVersion(const std::string &majorVersion) {
  majorVersion_ = majorVersion;
  setParameter(std::string("MajorVersion"), majorVersion);
}

std::string UpgradeDBVersionRequest::getMinorVersion() const {
  return minorVersion_;
}

void UpgradeDBVersionRequest::setMinorVersion(const std::string &minorVersion) {
  minorVersion_ = minorVersion;
  setParameter(std::string("MinorVersion"), minorVersion);
}

long UpgradeDBVersionRequest::getOwnerId() const {
  return ownerId_;
}

void UpgradeDBVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

