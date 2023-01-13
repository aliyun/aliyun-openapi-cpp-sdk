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

#include <alibabacloud/cbn/model/AssociateTransitRouterAttachmentWithRouteTableRequest.h>

using AlibabaCloud::Cbn::Model::AssociateTransitRouterAttachmentWithRouteTableRequest;

AssociateTransitRouterAttachmentWithRouteTableRequest::AssociateTransitRouterAttachmentWithRouteTableRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "AssociateTransitRouterAttachmentWithRouteTable") {
  setMethod(HttpRequest::Method::Post);
}

AssociateTransitRouterAttachmentWithRouteTableRequest::~AssociateTransitRouterAttachmentWithRouteTableRequest() {}

long AssociateTransitRouterAttachmentWithRouteTableRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AssociateTransitRouterAttachmentWithRouteTableRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AssociateTransitRouterAttachmentWithRouteTableRequest::getClientToken() const {
  return clientToken_;
}

void AssociateTransitRouterAttachmentWithRouteTableRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AssociateTransitRouterAttachmentWithRouteTableRequest::getTransitRouterRouteTableId() const {
  return transitRouterRouteTableId_;
}

void AssociateTransitRouterAttachmentWithRouteTableRequest::setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId) {
  transitRouterRouteTableId_ = transitRouterRouteTableId;
  setParameter(std::string("TransitRouterRouteTableId"), transitRouterRouteTableId);
}

bool AssociateTransitRouterAttachmentWithRouteTableRequest::getDryRun() const {
  return dryRun_;
}

void AssociateTransitRouterAttachmentWithRouteTableRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string AssociateTransitRouterAttachmentWithRouteTableRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AssociateTransitRouterAttachmentWithRouteTableRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AssociateTransitRouterAttachmentWithRouteTableRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AssociateTransitRouterAttachmentWithRouteTableRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AssociateTransitRouterAttachmentWithRouteTableRequest::getOwnerId() const {
  return ownerId_;
}

void AssociateTransitRouterAttachmentWithRouteTableRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AssociateTransitRouterAttachmentWithRouteTableRequest::getVersion() const {
  return version_;
}

void AssociateTransitRouterAttachmentWithRouteTableRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string AssociateTransitRouterAttachmentWithRouteTableRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void AssociateTransitRouterAttachmentWithRouteTableRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

