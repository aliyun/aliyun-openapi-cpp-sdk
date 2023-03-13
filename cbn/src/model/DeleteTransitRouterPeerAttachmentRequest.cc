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

#include <alibabacloud/cbn/model/DeleteTransitRouterPeerAttachmentRequest.h>

using AlibabaCloud::Cbn::Model::DeleteTransitRouterPeerAttachmentRequest;

DeleteTransitRouterPeerAttachmentRequest::DeleteTransitRouterPeerAttachmentRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteTransitRouterPeerAttachment") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTransitRouterPeerAttachmentRequest::~DeleteTransitRouterPeerAttachmentRequest() {}

long DeleteTransitRouterPeerAttachmentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTransitRouterPeerAttachmentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTransitRouterPeerAttachmentRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTransitRouterPeerAttachmentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool DeleteTransitRouterPeerAttachmentRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTransitRouterPeerAttachmentRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTransitRouterPeerAttachmentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTransitRouterPeerAttachmentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTransitRouterPeerAttachmentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTransitRouterPeerAttachmentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTransitRouterPeerAttachmentRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTransitRouterPeerAttachmentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteTransitRouterPeerAttachmentRequest::getResourceType() const {
  return resourceType_;
}

void DeleteTransitRouterPeerAttachmentRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DeleteTransitRouterPeerAttachmentRequest::getVersion() const {
  return version_;
}

void DeleteTransitRouterPeerAttachmentRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DeleteTransitRouterPeerAttachmentRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void DeleteTransitRouterPeerAttachmentRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

bool DeleteTransitRouterPeerAttachmentRequest::getForce() const {
  return force_;
}

void DeleteTransitRouterPeerAttachmentRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

