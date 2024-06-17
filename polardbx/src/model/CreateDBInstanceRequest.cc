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

#include <alibabacloud/polardbx/model/CreateDBInstanceRequest.h>

using AlibabaCloud::Polardbx::Model::CreateDBInstanceRequest;

CreateDBInstanceRequest::CreateDBInstanceRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "CreateDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBInstanceRequest::~CreateDBInstanceRequest() {}

std::string CreateDBInstanceRequest::getNetworkType() const {
  return networkType_;
}

void CreateDBInstanceRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string CreateDBInstanceRequest::getEngineVersion() const {
  return engineVersion_;
}

void CreateDBInstanceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string CreateDBInstanceRequest::getTertiaryZone() const {
  return tertiaryZone_;
}

void CreateDBInstanceRequest::setTertiaryZone(const std::string &tertiaryZone) {
  tertiaryZone_ = tertiaryZone;
  setParameter(std::string("TertiaryZone"), tertiaryZone);
}

std::string CreateDBInstanceRequest::getCnClass() const {
  return cnClass_;
}

void CreateDBInstanceRequest::setCnClass(const std::string &cnClass) {
  cnClass_ = cnClass;
  setParameter(std::string("CnClass"), cnClass);
}

std::string CreateDBInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDBInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDBInstanceRequest::getDBNodeClass() const {
  return dBNodeClass_;
}

void CreateDBInstanceRequest::setDBNodeClass(const std::string &dBNodeClass) {
  dBNodeClass_ = dBNodeClass;
  setParameter(std::string("DBNodeClass"), dBNodeClass);
}

std::string CreateDBInstanceRequest::getSecondaryZone() const {
  return secondaryZone_;
}

void CreateDBInstanceRequest::setSecondaryZone(const std::string &secondaryZone) {
  secondaryZone_ = secondaryZone;
  setParameter(std::string("SecondaryZone"), secondaryZone);
}

std::string CreateDBInstanceRequest::getPeriod() const {
  return period_;
}

void CreateDBInstanceRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

bool CreateDBInstanceRequest::getIsReadDBInstance() const {
  return isReadDBInstance_;
}

void CreateDBInstanceRequest::setIsReadDBInstance(bool isReadDBInstance) {
  isReadDBInstance_ = isReadDBInstance;
  setParameter(std::string("IsReadDBInstance"), isReadDBInstance ? "true" : "false");
}

std::string CreateDBInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateDBInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

bool CreateDBInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateDBInstanceRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateDBInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateDBInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateDBInstanceRequest::getCNNodeCount() const {
  return cNNodeCount_;
}

void CreateDBInstanceRequest::setCNNodeCount(const std::string &cNNodeCount) {
  cNNodeCount_ = cNNodeCount;
  setParameter(std::string("CNNodeCount"), cNNodeCount);
}

std::string CreateDBInstanceRequest::getPrimaryDBInstanceName() const {
  return primaryDBInstanceName_;
}

void CreateDBInstanceRequest::setPrimaryDBInstanceName(const std::string &primaryDBInstanceName) {
  primaryDBInstanceName_ = primaryDBInstanceName;
  setParameter(std::string("PrimaryDBInstanceName"), primaryDBInstanceName);
}

std::string CreateDBInstanceRequest::getTopologyType() const {
  return topologyType_;
}

void CreateDBInstanceRequest::setTopologyType(const std::string &topologyType) {
  topologyType_ = topologyType;
  setParameter(std::string("TopologyType"), topologyType);
}

std::string CreateDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateDBInstanceRequest::getIsColumnarReadDBInstance() const {
  return isColumnarReadDBInstance_;
}

void CreateDBInstanceRequest::setIsColumnarReadDBInstance(bool isColumnarReadDBInstance) {
  isColumnarReadDBInstance_ = isColumnarReadDBInstance;
  setParameter(std::string("IsColumnarReadDBInstance"), isColumnarReadDBInstance ? "true" : "false");
}

std::string CreateDBInstanceRequest::getDNNodeCount() const {
  return dNNodeCount_;
}

void CreateDBInstanceRequest::setDNNodeCount(const std::string &dNNodeCount) {
  dNNodeCount_ = dNNodeCount;
  setParameter(std::string("DNNodeCount"), dNNodeCount);
}

int CreateDBInstanceRequest::getDBNodeCount() const {
  return dBNodeCount_;
}

void CreateDBInstanceRequest::setDBNodeCount(int dBNodeCount) {
  dBNodeCount_ = dBNodeCount;
  setParameter(std::string("DBNodeCount"), std::to_string(dBNodeCount));
}

std::string CreateDBInstanceRequest::getDnClass() const {
  return dnClass_;
}

void CreateDBInstanceRequest::setDnClass(const std::string &dnClass) {
  dnClass_ = dnClass;
  setParameter(std::string("DnClass"), dnClass);
}

int CreateDBInstanceRequest::getUsedTime() const {
  return usedTime_;
}

void CreateDBInstanceRequest::setUsedTime(int usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), std::to_string(usedTime));
}

std::string CreateDBInstanceRequest::getDnStorageSpace() const {
  return dnStorageSpace_;
}

void CreateDBInstanceRequest::setDnStorageSpace(const std::string &dnStorageSpace) {
  dnStorageSpace_ = dnStorageSpace;
  setParameter(std::string("DnStorageSpace"), dnStorageSpace);
}

std::string CreateDBInstanceRequest::getPrimaryZone() const {
  return primaryZone_;
}

void CreateDBInstanceRequest::setPrimaryZone(const std::string &primaryZone) {
  primaryZone_ = primaryZone;
  setParameter(std::string("PrimaryZone"), primaryZone);
}

std::string CreateDBInstanceRequest::getSeries() const {
  return series_;
}

void CreateDBInstanceRequest::setSeries(const std::string &series) {
  series_ = series;
  setParameter(std::string("Series"), series);
}

std::string CreateDBInstanceRequest::getVPCId() const {
  return vPCId_;
}

void CreateDBInstanceRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string CreateDBInstanceRequest::getPayType() const {
  return payType_;
}

void CreateDBInstanceRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

