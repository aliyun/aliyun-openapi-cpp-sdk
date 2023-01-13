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

#include <alibabacloud/cbn/model/CreateCenChildInstanceRouteEntryToAttachmentRequest.h>

using AlibabaCloud::Cbn::Model::CreateCenChildInstanceRouteEntryToAttachmentRequest;

CreateCenChildInstanceRouteEntryToAttachmentRequest::CreateCenChildInstanceRouteEntryToAttachmentRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateCenChildInstanceRouteEntryToAttachment") {
  setMethod(HttpRequest::Method::Post);
}

CreateCenChildInstanceRouteEntryToAttachmentRequest::~CreateCenChildInstanceRouteEntryToAttachmentRequest() {}

long CreateCenChildInstanceRouteEntryToAttachmentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCenChildInstanceRouteEntryToAttachmentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCenChildInstanceRouteEntryToAttachmentRequest::getClientToken() const {
  return clientToken_;
}

void CreateCenChildInstanceRouteEntryToAttachmentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateCenChildInstanceRouteEntryToAttachmentRequest::getCenId() const {
  return cenId_;
}

void CreateCenChildInstanceRouteEntryToAttachmentRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string CreateCenChildInstanceRouteEntryToAttachmentRequest::getRouteTableId() const {
  return routeTableId_;
}

void CreateCenChildInstanceRouteEntryToAttachmentRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

bool CreateCenChildInstanceRouteEntryToAttachmentRequest::getDryRun() const {
  return dryRun_;
}

void CreateCenChildInstanceRouteEntryToAttachmentRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateCenChildInstanceRouteEntryToAttachmentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCenChildInstanceRouteEntryToAttachmentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateCenChildInstanceRouteEntryToAttachmentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateCenChildInstanceRouteEntryToAttachmentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateCenChildInstanceRouteEntryToAttachmentRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void CreateCenChildInstanceRouteEntryToAttachmentRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

long CreateCenChildInstanceRouteEntryToAttachmentRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCenChildInstanceRouteEntryToAttachmentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCenChildInstanceRouteEntryToAttachmentRequest::getVersion() const {
  return version_;
}

void CreateCenChildInstanceRouteEntryToAttachmentRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string CreateCenChildInstanceRouteEntryToAttachmentRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void CreateCenChildInstanceRouteEntryToAttachmentRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

