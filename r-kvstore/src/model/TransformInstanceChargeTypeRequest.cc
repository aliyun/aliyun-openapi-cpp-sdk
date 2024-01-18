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

#include <alibabacloud/r-kvstore/model/TransformInstanceChargeTypeRequest.h>

using AlibabaCloud::R_kvstore::Model::TransformInstanceChargeTypeRequest;

TransformInstanceChargeTypeRequest::TransformInstanceChargeTypeRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "TransformInstanceChargeType") {
  setMethod(HttpRequest::Method::Post);
}

TransformInstanceChargeTypeRequest::~TransformInstanceChargeTypeRequest() {}

long TransformInstanceChargeTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void TransformInstanceChargeTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string TransformInstanceChargeTypeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void TransformInstanceChargeTypeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string TransformInstanceChargeTypeRequest::getSecurityToken() const {
  return securityToken_;
}

void TransformInstanceChargeTypeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

long TransformInstanceChargeTypeRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void TransformInstanceChargeTypeRequest::setAutoRenewPeriod(long autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), std::to_string(autoRenewPeriod));
}

long TransformInstanceChargeTypeRequest::getPeriod() const {
  return period_;
}

void TransformInstanceChargeTypeRequest::setPeriod(long period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool TransformInstanceChargeTypeRequest::getAutoPay() const {
  return autoPay_;
}

void TransformInstanceChargeTypeRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string TransformInstanceChargeTypeRequest::getFromApp() const {
  return fromApp_;
}

void TransformInstanceChargeTypeRequest::setFromApp(const std::string &fromApp) {
  fromApp_ = fromApp;
  setParameter(std::string("FromApp"), fromApp);
}

std::string TransformInstanceChargeTypeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void TransformInstanceChargeTypeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string TransformInstanceChargeTypeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void TransformInstanceChargeTypeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long TransformInstanceChargeTypeRequest::getOwnerId() const {
  return ownerId_;
}

void TransformInstanceChargeTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string TransformInstanceChargeTypeRequest::getInstanceId() const {
  return instanceId_;
}

void TransformInstanceChargeTypeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string TransformInstanceChargeTypeRequest::getAutoRenew() const {
  return autoRenew_;
}

void TransformInstanceChargeTypeRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string TransformInstanceChargeTypeRequest::getChargeType() const {
  return chargeType_;
}

void TransformInstanceChargeTypeRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

