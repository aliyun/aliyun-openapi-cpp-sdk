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

#include <alibabacloud/smartag/model/DeleteRouteDistributionStrategyRequest.h>

using AlibabaCloud::Smartag::Model::DeleteRouteDistributionStrategyRequest;

DeleteRouteDistributionStrategyRequest::DeleteRouteDistributionStrategyRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DeleteRouteDistributionStrategy") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRouteDistributionStrategyRequest::~DeleteRouteDistributionStrategyRequest() {}

std::string DeleteRouteDistributionStrategyRequest::getRouteSource() const {
  return routeSource_;
}

void DeleteRouteDistributionStrategyRequest::setRouteSource(const std::string &routeSource) {
  routeSource_ = routeSource;
  setParameter(std::string("RouteSource"), routeSource);
}

long DeleteRouteDistributionStrategyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteRouteDistributionStrategyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteRouteDistributionStrategyRequest::getRegionId() const {
  return regionId_;
}

void DeleteRouteDistributionStrategyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteRouteDistributionStrategyRequest::getSourceType() const {
  return sourceType_;
}

void DeleteRouteDistributionStrategyRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

std::string DeleteRouteDistributionStrategyRequest::getDestCidrBlock() const {
  return destCidrBlock_;
}

void DeleteRouteDistributionStrategyRequest::setDestCidrBlock(const std::string &destCidrBlock) {
  destCidrBlock_ = destCidrBlock;
  setParameter(std::string("DestCidrBlock"), destCidrBlock);
}

std::string DeleteRouteDistributionStrategyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteRouteDistributionStrategyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteRouteDistributionStrategyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteRouteDistributionStrategyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteRouteDistributionStrategyRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteRouteDistributionStrategyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteRouteDistributionStrategyRequest::getSmartAGId() const {
  return smartAGId_;
}

void DeleteRouteDistributionStrategyRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

