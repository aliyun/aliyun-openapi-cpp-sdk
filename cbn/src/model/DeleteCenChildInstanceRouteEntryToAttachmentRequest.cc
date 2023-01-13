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

#include <alibabacloud/cbn/model/DeleteCenChildInstanceRouteEntryToAttachmentRequest.h>

using AlibabaCloud::Cbn::Model::DeleteCenChildInstanceRouteEntryToAttachmentRequest;

DeleteCenChildInstanceRouteEntryToAttachmentRequest::DeleteCenChildInstanceRouteEntryToAttachmentRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteCenChildInstanceRouteEntryToAttachment") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCenChildInstanceRouteEntryToAttachmentRequest::~DeleteCenChildInstanceRouteEntryToAttachmentRequest() {}

long DeleteCenChildInstanceRouteEntryToAttachmentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteCenChildInstanceRouteEntryToAttachmentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteCenChildInstanceRouteEntryToAttachmentRequest::getClientToken() const {
  return clientToken_;
}

void DeleteCenChildInstanceRouteEntryToAttachmentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteCenChildInstanceRouteEntryToAttachmentRequest::getCenId() const {
  return cenId_;
}

void DeleteCenChildInstanceRouteEntryToAttachmentRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string DeleteCenChildInstanceRouteEntryToAttachmentRequest::getRouteTableId() const {
  return routeTableId_;
}

void DeleteCenChildInstanceRouteEntryToAttachmentRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

bool DeleteCenChildInstanceRouteEntryToAttachmentRequest::getDryRun() const {
  return dryRun_;
}

void DeleteCenChildInstanceRouteEntryToAttachmentRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteCenChildInstanceRouteEntryToAttachmentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteCenChildInstanceRouteEntryToAttachmentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteCenChildInstanceRouteEntryToAttachmentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteCenChildInstanceRouteEntryToAttachmentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DeleteCenChildInstanceRouteEntryToAttachmentRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void DeleteCenChildInstanceRouteEntryToAttachmentRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

long DeleteCenChildInstanceRouteEntryToAttachmentRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteCenChildInstanceRouteEntryToAttachmentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteCenChildInstanceRouteEntryToAttachmentRequest::getVersion() const {
  return version_;
}

void DeleteCenChildInstanceRouteEntryToAttachmentRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DeleteCenChildInstanceRouteEntryToAttachmentRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void DeleteCenChildInstanceRouteEntryToAttachmentRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

