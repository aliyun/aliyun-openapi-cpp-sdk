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

#include <alibabacloud/r-kvstore/model/TransformToPrePaidRequest.h>

using AlibabaCloud::R_kvstore::Model::TransformToPrePaidRequest;

TransformToPrePaidRequest::TransformToPrePaidRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "TransformToPrePaid") {
  setMethod(HttpRequest::Method::Post);
}

TransformToPrePaidRequest::~TransformToPrePaidRequest() {}

long TransformToPrePaidRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void TransformToPrePaidRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string TransformToPrePaidRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void TransformToPrePaidRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string TransformToPrePaidRequest::getSecurityToken() const {
  return securityToken_;
}

void TransformToPrePaidRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

long TransformToPrePaidRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void TransformToPrePaidRequest::setAutoRenewPeriod(long autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

long TransformToPrePaidRequest::getPeriod() const {
  return period_;
}

void TransformToPrePaidRequest::setPeriod(long period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool TransformToPrePaidRequest::getAutoPay() const {
  return autoPay_;
}

void TransformToPrePaidRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string TransformToPrePaidRequest::getFromApp() const {
  return fromApp_;
}

void TransformToPrePaidRequest::setFromApp(const std::string &fromApp) {
  fromApp_ = fromApp;
  setParameter(std::string("FromApp"), fromApp);
}

std::string TransformToPrePaidRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void TransformToPrePaidRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string TransformToPrePaidRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void TransformToPrePaidRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long TransformToPrePaidRequest::getOwnerId() const {
  return ownerId_;
}

void TransformToPrePaidRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string TransformToPrePaidRequest::getInstanceId() const {
  return instanceId_;
}

void TransformToPrePaidRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string TransformToPrePaidRequest::getAutoRenew() const {
  return autoRenew_;
}

void TransformToPrePaidRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string TransformToPrePaidRequest::getChargeType() const {
  return chargeType_;
}

void TransformToPrePaidRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

