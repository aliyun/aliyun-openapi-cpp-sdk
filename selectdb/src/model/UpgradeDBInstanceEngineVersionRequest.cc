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

#include <alibabacloud/selectdb/model/UpgradeDBInstanceEngineVersionRequest.h>

using AlibabaCloud::Selectdb::Model::UpgradeDBInstanceEngineVersionRequest;

UpgradeDBInstanceEngineVersionRequest::UpgradeDBInstanceEngineVersionRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "UpgradeDBInstanceEngineVersion") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeDBInstanceEngineVersionRequest::~UpgradeDBInstanceEngineVersionRequest() {}

long UpgradeDBInstanceEngineVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpgradeDBInstanceEngineVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpgradeDBInstanceEngineVersionRequest::getEngineVersion() const {
  return engineVersion_;
}

void UpgradeDBInstanceEngineVersionRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string UpgradeDBInstanceEngineVersionRequest::getSwitchTimeMode() const {
  return switchTimeMode_;
}

void UpgradeDBInstanceEngineVersionRequest::setSwitchTimeMode(const std::string &switchTimeMode) {
  switchTimeMode_ = switchTimeMode;
  setParameter(std::string("SwitchTimeMode"), switchTimeMode);
}

std::string UpgradeDBInstanceEngineVersionRequest::getRegionId() const {
  return regionId_;
}

void UpgradeDBInstanceEngineVersionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpgradeDBInstanceEngineVersionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void UpgradeDBInstanceEngineVersionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

