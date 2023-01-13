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

#include <alibabacloud/cbn/model/CreateTransitRouterVpnAttachmentRequest.h>

using AlibabaCloud::Cbn::Model::CreateTransitRouterVpnAttachmentRequest;

CreateTransitRouterVpnAttachmentRequest::CreateTransitRouterVpnAttachmentRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateTransitRouterVpnAttachment") {
  setMethod(HttpRequest::Method::Post);
}

CreateTransitRouterVpnAttachmentRequest::~CreateTransitRouterVpnAttachmentRequest() {}

long CreateTransitRouterVpnAttachmentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTransitRouterVpnAttachmentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTransitRouterVpnAttachmentRequest::getClientToken() const {
  return clientToken_;
}

void CreateTransitRouterVpnAttachmentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateTransitRouterVpnAttachmentRequest::getCenId() const {
  return cenId_;
}

void CreateTransitRouterVpnAttachmentRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

bool CreateTransitRouterVpnAttachmentRequest::getRouteTableAssociationEnabled() const {
  return routeTableAssociationEnabled_;
}

void CreateTransitRouterVpnAttachmentRequest::setRouteTableAssociationEnabled(bool routeTableAssociationEnabled) {
  routeTableAssociationEnabled_ = routeTableAssociationEnabled;
  setParameter(std::string("RouteTableAssociationEnabled"), routeTableAssociationEnabled ? "true" : "false");
}

std::string CreateTransitRouterVpnAttachmentRequest::getTransitRouterAttachmentName() const {
  return transitRouterAttachmentName_;
}

void CreateTransitRouterVpnAttachmentRequest::setTransitRouterAttachmentName(const std::string &transitRouterAttachmentName) {
  transitRouterAttachmentName_ = transitRouterAttachmentName;
  setParameter(std::string("TransitRouterAttachmentName"), transitRouterAttachmentName);
}

std::string CreateTransitRouterVpnAttachmentRequest::getRegionId() const {
  return regionId_;
}

void CreateTransitRouterVpnAttachmentRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateTransitRouterVpnAttachmentRequest::Zone> CreateTransitRouterVpnAttachmentRequest::getZone() const {
  return zone_;
}

void CreateTransitRouterVpnAttachmentRequest::setZone(const std::vector<CreateTransitRouterVpnAttachmentRequest::Zone> &zone) {
  zone_ = zone;
  for(int dep1 = 0; dep1 != zone.size(); dep1++) {
  auto zoneObj = zone.at(dep1);
  std::string zoneObjStr = std::string("Zone") + "." + std::to_string(dep1 + 1);
    setParameter(zoneObjStr + ".ZoneId", zoneObj.zoneId);
  }
}

std::vector<CreateTransitRouterVpnAttachmentRequest::Tag> CreateTransitRouterVpnAttachmentRequest::getTag() const {
  return tag_;
}

void CreateTransitRouterVpnAttachmentRequest::setTag(const std::vector<CreateTransitRouterVpnAttachmentRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

bool CreateTransitRouterVpnAttachmentRequest::getAutoPublishRouteEnabled() const {
  return autoPublishRouteEnabled_;
}

void CreateTransitRouterVpnAttachmentRequest::setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) {
  autoPublishRouteEnabled_ = autoPublishRouteEnabled;
  setParameter(std::string("AutoPublishRouteEnabled"), autoPublishRouteEnabled ? "true" : "false");
}

bool CreateTransitRouterVpnAttachmentRequest::getRouteTablePropagationEnabled() const {
  return routeTablePropagationEnabled_;
}

void CreateTransitRouterVpnAttachmentRequest::setRouteTablePropagationEnabled(bool routeTablePropagationEnabled) {
  routeTablePropagationEnabled_ = routeTablePropagationEnabled;
  setParameter(std::string("RouteTablePropagationEnabled"), routeTablePropagationEnabled ? "true" : "false");
}

bool CreateTransitRouterVpnAttachmentRequest::getDryRun() const {
  return dryRun_;
}

void CreateTransitRouterVpnAttachmentRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateTransitRouterVpnAttachmentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTransitRouterVpnAttachmentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTransitRouterVpnAttachmentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTransitRouterVpnAttachmentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateTransitRouterVpnAttachmentRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTransitRouterVpnAttachmentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTransitRouterVpnAttachmentRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void CreateTransitRouterVpnAttachmentRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string CreateTransitRouterVpnAttachmentRequest::getResourceType() const {
  return resourceType_;
}

void CreateTransitRouterVpnAttachmentRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string CreateTransitRouterVpnAttachmentRequest::getVersion() const {
  return version_;
}

void CreateTransitRouterVpnAttachmentRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string CreateTransitRouterVpnAttachmentRequest::getTransitRouterAttachmentDescription() const {
  return transitRouterAttachmentDescription_;
}

void CreateTransitRouterVpnAttachmentRequest::setTransitRouterAttachmentDescription(const std::string &transitRouterAttachmentDescription) {
  transitRouterAttachmentDescription_ = transitRouterAttachmentDescription;
  setParameter(std::string("TransitRouterAttachmentDescription"), transitRouterAttachmentDescription);
}

long CreateTransitRouterVpnAttachmentRequest::getVpnOwnerId() const {
  return vpnOwnerId_;
}

void CreateTransitRouterVpnAttachmentRequest::setVpnOwnerId(long vpnOwnerId) {
  vpnOwnerId_ = vpnOwnerId;
  setParameter(std::string("VpnOwnerId"), std::to_string(vpnOwnerId));
}

std::string CreateTransitRouterVpnAttachmentRequest::getChargeType() const {
  return chargeType_;
}

void CreateTransitRouterVpnAttachmentRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string CreateTransitRouterVpnAttachmentRequest::getVpnId() const {
  return vpnId_;
}

void CreateTransitRouterVpnAttachmentRequest::setVpnId(const std::string &vpnId) {
  vpnId_ = vpnId;
  setParameter(std::string("VpnId"), vpnId);
}

