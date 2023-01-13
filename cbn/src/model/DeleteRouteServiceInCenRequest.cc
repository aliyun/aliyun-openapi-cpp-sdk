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

#include <alibabacloud/cbn/model/DeleteRouteServiceInCenRequest.h>

using AlibabaCloud::Cbn::Model::DeleteRouteServiceInCenRequest;

DeleteRouteServiceInCenRequest::DeleteRouteServiceInCenRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteRouteServiceInCen") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRouteServiceInCenRequest::~DeleteRouteServiceInCenRequest() {}

long DeleteRouteServiceInCenRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteRouteServiceInCenRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteRouteServiceInCenRequest::getCenId() const {
  return cenId_;
}

void DeleteRouteServiceInCenRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string DeleteRouteServiceInCenRequest::getAccessRegionId() const {
  return accessRegionId_;
}

void DeleteRouteServiceInCenRequest::setAccessRegionId(const std::string &accessRegionId) {
  accessRegionId_ = accessRegionId;
  setParameter(std::string("AccessRegionId"), accessRegionId);
}

std::string DeleteRouteServiceInCenRequest::getHost() const {
  return host_;
}

void DeleteRouteServiceInCenRequest::setHost(const std::string &host) {
  host_ = host;
  setParameter(std::string("Host"), host);
}

std::string DeleteRouteServiceInCenRequest::getHostRegionId() const {
  return hostRegionId_;
}

void DeleteRouteServiceInCenRequest::setHostRegionId(const std::string &hostRegionId) {
  hostRegionId_ = hostRegionId;
  setParameter(std::string("HostRegionId"), hostRegionId);
}

std::string DeleteRouteServiceInCenRequest::getHostVpcId() const {
  return hostVpcId_;
}

void DeleteRouteServiceInCenRequest::setHostVpcId(const std::string &hostVpcId) {
  hostVpcId_ = hostVpcId;
  setParameter(std::string("HostVpcId"), hostVpcId);
}

std::string DeleteRouteServiceInCenRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteRouteServiceInCenRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteRouteServiceInCenRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteRouteServiceInCenRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteRouteServiceInCenRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteRouteServiceInCenRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteRouteServiceInCenRequest::getVersion() const {
  return version_;
}

void DeleteRouteServiceInCenRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

