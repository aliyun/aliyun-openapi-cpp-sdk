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

#include <alibabacloud/vpc/model/DescribeBgpNetworksRequest.h>

using AlibabaCloud::Vpc::Model::DescribeBgpNetworksRequest;

DescribeBgpNetworksRequest::DescribeBgpNetworksRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeBgpNetworks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBgpNetworksRequest::~DescribeBgpNetworksRequest() {}

long DescribeBgpNetworksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeBgpNetworksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeBgpNetworksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeBgpNetworksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeBgpNetworksRequest::getRegionId() const {
  return regionId_;
}

void DescribeBgpNetworksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeBgpNetworksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBgpNetworksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeBgpNetworksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeBgpNetworksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeBgpNetworksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeBgpNetworksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeBgpNetworksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeBgpNetworksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeBgpNetworksRequest::getRouterId() const {
  return routerId_;
}

void DescribeBgpNetworksRequest::setRouterId(const std::string &routerId) {
  routerId_ = routerId;
  setParameter(std::string("RouterId"), routerId);
}

