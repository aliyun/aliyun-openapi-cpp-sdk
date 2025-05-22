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

#include <alibabacloud/rds/model/SwitchOverMajorVersionUpgradeRequest.h>

using AlibabaCloud::Rds::Model::SwitchOverMajorVersionUpgradeRequest;

SwitchOverMajorVersionUpgradeRequest::SwitchOverMajorVersionUpgradeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "SwitchOverMajorVersionUpgrade") {
  setMethod(HttpRequest::Method::Post);
}

SwitchOverMajorVersionUpgradeRequest::~SwitchOverMajorVersionUpgradeRequest() {}

std::string SwitchOverMajorVersionUpgradeRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void SwitchOverMajorVersionUpgradeRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long SwitchOverMajorVersionUpgradeRequest::getOwnerId() const {
  return ownerId_;
}

void SwitchOverMajorVersionUpgradeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SwitchOverMajorVersionUpgradeRequest::getType() const {
  return type_;
}

void SwitchOverMajorVersionUpgradeRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int SwitchOverMajorVersionUpgradeRequest::getSwitchoverTimeout() const {
  return switchoverTimeout_;
}

void SwitchOverMajorVersionUpgradeRequest::setSwitchoverTimeout(int switchoverTimeout) {
  switchoverTimeout_ = switchoverTimeout;
  setParameter(std::string("SwitchoverTimeout"), std::to_string(switchoverTimeout));
}

std::string SwitchOverMajorVersionUpgradeRequest::getRegionId() const {
  return regionId_;
}

void SwitchOverMajorVersionUpgradeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

