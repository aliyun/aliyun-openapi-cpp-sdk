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

#include <alibabacloud/r-kvstore/model/ModifyInstanceAttributeRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceAttributeRequest;

ModifyInstanceAttributeRequest::ModifyInstanceAttributeRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceAttributeRequest::~ModifyInstanceAttributeRequest() {}

long ModifyInstanceAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyInstanceAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyInstanceAttributeRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyInstanceAttributeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyInstanceAttributeRequest::getProduct() const {
  return product_;
}

void ModifyInstanceAttributeRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

bool ModifyInstanceAttributeRequest::getInstanceReleaseProtection() const {
  return instanceReleaseProtection_;
}

void ModifyInstanceAttributeRequest::setInstanceReleaseProtection(bool instanceReleaseProtection) {
  instanceReleaseProtection_ = instanceReleaseProtection;
  setParameter(std::string("InstanceReleaseProtection"), instanceReleaseProtection ? "true" : "false");
}

std::string ModifyInstanceAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstanceAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceAttributeRequest::getNewPassword() const {
  return newPassword_;
}

void ModifyInstanceAttributeRequest::setNewPassword(const std::string &newPassword) {
  newPassword_ = newPassword;
  setParameter(std::string("NewPassword"), newPassword);
}

std::string ModifyInstanceAttributeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceAttributeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceAttributeRequest::getInstanceName() const {
  return instanceName_;
}

void ModifyInstanceAttributeRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string ModifyInstanceAttributeRequest::getCategory() const {
  return category_;
}

void ModifyInstanceAttributeRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

