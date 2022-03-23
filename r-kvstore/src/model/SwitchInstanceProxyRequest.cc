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

#include <alibabacloud/r-kvstore/model/SwitchInstanceProxyRequest.h>

using AlibabaCloud::R_kvstore::Model::SwitchInstanceProxyRequest;

SwitchInstanceProxyRequest::SwitchInstanceProxyRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "SwitchInstanceProxy") {
  setMethod(HttpRequest::Method::Post);
}

SwitchInstanceProxyRequest::~SwitchInstanceProxyRequest() {}

long SwitchInstanceProxyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SwitchInstanceProxyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SwitchInstanceProxyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SwitchInstanceProxyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SwitchInstanceProxyRequest::getSecurityToken() const {
  return securityToken_;
}

void SwitchInstanceProxyRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string SwitchInstanceProxyRequest::getProduct() const {
  return product_;
}

void SwitchInstanceProxyRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string SwitchInstanceProxyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SwitchInstanceProxyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SwitchInstanceProxyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SwitchInstanceProxyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SwitchInstanceProxyRequest::getOwnerId() const {
  return ownerId_;
}

void SwitchInstanceProxyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SwitchInstanceProxyRequest::getInstanceId() const {
  return instanceId_;
}

void SwitchInstanceProxyRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SwitchInstanceProxyRequest::getCategory() const {
  return category_;
}

void SwitchInstanceProxyRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

