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

#include <alibabacloud/cbn/model/UpdateTransitRouterEcrAttachmentAttributeRequest.h>

using AlibabaCloud::Cbn::Model::UpdateTransitRouterEcrAttachmentAttributeRequest;

UpdateTransitRouterEcrAttachmentAttributeRequest::UpdateTransitRouterEcrAttachmentAttributeRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "UpdateTransitRouterEcrAttachmentAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTransitRouterEcrAttachmentAttributeRequest::~UpdateTransitRouterEcrAttachmentAttributeRequest() {}

long UpdateTransitRouterEcrAttachmentAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateTransitRouterEcrAttachmentAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateTransitRouterEcrAttachmentAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateTransitRouterEcrAttachmentAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateTransitRouterEcrAttachmentAttributeRequest::getTransitRouterAttachmentName() const {
  return transitRouterAttachmentName_;
}

void UpdateTransitRouterEcrAttachmentAttributeRequest::setTransitRouterAttachmentName(const std::string &transitRouterAttachmentName) {
  transitRouterAttachmentName_ = transitRouterAttachmentName;
  setParameter(std::string("TransitRouterAttachmentName"), transitRouterAttachmentName);
}

bool UpdateTransitRouterEcrAttachmentAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateTransitRouterEcrAttachmentAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateTransitRouterEcrAttachmentAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateTransitRouterEcrAttachmentAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateTransitRouterEcrAttachmentAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateTransitRouterEcrAttachmentAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateTransitRouterEcrAttachmentAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateTransitRouterEcrAttachmentAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateTransitRouterEcrAttachmentAttributeRequest::getResourceType() const {
  return resourceType_;
}

void UpdateTransitRouterEcrAttachmentAttributeRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string UpdateTransitRouterEcrAttachmentAttributeRequest::getVersion() const {
  return version_;
}

void UpdateTransitRouterEcrAttachmentAttributeRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string UpdateTransitRouterEcrAttachmentAttributeRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void UpdateTransitRouterEcrAttachmentAttributeRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

std::string UpdateTransitRouterEcrAttachmentAttributeRequest::getTransitRouterAttachmentDescription() const {
  return transitRouterAttachmentDescription_;
}

void UpdateTransitRouterEcrAttachmentAttributeRequest::setTransitRouterAttachmentDescription(const std::string &transitRouterAttachmentDescription) {
  transitRouterAttachmentDescription_ = transitRouterAttachmentDescription;
  setParameter(std::string("TransitRouterAttachmentDescription"), transitRouterAttachmentDescription);
}

