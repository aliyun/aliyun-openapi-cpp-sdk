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

#include <alibabacloud/selectdb/model/CreateDBClusterRequest.h>

using AlibabaCloud::Selectdb::Model::CreateDBClusterRequest;

CreateDBClusterRequest::CreateDBClusterRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "CreateDBCluster") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBClusterRequest::~CreateDBClusterRequest() {}

std::string CreateDBClusterRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void CreateDBClusterRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

long CreateDBClusterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDBClusterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDBClusterRequest::getEngineVersion() const {
  return engineVersion_;
}

void CreateDBClusterRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string CreateDBClusterRequest::getCacheSize() const {
  return cacheSize_;
}

void CreateDBClusterRequest::setCacheSize(const std::string &cacheSize) {
  cacheSize_ = cacheSize;
  setParameter(std::string("CacheSize"), cacheSize);
}

std::string CreateDBClusterRequest::getEngine() const {
  return engine_;
}

void CreateDBClusterRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string CreateDBClusterRequest::getRegionId() const {
  return regionId_;
}

void CreateDBClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDBClusterRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateDBClusterRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setBodyParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateDBClusterRequest::getPeriod() const {
  return period_;
}

void CreateDBClusterRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string CreateDBClusterRequest::getDBClusterClass() const {
  return dBClusterClass_;
}

void CreateDBClusterRequest::setDBClusterClass(const std::string &dBClusterClass) {
  dBClusterClass_ = dBClusterClass;
  setParameter(std::string("DBClusterClass"), dBClusterClass);
}

std::string CreateDBClusterRequest::getUsedTime() const {
  return usedTime_;
}

void CreateDBClusterRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string CreateDBClusterRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateDBClusterRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateDBClusterRequest::getVpcId() const {
  return vpcId_;
}

void CreateDBClusterRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateDBClusterRequest::getZoneId() const {
  return zoneId_;
}

void CreateDBClusterRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateDBClusterRequest::getChargeType() const {
  return chargeType_;
}

void CreateDBClusterRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

