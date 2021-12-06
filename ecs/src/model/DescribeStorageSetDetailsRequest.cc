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

#include <alibabacloud/ecs/model/DescribeStorageSetDetailsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeStorageSetDetailsRequest;

DescribeStorageSetDetailsRequest::DescribeStorageSetDetailsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeStorageSetDetails") {
  setMethod(HttpRequest::Method::Post);
}

DescribeStorageSetDetailsRequest::~DescribeStorageSetDetailsRequest() {}

long DescribeStorageSetDetailsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeStorageSetDetailsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeStorageSetDetailsRequest::getClientToken() const {
  return clientToken_;
}

void DescribeStorageSetDetailsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int DescribeStorageSetDetailsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeStorageSetDetailsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeStorageSetDetailsRequest::getRegionId() const {
  return regionId_;
}

void DescribeStorageSetDetailsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeStorageSetDetailsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeStorageSetDetailsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeStorageSetDetailsRequest::getStorageSetPartitionNumber() const {
  return storageSetPartitionNumber_;
}

void DescribeStorageSetDetailsRequest::setStorageSetPartitionNumber(int storageSetPartitionNumber) {
  storageSetPartitionNumber_ = storageSetPartitionNumber;
  setParameter(std::string("StorageSetPartitionNumber"), std::to_string(storageSetPartitionNumber));
}

std::string DescribeStorageSetDetailsRequest::getDiskIds() const {
  return diskIds_;
}

void DescribeStorageSetDetailsRequest::setDiskIds(const std::string &diskIds) {
  diskIds_ = diskIds;
  setParameter(std::string("DiskIds"), diskIds);
}

std::string DescribeStorageSetDetailsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeStorageSetDetailsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeStorageSetDetailsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeStorageSetDetailsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeStorageSetDetailsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeStorageSetDetailsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeStorageSetDetailsRequest::getStorageSetId() const {
  return storageSetId_;
}

void DescribeStorageSetDetailsRequest::setStorageSetId(const std::string &storageSetId) {
  storageSetId_ = storageSetId;
  setParameter(std::string("StorageSetId"), storageSetId);
}

