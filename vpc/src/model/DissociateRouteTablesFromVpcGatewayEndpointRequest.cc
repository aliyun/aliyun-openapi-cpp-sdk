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

#include <alibabacloud/vpc/model/DissociateRouteTablesFromVpcGatewayEndpointRequest.h>

using AlibabaCloud::Vpc::Model::DissociateRouteTablesFromVpcGatewayEndpointRequest;

DissociateRouteTablesFromVpcGatewayEndpointRequest::DissociateRouteTablesFromVpcGatewayEndpointRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DissociateRouteTablesFromVpcGatewayEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

DissociateRouteTablesFromVpcGatewayEndpointRequest::~DissociateRouteTablesFromVpcGatewayEndpointRequest() {}

long DissociateRouteTablesFromVpcGatewayEndpointRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DissociateRouteTablesFromVpcGatewayEndpointRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DissociateRouteTablesFromVpcGatewayEndpointRequest::getClientToken() const {
  return clientToken_;
}

void DissociateRouteTablesFromVpcGatewayEndpointRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DissociateRouteTablesFromVpcGatewayEndpointRequest::getEndpointId() const {
  return endpointId_;
}

void DissociateRouteTablesFromVpcGatewayEndpointRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string DissociateRouteTablesFromVpcGatewayEndpointRequest::getRegionId() const {
  return regionId_;
}

void DissociateRouteTablesFromVpcGatewayEndpointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DissociateRouteTablesFromVpcGatewayEndpointRequest::getDryRun() const {
  return dryRun_;
}

void DissociateRouteTablesFromVpcGatewayEndpointRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DissociateRouteTablesFromVpcGatewayEndpointRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DissociateRouteTablesFromVpcGatewayEndpointRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DissociateRouteTablesFromVpcGatewayEndpointRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DissociateRouteTablesFromVpcGatewayEndpointRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DissociateRouteTablesFromVpcGatewayEndpointRequest::getOwnerId() const {
  return ownerId_;
}

void DissociateRouteTablesFromVpcGatewayEndpointRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> DissociateRouteTablesFromVpcGatewayEndpointRequest::getRouteTableIds() const {
  return routeTableIds_;
}

void DissociateRouteTablesFromVpcGatewayEndpointRequest::setRouteTableIds(const std::vector<std::string> &routeTableIds) {
  routeTableIds_ = routeTableIds;
}

