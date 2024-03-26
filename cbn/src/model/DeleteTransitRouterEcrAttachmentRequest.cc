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

#include <alibabacloud/cbn/model/DeleteTransitRouterEcrAttachmentRequest.h>

using AlibabaCloud::Cbn::Model::DeleteTransitRouterEcrAttachmentRequest;

DeleteTransitRouterEcrAttachmentRequest::DeleteTransitRouterEcrAttachmentRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteTransitRouterEcrAttachment") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTransitRouterEcrAttachmentRequest::~DeleteTransitRouterEcrAttachmentRequest() {}

long DeleteTransitRouterEcrAttachmentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTransitRouterEcrAttachmentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTransitRouterEcrAttachmentRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTransitRouterEcrAttachmentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool DeleteTransitRouterEcrAttachmentRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTransitRouterEcrAttachmentRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTransitRouterEcrAttachmentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTransitRouterEcrAttachmentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTransitRouterEcrAttachmentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTransitRouterEcrAttachmentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTransitRouterEcrAttachmentRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTransitRouterEcrAttachmentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteTransitRouterEcrAttachmentRequest::getResourceType() const {
  return resourceType_;
}

void DeleteTransitRouterEcrAttachmentRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DeleteTransitRouterEcrAttachmentRequest::getVersion() const {
  return version_;
}

void DeleteTransitRouterEcrAttachmentRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DeleteTransitRouterEcrAttachmentRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void DeleteTransitRouterEcrAttachmentRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

bool DeleteTransitRouterEcrAttachmentRequest::getForce() const {
  return force_;
}

void DeleteTransitRouterEcrAttachmentRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

