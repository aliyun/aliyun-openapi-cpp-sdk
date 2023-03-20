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

#include <alibabacloud/adb/model/DryRunClusterRequest.h>

using AlibabaCloud::Adb::Model::DryRunClusterRequest;

DryRunClusterRequest::DryRunClusterRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DryRunCluster") {
  setMethod(HttpRequest::Method::Post);
}

DryRunClusterRequest::~DryRunClusterRequest() {}

std::string DryRunClusterRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void DryRunClusterRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

bool DryRunClusterRequest::getEnableDefaultResourcePool() const {
  return enableDefaultResourcePool_;
}

void DryRunClusterRequest::setEnableDefaultResourcePool(bool enableDefaultResourcePool) {
  enableDefaultResourcePool_ = enableDefaultResourcePool;
  setParameter(std::string("EnableDefaultResourcePool"), enableDefaultResourcePool ? "true" : "false");
}

std::string DryRunClusterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DryRunClusterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DryRunClusterRequest::getStorageResource() const {
  return storageResource_;
}

void DryRunClusterRequest::setStorageResource(const std::string &storageResource) {
  storageResource_ = storageResource;
  setParameter(std::string("StorageResource"), storageResource);
}

std::string DryRunClusterRequest::getRegionId() const {
  return regionId_;
}

void DryRunClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DryRunClusterRequest::getDBClusterNetworkType() const {
  return dBClusterNetworkType_;
}

void DryRunClusterRequest::setDBClusterNetworkType(const std::string &dBClusterNetworkType) {
  dBClusterNetworkType_ = dBClusterNetworkType;
  setParameter(std::string("DBClusterNetworkType"), dBClusterNetworkType);
}

std::string DryRunClusterRequest::getPeriod() const {
  return period_;
}

void DryRunClusterRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string DryRunClusterRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DryRunClusterRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DryRunClusterRequest::getDBClusterVersion() const {
  return dBClusterVersion_;
}

void DryRunClusterRequest::setDBClusterVersion(const std::string &dBClusterVersion) {
  dBClusterVersion_ = dBClusterVersion;
  setParameter(std::string("DBClusterVersion"), dBClusterVersion);
}

std::string DryRunClusterRequest::getUsedTime() const {
  return usedTime_;
}

void DryRunClusterRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string DryRunClusterRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DryRunClusterRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DryRunClusterRequest::getVPCId() const {
  return vPCId_;
}

void DryRunClusterRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string DryRunClusterRequest::getZoneId() const {
  return zoneId_;
}

void DryRunClusterRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DryRunClusterRequest::getComputeResource() const {
  return computeResource_;
}

void DryRunClusterRequest::setComputeResource(const std::string &computeResource) {
  computeResource_ = computeResource;
  setParameter(std::string("ComputeResource"), computeResource);
}

std::string DryRunClusterRequest::getPayType() const {
  return payType_;
}

void DryRunClusterRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string DryRunClusterRequest::getOperation() const {
  return operation_;
}

void DryRunClusterRequest::setOperation(const std::string &operation) {
  operation_ = operation;
  setParameter(std::string("Operation"), operation);
}

