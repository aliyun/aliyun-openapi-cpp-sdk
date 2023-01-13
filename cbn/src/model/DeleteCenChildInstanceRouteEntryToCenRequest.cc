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

#include <alibabacloud/cbn/model/DeleteCenChildInstanceRouteEntryToCenRequest.h>

using AlibabaCloud::Cbn::Model::DeleteCenChildInstanceRouteEntryToCenRequest;

DeleteCenChildInstanceRouteEntryToCenRequest::DeleteCenChildInstanceRouteEntryToCenRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteCenChildInstanceRouteEntryToCen") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCenChildInstanceRouteEntryToCenRequest::~DeleteCenChildInstanceRouteEntryToCenRequest() {}

long DeleteCenChildInstanceRouteEntryToCenRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteCenChildInstanceRouteEntryToCenRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteCenChildInstanceRouteEntryToCenRequest::getCenId() const {
  return cenId_;
}

void DeleteCenChildInstanceRouteEntryToCenRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string DeleteCenChildInstanceRouteEntryToCenRequest::getChildInstanceRegionId() const {
  return childInstanceRegionId_;
}

void DeleteCenChildInstanceRouteEntryToCenRequest::setChildInstanceRegionId(const std::string &childInstanceRegionId) {
  childInstanceRegionId_ = childInstanceRegionId;
  setParameter(std::string("ChildInstanceRegionId"), childInstanceRegionId);
}

std::string DeleteCenChildInstanceRouteEntryToCenRequest::getRouteTableId() const {
  return routeTableId_;
}

void DeleteCenChildInstanceRouteEntryToCenRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string DeleteCenChildInstanceRouteEntryToCenRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteCenChildInstanceRouteEntryToCenRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteCenChildInstanceRouteEntryToCenRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteCenChildInstanceRouteEntryToCenRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DeleteCenChildInstanceRouteEntryToCenRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void DeleteCenChildInstanceRouteEntryToCenRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

long DeleteCenChildInstanceRouteEntryToCenRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteCenChildInstanceRouteEntryToCenRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteCenChildInstanceRouteEntryToCenRequest::getChildInstanceType() const {
  return childInstanceType_;
}

void DeleteCenChildInstanceRouteEntryToCenRequest::setChildInstanceType(const std::string &childInstanceType) {
  childInstanceType_ = childInstanceType;
  setParameter(std::string("ChildInstanceType"), childInstanceType);
}

std::string DeleteCenChildInstanceRouteEntryToCenRequest::getVersion() const {
  return version_;
}

void DeleteCenChildInstanceRouteEntryToCenRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DeleteCenChildInstanceRouteEntryToCenRequest::getChildInstanceId() const {
  return childInstanceId_;
}

void DeleteCenChildInstanceRouteEntryToCenRequest::setChildInstanceId(const std::string &childInstanceId) {
  childInstanceId_ = childInstanceId;
  setParameter(std::string("ChildInstanceId"), childInstanceId);
}

long DeleteCenChildInstanceRouteEntryToCenRequest::getChildInstanceAliUid() const {
  return childInstanceAliUid_;
}

void DeleteCenChildInstanceRouteEntryToCenRequest::setChildInstanceAliUid(long childInstanceAliUid) {
  childInstanceAliUid_ = childInstanceAliUid;
  setParameter(std::string("ChildInstanceAliUid"), std::to_string(childInstanceAliUid));
}

