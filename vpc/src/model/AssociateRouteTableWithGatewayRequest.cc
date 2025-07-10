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

#include <alibabacloud/vpc/model/AssociateRouteTableWithGatewayRequest.h>

using AlibabaCloud::Vpc::Model::AssociateRouteTableWithGatewayRequest;

AssociateRouteTableWithGatewayRequest::AssociateRouteTableWithGatewayRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AssociateRouteTableWithGateway") {
  setMethod(HttpRequest::Method::Post);
}

AssociateRouteTableWithGatewayRequest::~AssociateRouteTableWithGatewayRequest() {}

long AssociateRouteTableWithGatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AssociateRouteTableWithGatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AssociateRouteTableWithGatewayRequest::getClientToken() const {
  return clientToken_;
}

void AssociateRouteTableWithGatewayRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AssociateRouteTableWithGatewayRequest::getRegionId() const {
  return regionId_;
}

void AssociateRouteTableWithGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AssociateRouteTableWithGatewayRequest::getGatewayId() const {
  return gatewayId_;
}

void AssociateRouteTableWithGatewayRequest::setGatewayId(const std::string &gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), gatewayId);
}

std::string AssociateRouteTableWithGatewayRequest::getRouteTableId() const {
  return routeTableId_;
}

void AssociateRouteTableWithGatewayRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string AssociateRouteTableWithGatewayRequest::getGatewayType() const {
  return gatewayType_;
}

void AssociateRouteTableWithGatewayRequest::setGatewayType(const std::string &gatewayType) {
  gatewayType_ = gatewayType;
  setParameter(std::string("GatewayType"), gatewayType);
}

bool AssociateRouteTableWithGatewayRequest::getDryRun() const {
  return dryRun_;
}

void AssociateRouteTableWithGatewayRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string AssociateRouteTableWithGatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AssociateRouteTableWithGatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AssociateRouteTableWithGatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AssociateRouteTableWithGatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AssociateRouteTableWithGatewayRequest::getOwnerId() const {
  return ownerId_;
}

void AssociateRouteTableWithGatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

