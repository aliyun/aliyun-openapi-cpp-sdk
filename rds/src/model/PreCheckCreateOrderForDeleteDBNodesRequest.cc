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

#include <alibabacloud/rds/model/PreCheckCreateOrderForDeleteDBNodesRequest.h>

using AlibabaCloud::Rds::Model::PreCheckCreateOrderForDeleteDBNodesRequest;

PreCheckCreateOrderForDeleteDBNodesRequest::PreCheckCreateOrderForDeleteDBNodesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "PreCheckCreateOrderForDeleteDBNodes") {
  setMethod(HttpRequest::Method::Post);
}

PreCheckCreateOrderForDeleteDBNodesRequest::~PreCheckCreateOrderForDeleteDBNodesRequest() {}

long PreCheckCreateOrderForDeleteDBNodesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string PreCheckCreateOrderForDeleteDBNodesRequest::getNodeType() const {
  return nodeType_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setNodeType(const std::string &nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("NodeType"), nodeType);
}

std::string PreCheckCreateOrderForDeleteDBNodesRequest::getDBNodeId() const {
  return dBNodeId_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setDBNodeId(const std::string &dBNodeId) {
  dBNodeId_ = dBNodeId;
  setParameter(std::string("DBNodeId"), dBNodeId);
}

std::string PreCheckCreateOrderForDeleteDBNodesRequest::getClientToken() const {
  return clientToken_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string PreCheckCreateOrderForDeleteDBNodesRequest::getEngineVersion() const {
  return engineVersion_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string PreCheckCreateOrderForDeleteDBNodesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string PreCheckCreateOrderForDeleteDBNodesRequest::getRegionId() const {
  return regionId_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string PreCheckCreateOrderForDeleteDBNodesRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string PreCheckCreateOrderForDeleteDBNodesRequest::getBusinessInfo() const {
  return businessInfo_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

bool PreCheckCreateOrderForDeleteDBNodesRequest::getAutoPay() const {
  return autoPay_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string PreCheckCreateOrderForDeleteDBNodesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string PreCheckCreateOrderForDeleteDBNodesRequest::getResource() const {
  return resource_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setResource(const std::string &resource) {
  resource_ = resource;
  setParameter(std::string("Resource"), resource);
}

std::string PreCheckCreateOrderForDeleteDBNodesRequest::getCommodityCode() const {
  return commodityCode_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

long PreCheckCreateOrderForDeleteDBNodesRequest::getOwnerId() const {
  return ownerId_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string PreCheckCreateOrderForDeleteDBNodesRequest::getPromotionCode() const {
  return promotionCode_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setPromotionCode(const std::string &promotionCode) {
  promotionCode_ = promotionCode;
  setParameter(std::string("PromotionCode"), promotionCode);
}

std::string PreCheckCreateOrderForDeleteDBNodesRequest::getZoneId() const {
  return zoneId_;
}

void PreCheckCreateOrderForDeleteDBNodesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

