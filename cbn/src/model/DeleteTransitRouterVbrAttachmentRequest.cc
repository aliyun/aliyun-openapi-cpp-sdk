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

#include <alibabacloud/cbn/model/DeleteTransitRouterVbrAttachmentRequest.h>

using AlibabaCloud::Cbn::Model::DeleteTransitRouterVbrAttachmentRequest;

DeleteTransitRouterVbrAttachmentRequest::DeleteTransitRouterVbrAttachmentRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteTransitRouterVbrAttachment") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTransitRouterVbrAttachmentRequest::~DeleteTransitRouterVbrAttachmentRequest() {}

long DeleteTransitRouterVbrAttachmentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTransitRouterVbrAttachmentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTransitRouterVbrAttachmentRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTransitRouterVbrAttachmentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool DeleteTransitRouterVbrAttachmentRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTransitRouterVbrAttachmentRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTransitRouterVbrAttachmentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTransitRouterVbrAttachmentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTransitRouterVbrAttachmentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTransitRouterVbrAttachmentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTransitRouterVbrAttachmentRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTransitRouterVbrAttachmentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteTransitRouterVbrAttachmentRequest::getResourceType() const {
  return resourceType_;
}

void DeleteTransitRouterVbrAttachmentRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DeleteTransitRouterVbrAttachmentRequest::getVersion() const {
  return version_;
}

void DeleteTransitRouterVbrAttachmentRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DeleteTransitRouterVbrAttachmentRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void DeleteTransitRouterVbrAttachmentRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

bool DeleteTransitRouterVbrAttachmentRequest::getForce() const {
  return force_;
}

void DeleteTransitRouterVbrAttachmentRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

