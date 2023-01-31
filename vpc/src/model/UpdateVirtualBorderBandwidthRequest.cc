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

#include <alibabacloud/vpc/model/UpdateVirtualBorderBandwidthRequest.h>

using AlibabaCloud::Vpc::Model::UpdateVirtualBorderBandwidthRequest;

UpdateVirtualBorderBandwidthRequest::UpdateVirtualBorderBandwidthRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UpdateVirtualBorderBandwidth") {
  setMethod(HttpRequest::Method::Post);
}

UpdateVirtualBorderBandwidthRequest::~UpdateVirtualBorderBandwidthRequest() {}

long UpdateVirtualBorderBandwidthRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateVirtualBorderBandwidthRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateVirtualBorderBandwidthRequest::getClientToken() const {
  return clientToken_;
}

void UpdateVirtualBorderBandwidthRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateVirtualBorderBandwidthRequest::getRegionId() const {
  return regionId_;
}

void UpdateVirtualBorderBandwidthRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateVirtualBorderBandwidthRequest::getVirtualBorderRouterId() const {
  return virtualBorderRouterId_;
}

void UpdateVirtualBorderBandwidthRequest::setVirtualBorderRouterId(const std::string &virtualBorderRouterId) {
  virtualBorderRouterId_ = virtualBorderRouterId;
  setParameter(std::string("VirtualBorderRouterId"), virtualBorderRouterId);
}

int UpdateVirtualBorderBandwidthRequest::getBandwidth() const {
  return bandwidth_;
}

void UpdateVirtualBorderBandwidthRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string UpdateVirtualBorderBandwidthRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateVirtualBorderBandwidthRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateVirtualBorderBandwidthRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateVirtualBorderBandwidthRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateVirtualBorderBandwidthRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateVirtualBorderBandwidthRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

