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

#include <alibabacloud/cbn/model/CreateCenChildInstanceRouteEntryToCenRequest.h>

using AlibabaCloud::Cbn::Model::CreateCenChildInstanceRouteEntryToCenRequest;

CreateCenChildInstanceRouteEntryToCenRequest::CreateCenChildInstanceRouteEntryToCenRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateCenChildInstanceRouteEntryToCen") {
  setMethod(HttpRequest::Method::Post);
}

CreateCenChildInstanceRouteEntryToCenRequest::~CreateCenChildInstanceRouteEntryToCenRequest() {}

long CreateCenChildInstanceRouteEntryToCenRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCenChildInstanceRouteEntryToCenRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCenChildInstanceRouteEntryToCenRequest::getCenId() const {
  return cenId_;
}

void CreateCenChildInstanceRouteEntryToCenRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string CreateCenChildInstanceRouteEntryToCenRequest::getClientToken() const {
  return clientToken_;
}

void CreateCenChildInstanceRouteEntryToCenRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateCenChildInstanceRouteEntryToCenRequest::getNextHopGatewayZoneId() const {
  return nextHopGatewayZoneId_;
}

void CreateCenChildInstanceRouteEntryToCenRequest::setNextHopGatewayZoneId(const std::string &nextHopGatewayZoneId) {
  nextHopGatewayZoneId_ = nextHopGatewayZoneId;
  setParameter(std::string("NextHopGatewayZoneId"), nextHopGatewayZoneId);
}

std::string CreateCenChildInstanceRouteEntryToCenRequest::getChildInstanceRegionId() const {
  return childInstanceRegionId_;
}

void CreateCenChildInstanceRouteEntryToCenRequest::setChildInstanceRegionId(const std::string &childInstanceRegionId) {
  childInstanceRegionId_ = childInstanceRegionId;
  setParameter(std::string("ChildInstanceRegionId"), childInstanceRegionId);
}

std::string CreateCenChildInstanceRouteEntryToCenRequest::getRouteTableId() const {
  return routeTableId_;
}

void CreateCenChildInstanceRouteEntryToCenRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string CreateCenChildInstanceRouteEntryToCenRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCenChildInstanceRouteEntryToCenRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateCenChildInstanceRouteEntryToCenRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateCenChildInstanceRouteEntryToCenRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateCenChildInstanceRouteEntryToCenRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void CreateCenChildInstanceRouteEntryToCenRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

long CreateCenChildInstanceRouteEntryToCenRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCenChildInstanceRouteEntryToCenRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCenChildInstanceRouteEntryToCenRequest::getChildInstanceType() const {
  return childInstanceType_;
}

void CreateCenChildInstanceRouteEntryToCenRequest::setChildInstanceType(const std::string &childInstanceType) {
  childInstanceType_ = childInstanceType;
  setParameter(std::string("ChildInstanceType"), childInstanceType);
}

std::string CreateCenChildInstanceRouteEntryToCenRequest::getVersion() const {
  return version_;
}

void CreateCenChildInstanceRouteEntryToCenRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string CreateCenChildInstanceRouteEntryToCenRequest::getChildInstanceId() const {
  return childInstanceId_;
}

void CreateCenChildInstanceRouteEntryToCenRequest::setChildInstanceId(const std::string &childInstanceId) {
  childInstanceId_ = childInstanceId;
  setParameter(std::string("ChildInstanceId"), childInstanceId);
}

long CreateCenChildInstanceRouteEntryToCenRequest::getChildInstanceAliUid() const {
  return childInstanceAliUid_;
}

void CreateCenChildInstanceRouteEntryToCenRequest::setChildInstanceAliUid(long childInstanceAliUid) {
  childInstanceAliUid_ = childInstanceAliUid;
  setParameter(std::string("ChildInstanceAliUid"), std::to_string(childInstanceAliUid));
}

