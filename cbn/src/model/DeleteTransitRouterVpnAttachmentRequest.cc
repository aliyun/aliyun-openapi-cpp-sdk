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

#include <alibabacloud/cbn/model/DeleteTransitRouterVpnAttachmentRequest.h>

using AlibabaCloud::Cbn::Model::DeleteTransitRouterVpnAttachmentRequest;

DeleteTransitRouterVpnAttachmentRequest::DeleteTransitRouterVpnAttachmentRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteTransitRouterVpnAttachment") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTransitRouterVpnAttachmentRequest::~DeleteTransitRouterVpnAttachmentRequest() {}

long DeleteTransitRouterVpnAttachmentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTransitRouterVpnAttachmentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTransitRouterVpnAttachmentRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTransitRouterVpnAttachmentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool DeleteTransitRouterVpnAttachmentRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTransitRouterVpnAttachmentRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTransitRouterVpnAttachmentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTransitRouterVpnAttachmentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTransitRouterVpnAttachmentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTransitRouterVpnAttachmentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTransitRouterVpnAttachmentRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTransitRouterVpnAttachmentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteTransitRouterVpnAttachmentRequest::getResourceType() const {
  return resourceType_;
}

void DeleteTransitRouterVpnAttachmentRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DeleteTransitRouterVpnAttachmentRequest::getVersion() const {
  return version_;
}

void DeleteTransitRouterVpnAttachmentRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DeleteTransitRouterVpnAttachmentRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void DeleteTransitRouterVpnAttachmentRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

bool DeleteTransitRouterVpnAttachmentRequest::getForce() const {
  return force_;
}

void DeleteTransitRouterVpnAttachmentRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

