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

#include <alibabacloud/cbn/model/UpdateTransitRouterVpcAttachmentZonesRequest.h>

using AlibabaCloud::Cbn::Model::UpdateTransitRouterVpcAttachmentZonesRequest;

UpdateTransitRouterVpcAttachmentZonesRequest::UpdateTransitRouterVpcAttachmentZonesRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "UpdateTransitRouterVpcAttachmentZones") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTransitRouterVpcAttachmentZonesRequest::~UpdateTransitRouterVpcAttachmentZonesRequest() {}

long UpdateTransitRouterVpcAttachmentZonesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateTransitRouterVpcAttachmentZonesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateTransitRouterVpcAttachmentZonesRequest::getClientToken() const {
  return clientToken_;
}

void UpdateTransitRouterVpcAttachmentZonesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<UpdateTransitRouterVpcAttachmentZonesRequest::RemoveZoneMappings> UpdateTransitRouterVpcAttachmentZonesRequest::getRemoveZoneMappings() const {
  return removeZoneMappings_;
}

void UpdateTransitRouterVpcAttachmentZonesRequest::setRemoveZoneMappings(const std::vector<UpdateTransitRouterVpcAttachmentZonesRequest::RemoveZoneMappings> &removeZoneMappings) {
  removeZoneMappings_ = removeZoneMappings;
  for(int dep1 = 0; dep1 != removeZoneMappings.size(); dep1++) {
  auto removeZoneMappingsObj = removeZoneMappings.at(dep1);
  std::string removeZoneMappingsObjStr = std::string("RemoveZoneMappings") + "." + std::to_string(dep1 + 1);
    setParameter(removeZoneMappingsObjStr + ".VSwitchId", removeZoneMappingsObj.vSwitchId);
    setParameter(removeZoneMappingsObjStr + ".ZoneId", removeZoneMappingsObj.zoneId);
  }
}

std::vector<UpdateTransitRouterVpcAttachmentZonesRequest::AddZoneMappings> UpdateTransitRouterVpcAttachmentZonesRequest::getAddZoneMappings() const {
  return addZoneMappings_;
}

void UpdateTransitRouterVpcAttachmentZonesRequest::setAddZoneMappings(const std::vector<UpdateTransitRouterVpcAttachmentZonesRequest::AddZoneMappings> &addZoneMappings) {
  addZoneMappings_ = addZoneMappings;
  for(int dep1 = 0; dep1 != addZoneMappings.size(); dep1++) {
  auto addZoneMappingsObj = addZoneMappings.at(dep1);
  std::string addZoneMappingsObjStr = std::string("AddZoneMappings") + "." + std::to_string(dep1 + 1);
    setParameter(addZoneMappingsObjStr + ".VSwitchId", addZoneMappingsObj.vSwitchId);
    setParameter(addZoneMappingsObjStr + ".ZoneId", addZoneMappingsObj.zoneId);
  }
}

bool UpdateTransitRouterVpcAttachmentZonesRequest::getDryRun() const {
  return dryRun_;
}

void UpdateTransitRouterVpcAttachmentZonesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateTransitRouterVpcAttachmentZonesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateTransitRouterVpcAttachmentZonesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateTransitRouterVpcAttachmentZonesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateTransitRouterVpcAttachmentZonesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateTransitRouterVpcAttachmentZonesRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateTransitRouterVpcAttachmentZonesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateTransitRouterVpcAttachmentZonesRequest::getVersion() const {
  return version_;
}

void UpdateTransitRouterVpcAttachmentZonesRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string UpdateTransitRouterVpcAttachmentZonesRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void UpdateTransitRouterVpcAttachmentZonesRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

