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

#include <alibabacloud/vpc/model/AssociateRouteTablesWithVpcGatewayEndpointRequest.h>

using AlibabaCloud::Vpc::Model::AssociateRouteTablesWithVpcGatewayEndpointRequest;

AssociateRouteTablesWithVpcGatewayEndpointRequest::AssociateRouteTablesWithVpcGatewayEndpointRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AssociateRouteTablesWithVpcGatewayEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

AssociateRouteTablesWithVpcGatewayEndpointRequest::~AssociateRouteTablesWithVpcGatewayEndpointRequest() {}

long AssociateRouteTablesWithVpcGatewayEndpointRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AssociateRouteTablesWithVpcGatewayEndpointRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AssociateRouteTablesWithVpcGatewayEndpointRequest::getClientToken() const {
  return clientToken_;
}

void AssociateRouteTablesWithVpcGatewayEndpointRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AssociateRouteTablesWithVpcGatewayEndpointRequest::getEndpointId() const {
  return endpointId_;
}

void AssociateRouteTablesWithVpcGatewayEndpointRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string AssociateRouteTablesWithVpcGatewayEndpointRequest::getRegionId() const {
  return regionId_;
}

void AssociateRouteTablesWithVpcGatewayEndpointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool AssociateRouteTablesWithVpcGatewayEndpointRequest::getDryRun() const {
  return dryRun_;
}

void AssociateRouteTablesWithVpcGatewayEndpointRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string AssociateRouteTablesWithVpcGatewayEndpointRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AssociateRouteTablesWithVpcGatewayEndpointRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AssociateRouteTablesWithVpcGatewayEndpointRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AssociateRouteTablesWithVpcGatewayEndpointRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AssociateRouteTablesWithVpcGatewayEndpointRequest::getOwnerId() const {
  return ownerId_;
}

void AssociateRouteTablesWithVpcGatewayEndpointRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> AssociateRouteTablesWithVpcGatewayEndpointRequest::getRouteTableIds() const {
  return routeTableIds_;
}

void AssociateRouteTablesWithVpcGatewayEndpointRequest::setRouteTableIds(const std::vector<std::string> &routeTableIds) {
  routeTableIds_ = routeTableIds;
}

