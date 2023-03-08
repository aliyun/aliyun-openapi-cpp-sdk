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

#include <alibabacloud/adb/model/CreateDBClusterRequest.h>

using AlibabaCloud::Adb::Model::CreateDBClusterRequest;

CreateDBClusterRequest::CreateDBClusterRequest()
    : RpcServiceRequest("adb", "2021-12-01", "CreateDBCluster") {
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

bool CreateDBClusterRequest::getEnableDefaultResourcePool() const {
  return enableDefaultResourcePool_;
}

void CreateDBClusterRequest::setEnableDefaultResourcePool(bool enableDefaultResourcePool) {
  enableDefaultResourcePool_ = enableDefaultResourcePool;
  setParameter(std::string("EnableDefaultResourcePool"), enableDefaultResourcePool ? "true" : "false");
}

std::string CreateDBClusterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBClusterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBClusterRequest::getStorageResource() const {
  return storageResource_;
}

void CreateDBClusterRequest::setStorageResource(const std::string &storageResource) {
  storageResource_ = storageResource;
  setParameter(std::string("StorageResource"), storageResource);
}

std::string CreateDBClusterRequest::getRegionId() const {
  return regionId_;
}

void CreateDBClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDBClusterRequest::getDBClusterNetworkType() const {
  return dBClusterNetworkType_;
}

void CreateDBClusterRequest::setDBClusterNetworkType(const std::string &dBClusterNetworkType) {
  dBClusterNetworkType_ = dBClusterNetworkType;
  setParameter(std::string("DBClusterNetworkType"), dBClusterNetworkType);
}

std::string CreateDBClusterRequest::getPeriod() const {
  return period_;
}

void CreateDBClusterRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string CreateDBClusterRequest::getDBClusterVersion() const {
  return dBClusterVersion_;
}

void CreateDBClusterRequest::setDBClusterVersion(const std::string &dBClusterVersion) {
  dBClusterVersion_ = dBClusterVersion;
  setParameter(std::string("DBClusterVersion"), dBClusterVersion);
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

std::string CreateDBClusterRequest::getVPCId() const {
  return vPCId_;
}

void CreateDBClusterRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string CreateDBClusterRequest::getZoneId() const {
  return zoneId_;
}

void CreateDBClusterRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateDBClusterRequest::getComputeResource() const {
  return computeResource_;
}

void CreateDBClusterRequest::setComputeResource(const std::string &computeResource) {
  computeResource_ = computeResource;
  setParameter(std::string("ComputeResource"), computeResource);
}

std::string CreateDBClusterRequest::getPayType() const {
  return payType_;
}

void CreateDBClusterRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

