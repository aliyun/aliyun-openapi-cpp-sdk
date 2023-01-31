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

#include <alibabacloud/vpc/model/DeleteBgpPeerRequest.h>

using AlibabaCloud::Vpc::Model::DeleteBgpPeerRequest;

DeleteBgpPeerRequest::DeleteBgpPeerRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteBgpPeer") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBgpPeerRequest::~DeleteBgpPeerRequest() {}

long DeleteBgpPeerRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteBgpPeerRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteBgpPeerRequest::getClientToken() const {
  return clientToken_;
}

void DeleteBgpPeerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteBgpPeerRequest::getRegionId() const {
  return regionId_;
}

void DeleteBgpPeerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteBgpPeerRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteBgpPeerRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteBgpPeerRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteBgpPeerRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DeleteBgpPeerRequest::getBgpPeerId() const {
  return bgpPeerId_;
}

void DeleteBgpPeerRequest::setBgpPeerId(const std::string &bgpPeerId) {
  bgpPeerId_ = bgpPeerId;
  setParameter(std::string("BgpPeerId"), bgpPeerId);
}

long DeleteBgpPeerRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteBgpPeerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

