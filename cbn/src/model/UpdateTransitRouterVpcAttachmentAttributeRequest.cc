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

#include <alibabacloud/cbn/model/UpdateTransitRouterVpcAttachmentAttributeRequest.h>

using AlibabaCloud::Cbn::Model::UpdateTransitRouterVpcAttachmentAttributeRequest;

UpdateTransitRouterVpcAttachmentAttributeRequest::UpdateTransitRouterVpcAttachmentAttributeRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "UpdateTransitRouterVpcAttachmentAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTransitRouterVpcAttachmentAttributeRequest::~UpdateTransitRouterVpcAttachmentAttributeRequest() {}

long UpdateTransitRouterVpcAttachmentAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateTransitRouterVpcAttachmentAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateTransitRouterVpcAttachmentAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateTransitRouterVpcAttachmentAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateTransitRouterVpcAttachmentAttributeRequest::getTransitRouterAttachmentName() const {
  return transitRouterAttachmentName_;
}

void UpdateTransitRouterVpcAttachmentAttributeRequest::setTransitRouterAttachmentName(const std::string &transitRouterAttachmentName) {
  transitRouterAttachmentName_ = transitRouterAttachmentName;
  setParameter(std::string("TransitRouterAttachmentName"), transitRouterAttachmentName);
}

bool UpdateTransitRouterVpcAttachmentAttributeRequest::getAutoPublishRouteEnabled() const {
  return autoPublishRouteEnabled_;
}

void UpdateTransitRouterVpcAttachmentAttributeRequest::setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) {
  autoPublishRouteEnabled_ = autoPublishRouteEnabled;
  setParameter(std::string("AutoPublishRouteEnabled"), autoPublishRouteEnabled ? "true" : "false");
}

bool UpdateTransitRouterVpcAttachmentAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateTransitRouterVpcAttachmentAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateTransitRouterVpcAttachmentAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateTransitRouterVpcAttachmentAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateTransitRouterVpcAttachmentAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateTransitRouterVpcAttachmentAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateTransitRouterVpcAttachmentAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateTransitRouterVpcAttachmentAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateTransitRouterVpcAttachmentAttributeRequest::getResourceType() const {
  return resourceType_;
}

void UpdateTransitRouterVpcAttachmentAttributeRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string UpdateTransitRouterVpcAttachmentAttributeRequest::getVersion() const {
  return version_;
}

void UpdateTransitRouterVpcAttachmentAttributeRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string UpdateTransitRouterVpcAttachmentAttributeRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void UpdateTransitRouterVpcAttachmentAttributeRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

std::string UpdateTransitRouterVpcAttachmentAttributeRequest::getTransitRouterAttachmentDescription() const {
  return transitRouterAttachmentDescription_;
}

void UpdateTransitRouterVpcAttachmentAttributeRequest::setTransitRouterAttachmentDescription(const std::string &transitRouterAttachmentDescription) {
  transitRouterAttachmentDescription_ = transitRouterAttachmentDescription;
  setParameter(std::string("TransitRouterAttachmentDescription"), transitRouterAttachmentDescription);
}

