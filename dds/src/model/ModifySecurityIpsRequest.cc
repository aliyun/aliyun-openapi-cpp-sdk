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

#include <alibabacloud/dds/model/ModifySecurityIpsRequest.h>

using AlibabaCloud::Dds::Model::ModifySecurityIpsRequest;

ModifySecurityIpsRequest::ModifySecurityIpsRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifySecurityIps") {
  setMethod(HttpRequest::Method::Post);
}

ModifySecurityIpsRequest::~ModifySecurityIpsRequest() {}

long ModifySecurityIpsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySecurityIpsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySecurityIpsRequest::getSecurityIps() const {
  return securityIps_;
}

void ModifySecurityIpsRequest::setSecurityIps(const std::string &securityIps) {
  securityIps_ = securityIps;
  setParameter(std::string("SecurityIps"), securityIps);
}

std::string ModifySecurityIpsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifySecurityIpsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifySecurityIpsRequest::getSecurityIpGroupName() const {
  return securityIpGroupName_;
}

void ModifySecurityIpsRequest::setSecurityIpGroupName(const std::string &securityIpGroupName) {
  securityIpGroupName_ = securityIpGroupName;
  setParameter(std::string("SecurityIpGroupName"), securityIpGroupName);
}

std::string ModifySecurityIpsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifySecurityIpsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifySecurityIpsRequest::getModifyMode() const {
  return modifyMode_;
}

void ModifySecurityIpsRequest::setModifyMode(const std::string &modifyMode) {
  modifyMode_ = modifyMode;
  setParameter(std::string("ModifyMode"), modifyMode);
}

std::string ModifySecurityIpsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySecurityIpsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySecurityIpsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySecurityIpsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySecurityIpsRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySecurityIpsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySecurityIpsRequest::getSecurityIpGroupAttribute() const {
  return securityIpGroupAttribute_;
}

void ModifySecurityIpsRequest::setSecurityIpGroupAttribute(const std::string &securityIpGroupAttribute) {
  securityIpGroupAttribute_ = securityIpGroupAttribute;
  setParameter(std::string("SecurityIpGroupAttribute"), securityIpGroupAttribute);
}

