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

#include <alibabacloud/r-kvstore/model/ModifyInstanceAutoRenewalAttributeRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceAutoRenewalAttributeRequest;

ModifyInstanceAutoRenewalAttributeRequest::ModifyInstanceAutoRenewalAttributeRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceAutoRenewalAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceAutoRenewalAttributeRequest::~ModifyInstanceAutoRenewalAttributeRequest() {}

long ModifyInstanceAutoRenewalAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getDuration() const {
  return duration_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setDuration(const std::string &duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), duration);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getProduct() const {
  return product_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstanceAutoRenewalAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getAutoRenew() const {
  return autoRenew_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

