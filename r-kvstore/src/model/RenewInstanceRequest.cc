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

#include <alibabacloud/r-kvstore/model/RenewInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::RenewInstanceRequest;

RenewInstanceRequest::RenewInstanceRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "RenewInstance") {
  setMethod(HttpRequest::Method::Post);
}

RenewInstanceRequest::~RenewInstanceRequest() {}

long RenewInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RenewInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RenewInstanceRequest::getClientToken() const {
  return clientToken_;
}

void RenewInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RenewInstanceRequest::getCouponNo() const {
  return couponNo_;
}

void RenewInstanceRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

std::string RenewInstanceRequest::getInstanceClass() const {
  return instanceClass_;
}

void RenewInstanceRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

std::string RenewInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RenewInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RenewInstanceRequest::getCapacity() const {
  return capacity_;
}

void RenewInstanceRequest::setCapacity(const std::string &capacity) {
  capacity_ = capacity;
  setParameter(std::string("Capacity"), capacity);
}

std::string RenewInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void RenewInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string RenewInstanceRequest::getBusinessInfo() const {
  return businessInfo_;
}

void RenewInstanceRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

long RenewInstanceRequest::getPeriod() const {
  return period_;
}

void RenewInstanceRequest::setPeriod(long period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool RenewInstanceRequest::getAutoPay() const {
  return autoPay_;
}

void RenewInstanceRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string RenewInstanceRequest::getFromApp() const {
  return fromApp_;
}

void RenewInstanceRequest::setFromApp(const std::string &fromApp) {
  fromApp_ = fromApp;
  setParameter(std::string("FromApp"), fromApp);
}

std::string RenewInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RenewInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RenewInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RenewInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RenewInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void RenewInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RenewInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RenewInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool RenewInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void RenewInstanceRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

bool RenewInstanceRequest::getForceUpgrade() const {
  return forceUpgrade_;
}

void RenewInstanceRequest::setForceUpgrade(bool forceUpgrade) {
  forceUpgrade_ = forceUpgrade;
  setParameter(std::string("ForceUpgrade"), forceUpgrade ? "true" : "false");
}

