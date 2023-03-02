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

#include <alibabacloud/swas-open/model/CreateInstancesRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::CreateInstancesRequest;

CreateInstancesRequest::CreateInstancesRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "CreateInstances") {
  setMethod(HttpRequest::Method::Post);
}

CreateInstancesRequest::~CreateInstancesRequest() {}

std::string CreateInstancesRequest::getImageId() const {
  return imageId_;
}

void CreateInstancesRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string CreateInstancesRequest::getClientToken() const {
  return clientToken_;
}

void CreateInstancesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateInstancesRequest::getRegionId() const {
  return regionId_;
}

void CreateInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CreateInstancesRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void CreateInstancesRequest::setAutoRenewPeriod(int autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

int CreateInstancesRequest::getPeriod() const {
  return period_;
}

void CreateInstancesRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

int CreateInstancesRequest::getAmount() const {
  return amount_;
}

void CreateInstancesRequest::setAmount(int amount) {
  amount_ = amount;
  setParameter(std::string("Amount"), std::to_string(amount));
}

bool CreateInstancesRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateInstancesRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

long CreateInstancesRequest::getDataDiskSize() const {
  return dataDiskSize_;
}

void CreateInstancesRequest::setDataDiskSize(long dataDiskSize) {
  dataDiskSize_ = dataDiskSize;
  setParameter(std::string("DataDiskSize"), std::to_string(dataDiskSize));
}

std::string CreateInstancesRequest::getPlanId() const {
  return planId_;
}

void CreateInstancesRequest::setPlanId(const std::string &planId) {
  planId_ = planId;
  setParameter(std::string("PlanId"), planId);
}

std::string CreateInstancesRequest::getChargeType() const {
  return chargeType_;
}

void CreateInstancesRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

