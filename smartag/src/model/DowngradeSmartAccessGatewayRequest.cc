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

#include <alibabacloud/smartag/model/DowngradeSmartAccessGatewayRequest.h>

using AlibabaCloud::Smartag::Model::DowngradeSmartAccessGatewayRequest;

DowngradeSmartAccessGatewayRequest::DowngradeSmartAccessGatewayRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DowngradeSmartAccessGateway") {
  setMethod(HttpRequest::Method::Post);
}

DowngradeSmartAccessGatewayRequest::~DowngradeSmartAccessGatewayRequest() {}

long DowngradeSmartAccessGatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DowngradeSmartAccessGatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long DowngradeSmartAccessGatewayRequest::getBandWidthSpec() const {
  return bandWidthSpec_;
}

void DowngradeSmartAccessGatewayRequest::setBandWidthSpec(long bandWidthSpec) {
  bandWidthSpec_ = bandWidthSpec;
  setParameter(std::string("BandWidthSpec"), std::to_string(bandWidthSpec));
}

std::string DowngradeSmartAccessGatewayRequest::getRegionId() const {
  return regionId_;
}

void DowngradeSmartAccessGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DowngradeSmartAccessGatewayRequest::getUserCount() const {
  return userCount_;
}

void DowngradeSmartAccessGatewayRequest::setUserCount(int userCount) {
  userCount_ = userCount;
  setParameter(std::string("UserCount"), std::to_string(userCount));
}

bool DowngradeSmartAccessGatewayRequest::getAutoPay() const {
  return autoPay_;
}

void DowngradeSmartAccessGatewayRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string DowngradeSmartAccessGatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DowngradeSmartAccessGatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DowngradeSmartAccessGatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DowngradeSmartAccessGatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DowngradeSmartAccessGatewayRequest::getOwnerId() const {
  return ownerId_;
}

void DowngradeSmartAccessGatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DowngradeSmartAccessGatewayRequest::getSmartAGId() const {
  return smartAGId_;
}

void DowngradeSmartAccessGatewayRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

long DowngradeSmartAccessGatewayRequest::getDataPlan() const {
  return dataPlan_;
}

void DowngradeSmartAccessGatewayRequest::setDataPlan(long dataPlan) {
  dataPlan_ = dataPlan;
  setParameter(std::string("DataPlan"), std::to_string(dataPlan));
}

