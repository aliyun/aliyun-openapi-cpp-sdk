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

#include <alibabacloud/smartag/model/UpgradeSmartAccessGatewaySoftwareRequest.h>

using AlibabaCloud::Smartag::Model::UpgradeSmartAccessGatewaySoftwareRequest;

UpgradeSmartAccessGatewaySoftwareRequest::UpgradeSmartAccessGatewaySoftwareRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "UpgradeSmartAccessGatewaySoftware") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeSmartAccessGatewaySoftwareRequest::~UpgradeSmartAccessGatewaySoftwareRequest() {}

long UpgradeSmartAccessGatewaySoftwareRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpgradeSmartAccessGatewaySoftwareRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpgradeSmartAccessGatewaySoftwareRequest::getRegionId() const {
  return regionId_;
}

void UpgradeSmartAccessGatewaySoftwareRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int UpgradeSmartAccessGatewaySoftwareRequest::getUserCount() const {
  return userCount_;
}

void UpgradeSmartAccessGatewaySoftwareRequest::setUserCount(int userCount) {
  userCount_ = userCount;
  setParameter(std::string("UserCount"), std::to_string(userCount));
}

bool UpgradeSmartAccessGatewaySoftwareRequest::getAutoPay() const {
  return autoPay_;
}

void UpgradeSmartAccessGatewaySoftwareRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string UpgradeSmartAccessGatewaySoftwareRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpgradeSmartAccessGatewaySoftwareRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpgradeSmartAccessGatewaySoftwareRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpgradeSmartAccessGatewaySoftwareRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpgradeSmartAccessGatewaySoftwareRequest::getOwnerId() const {
  return ownerId_;
}

void UpgradeSmartAccessGatewaySoftwareRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpgradeSmartAccessGatewaySoftwareRequest::getSmartAGId() const {
  return smartAGId_;
}

void UpgradeSmartAccessGatewaySoftwareRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

long UpgradeSmartAccessGatewaySoftwareRequest::getDataPlan() const {
  return dataPlan_;
}

void UpgradeSmartAccessGatewaySoftwareRequest::setDataPlan(long dataPlan) {
  dataPlan_ = dataPlan;
  setParameter(std::string("DataPlan"), std::to_string(dataPlan));
}

