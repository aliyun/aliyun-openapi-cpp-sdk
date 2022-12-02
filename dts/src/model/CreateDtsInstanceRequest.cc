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

#include <alibabacloud/dts/model/CreateDtsInstanceRequest.h>

using AlibabaCloud::Dts::Model::CreateDtsInstanceRequest;

CreateDtsInstanceRequest::CreateDtsInstanceRequest()
    : RpcServiceRequest("dts", "2020-01-01", "CreateDtsInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateDtsInstanceRequest::~CreateDtsInstanceRequest() {}

bool CreateDtsInstanceRequest::getAutoStart() const {
  return autoStart_;
}

void CreateDtsInstanceRequest::setAutoStart(bool autoStart) {
  autoStart_ = autoStart;
  setParameter(std::string("AutoStart"), autoStart ? "true" : "false");
}

std::string CreateDtsInstanceRequest::getType() const {
  return type_;
}

void CreateDtsInstanceRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateDtsInstanceRequest::getInstanceClass() const {
  return instanceClass_;
}

void CreateDtsInstanceRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

int CreateDtsInstanceRequest::getDatabaseCount() const {
  return databaseCount_;
}

void CreateDtsInstanceRequest::setDatabaseCount(int databaseCount) {
  databaseCount_ = databaseCount;
  setParameter(std::string("DatabaseCount"), std::to_string(databaseCount));
}

std::string CreateDtsInstanceRequest::getJobId() const {
  return jobId_;
}

void CreateDtsInstanceRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

int CreateDtsInstanceRequest::getDu() const {
  return du_;
}

void CreateDtsInstanceRequest::setDu(int du) {
  du_ = du;
  setParameter(std::string("Du"), std::to_string(du));
}

std::string CreateDtsInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDtsInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDtsInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateDtsInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CreateDtsInstanceRequest::getComputeUnit() const {
  return computeUnit_;
}

void CreateDtsInstanceRequest::setComputeUnit(int computeUnit) {
  computeUnit_ = computeUnit;
  setParameter(std::string("ComputeUnit"), std::to_string(computeUnit));
}

std::string CreateDtsInstanceRequest::getFeeType() const {
  return feeType_;
}

void CreateDtsInstanceRequest::setFeeType(const std::string &feeType) {
  feeType_ = feeType;
  setParameter(std::string("FeeType"), feeType);
}

std::string CreateDtsInstanceRequest::getDestinationRegion() const {
  return destinationRegion_;
}

void CreateDtsInstanceRequest::setDestinationRegion(const std::string &destinationRegion) {
  destinationRegion_ = destinationRegion;
  setParameter(std::string("DestinationRegion"), destinationRegion);
}

std::string CreateDtsInstanceRequest::getPeriod() const {
  return period_;
}

void CreateDtsInstanceRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string CreateDtsInstanceRequest::getDestinationEndpointEngineName() const {
  return destinationEndpointEngineName_;
}

void CreateDtsInstanceRequest::setDestinationEndpointEngineName(const std::string &destinationEndpointEngineName) {
  destinationEndpointEngineName_ = destinationEndpointEngineName;
  setParameter(std::string("DestinationEndpointEngineName"), destinationEndpointEngineName);
}

int CreateDtsInstanceRequest::getQuantity() const {
  return quantity_;
}

void CreateDtsInstanceRequest::setQuantity(int quantity) {
  quantity_ = quantity;
  setParameter(std::string("Quantity"), std::to_string(quantity));
}

bool CreateDtsInstanceRequest::getAutoPay() const {
  return autoPay_;
}

void CreateDtsInstanceRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

int CreateDtsInstanceRequest::getUsedTime() const {
  return usedTime_;
}

void CreateDtsInstanceRequest::setUsedTime(int usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), std::to_string(usedTime));
}

std::string CreateDtsInstanceRequest::getSyncArchitecture() const {
  return syncArchitecture_;
}

void CreateDtsInstanceRequest::setSyncArchitecture(const std::string &syncArchitecture) {
  syncArchitecture_ = syncArchitecture;
  setParameter(std::string("SyncArchitecture"), syncArchitecture);
}

std::string CreateDtsInstanceRequest::getPayType() const {
  return payType_;
}

void CreateDtsInstanceRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string CreateDtsInstanceRequest::getSourceRegion() const {
  return sourceRegion_;
}

void CreateDtsInstanceRequest::setSourceRegion(const std::string &sourceRegion) {
  sourceRegion_ = sourceRegion;
  setParameter(std::string("SourceRegion"), sourceRegion);
}

std::string CreateDtsInstanceRequest::getSourceEndpointEngineName() const {
  return sourceEndpointEngineName_;
}

void CreateDtsInstanceRequest::setSourceEndpointEngineName(const std::string &sourceEndpointEngineName) {
  sourceEndpointEngineName_ = sourceEndpointEngineName;
  setParameter(std::string("SourceEndpointEngineName"), sourceEndpointEngineName);
}

