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

#include <alibabacloud/r-kvstore/model/ModifyInstanceTDERequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceTDERequest;

ModifyInstanceTDERequest::ModifyInstanceTDERequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceTDE") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceTDERequest::~ModifyInstanceTDERequest() {}

long ModifyInstanceTDERequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceTDERequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceTDERequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyInstanceTDERequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyInstanceTDERequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyInstanceTDERequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyInstanceTDERequest::getProduct() const {
  return product_;
}

void ModifyInstanceTDERequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string ModifyInstanceTDERequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceTDERequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceTDERequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceTDERequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyInstanceTDERequest::getEncryptionKey() const {
  return encryptionKey_;
}

void ModifyInstanceTDERequest::setEncryptionKey(const std::string &encryptionKey) {
  encryptionKey_ = encryptionKey;
  setParameter(std::string("EncryptionKey"), encryptionKey);
}

long ModifyInstanceTDERequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceTDERequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceTDERequest::getEncryptionName() const {
  return encryptionName_;
}

void ModifyInstanceTDERequest::setEncryptionName(const std::string &encryptionName) {
  encryptionName_ = encryptionName;
  setParameter(std::string("EncryptionName"), encryptionName);
}

std::string ModifyInstanceTDERequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceTDERequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceTDERequest::getRoleArn() const {
  return roleArn_;
}

void ModifyInstanceTDERequest::setRoleArn(const std::string &roleArn) {
  roleArn_ = roleArn;
  setParameter(std::string("RoleArn"), roleArn);
}

std::string ModifyInstanceTDERequest::getCategory() const {
  return category_;
}

void ModifyInstanceTDERequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string ModifyInstanceTDERequest::getTDEStatus() const {
  return tDEStatus_;
}

void ModifyInstanceTDERequest::setTDEStatus(const std::string &tDEStatus) {
  tDEStatus_ = tDEStatus;
  setParameter(std::string("TDEStatus"), tDEStatus);
}

