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

#include <alibabacloud/rds/model/ModifyDBProxyEndpointRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBProxyEndpointRequest;

ModifyDBProxyEndpointRequest::ModifyDBProxyEndpointRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBProxyEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBProxyEndpointRequest::~ModifyDBProxyEndpointRequest() {}

long ModifyDBProxyEndpointRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBProxyEndpointRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBProxyEndpointRequest::getConfigDBProxyFeatures() const {
  return configDBProxyFeatures_;
}

void ModifyDBProxyEndpointRequest::setConfigDBProxyFeatures(const std::string &configDBProxyFeatures) {
  configDBProxyFeatures_ = configDBProxyFeatures;
  setParameter(std::string("ConfigDBProxyFeatures"), configDBProxyFeatures);
}

std::string ModifyDBProxyEndpointRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBProxyEndpointRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBProxyEndpointRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBProxyEndpointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBProxyEndpointRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void ModifyDBProxyEndpointRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string ModifyDBProxyEndpointRequest::getEffectiveSpecificTime() const {
  return effectiveSpecificTime_;
}

void ModifyDBProxyEndpointRequest::setEffectiveSpecificTime(const std::string &effectiveSpecificTime) {
  effectiveSpecificTime_ = effectiveSpecificTime;
  setParameter(std::string("EffectiveSpecificTime"), effectiveSpecificTime);
}

std::string ModifyDBProxyEndpointRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBProxyEndpointRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBProxyEndpointRequest::getReadOnlyInstanceWeight() const {
  return readOnlyInstanceWeight_;
}

void ModifyDBProxyEndpointRequest::setReadOnlyInstanceWeight(const std::string &readOnlyInstanceWeight) {
  readOnlyInstanceWeight_ = readOnlyInstanceWeight;
  setParameter(std::string("ReadOnlyInstanceWeight"), readOnlyInstanceWeight);
}

std::string ModifyDBProxyEndpointRequest::getReadOnlyInstanceMaxDelayTime() const {
  return readOnlyInstanceMaxDelayTime_;
}

void ModifyDBProxyEndpointRequest::setReadOnlyInstanceMaxDelayTime(const std::string &readOnlyInstanceMaxDelayTime) {
  readOnlyInstanceMaxDelayTime_ = readOnlyInstanceMaxDelayTime;
  setParameter(std::string("ReadOnlyInstanceMaxDelayTime"), readOnlyInstanceMaxDelayTime);
}

std::string ModifyDBProxyEndpointRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBProxyEndpointRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBProxyEndpointRequest::getDbEndpointMinSlaveCount() const {
  return dbEndpointMinSlaveCount_;
}

void ModifyDBProxyEndpointRequest::setDbEndpointMinSlaveCount(const std::string &dbEndpointMinSlaveCount) {
  dbEndpointMinSlaveCount_ = dbEndpointMinSlaveCount;
  setParameter(std::string("DbEndpointMinSlaveCount"), dbEndpointMinSlaveCount);
}

std::string ModifyDBProxyEndpointRequest::getDbEndpointAliases() const {
  return dbEndpointAliases_;
}

void ModifyDBProxyEndpointRequest::setDbEndpointAliases(const std::string &dbEndpointAliases) {
  dbEndpointAliases_ = dbEndpointAliases;
  setParameter(std::string("DbEndpointAliases"), dbEndpointAliases);
}

std::string ModifyDBProxyEndpointRequest::getDBProxyEngineType() const {
  return dBProxyEngineType_;
}

void ModifyDBProxyEndpointRequest::setDBProxyEngineType(const std::string &dBProxyEngineType) {
  dBProxyEngineType_ = dBProxyEngineType;
  setParameter(std::string("DBProxyEngineType"), dBProxyEngineType);
}

std::string ModifyDBProxyEndpointRequest::getCausalConsistReadTimeout() const {
  return causalConsistReadTimeout_;
}

void ModifyDBProxyEndpointRequest::setCausalConsistReadTimeout(const std::string &causalConsistReadTimeout) {
  causalConsistReadTimeout_ = causalConsistReadTimeout;
  setParameter(std::string("CausalConsistReadTimeout"), causalConsistReadTimeout);
}

std::string ModifyDBProxyEndpointRequest::getDbEndpointOperator() const {
  return dbEndpointOperator_;
}

void ModifyDBProxyEndpointRequest::setDbEndpointOperator(const std::string &dbEndpointOperator) {
  dbEndpointOperator_ = dbEndpointOperator;
  setParameter(std::string("DbEndpointOperator"), dbEndpointOperator);
}

std::string ModifyDBProxyEndpointRequest::getDbEndpointType() const {
  return dbEndpointType_;
}

void ModifyDBProxyEndpointRequest::setDbEndpointType(const std::string &dbEndpointType) {
  dbEndpointType_ = dbEndpointType;
  setParameter(std::string("DbEndpointType"), dbEndpointType);
}

long ModifyDBProxyEndpointRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBProxyEndpointRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBProxyEndpointRequest::getDbEndpointReadWriteMode() const {
  return dbEndpointReadWriteMode_;
}

void ModifyDBProxyEndpointRequest::setDbEndpointReadWriteMode(const std::string &dbEndpointReadWriteMode) {
  dbEndpointReadWriteMode_ = dbEndpointReadWriteMode;
  setParameter(std::string("DbEndpointReadWriteMode"), dbEndpointReadWriteMode);
}

std::string ModifyDBProxyEndpointRequest::getVSwitchId() const {
  return vSwitchId_;
}

void ModifyDBProxyEndpointRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string ModifyDBProxyEndpointRequest::getDBProxyEndpointId() const {
  return dBProxyEndpointId_;
}

void ModifyDBProxyEndpointRequest::setDBProxyEndpointId(const std::string &dBProxyEndpointId) {
  dBProxyEndpointId_ = dBProxyEndpointId;
  setParameter(std::string("DBProxyEndpointId"), dBProxyEndpointId);
}

std::string ModifyDBProxyEndpointRequest::getVpcId() const {
  return vpcId_;
}

void ModifyDBProxyEndpointRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string ModifyDBProxyEndpointRequest::getReadOnlyInstanceDistributionType() const {
  return readOnlyInstanceDistributionType_;
}

void ModifyDBProxyEndpointRequest::setReadOnlyInstanceDistributionType(const std::string &readOnlyInstanceDistributionType) {
  readOnlyInstanceDistributionType_ = readOnlyInstanceDistributionType;
  setParameter(std::string("ReadOnlyInstanceDistributionType"), readOnlyInstanceDistributionType);
}

