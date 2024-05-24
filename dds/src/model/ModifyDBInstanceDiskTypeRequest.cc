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

#include <alibabacloud/dds/model/ModifyDBInstanceDiskTypeRequest.h>

using AlibabaCloud::Dds::Model::ModifyDBInstanceDiskTypeRequest;

ModifyDBInstanceDiskTypeRequest::ModifyDBInstanceDiskTypeRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyDBInstanceDiskType") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceDiskTypeRequest::~ModifyDBInstanceDiskTypeRequest() {}

long ModifyDBInstanceDiskTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceDiskTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceDiskTypeRequest::getExtraParam() const {
  return extraParam_;
}

void ModifyDBInstanceDiskTypeRequest::setExtraParam(const std::string &extraParam) {
  extraParam_ = extraParam;
  setParameter(std::string("ExtraParam"), extraParam);
}

std::string ModifyDBInstanceDiskTypeRequest::getCouponNo() const {
  return couponNo_;
}

void ModifyDBInstanceDiskTypeRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

std::string ModifyDBInstanceDiskTypeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceDiskTypeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceDiskTypeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceDiskTypeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceDiskTypeRequest::getDbInstanceStorageType() const {
  return dbInstanceStorageType_;
}

void ModifyDBInstanceDiskTypeRequest::setDbInstanceStorageType(const std::string &dbInstanceStorageType) {
  dbInstanceStorageType_ = dbInstanceStorageType;
  setParameter(std::string("DbInstanceStorageType"), dbInstanceStorageType);
}

std::string ModifyDBInstanceDiskTypeRequest::getBusinessInfo() const {
  return businessInfo_;
}

void ModifyDBInstanceDiskTypeRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

bool ModifyDBInstanceDiskTypeRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyDBInstanceDiskTypeRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

long ModifyDBInstanceDiskTypeRequest::getProvisionedIops() const {
  return provisionedIops_;
}

void ModifyDBInstanceDiskTypeRequest::setProvisionedIops(long provisionedIops) {
  provisionedIops_ = provisionedIops;
  setParameter(std::string("ProvisionedIops"), std::to_string(provisionedIops));
}

std::string ModifyDBInstanceDiskTypeRequest::getAutoRenew() const {
  return autoRenew_;
}

void ModifyDBInstanceDiskTypeRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string ModifyDBInstanceDiskTypeRequest::getOrderType() const {
  return orderType_;
}

void ModifyDBInstanceDiskTypeRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

