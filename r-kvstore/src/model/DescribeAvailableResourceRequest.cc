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

#include <alibabacloud/r-kvstore/model/DescribeAvailableResourceRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeAvailableResourceRequest;

DescribeAvailableResourceRequest::DescribeAvailableResourceRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeAvailableResource") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAvailableResourceRequest::~DescribeAvailableResourceRequest() {}

long DescribeAvailableResourceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAvailableResourceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAvailableResourceRequest::getInstanceClass() const {
  return instanceClass_;
}

void DescribeAvailableResourceRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

std::string DescribeAvailableResourceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAvailableResourceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAvailableResourceRequest::getProductType() const {
  return productType_;
}

void DescribeAvailableResourceRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string DescribeAvailableResourceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeAvailableResourceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeAvailableResourceRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeAvailableResourceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeAvailableResourceRequest::getRegionId() const {
  return regionId_;
}

void DescribeAvailableResourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeAvailableResourceRequest::getEngine() const {
  return engine_;
}

void DescribeAvailableResourceRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string DescribeAvailableResourceRequest::getExcludeZoneId() const {
  return excludeZoneId_;
}

void DescribeAvailableResourceRequest::setExcludeZoneId(const std::string &excludeZoneId) {
  excludeZoneId_ = excludeZoneId;
  setParameter(std::string("ExcludeZoneId"), excludeZoneId);
}

std::string DescribeAvailableResourceRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void DescribeAvailableResourceRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string DescribeAvailableResourceRequest::getNodeId() const {
  return nodeId_;
}

void DescribeAvailableResourceRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string DescribeAvailableResourceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAvailableResourceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAvailableResourceRequest::getLevel() const {
  return level_;
}

void DescribeAvailableResourceRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string DescribeAvailableResourceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAvailableResourceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeAvailableResourceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAvailableResourceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeAvailableResourceRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeAvailableResourceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeAvailableResourceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DescribeAvailableResourceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string DescribeAvailableResourceRequest::getZoneId() const {
  return zoneId_;
}

void DescribeAvailableResourceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

bool DescribeAvailableResourceRequest::getFromConsole() const {
  return fromConsole_;
}

void DescribeAvailableResourceRequest::setFromConsole(bool fromConsole) {
  fromConsole_ = fromConsole;
  setParameter(std::string("FromConsole"), fromConsole ? "true" : "false");
}

std::string DescribeAvailableResourceRequest::getInstanceScene() const {
  return instanceScene_;
}

void DescribeAvailableResourceRequest::setInstanceScene(const std::string &instanceScene) {
  instanceScene_ = instanceScene;
  setParameter(std::string("InstanceScene"), instanceScene);
}

std::string DescribeAvailableResourceRequest::getOrderType() const {
  return orderType_;
}

void DescribeAvailableResourceRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

