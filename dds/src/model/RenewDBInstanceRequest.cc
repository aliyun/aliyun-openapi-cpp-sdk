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

#include <alibabacloud/dds/model/RenewDBInstanceRequest.h>

using AlibabaCloud::Dds::Model::RenewDBInstanceRequest;

RenewDBInstanceRequest::RenewDBInstanceRequest()
    : RpcServiceRequest("dds", "2015-12-01", "RenewDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

RenewDBInstanceRequest::~RenewDBInstanceRequest() {}

long RenewDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RenewDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RenewDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void RenewDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RenewDBInstanceRequest::getCouponNo() const {
  return couponNo_;
}

void RenewDBInstanceRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

std::string RenewDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RenewDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RenewDBInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void RenewDBInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string RenewDBInstanceRequest::getBusinessInfo() const {
  return businessInfo_;
}

void RenewDBInstanceRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

int RenewDBInstanceRequest::getPeriod() const {
  return period_;
}

void RenewDBInstanceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool RenewDBInstanceRequest::getAutoPay() const {
  return autoPay_;
}

void RenewDBInstanceRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string RenewDBInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RenewDBInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RenewDBInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RenewDBInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RenewDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void RenewDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool RenewDBInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void RenewDBInstanceRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

