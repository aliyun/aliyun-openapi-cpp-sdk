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

#include <alibabacloud/vpc/model/ModifyBgpPeerAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyBgpPeerAttributeRequest;

ModifyBgpPeerAttributeRequest::ModifyBgpPeerAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyBgpPeerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBgpPeerAttributeRequest::~ModifyBgpPeerAttributeRequest() {}

long ModifyBgpPeerAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyBgpPeerAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyBgpPeerAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyBgpPeerAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyBgpPeerAttributeRequest::getBgpGroupId() const {
  return bgpGroupId_;
}

void ModifyBgpPeerAttributeRequest::setBgpGroupId(const std::string &bgpGroupId) {
  bgpGroupId_ = bgpGroupId;
  setParameter(std::string("BgpGroupId"), bgpGroupId);
}

std::string ModifyBgpPeerAttributeRequest::getPeerIpAddress() const {
  return peerIpAddress_;
}

void ModifyBgpPeerAttributeRequest::setPeerIpAddress(const std::string &peerIpAddress) {
  peerIpAddress_ = peerIpAddress;
  setParameter(std::string("PeerIpAddress"), peerIpAddress);
}

int ModifyBgpPeerAttributeRequest::getBfdMultiHop() const {
  return bfdMultiHop_;
}

void ModifyBgpPeerAttributeRequest::setBfdMultiHop(int bfdMultiHop) {
  bfdMultiHop_ = bfdMultiHop;
  setParameter(std::string("BfdMultiHop"), std::to_string(bfdMultiHop));
}

std::string ModifyBgpPeerAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyBgpPeerAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyBgpPeerAttributeRequest::getEnableBfd() const {
  return enableBfd_;
}

void ModifyBgpPeerAttributeRequest::setEnableBfd(bool enableBfd) {
  enableBfd_ = enableBfd;
  setParameter(std::string("EnableBfd"), enableBfd ? "true" : "false");
}

std::string ModifyBgpPeerAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyBgpPeerAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyBgpPeerAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyBgpPeerAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyBgpPeerAttributeRequest::getBgpPeerId() const {
  return bgpPeerId_;
}

void ModifyBgpPeerAttributeRequest::setBgpPeerId(const std::string &bgpPeerId) {
  bgpPeerId_ = bgpPeerId;
  setParameter(std::string("BgpPeerId"), bgpPeerId);
}

long ModifyBgpPeerAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyBgpPeerAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

