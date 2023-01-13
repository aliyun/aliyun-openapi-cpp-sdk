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

#include <alibabacloud/cbn/model/RoutePrivateZoneInCenToVpcRequest.h>

using AlibabaCloud::Cbn::Model::RoutePrivateZoneInCenToVpcRequest;

RoutePrivateZoneInCenToVpcRequest::RoutePrivateZoneInCenToVpcRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "RoutePrivateZoneInCenToVpc") {
  setMethod(HttpRequest::Method::Post);
}

RoutePrivateZoneInCenToVpcRequest::~RoutePrivateZoneInCenToVpcRequest() {}

long RoutePrivateZoneInCenToVpcRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RoutePrivateZoneInCenToVpcRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RoutePrivateZoneInCenToVpcRequest::getCenId() const {
  return cenId_;
}

void RoutePrivateZoneInCenToVpcRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string RoutePrivateZoneInCenToVpcRequest::getAccessRegionId() const {
  return accessRegionId_;
}

void RoutePrivateZoneInCenToVpcRequest::setAccessRegionId(const std::string &accessRegionId) {
  accessRegionId_ = accessRegionId;
  setParameter(std::string("AccessRegionId"), accessRegionId);
}

std::string RoutePrivateZoneInCenToVpcRequest::getHostRegionId() const {
  return hostRegionId_;
}

void RoutePrivateZoneInCenToVpcRequest::setHostRegionId(const std::string &hostRegionId) {
  hostRegionId_ = hostRegionId;
  setParameter(std::string("HostRegionId"), hostRegionId);
}

std::string RoutePrivateZoneInCenToVpcRequest::getHostVpcId() const {
  return hostVpcId_;
}

void RoutePrivateZoneInCenToVpcRequest::setHostVpcId(const std::string &hostVpcId) {
  hostVpcId_ = hostVpcId;
  setParameter(std::string("HostVpcId"), hostVpcId);
}

std::string RoutePrivateZoneInCenToVpcRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RoutePrivateZoneInCenToVpcRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RoutePrivateZoneInCenToVpcRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RoutePrivateZoneInCenToVpcRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RoutePrivateZoneInCenToVpcRequest::getOwnerId() const {
  return ownerId_;
}

void RoutePrivateZoneInCenToVpcRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RoutePrivateZoneInCenToVpcRequest::getVersion() const {
  return version_;
}

void RoutePrivateZoneInCenToVpcRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

