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

#include <alibabacloud/dds/model/ModifyDBInstanceSpecRequest.h>

using AlibabaCloud::Dds::Model::ModifyDBInstanceSpecRequest;

ModifyDBInstanceSpecRequest::ModifyDBInstanceSpecRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyDBInstanceSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceSpecRequest::~ModifyDBInstanceSpecRequest() {}

long ModifyDBInstanceSpecRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceSpecRequest::getDBInstanceStorage() const {
  return dBInstanceStorage_;
}

void ModifyDBInstanceSpecRequest::setDBInstanceStorage(const std::string &dBInstanceStorage) {
  dBInstanceStorage_ = dBInstanceStorage;
  setParameter(std::string("DBInstanceStorage"), dBInstanceStorage);
}

std::string ModifyDBInstanceSpecRequest::getReadonlyReplicas() const {
  return readonlyReplicas_;
}

void ModifyDBInstanceSpecRequest::setReadonlyReplicas(const std::string &readonlyReplicas) {
  readonlyReplicas_ = readonlyReplicas;
  setParameter(std::string("ReadonlyReplicas"), readonlyReplicas);
}

std::string ModifyDBInstanceSpecRequest::getExtraParam() const {
  return extraParam_;
}

void ModifyDBInstanceSpecRequest::setExtraParam(const std::string &extraParam) {
  extraParam_ = extraParam;
  setParameter(std::string("ExtraParam"), extraParam);
}

std::string ModifyDBInstanceSpecRequest::getCouponNo() const {
  return couponNo_;
}

void ModifyDBInstanceSpecRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

std::string ModifyDBInstanceSpecRequest::getReplicationFactor() const {
  return replicationFactor_;
}

void ModifyDBInstanceSpecRequest::setReplicationFactor(const std::string &replicationFactor) {
  replicationFactor_ = replicationFactor;
  setParameter(std::string("ReplicationFactor"), replicationFactor);
}

std::string ModifyDBInstanceSpecRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceSpecRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceSpecRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void ModifyDBInstanceSpecRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string ModifyDBInstanceSpecRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceSpecRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceSpecRequest::getBusinessInfo() const {
  return businessInfo_;
}

void ModifyDBInstanceSpecRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

bool ModifyDBInstanceSpecRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyDBInstanceSpecRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string ModifyDBInstanceSpecRequest::getFromApp() const {
  return fromApp_;
}

void ModifyDBInstanceSpecRequest::setFromApp(const std::string &fromApp) {
  fromApp_ = fromApp;
  setParameter(std::string("FromApp"), fromApp);
}

std::string ModifyDBInstanceSpecRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceSpecRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstanceSpecRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBInstanceSpecRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBInstanceSpecRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceSpecRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBInstanceSpecRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void ModifyDBInstanceSpecRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string ModifyDBInstanceSpecRequest::getOrderType() const {
  return orderType_;
}

void ModifyDBInstanceSpecRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

