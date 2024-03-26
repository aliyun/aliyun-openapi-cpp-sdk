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

#include <alibabacloud/cbn/model/CreateTransitRouterEcrAttachmentRequest.h>

using AlibabaCloud::Cbn::Model::CreateTransitRouterEcrAttachmentRequest;

CreateTransitRouterEcrAttachmentRequest::CreateTransitRouterEcrAttachmentRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateTransitRouterEcrAttachment") {
  setMethod(HttpRequest::Method::Post);
}

CreateTransitRouterEcrAttachmentRequest::~CreateTransitRouterEcrAttachmentRequest() {}

long CreateTransitRouterEcrAttachmentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTransitRouterEcrAttachmentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTransitRouterEcrAttachmentRequest::getClientToken() const {
  return clientToken_;
}

void CreateTransitRouterEcrAttachmentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateTransitRouterEcrAttachmentRequest::getCenId() const {
  return cenId_;
}

void CreateTransitRouterEcrAttachmentRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

bool CreateTransitRouterEcrAttachmentRequest::getRouteTableAssociationEnabled() const {
  return routeTableAssociationEnabled_;
}

void CreateTransitRouterEcrAttachmentRequest::setRouteTableAssociationEnabled(bool routeTableAssociationEnabled) {
  routeTableAssociationEnabled_ = routeTableAssociationEnabled;
  setParameter(std::string("RouteTableAssociationEnabled"), routeTableAssociationEnabled ? "true" : "false");
}

std::string CreateTransitRouterEcrAttachmentRequest::getTransitRouterAttachmentName() const {
  return transitRouterAttachmentName_;
}

void CreateTransitRouterEcrAttachmentRequest::setTransitRouterAttachmentName(const std::string &transitRouterAttachmentName) {
  transitRouterAttachmentName_ = transitRouterAttachmentName;
  setParameter(std::string("TransitRouterAttachmentName"), transitRouterAttachmentName);
}

bool CreateTransitRouterEcrAttachmentRequest::getFastLink() const {
  return fastLink_;
}

void CreateTransitRouterEcrAttachmentRequest::setFastLink(bool fastLink) {
  fastLink_ = fastLink;
  setParameter(std::string("FastLink"), fastLink ? "true" : "false");
}

std::string CreateTransitRouterEcrAttachmentRequest::getEcrId() const {
  return ecrId_;
}

void CreateTransitRouterEcrAttachmentRequest::setEcrId(const std::string &ecrId) {
  ecrId_ = ecrId;
  setParameter(std::string("EcrId"), ecrId);
}

std::string CreateTransitRouterEcrAttachmentRequest::getRegionId() const {
  return regionId_;
}

void CreateTransitRouterEcrAttachmentRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateTransitRouterEcrAttachmentRequest::Tag> CreateTransitRouterEcrAttachmentRequest::getTag() const {
  return tag_;
}

void CreateTransitRouterEcrAttachmentRequest::setTag(const std::vector<CreateTransitRouterEcrAttachmentRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

bool CreateTransitRouterEcrAttachmentRequest::getAutoPublishRouteEnabled() const {
  return autoPublishRouteEnabled_;
}

void CreateTransitRouterEcrAttachmentRequest::setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) {
  autoPublishRouteEnabled_ = autoPublishRouteEnabled;
  setParameter(std::string("AutoPublishRouteEnabled"), autoPublishRouteEnabled ? "true" : "false");
}

bool CreateTransitRouterEcrAttachmentRequest::getRouteTablePropagationEnabled() const {
  return routeTablePropagationEnabled_;
}

void CreateTransitRouterEcrAttachmentRequest::setRouteTablePropagationEnabled(bool routeTablePropagationEnabled) {
  routeTablePropagationEnabled_ = routeTablePropagationEnabled;
  setParameter(std::string("RouteTablePropagationEnabled"), routeTablePropagationEnabled ? "true" : "false");
}

long CreateTransitRouterEcrAttachmentRequest::getEcrOwnerId() const {
  return ecrOwnerId_;
}

void CreateTransitRouterEcrAttachmentRequest::setEcrOwnerId(long ecrOwnerId) {
  ecrOwnerId_ = ecrOwnerId;
  setParameter(std::string("EcrOwnerId"), std::to_string(ecrOwnerId));
}

bool CreateTransitRouterEcrAttachmentRequest::getDryRun() const {
  return dryRun_;
}

void CreateTransitRouterEcrAttachmentRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateTransitRouterEcrAttachmentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTransitRouterEcrAttachmentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTransitRouterEcrAttachmentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTransitRouterEcrAttachmentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateTransitRouterEcrAttachmentRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTransitRouterEcrAttachmentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTransitRouterEcrAttachmentRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void CreateTransitRouterEcrAttachmentRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string CreateTransitRouterEcrAttachmentRequest::getResourceType() const {
  return resourceType_;
}

void CreateTransitRouterEcrAttachmentRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string CreateTransitRouterEcrAttachmentRequest::getVersion() const {
  return version_;
}

void CreateTransitRouterEcrAttachmentRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string CreateTransitRouterEcrAttachmentRequest::getTransitRouterAttachmentDescription() const {
  return transitRouterAttachmentDescription_;
}

void CreateTransitRouterEcrAttachmentRequest::setTransitRouterAttachmentDescription(const std::string &transitRouterAttachmentDescription) {
  transitRouterAttachmentDescription_ = transitRouterAttachmentDescription;
  setParameter(std::string("TransitRouterAttachmentDescription"), transitRouterAttachmentDescription);
}

