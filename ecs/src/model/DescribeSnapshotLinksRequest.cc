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

#include <alibabacloud/ecs/model/DescribeSnapshotLinksRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSnapshotLinksRequest;

DescribeSnapshotLinksRequest::DescribeSnapshotLinksRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeSnapshotLinks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSnapshotLinksRequest::~DescribeSnapshotLinksRequest() {}

long DescribeSnapshotLinksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSnapshotLinksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeSnapshotLinksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSnapshotLinksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSnapshotLinksRequest::getRegionId() const {
  return regionId_;
}

void DescribeSnapshotLinksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeSnapshotLinksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSnapshotLinksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSnapshotLinksRequest::getDiskIds() const {
  return diskIds_;
}

void DescribeSnapshotLinksRequest::setDiskIds(const std::string &diskIds) {
  diskIds_ = diskIds;
  setParameter(std::string("DiskIds"), diskIds);
}

std::string DescribeSnapshotLinksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSnapshotLinksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSnapshotLinksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSnapshotLinksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeSnapshotLinksRequest::getSnapshotLinkIds() const {
  return snapshotLinkIds_;
}

void DescribeSnapshotLinksRequest::setSnapshotLinkIds(const std::string &snapshotLinkIds) {
  snapshotLinkIds_ = snapshotLinkIds;
  setParameter(std::string("SnapshotLinkIds"), snapshotLinkIds);
}

long DescribeSnapshotLinksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSnapshotLinksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSnapshotLinksRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeSnapshotLinksRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

