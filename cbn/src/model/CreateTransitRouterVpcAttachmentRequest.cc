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

#include <alibabacloud/cbn/model/CreateTransitRouterVpcAttachmentRequest.h>

using AlibabaCloud::Cbn::Model::CreateTransitRouterVpcAttachmentRequest;

CreateTransitRouterVpcAttachmentRequest::CreateTransitRouterVpcAttachmentRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateTransitRouterVpcAttachment") {
  setMethod(HttpRequest::Method::Post);
}

CreateTransitRouterVpcAttachmentRequest::~CreateTransitRouterVpcAttachmentRequest() {}

long CreateTransitRouterVpcAttachmentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTransitRouterVpcAttachmentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTransitRouterVpcAttachmentRequest::getServiceMode() const {
  return serviceMode_;
}

void CreateTransitRouterVpcAttachmentRequest::setServiceMode(const std::string &serviceMode) {
  serviceMode_ = serviceMode;
  setParameter(std::string("ServiceMode"), serviceMode);
}

long CreateTransitRouterVpcAttachmentRequest::getVpcOwnerId() const {
  return vpcOwnerId_;
}

void CreateTransitRouterVpcAttachmentRequest::setVpcOwnerId(long vpcOwnerId) {
  vpcOwnerId_ = vpcOwnerId;
  setParameter(std::string("VpcOwnerId"), std::to_string(vpcOwnerId));
}

std::string CreateTransitRouterVpcAttachmentRequest::getClientToken() const {
  return clientToken_;
}

void CreateTransitRouterVpcAttachmentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateTransitRouterVpcAttachmentRequest::getCenId() const {
  return cenId_;
}

void CreateTransitRouterVpcAttachmentRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

bool CreateTransitRouterVpcAttachmentRequest::getRouteTableAssociationEnabled() const {
  return routeTableAssociationEnabled_;
}

void CreateTransitRouterVpcAttachmentRequest::setRouteTableAssociationEnabled(bool routeTableAssociationEnabled) {
  routeTableAssociationEnabled_ = routeTableAssociationEnabled;
  setParameter(std::string("RouteTableAssociationEnabled"), routeTableAssociationEnabled ? "true" : "false");
}

std::string CreateTransitRouterVpcAttachmentRequest::getTransitRouterAttachmentName() const {
  return transitRouterAttachmentName_;
}

void CreateTransitRouterVpcAttachmentRequest::setTransitRouterAttachmentName(const std::string &transitRouterAttachmentName) {
  transitRouterAttachmentName_ = transitRouterAttachmentName;
  setParameter(std::string("TransitRouterAttachmentName"), transitRouterAttachmentName);
}

std::string CreateTransitRouterVpcAttachmentRequest::getRegionId() const {
  return regionId_;
}

void CreateTransitRouterVpcAttachmentRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateTransitRouterVpcAttachmentRequest::Tag> CreateTransitRouterVpcAttachmentRequest::getTag() const {
  return tag_;
}

void CreateTransitRouterVpcAttachmentRequest::setTag(const std::vector<CreateTransitRouterVpcAttachmentRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

bool CreateTransitRouterVpcAttachmentRequest::getAutoCreateVpcRoute() const {
  return autoCreateVpcRoute_;
}

void CreateTransitRouterVpcAttachmentRequest::setAutoCreateVpcRoute(bool autoCreateVpcRoute) {
  autoCreateVpcRoute_ = autoCreateVpcRoute;
  setParameter(std::string("AutoCreateVpcRoute"), autoCreateVpcRoute ? "true" : "false");
}

bool CreateTransitRouterVpcAttachmentRequest::getAutoPublishRouteEnabled() const {
  return autoPublishRouteEnabled_;
}

void CreateTransitRouterVpcAttachmentRequest::setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) {
  autoPublishRouteEnabled_ = autoPublishRouteEnabled;
  setParameter(std::string("AutoPublishRouteEnabled"), autoPublishRouteEnabled ? "true" : "false");
}

bool CreateTransitRouterVpcAttachmentRequest::getRouteTablePropagationEnabled() const {
  return routeTablePropagationEnabled_;
}

void CreateTransitRouterVpcAttachmentRequest::setRouteTablePropagationEnabled(bool routeTablePropagationEnabled) {
  routeTablePropagationEnabled_ = routeTablePropagationEnabled;
  setParameter(std::string("RouteTablePropagationEnabled"), routeTablePropagationEnabled ? "true" : "false");
}

bool CreateTransitRouterVpcAttachmentRequest::getDryRun() const {
  return dryRun_;
}

void CreateTransitRouterVpcAttachmentRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateTransitRouterVpcAttachmentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTransitRouterVpcAttachmentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::vector<CreateTransitRouterVpcAttachmentRequest::ZoneMappings> CreateTransitRouterVpcAttachmentRequest::getZoneMappings() const {
  return zoneMappings_;
}

void CreateTransitRouterVpcAttachmentRequest::setZoneMappings(const std::vector<CreateTransitRouterVpcAttachmentRequest::ZoneMappings> &zoneMappings) {
  zoneMappings_ = zoneMappings;
  for(int dep1 = 0; dep1 != zoneMappings.size(); dep1++) {
  auto zoneMappingsObj = zoneMappings.at(dep1);
  std::string zoneMappingsObjStr = std::string("ZoneMappings") + "." + std::to_string(dep1 + 1);
    setParameter(zoneMappingsObjStr + ".VSwitchId", zoneMappingsObj.vSwitchId);
    setParameter(zoneMappingsObjStr + ".ZoneId", zoneMappingsObj.zoneId);
  }
}

std::string CreateTransitRouterVpcAttachmentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTransitRouterVpcAttachmentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateTransitRouterVpcAttachmentRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTransitRouterVpcAttachmentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTransitRouterVpcAttachmentRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void CreateTransitRouterVpcAttachmentRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string CreateTransitRouterVpcAttachmentRequest::getResourceType() const {
  return resourceType_;
}

void CreateTransitRouterVpcAttachmentRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string CreateTransitRouterVpcAttachmentRequest::getVersion() const {
  return version_;
}

void CreateTransitRouterVpcAttachmentRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string CreateTransitRouterVpcAttachmentRequest::getTransitRouterAttachmentDescription() const {
  return transitRouterAttachmentDescription_;
}

void CreateTransitRouterVpcAttachmentRequest::setTransitRouterAttachmentDescription(const std::string &transitRouterAttachmentDescription) {
  transitRouterAttachmentDescription_ = transitRouterAttachmentDescription;
  setParameter(std::string("TransitRouterAttachmentDescription"), transitRouterAttachmentDescription);
}

std::string CreateTransitRouterVpcAttachmentRequest::getAssociateRouteTableId() const {
  return associateRouteTableId_;
}

void CreateTransitRouterVpcAttachmentRequest::setAssociateRouteTableId(const std::string &associateRouteTableId) {
  associateRouteTableId_ = associateRouteTableId;
  setParameter(std::string("AssociateRouteTableId"), associateRouteTableId);
}

std::string CreateTransitRouterVpcAttachmentRequest::getVpcId() const {
  return vpcId_;
}

void CreateTransitRouterVpcAttachmentRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateTransitRouterVpcAttachmentRequest::getChargeType() const {
  return chargeType_;
}

void CreateTransitRouterVpcAttachmentRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

