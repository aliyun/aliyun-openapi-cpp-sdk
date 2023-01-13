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

#include <alibabacloud/cbn/model/DeleteTransitRouterVpcAttachmentRequest.h>

using AlibabaCloud::Cbn::Model::DeleteTransitRouterVpcAttachmentRequest;

DeleteTransitRouterVpcAttachmentRequest::DeleteTransitRouterVpcAttachmentRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteTransitRouterVpcAttachment") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTransitRouterVpcAttachmentRequest::~DeleteTransitRouterVpcAttachmentRequest() {}

long DeleteTransitRouterVpcAttachmentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTransitRouterVpcAttachmentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTransitRouterVpcAttachmentRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTransitRouterVpcAttachmentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool DeleteTransitRouterVpcAttachmentRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTransitRouterVpcAttachmentRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTransitRouterVpcAttachmentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTransitRouterVpcAttachmentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTransitRouterVpcAttachmentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTransitRouterVpcAttachmentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTransitRouterVpcAttachmentRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTransitRouterVpcAttachmentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteTransitRouterVpcAttachmentRequest::getResourceType() const {
  return resourceType_;
}

void DeleteTransitRouterVpcAttachmentRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DeleteTransitRouterVpcAttachmentRequest::getVersion() const {
  return version_;
}

void DeleteTransitRouterVpcAttachmentRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DeleteTransitRouterVpcAttachmentRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void DeleteTransitRouterVpcAttachmentRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

bool DeleteTransitRouterVpcAttachmentRequest::getForce() const {
  return force_;
}

void DeleteTransitRouterVpcAttachmentRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

