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

#include <alibabacloud/oceanbasepro/model/CreateInstanceRequest.h>

using AlibabaCloud::OceanBasePro::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "CreateInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateInstanceRequest::~CreateInstanceRequest() {}

std::string CreateInstanceRequest::getIsolationOptimization() const {
  return isolationOptimization_;
}

void CreateInstanceRequest::setIsolationOptimization(const std::string &isolationOptimization) {
  isolationOptimization_ = isolationOptimization;
  setBodyParameter(std::string("IsolationOptimization"), isolationOptimization);
}

std::string CreateInstanceRequest::getInstanceClass() const {
  return instanceClass_;
}

void CreateInstanceRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setBodyParameter(std::string("InstanceClass"), instanceClass);
}

std::string CreateInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

long CreateInstanceRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void CreateInstanceRequest::setAutoRenewPeriod(long autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setBodyParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

long CreateInstanceRequest::getPeriod() const {
  return period_;
}

void CreateInstanceRequest::setPeriod(long period) {
  period_ = period;
  setBodyParameter(std::string("Period"), std::to_string(period));
}

bool CreateInstanceRequest::getDryRun() const {
  return dryRun_;
}

void CreateInstanceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

long CreateInstanceRequest::getDiskSize() const {
  return diskSize_;
}

void CreateInstanceRequest::setDiskSize(long diskSize) {
  diskSize_ = diskSize;
  setBodyParameter(std::string("DiskSize"), std::to_string(diskSize));
}

std::string CreateInstanceRequest::getZones() const {
  return zones_;
}

void CreateInstanceRequest::setZones(const std::string &zones) {
  zones_ = zones;
  setBodyParameter(std::string("Zones"), zones);
}

std::string CreateInstanceRequest::getDiskType() const {
  return diskType_;
}

void CreateInstanceRequest::setDiskType(const std::string &diskType) {
  diskType_ = diskType;
  setBodyParameter(std::string("DiskType"), diskType);
}

std::string CreateInstanceRequest::getObVersion() const {
  return obVersion_;
}

void CreateInstanceRequest::setObVersion(const std::string &obVersion) {
  obVersion_ = obVersion;
  setBodyParameter(std::string("ObVersion"), obVersion);
}

std::string CreateInstanceRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateInstanceRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setBodyParameter(std::string("PeriodUnit"), periodUnit);
}

std::string CreateInstanceRequest::getInstanceName() const {
  return instanceName_;
}

void CreateInstanceRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setBodyParameter(std::string("InstanceName"), instanceName);
}

std::string CreateInstanceRequest::getReplicaMode() const {
  return replicaMode_;
}

void CreateInstanceRequest::setReplicaMode(const std::string &replicaMode) {
  replicaMode_ = replicaMode;
  setBodyParameter(std::string("ReplicaMode"), replicaMode);
}

bool CreateInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateInstanceRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setBodyParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateInstanceRequest::getSeries() const {
  return series_;
}

void CreateInstanceRequest::setSeries(const std::string &series) {
  series_ = series;
  setBodyParameter(std::string("Series"), series);
}

std::string CreateInstanceRequest::getCpuArch() const {
  return cpuArch_;
}

void CreateInstanceRequest::setCpuArch(const std::string &cpuArch) {
  cpuArch_ = cpuArch;
  setBodyParameter(std::string("CpuArch"), cpuArch);
}

std::string CreateInstanceRequest::getPrimaryInstance() const {
  return primaryInstance_;
}

void CreateInstanceRequest::setPrimaryInstance(const std::string &primaryInstance) {
  primaryInstance_ = primaryInstance;
  setBodyParameter(std::string("PrimaryInstance"), primaryInstance);
}

std::string CreateInstanceRequest::getPrimaryRegion() const {
  return primaryRegion_;
}

void CreateInstanceRequest::setPrimaryRegion(const std::string &primaryRegion) {
  primaryRegion_ = primaryRegion;
  setBodyParameter(std::string("PrimaryRegion"), primaryRegion);
}

std::string CreateInstanceRequest::getChargeType() const {
  return chargeType_;
}

void CreateInstanceRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setBodyParameter(std::string("ChargeType"), chargeType);
}

std::string CreateInstanceRequest::getBid() const {
  return bid_;
}

void CreateInstanceRequest::setBid(const std::string &bid) {
  bid_ = bid;
  setParameter(std::string("Bid"), bid);
}

