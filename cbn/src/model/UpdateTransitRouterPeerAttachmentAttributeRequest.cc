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

#include <alibabacloud/cbn/model/UpdateTransitRouterPeerAttachmentAttributeRequest.h>

using AlibabaCloud::Cbn::Model::UpdateTransitRouterPeerAttachmentAttributeRequest;

UpdateTransitRouterPeerAttachmentAttributeRequest::UpdateTransitRouterPeerAttachmentAttributeRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "UpdateTransitRouterPeerAttachmentAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTransitRouterPeerAttachmentAttributeRequest::~UpdateTransitRouterPeerAttachmentAttributeRequest() {}

long UpdateTransitRouterPeerAttachmentAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateTransitRouterPeerAttachmentAttributeRequest::getBandwidthType() const {
  return bandwidthType_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setBandwidthType(const std::string &bandwidthType) {
  bandwidthType_ = bandwidthType;
  setParameter(std::string("BandwidthType"), bandwidthType);
}

std::string UpdateTransitRouterPeerAttachmentAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateTransitRouterPeerAttachmentAttributeRequest::getTransitRouterAttachmentName() const {
  return transitRouterAttachmentName_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setTransitRouterAttachmentName(const std::string &transitRouterAttachmentName) {
  transitRouterAttachmentName_ = transitRouterAttachmentName;
  setParameter(std::string("TransitRouterAttachmentName"), transitRouterAttachmentName);
}

std::string UpdateTransitRouterPeerAttachmentAttributeRequest::getDefaultLinkType() const {
  return defaultLinkType_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setDefaultLinkType(const std::string &defaultLinkType) {
  defaultLinkType_ = defaultLinkType;
  setParameter(std::string("DefaultLinkType"), defaultLinkType);
}

bool UpdateTransitRouterPeerAttachmentAttributeRequest::getAutoPublishRouteEnabled() const {
  return autoPublishRouteEnabled_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) {
  autoPublishRouteEnabled_ = autoPublishRouteEnabled;
  setParameter(std::string("AutoPublishRouteEnabled"), autoPublishRouteEnabled ? "true" : "false");
}

bool UpdateTransitRouterPeerAttachmentAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateTransitRouterPeerAttachmentAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int UpdateTransitRouterPeerAttachmentAttributeRequest::getBandwidth() const {
  return bandwidth_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string UpdateTransitRouterPeerAttachmentAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateTransitRouterPeerAttachmentAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateTransitRouterPeerAttachmentAttributeRequest::getResourceType() const {
  return resourceType_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string UpdateTransitRouterPeerAttachmentAttributeRequest::getVersion() const {
  return version_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string UpdateTransitRouterPeerAttachmentAttributeRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

std::string UpdateTransitRouterPeerAttachmentAttributeRequest::getTransitRouterAttachmentDescription() const {
  return transitRouterAttachmentDescription_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setTransitRouterAttachmentDescription(const std::string &transitRouterAttachmentDescription) {
  transitRouterAttachmentDescription_ = transitRouterAttachmentDescription;
  setParameter(std::string("TransitRouterAttachmentDescription"), transitRouterAttachmentDescription);
}

std::string UpdateTransitRouterPeerAttachmentAttributeRequest::getCenBandwidthPackageId() const {
  return cenBandwidthPackageId_;
}

void UpdateTransitRouterPeerAttachmentAttributeRequest::setCenBandwidthPackageId(const std::string &cenBandwidthPackageId) {
  cenBandwidthPackageId_ = cenBandwidthPackageId;
  setParameter(std::string("CenBandwidthPackageId"), cenBandwidthPackageId);
}

