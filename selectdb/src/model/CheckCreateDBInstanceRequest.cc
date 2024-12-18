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

#include <alibabacloud/selectdb/model/CheckCreateDBInstanceRequest.h>

using AlibabaCloud::Selectdb::Model::CheckCreateDBInstanceRequest;

CheckCreateDBInstanceRequest::CheckCreateDBInstanceRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "CheckCreateDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

CheckCreateDBInstanceRequest::~CheckCreateDBInstanceRequest() {}

long CheckCreateDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckCreateDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CheckCreateDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CheckCreateDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CheckCreateDBInstanceRequest::getConnectionString() const {
  return connectionString_;
}

void CheckCreateDBInstanceRequest::setConnectionString(const std::string &connectionString) {
  connectionString_ = connectionString;
  setParameter(std::string("ConnectionString"), connectionString);
}

std::string CheckCreateDBInstanceRequest::getEngineVersion() const {
  return engineVersion_;
}

void CheckCreateDBInstanceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

int CheckCreateDBInstanceRequest::getCacheSize() const {
  return cacheSize_;
}

void CheckCreateDBInstanceRequest::setCacheSize(int cacheSize) {
  cacheSize_ = cacheSize;
  setParameter(std::string("CacheSize"), std::to_string(cacheSize));
}

std::string CheckCreateDBInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CheckCreateDBInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CheckCreateDBInstanceRequest::getEngine() const {
  return engine_;
}

void CheckCreateDBInstanceRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string CheckCreateDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void CheckCreateDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CheckCreateDBInstanceRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void CheckCreateDBInstanceRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

std::string CheckCreateDBInstanceRequest::getPeriod() const {
  return period_;
}

void CheckCreateDBInstanceRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

int CheckCreateDBInstanceRequest::getUsedTime() const {
  return usedTime_;
}

void CheckCreateDBInstanceRequest::setUsedTime(int usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), std::to_string(usedTime));
}

std::string CheckCreateDBInstanceRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void CheckCreateDBInstanceRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string CheckCreateDBInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CheckCreateDBInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CheckCreateDBInstanceRequest::getSecurityIPList() const {
  return securityIPList_;
}

void CheckCreateDBInstanceRequest::setSecurityIPList(const std::string &securityIPList) {
  securityIPList_ = securityIPList;
  setParameter(std::string("SecurityIPList"), securityIPList);
}

std::string CheckCreateDBInstanceRequest::getVpcId() const {
  return vpcId_;
}

void CheckCreateDBInstanceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CheckCreateDBInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CheckCreateDBInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CheckCreateDBInstanceRequest::getChargeType() const {
  return chargeType_;
}

void CheckCreateDBInstanceRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

