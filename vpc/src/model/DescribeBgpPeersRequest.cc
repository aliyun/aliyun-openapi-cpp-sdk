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

#include <alibabacloud/vpc/model/DescribeBgpPeersRequest.h>

using AlibabaCloud::Vpc::Model::DescribeBgpPeersRequest;

DescribeBgpPeersRequest::DescribeBgpPeersRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeBgpPeers") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBgpPeersRequest::~DescribeBgpPeersRequest() {}

long DescribeBgpPeersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeBgpPeersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeBgpPeersRequest::getBgpGroupId() const {
  return bgpGroupId_;
}

void DescribeBgpPeersRequest::setBgpGroupId(const std::string &bgpGroupId) {
  bgpGroupId_ = bgpGroupId;
  setParameter(std::string("BgpGroupId"), bgpGroupId);
}

int DescribeBgpPeersRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeBgpPeersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeBgpPeersRequest::getRegionId() const {
  return regionId_;
}

void DescribeBgpPeersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeBgpPeersRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBgpPeersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool DescribeBgpPeersRequest::getIsDefault() const {
  return isDefault_;
}

void DescribeBgpPeersRequest::setIsDefault(bool isDefault) {
  isDefault_ = isDefault;
  setParameter(std::string("IsDefault"), isDefault ? "true" : "false");
}

std::string DescribeBgpPeersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeBgpPeersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeBgpPeersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeBgpPeersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeBgpPeersRequest::getBgpPeerId() const {
  return bgpPeerId_;
}

void DescribeBgpPeersRequest::setBgpPeerId(const std::string &bgpPeerId) {
  bgpPeerId_ = bgpPeerId;
  setParameter(std::string("BgpPeerId"), bgpPeerId);
}

long DescribeBgpPeersRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeBgpPeersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeBgpPeersRequest::getRouterId() const {
  return routerId_;
}

void DescribeBgpPeersRequest::setRouterId(const std::string &routerId) {
  routerId_ = routerId;
  setParameter(std::string("RouterId"), routerId);
}

