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

#include <alibabacloud/smartag/model/CreateSmartAccessGatewaySoftwareRequest.h>

using AlibabaCloud::Smartag::Model::CreateSmartAccessGatewaySoftwareRequest;

CreateSmartAccessGatewaySoftwareRequest::CreateSmartAccessGatewaySoftwareRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "CreateSmartAccessGatewaySoftware") {
  setMethod(HttpRequest::Method::Post);
}

CreateSmartAccessGatewaySoftwareRequest::~CreateSmartAccessGatewaySoftwareRequest() {}

long CreateSmartAccessGatewaySoftwareRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateSmartAccessGatewaySoftwareRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateSmartAccessGatewaySoftwareRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateSmartAccessGatewaySoftwareRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateSmartAccessGatewaySoftwareRequest::getRegionId() const {
  return regionId_;
}

void CreateSmartAccessGatewaySoftwareRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CreateSmartAccessGatewaySoftwareRequest::getUserCount() const {
  return userCount_;
}

void CreateSmartAccessGatewaySoftwareRequest::setUserCount(int userCount) {
  userCount_ = userCount;
  setParameter(std::string("UserCount"), std::to_string(userCount));
}

int CreateSmartAccessGatewaySoftwareRequest::getPeriod() const {
  return period_;
}

void CreateSmartAccessGatewaySoftwareRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool CreateSmartAccessGatewaySoftwareRequest::getAutoPay() const {
  return autoPay_;
}

void CreateSmartAccessGatewaySoftwareRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateSmartAccessGatewaySoftwareRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateSmartAccessGatewaySoftwareRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateSmartAccessGatewaySoftwareRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateSmartAccessGatewaySoftwareRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateSmartAccessGatewaySoftwareRequest::getOwnerId() const {
  return ownerId_;
}

void CreateSmartAccessGatewaySoftwareRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateSmartAccessGatewaySoftwareRequest::getChargeType() const {
  return chargeType_;
}

void CreateSmartAccessGatewaySoftwareRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

long CreateSmartAccessGatewaySoftwareRequest::getDataPlan() const {
  return dataPlan_;
}

void CreateSmartAccessGatewaySoftwareRequest::setDataPlan(long dataPlan) {
  dataPlan_ = dataPlan;
  setParameter(std::string("DataPlan"), std::to_string(dataPlan));
}

