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

#include <alibabacloud/cbn/model/UnroutePrivateZoneInCenToVpcRequest.h>

using AlibabaCloud::Cbn::Model::UnroutePrivateZoneInCenToVpcRequest;

UnroutePrivateZoneInCenToVpcRequest::UnroutePrivateZoneInCenToVpcRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "UnroutePrivateZoneInCenToVpc") {
  setMethod(HttpRequest::Method::Post);
}

UnroutePrivateZoneInCenToVpcRequest::~UnroutePrivateZoneInCenToVpcRequest() {}

long UnroutePrivateZoneInCenToVpcRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UnroutePrivateZoneInCenToVpcRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UnroutePrivateZoneInCenToVpcRequest::getCenId() const {
  return cenId_;
}

void UnroutePrivateZoneInCenToVpcRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string UnroutePrivateZoneInCenToVpcRequest::getAccessRegionId() const {
  return accessRegionId_;
}

void UnroutePrivateZoneInCenToVpcRequest::setAccessRegionId(const std::string &accessRegionId) {
  accessRegionId_ = accessRegionId;
  setParameter(std::string("AccessRegionId"), accessRegionId);
}

std::string UnroutePrivateZoneInCenToVpcRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UnroutePrivateZoneInCenToVpcRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UnroutePrivateZoneInCenToVpcRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UnroutePrivateZoneInCenToVpcRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UnroutePrivateZoneInCenToVpcRequest::getOwnerId() const {
  return ownerId_;
}

void UnroutePrivateZoneInCenToVpcRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UnroutePrivateZoneInCenToVpcRequest::getVersion() const {
  return version_;
}

void UnroutePrivateZoneInCenToVpcRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

