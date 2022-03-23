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

#include <alibabacloud/r-kvstore/model/ModifySecurityGroupConfigurationRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifySecurityGroupConfigurationRequest;

ModifySecurityGroupConfigurationRequest::ModifySecurityGroupConfigurationRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifySecurityGroupConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

ModifySecurityGroupConfigurationRequest::~ModifySecurityGroupConfigurationRequest() {}

long ModifySecurityGroupConfigurationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySecurityGroupConfigurationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySecurityGroupConfigurationRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void ModifySecurityGroupConfigurationRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string ModifySecurityGroupConfigurationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifySecurityGroupConfigurationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifySecurityGroupConfigurationRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifySecurityGroupConfigurationRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifySecurityGroupConfigurationRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifySecurityGroupConfigurationRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifySecurityGroupConfigurationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySecurityGroupConfigurationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySecurityGroupConfigurationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySecurityGroupConfigurationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySecurityGroupConfigurationRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySecurityGroupConfigurationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

