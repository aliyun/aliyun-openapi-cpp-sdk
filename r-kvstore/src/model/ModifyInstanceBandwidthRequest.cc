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

#include <alibabacloud/r-kvstore/model/ModifyInstanceBandwidthRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceBandwidthRequest;

ModifyInstanceBandwidthRequest::ModifyInstanceBandwidthRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceBandwidth") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceBandwidthRequest::~ModifyInstanceBandwidthRequest() {}

long ModifyInstanceBandwidthRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceBandwidthRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceBandwidthRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyInstanceBandwidthRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyInstanceBandwidthRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyInstanceBandwidthRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyInstanceBandwidthRequest::getProduct() const {
  return product_;
}

void ModifyInstanceBandwidthRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string ModifyInstanceBandwidthRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceBandwidthRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceBandwidthRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceBandwidthRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstanceBandwidthRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceBandwidthRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceBandwidthRequest::getTargetIntranetBandwidth() const {
  return targetIntranetBandwidth_;
}

void ModifyInstanceBandwidthRequest::setTargetIntranetBandwidth(const std::string &targetIntranetBandwidth) {
  targetIntranetBandwidth_ = targetIntranetBandwidth;
  setParameter(std::string("TargetIntranetBandwidth"), targetIntranetBandwidth);
}

std::string ModifyInstanceBandwidthRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceBandwidthRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceBandwidthRequest::getCategory() const {
  return category_;
}

void ModifyInstanceBandwidthRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

