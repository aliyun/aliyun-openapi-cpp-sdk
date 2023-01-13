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

#include <alibabacloud/cbn/model/UpdateTransitRouterVpnAttachmentAttributeRequest.h>

using AlibabaCloud::Cbn::Model::UpdateTransitRouterVpnAttachmentAttributeRequest;

UpdateTransitRouterVpnAttachmentAttributeRequest::UpdateTransitRouterVpnAttachmentAttributeRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "UpdateTransitRouterVpnAttachmentAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTransitRouterVpnAttachmentAttributeRequest::~UpdateTransitRouterVpnAttachmentAttributeRequest() {}

long UpdateTransitRouterVpnAttachmentAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateTransitRouterVpnAttachmentAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateTransitRouterVpnAttachmentAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateTransitRouterVpnAttachmentAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateTransitRouterVpnAttachmentAttributeRequest::getTransitRouterAttachmentName() const {
  return transitRouterAttachmentName_;
}

void UpdateTransitRouterVpnAttachmentAttributeRequest::setTransitRouterAttachmentName(const std::string &transitRouterAttachmentName) {
  transitRouterAttachmentName_ = transitRouterAttachmentName;
  setParameter(std::string("TransitRouterAttachmentName"), transitRouterAttachmentName);
}

bool UpdateTransitRouterVpnAttachmentAttributeRequest::getAutoPublishRouteEnabled() const {
  return autoPublishRouteEnabled_;
}

void UpdateTransitRouterVpnAttachmentAttributeRequest::setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) {
  autoPublishRouteEnabled_ = autoPublishRouteEnabled;
  setParameter(std::string("AutoPublishRouteEnabled"), autoPublishRouteEnabled ? "true" : "false");
}

bool UpdateTransitRouterVpnAttachmentAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateTransitRouterVpnAttachmentAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateTransitRouterVpnAttachmentAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateTransitRouterVpnAttachmentAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateTransitRouterVpnAttachmentAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateTransitRouterVpnAttachmentAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateTransitRouterVpnAttachmentAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateTransitRouterVpnAttachmentAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateTransitRouterVpnAttachmentAttributeRequest::getResourceType() const {
  return resourceType_;
}

void UpdateTransitRouterVpnAttachmentAttributeRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string UpdateTransitRouterVpnAttachmentAttributeRequest::getVersion() const {
  return version_;
}

void UpdateTransitRouterVpnAttachmentAttributeRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string UpdateTransitRouterVpnAttachmentAttributeRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void UpdateTransitRouterVpnAttachmentAttributeRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

std::string UpdateTransitRouterVpnAttachmentAttributeRequest::getTransitRouterAttachmentDescription() const {
  return transitRouterAttachmentDescription_;
}

void UpdateTransitRouterVpnAttachmentAttributeRequest::setTransitRouterAttachmentDescription(const std::string &transitRouterAttachmentDescription) {
  transitRouterAttachmentDescription_ = transitRouterAttachmentDescription;
  setParameter(std::string("TransitRouterAttachmentDescription"), transitRouterAttachmentDescription);
}

