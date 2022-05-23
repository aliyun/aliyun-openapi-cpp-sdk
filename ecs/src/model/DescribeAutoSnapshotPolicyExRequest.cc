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

#include <alibabacloud/ecs/model/DescribeAutoSnapshotPolicyExRequest.h>

using AlibabaCloud::Ecs::Model::DescribeAutoSnapshotPolicyExRequest;

DescribeAutoSnapshotPolicyExRequest::DescribeAutoSnapshotPolicyExRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeAutoSnapshotPolicyEx") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAutoSnapshotPolicyExRequest::~DescribeAutoSnapshotPolicyExRequest() {}

long DescribeAutoSnapshotPolicyExRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAutoSnapshotPolicyExRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAutoSnapshotPolicyExRequest::getAutoSnapshotPolicyId() const {
  return autoSnapshotPolicyId_;
}

void DescribeAutoSnapshotPolicyExRequest::setAutoSnapshotPolicyId(const std::string &autoSnapshotPolicyId) {
  autoSnapshotPolicyId_ = autoSnapshotPolicyId;
  setParameter(std::string("AutoSnapshotPolicyId"), autoSnapshotPolicyId);
}

int DescribeAutoSnapshotPolicyExRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAutoSnapshotPolicyExRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAutoSnapshotPolicyExRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeAutoSnapshotPolicyExRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeAutoSnapshotPolicyExRequest::getRegionId() const {
  return regionId_;
}

void DescribeAutoSnapshotPolicyExRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeAutoSnapshotPolicyExRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAutoSnapshotPolicyExRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeAutoSnapshotPolicyExRequest::Tag> DescribeAutoSnapshotPolicyExRequest::getTag() const {
  return tag_;
}

void DescribeAutoSnapshotPolicyExRequest::setTag(const std::vector<DescribeAutoSnapshotPolicyExRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeAutoSnapshotPolicyExRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAutoSnapshotPolicyExRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAutoSnapshotPolicyExRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAutoSnapshotPolicyExRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeAutoSnapshotPolicyExRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAutoSnapshotPolicyExRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeAutoSnapshotPolicyExRequest::getAutoSnapshotPolicyName() const {
  return autoSnapshotPolicyName_;
}

void DescribeAutoSnapshotPolicyExRequest::setAutoSnapshotPolicyName(const std::string &autoSnapshotPolicyName) {
  autoSnapshotPolicyName_ = autoSnapshotPolicyName;
  setParameter(std::string("AutoSnapshotPolicyName"), autoSnapshotPolicyName);
}

