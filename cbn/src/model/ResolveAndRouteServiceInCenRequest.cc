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

#include <alibabacloud/cbn/model/ResolveAndRouteServiceInCenRequest.h>

using AlibabaCloud::Cbn::Model::ResolveAndRouteServiceInCenRequest;

ResolveAndRouteServiceInCenRequest::ResolveAndRouteServiceInCenRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ResolveAndRouteServiceInCen") {
  setMethod(HttpRequest::Method::Post);
}

ResolveAndRouteServiceInCenRequest::~ResolveAndRouteServiceInCenRequest() {}

long ResolveAndRouteServiceInCenRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ResolveAndRouteServiceInCenRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ResolveAndRouteServiceInCenRequest::getClientToken() const {
  return clientToken_;
}

void ResolveAndRouteServiceInCenRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ResolveAndRouteServiceInCenRequest::getCenId() const {
  return cenId_;
}

void ResolveAndRouteServiceInCenRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string ResolveAndRouteServiceInCenRequest::getDescription() const {
  return description_;
}

void ResolveAndRouteServiceInCenRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long ResolveAndRouteServiceInCenRequest::getUpdateInterval() const {
  return updateInterval_;
}

void ResolveAndRouteServiceInCenRequest::setUpdateInterval(long updateInterval) {
  updateInterval_ = updateInterval;
  setParameter(std::string("UpdateInterval"), std::to_string(updateInterval));
}

std::string ResolveAndRouteServiceInCenRequest::getHost() const {
  return host_;
}

void ResolveAndRouteServiceInCenRequest::setHost(const std::string &host) {
  host_ = host;
  setParameter(std::string("Host"), host);
}

std::string ResolveAndRouteServiceInCenRequest::getHostRegionId() const {
  return hostRegionId_;
}

void ResolveAndRouteServiceInCenRequest::setHostRegionId(const std::string &hostRegionId) {
  hostRegionId_ = hostRegionId;
  setParameter(std::string("HostRegionId"), hostRegionId);
}

std::string ResolveAndRouteServiceInCenRequest::getHostVpcId() const {
  return hostVpcId_;
}

void ResolveAndRouteServiceInCenRequest::setHostVpcId(const std::string &hostVpcId) {
  hostVpcId_ = hostVpcId;
  setParameter(std::string("HostVpcId"), hostVpcId);
}

std::string ResolveAndRouteServiceInCenRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ResolveAndRouteServiceInCenRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ResolveAndRouteServiceInCenRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ResolveAndRouteServiceInCenRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ResolveAndRouteServiceInCenRequest::getOwnerId() const {
  return ownerId_;
}

void ResolveAndRouteServiceInCenRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ResolveAndRouteServiceInCenRequest::getVersion() const {
  return version_;
}

void ResolveAndRouteServiceInCenRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::vector<std::string> ResolveAndRouteServiceInCenRequest::getAccessRegionIds() const {
  return accessRegionIds_;
}

void ResolveAndRouteServiceInCenRequest::setAccessRegionIds(const std::vector<std::string> &accessRegionIds) {
  accessRegionIds_ = accessRegionIds;
}

