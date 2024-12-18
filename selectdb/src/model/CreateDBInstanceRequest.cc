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

#include <alibabacloud/selectdb/model/CreateDBInstanceRequest.h>

using AlibabaCloud::Selectdb::Model::CreateDBInstanceRequest;

CreateDBInstanceRequest::CreateDBInstanceRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "CreateDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBInstanceRequest::~CreateDBInstanceRequest() {}

long CreateDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDBInstanceRequest::getConnectionString() const {
  return connectionString_;
}

void CreateDBInstanceRequest::setConnectionString(const std::string &connectionString) {
  connectionString_ = connectionString;
  setParameter(std::string("ConnectionString"), connectionString);
}

std::string CreateDBInstanceRequest::getEngineVersion() const {
  return engineVersion_;
}

void CreateDBInstanceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

int CreateDBInstanceRequest::getCacheSize() const {
  return cacheSize_;
}

void CreateDBInstanceRequest::setCacheSize(int cacheSize) {
  cacheSize_ = cacheSize;
  setParameter(std::string("CacheSize"), std::to_string(cacheSize));
}

std::string CreateDBInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDBInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDBInstanceRequest::getEngine() const {
  return engine_;
}

void CreateDBInstanceRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string CreateDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDBInstanceRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void CreateDBInstanceRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

std::vector<CreateDBInstanceRequest::Tag> CreateDBInstanceRequest::getTag() const {
  return tag_;
}

void CreateDBInstanceRequest::setTag(const std::vector<CreateDBInstanceRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::string CreateDBInstanceRequest::getPeriod() const {
  return period_;
}

void CreateDBInstanceRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

int CreateDBInstanceRequest::getUsedTime() const {
  return usedTime_;
}

void CreateDBInstanceRequest::setUsedTime(int usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), std::to_string(usedTime));
}

std::string CreateDBInstanceRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void CreateDBInstanceRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string CreateDBInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateDBInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateDBInstanceRequest::getSecurityIPList() const {
  return securityIPList_;
}

void CreateDBInstanceRequest::setSecurityIPList(const std::string &securityIPList) {
  securityIPList_ = securityIPList;
  setParameter(std::string("SecurityIPList"), securityIPList);
}

std::string CreateDBInstanceRequest::getVpcId() const {
  return vpcId_;
}

void CreateDBInstanceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateDBInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateDBInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateDBInstanceRequest::getChargeType() const {
  return chargeType_;
}

void CreateDBInstanceRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

