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

#include <alibabacloud/ecs/model/DescribeStorageSetsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeStorageSetsRequest;

DescribeStorageSetsRequest::DescribeStorageSetsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeStorageSets") {
  setMethod(HttpRequest::Method::Post);
}

DescribeStorageSetsRequest::~DescribeStorageSetsRequest() {}

long DescribeStorageSetsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeStorageSetsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeStorageSetsRequest::getClientToken() const {
  return clientToken_;
}

void DescribeStorageSetsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeStorageSetsRequest::getStorageSetIds() const {
  return storageSetIds_;
}

void DescribeStorageSetsRequest::setStorageSetIds(const std::string &storageSetIds) {
  storageSetIds_ = storageSetIds;
  setParameter(std::string("StorageSetIds"), storageSetIds);
}

int DescribeStorageSetsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeStorageSetsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeStorageSetsRequest::getRegionId() const {
  return regionId_;
}

void DescribeStorageSetsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeStorageSetsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeStorageSetsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeStorageSetsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeStorageSetsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeStorageSetsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeStorageSetsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeStorageSetsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeStorageSetsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeStorageSetsRequest::getZoneId() const {
  return zoneId_;
}

void DescribeStorageSetsRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeStorageSetsRequest::getStorageSetName() const {
  return storageSetName_;
}

void DescribeStorageSetsRequest::setStorageSetName(const std::string &storageSetName) {
  storageSetName_ = storageSetName;
  setParameter(std::string("StorageSetName"), storageSetName);
}

