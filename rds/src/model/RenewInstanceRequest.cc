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

#include <alibabacloud/rds/model/RenewInstanceRequest.h>

using AlibabaCloud::Rds::Model::RenewInstanceRequest;

RenewInstanceRequest::RenewInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "RenewInstance") {
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

bool RenewInstanceRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void RenewInstanceRequest::setAutoUseCoupon(bool autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon ? "true" : "false");
}

std::string RenewInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RenewInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RenewInstanceRequest::getRegionId() const {
  return regionId_;
}

void RenewInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RenewInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void RenewInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string RenewInstanceRequest::getBusinessInfo() const {
  return businessInfo_;
}

void RenewInstanceRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

int RenewInstanceRequest::getPeriod() const {
  return period_;
}

void RenewInstanceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string RenewInstanceRequest::getAutoPay() const {
  return autoPay_;
}

void RenewInstanceRequest::setAutoPay(const std::string &autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay);
}

std::string RenewInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RenewInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long RenewInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void RenewInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RenewInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void RenewInstanceRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string RenewInstanceRequest::getPromotionCode() const {
  return promotionCode_;
}

void RenewInstanceRequest::setPromotionCode(const std::string &promotionCode) {
  promotionCode_ = promotionCode;
  setParameter(std::string("PromotionCode"), promotionCode);
}

