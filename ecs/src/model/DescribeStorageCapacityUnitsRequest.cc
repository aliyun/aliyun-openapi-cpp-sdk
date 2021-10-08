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

#include <alibabacloud/ecs/model/DescribeStorageCapacityUnitsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeStorageCapacityUnitsRequest;

DescribeStorageCapacityUnitsRequest::DescribeStorageCapacityUnitsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeStorageCapacityUnits") {
  setMethod(HttpRequest::Method::Post);
}

DescribeStorageCapacityUnitsRequest::~DescribeStorageCapacityUnitsRequest() {}

long DescribeStorageCapacityUnitsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeStorageCapacityUnitsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeStorageCapacityUnitsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeStorageCapacityUnitsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeStorageCapacityUnitsRequest::getCapacity() const {
  return capacity_;
}

void DescribeStorageCapacityUnitsRequest::setCapacity(int capacity) {
  capacity_ = capacity;
  setParameter(std::string("Capacity"), std::to_string(capacity));
}

std::vector<std::string> DescribeStorageCapacityUnitsRequest::getStorageCapacityUnitId() const {
  return storageCapacityUnitId_;
}

void DescribeStorageCapacityUnitsRequest::setStorageCapacityUnitId(const std::vector<std::string> &storageCapacityUnitId) {
  storageCapacityUnitId_ = storageCapacityUnitId;
}

std::string DescribeStorageCapacityUnitsRequest::getRegionId() const {
  return regionId_;
}

void DescribeStorageCapacityUnitsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeStorageCapacityUnitsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeStorageCapacityUnitsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeStorageCapacityUnitsRequest::Tag> DescribeStorageCapacityUnitsRequest::getTag() const {
  return tag_;
}

void DescribeStorageCapacityUnitsRequest::setTag(const std::vector<DescribeStorageCapacityUnitsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string DescribeStorageCapacityUnitsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeStorageCapacityUnitsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeStorageCapacityUnitsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeStorageCapacityUnitsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeStorageCapacityUnitsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeStorageCapacityUnitsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeStorageCapacityUnitsRequest::getName() const {
  return name_;
}

void DescribeStorageCapacityUnitsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeStorageCapacityUnitsRequest::getAllocationType() const {
  return allocationType_;
}

void DescribeStorageCapacityUnitsRequest::setAllocationType(const std::string &allocationType) {
  allocationType_ = allocationType;
  setParameter(std::string("AllocationType"), allocationType);
}

std::vector<std::string> DescribeStorageCapacityUnitsRequest::getStatus() const {
  return status_;
}

void DescribeStorageCapacityUnitsRequest::setStatus(const std::vector<std::string> &status) {
  status_ = status;
}

