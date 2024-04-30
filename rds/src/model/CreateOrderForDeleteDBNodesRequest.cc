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

#include <alibabacloud/rds/model/CreateOrderForDeleteDBNodesRequest.h>

using AlibabaCloud::Rds::Model::CreateOrderForDeleteDBNodesRequest;

CreateOrderForDeleteDBNodesRequest::CreateOrderForDeleteDBNodesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateOrderForDeleteDBNodes") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrderForDeleteDBNodesRequest::~CreateOrderForDeleteDBNodesRequest() {}

long CreateOrderForDeleteDBNodesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateOrderForDeleteDBNodesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateOrderForDeleteDBNodesRequest::getNodeType() const {
  return nodeType_;
}

void CreateOrderForDeleteDBNodesRequest::setNodeType(const std::string &nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("NodeType"), nodeType);
}

std::string CreateOrderForDeleteDBNodesRequest::getDBNodeId() const {
  return dBNodeId_;
}

void CreateOrderForDeleteDBNodesRequest::setDBNodeId(const std::string &dBNodeId) {
  dBNodeId_ = dBNodeId;
  setParameter(std::string("DBNodeId"), dBNodeId);
}

std::string CreateOrderForDeleteDBNodesRequest::getClientToken() const {
  return clientToken_;
}

void CreateOrderForDeleteDBNodesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateOrderForDeleteDBNodesRequest::getEngineVersion() const {
  return engineVersion_;
}

void CreateOrderForDeleteDBNodesRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string CreateOrderForDeleteDBNodesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateOrderForDeleteDBNodesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateOrderForDeleteDBNodesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateOrderForDeleteDBNodesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateOrderForDeleteDBNodesRequest::getRegionId() const {
  return regionId_;
}

void CreateOrderForDeleteDBNodesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateOrderForDeleteDBNodesRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateOrderForDeleteDBNodesRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateOrderForDeleteDBNodesRequest::getBusinessInfo() const {
  return businessInfo_;
}

void CreateOrderForDeleteDBNodesRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

bool CreateOrderForDeleteDBNodesRequest::getAutoPay() const {
  return autoPay_;
}

void CreateOrderForDeleteDBNodesRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateOrderForDeleteDBNodesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateOrderForDeleteDBNodesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateOrderForDeleteDBNodesRequest::getResource() const {
  return resource_;
}

void CreateOrderForDeleteDBNodesRequest::setResource(const std::string &resource) {
  resource_ = resource;
  setParameter(std::string("Resource"), resource);
}

std::string CreateOrderForDeleteDBNodesRequest::getCommodityCode() const {
  return commodityCode_;
}

void CreateOrderForDeleteDBNodesRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

long CreateOrderForDeleteDBNodesRequest::getOwnerId() const {
  return ownerId_;
}

void CreateOrderForDeleteDBNodesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateOrderForDeleteDBNodesRequest::getPromotionCode() const {
  return promotionCode_;
}

void CreateOrderForDeleteDBNodesRequest::setPromotionCode(const std::string &promotionCode) {
  promotionCode_ = promotionCode;
  setParameter(std::string("PromotionCode"), promotionCode);
}

std::string CreateOrderForDeleteDBNodesRequest::getZoneId() const {
  return zoneId_;
}

void CreateOrderForDeleteDBNodesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

