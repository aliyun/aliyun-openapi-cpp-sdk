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

#include <alibabacloud/vpc/model/DissociateRouteTableFromGatewayRequest.h>

using AlibabaCloud::Vpc::Model::DissociateRouteTableFromGatewayRequest;

DissociateRouteTableFromGatewayRequest::DissociateRouteTableFromGatewayRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DissociateRouteTableFromGateway") {
  setMethod(HttpRequest::Method::Post);
}

DissociateRouteTableFromGatewayRequest::~DissociateRouteTableFromGatewayRequest() {}

long DissociateRouteTableFromGatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DissociateRouteTableFromGatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DissociateRouteTableFromGatewayRequest::getClientToken() const {
  return clientToken_;
}

void DissociateRouteTableFromGatewayRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DissociateRouteTableFromGatewayRequest::getRegionId() const {
  return regionId_;
}

void DissociateRouteTableFromGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DissociateRouteTableFromGatewayRequest::getGatewayId() const {
  return gatewayId_;
}

void DissociateRouteTableFromGatewayRequest::setGatewayId(const std::string &gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), gatewayId);
}

std::string DissociateRouteTableFromGatewayRequest::getRouteTableId() const {
  return routeTableId_;
}

void DissociateRouteTableFromGatewayRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string DissociateRouteTableFromGatewayRequest::getGatewayType() const {
  return gatewayType_;
}

void DissociateRouteTableFromGatewayRequest::setGatewayType(const std::string &gatewayType) {
  gatewayType_ = gatewayType;
  setParameter(std::string("GatewayType"), gatewayType);
}

bool DissociateRouteTableFromGatewayRequest::getDryRun() const {
  return dryRun_;
}

void DissociateRouteTableFromGatewayRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DissociateRouteTableFromGatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DissociateRouteTableFromGatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DissociateRouteTableFromGatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DissociateRouteTableFromGatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DissociateRouteTableFromGatewayRequest::getOwnerId() const {
  return ownerId_;
}

void DissociateRouteTableFromGatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

