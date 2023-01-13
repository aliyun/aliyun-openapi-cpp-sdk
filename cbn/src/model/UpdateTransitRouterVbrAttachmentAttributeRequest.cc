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

#include <alibabacloud/cbn/model/UpdateTransitRouterVbrAttachmentAttributeRequest.h>

using AlibabaCloud::Cbn::Model::UpdateTransitRouterVbrAttachmentAttributeRequest;

UpdateTransitRouterVbrAttachmentAttributeRequest::UpdateTransitRouterVbrAttachmentAttributeRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "UpdateTransitRouterVbrAttachmentAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTransitRouterVbrAttachmentAttributeRequest::~UpdateTransitRouterVbrAttachmentAttributeRequest() {}

long UpdateTransitRouterVbrAttachmentAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateTransitRouterVbrAttachmentAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateTransitRouterVbrAttachmentAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateTransitRouterVbrAttachmentAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateTransitRouterVbrAttachmentAttributeRequest::getTransitRouterAttachmentName() const {
  return transitRouterAttachmentName_;
}

void UpdateTransitRouterVbrAttachmentAttributeRequest::setTransitRouterAttachmentName(const std::string &transitRouterAttachmentName) {
  transitRouterAttachmentName_ = transitRouterAttachmentName;
  setParameter(std::string("TransitRouterAttachmentName"), transitRouterAttachmentName);
}

bool UpdateTransitRouterVbrAttachmentAttributeRequest::getAutoPublishRouteEnabled() const {
  return autoPublishRouteEnabled_;
}

void UpdateTransitRouterVbrAttachmentAttributeRequest::setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) {
  autoPublishRouteEnabled_ = autoPublishRouteEnabled;
  setParameter(std::string("AutoPublishRouteEnabled"), autoPublishRouteEnabled ? "true" : "false");
}

bool UpdateTransitRouterVbrAttachmentAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateTransitRouterVbrAttachmentAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateTransitRouterVbrAttachmentAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateTransitRouterVbrAttachmentAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateTransitRouterVbrAttachmentAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateTransitRouterVbrAttachmentAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateTransitRouterVbrAttachmentAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateTransitRouterVbrAttachmentAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateTransitRouterVbrAttachmentAttributeRequest::getResourceType() const {
  return resourceType_;
}

void UpdateTransitRouterVbrAttachmentAttributeRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string UpdateTransitRouterVbrAttachmentAttributeRequest::getVersion() const {
  return version_;
}

void UpdateTransitRouterVbrAttachmentAttributeRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string UpdateTransitRouterVbrAttachmentAttributeRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void UpdateTransitRouterVbrAttachmentAttributeRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

std::string UpdateTransitRouterVbrAttachmentAttributeRequest::getTransitRouterAttachmentDescription() const {
  return transitRouterAttachmentDescription_;
}

void UpdateTransitRouterVbrAttachmentAttributeRequest::setTransitRouterAttachmentDescription(const std::string &transitRouterAttachmentDescription) {
  transitRouterAttachmentDescription_ = transitRouterAttachmentDescription;
  setParameter(std::string("TransitRouterAttachmentDescription"), transitRouterAttachmentDescription);
}

