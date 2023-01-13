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

#include <alibabacloud/cbn/model/ReplaceTransitRouterRouteTableAssociationRequest.h>

using AlibabaCloud::Cbn::Model::ReplaceTransitRouterRouteTableAssociationRequest;

ReplaceTransitRouterRouteTableAssociationRequest::ReplaceTransitRouterRouteTableAssociationRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ReplaceTransitRouterRouteTableAssociation") {
  setMethod(HttpRequest::Method::Post);
}

ReplaceTransitRouterRouteTableAssociationRequest::~ReplaceTransitRouterRouteTableAssociationRequest() {}

long ReplaceTransitRouterRouteTableAssociationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ReplaceTransitRouterRouteTableAssociationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ReplaceTransitRouterRouteTableAssociationRequest::getClientToken() const {
  return clientToken_;
}

void ReplaceTransitRouterRouteTableAssociationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ReplaceTransitRouterRouteTableAssociationRequest::getTransitRouterRouteTableId() const {
  return transitRouterRouteTableId_;
}

void ReplaceTransitRouterRouteTableAssociationRequest::setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId) {
  transitRouterRouteTableId_ = transitRouterRouteTableId;
  setParameter(std::string("TransitRouterRouteTableId"), transitRouterRouteTableId);
}

bool ReplaceTransitRouterRouteTableAssociationRequest::getDryRun() const {
  return dryRun_;
}

void ReplaceTransitRouterRouteTableAssociationRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ReplaceTransitRouterRouteTableAssociationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ReplaceTransitRouterRouteTableAssociationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ReplaceTransitRouterRouteTableAssociationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ReplaceTransitRouterRouteTableAssociationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ReplaceTransitRouterRouteTableAssociationRequest::getOwnerId() const {
  return ownerId_;
}

void ReplaceTransitRouterRouteTableAssociationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ReplaceTransitRouterRouteTableAssociationRequest::getVersion() const {
  return version_;
}

void ReplaceTransitRouterRouteTableAssociationRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ReplaceTransitRouterRouteTableAssociationRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void ReplaceTransitRouterRouteTableAssociationRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

