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

#include <alibabacloud/ecs/model/DescribeSnapshotsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSnapshotsRequest;

DescribeSnapshotsRequest::DescribeSnapshotsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeSnapshots") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSnapshotsRequest::~DescribeSnapshotsRequest() {}

long DescribeSnapshotsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSnapshotsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSnapshotsRequest::getFilter2Value() const {
  return filter2Value_;
}

void DescribeSnapshotsRequest::setFilter2Value(const std::string &filter2Value) {
  filter2Value_ = filter2Value;
  setParameter(std::string("Filter.2.Value"), filter2Value);
}

std::string DescribeSnapshotsRequest::getSnapshotIds() const {
  return snapshotIds_;
}

void DescribeSnapshotsRequest::setSnapshotIds(const std::string &snapshotIds) {
  snapshotIds_ = snapshotIds;
  setParameter(std::string("SnapshotIds"), snapshotIds);
}

std::string DescribeSnapshotsRequest::getUsage() const {
  return usage_;
}

void DescribeSnapshotsRequest::setUsage(const std::string &usage) {
  usage_ = usage;
  setParameter(std::string("Usage"), usage);
}

std::string DescribeSnapshotsRequest::getSnapshotLinkId() const {
  return snapshotLinkId_;
}

void DescribeSnapshotsRequest::setSnapshotLinkId(const std::string &snapshotLinkId) {
  snapshotLinkId_ = snapshotLinkId;
  setParameter(std::string("SnapshotLinkId"), snapshotLinkId);
}

std::string DescribeSnapshotsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeSnapshotsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeSnapshotsRequest::getFilter1Key() const {
  return filter1Key_;
}

void DescribeSnapshotsRequest::setFilter1Key(const std::string &filter1Key) {
  filter1Key_ = filter1Key;
  setParameter(std::string("Filter.1.Key"), filter1Key);
}

std::vector<DescribeSnapshotsRequest::Tag> DescribeSnapshotsRequest::getTag() const {
  return tag_;
}

void DescribeSnapshotsRequest::setTag(const std::vector<DescribeSnapshotsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

bool DescribeSnapshotsRequest::getDryRun() const {
  return dryRun_;
}

void DescribeSnapshotsRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DescribeSnapshotsRequest::getFilter1Value() const {
  return filter1Value_;
}

void DescribeSnapshotsRequest::setFilter1Value(const std::string &filter1Value) {
  filter1Value_ = filter1Value;
  setParameter(std::string("Filter.1.Value"), filter1Value);
}

long DescribeSnapshotsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSnapshotsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSnapshotsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeSnapshotsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DescribeSnapshotsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeSnapshotsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeSnapshotsRequest::getStatus() const {
  return status_;
}

void DescribeSnapshotsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::string DescribeSnapshotsRequest::getSnapshotName() const {
  return snapshotName_;
}

void DescribeSnapshotsRequest::setSnapshotName(const std::string &snapshotName) {
  snapshotName_ = snapshotName;
  setParameter(std::string("SnapshotName"), snapshotName);
}

int DescribeSnapshotsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSnapshotsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSnapshotsRequest::getRegionId() const {
  return regionId_;
}

void DescribeSnapshotsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSnapshotsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeSnapshotsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeSnapshotsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSnapshotsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSnapshotsRequest::getDiskId() const {
  return diskId_;
}

void DescribeSnapshotsRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

std::string DescribeSnapshotsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSnapshotsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSnapshotsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSnapshotsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeSnapshotsRequest::getSourceDiskType() const {
  return sourceDiskType_;
}

void DescribeSnapshotsRequest::setSourceDiskType(const std::string &sourceDiskType) {
  sourceDiskType_ = sourceDiskType;
  setParameter(std::string("SourceDiskType"), sourceDiskType);
}

std::string DescribeSnapshotsRequest::getFilter2Key() const {
  return filter2Key_;
}

void DescribeSnapshotsRequest::setFilter2Key(const std::string &filter2Key) {
  filter2Key_ = filter2Key;
  setParameter(std::string("Filter.2.Key"), filter2Key);
}

bool DescribeSnapshotsRequest::getEncrypted() const {
  return encrypted_;
}

void DescribeSnapshotsRequest::setEncrypted(bool encrypted) {
  encrypted_ = encrypted;
  setParameter(std::string("Encrypted"), encrypted ? "true" : "false");
}

std::string DescribeSnapshotsRequest::getSnapshotType() const {
  return snapshotType_;
}

void DescribeSnapshotsRequest::setSnapshotType(const std::string &snapshotType) {
  snapshotType_ = snapshotType;
  setParameter(std::string("SnapshotType"), snapshotType);
}

std::string DescribeSnapshotsRequest::getKMSKeyId() const {
  return kMSKeyId_;
}

void DescribeSnapshotsRequest::setKMSKeyId(const std::string &kMSKeyId) {
  kMSKeyId_ = kMSKeyId;
  setParameter(std::string("KMSKeyId"), kMSKeyId);
}

std::string DescribeSnapshotsRequest::getCategory() const {
  return category_;
}

void DescribeSnapshotsRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

