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

#include <alibabacloud/r-kvstore/model/SwitchInstanceHARequest.h>

using AlibabaCloud::R_kvstore::Model::SwitchInstanceHARequest;

SwitchInstanceHARequest::SwitchInstanceHARequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "SwitchInstanceHA") {
  setMethod(HttpRequest::Method::Post);
}

SwitchInstanceHARequest::~SwitchInstanceHARequest() {}

long SwitchInstanceHARequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SwitchInstanceHARequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SwitchInstanceHARequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SwitchInstanceHARequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int SwitchInstanceHARequest::getSwitchMode() const {
  return switchMode_;
}

void SwitchInstanceHARequest::setSwitchMode(int switchMode) {
  switchMode_ = switchMode;
  setParameter(std::string("SwitchMode"), std::to_string(switchMode));
}

std::string SwitchInstanceHARequest::getSecurityToken() const {
  return securityToken_;
}

void SwitchInstanceHARequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string SwitchInstanceHARequest::getNodeId() const {
  return nodeId_;
}

void SwitchInstanceHARequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string SwitchInstanceHARequest::getProduct() const {
  return product_;
}

void SwitchInstanceHARequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string SwitchInstanceHARequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SwitchInstanceHARequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SwitchInstanceHARequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SwitchInstanceHARequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SwitchInstanceHARequest::getOwnerId() const {
  return ownerId_;
}

void SwitchInstanceHARequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SwitchInstanceHARequest::getInstanceId() const {
  return instanceId_;
}

void SwitchInstanceHARequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SwitchInstanceHARequest::getSwitchType() const {
  return switchType_;
}

void SwitchInstanceHARequest::setSwitchType(const std::string &switchType) {
  switchType_ = switchType;
  setParameter(std::string("SwitchType"), switchType);
}

std::string SwitchInstanceHARequest::getCategory() const {
  return category_;
}

void SwitchInstanceHARequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

int SwitchInstanceHARequest::getSwitchZone() const {
  return switchZone_;
}

void SwitchInstanceHARequest::setSwitchZone(int switchZone) {
  switchZone_ = switchZone;
  setParameter(std::string("SwitchZone"), std::to_string(switchZone));
}

