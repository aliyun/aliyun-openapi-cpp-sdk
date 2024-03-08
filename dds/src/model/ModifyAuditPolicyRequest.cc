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

#include <alibabacloud/dds/model/ModifyAuditPolicyRequest.h>

using AlibabaCloud::Dds::Model::ModifyAuditPolicyRequest;

ModifyAuditPolicyRequest::ModifyAuditPolicyRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyAuditPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAuditPolicyRequest::~ModifyAuditPolicyRequest() {}

long ModifyAuditPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyAuditPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ModifyAuditPolicyRequest::getStoragePeriod() const {
  return storagePeriod_;
}

void ModifyAuditPolicyRequest::setStoragePeriod(int storagePeriod) {
  storagePeriod_ = storagePeriod;
  setParameter(std::string("StoragePeriod"), std::to_string(storagePeriod));
}

std::string ModifyAuditPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyAuditPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyAuditPolicyRequest::getAuditLogSwitchSource() const {
  return auditLogSwitchSource_;
}

void ModifyAuditPolicyRequest::setAuditLogSwitchSource(const std::string &auditLogSwitchSource) {
  auditLogSwitchSource_ = auditLogSwitchSource;
  setParameter(std::string("AuditLogSwitchSource"), auditLogSwitchSource);
}

std::string ModifyAuditPolicyRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyAuditPolicyRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyAuditPolicyRequest::getAuditStatus() const {
  return auditStatus_;
}

void ModifyAuditPolicyRequest::setAuditStatus(const std::string &auditStatus) {
  auditStatus_ = auditStatus;
  setParameter(std::string("AuditStatus"), auditStatus);
}

std::string ModifyAuditPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyAuditPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyAuditPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyAuditPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyAuditPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyAuditPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyAuditPolicyRequest::getServiceType() const {
  return serviceType_;
}

void ModifyAuditPolicyRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

