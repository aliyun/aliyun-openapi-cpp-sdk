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

#include <alibabacloud/ecs/model/DescribeSnapshotGroupsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSnapshotGroupsRequest;

DescribeSnapshotGroupsRequest::DescribeSnapshotGroupsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeSnapshotGroups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSnapshotGroupsRequest::~DescribeSnapshotGroupsRequest() {}

long DescribeSnapshotGroupsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSnapshotGroupsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSnapshotGroupsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeSnapshotGroupsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeSnapshotGroupsRequest::getRegionId() const {
  return regionId_;
}

void DescribeSnapshotGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSnapshotGroupsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeSnapshotGroupsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<DescribeSnapshotGroupsRequest::Tag> DescribeSnapshotGroupsRequest::getTag() const {
  return tag_;
}

void DescribeSnapshotGroupsRequest::setTag(const std::vector<DescribeSnapshotGroupsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string DescribeSnapshotGroupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSnapshotGroupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSnapshotGroupsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSnapshotGroupsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<std::string> DescribeSnapshotGroupsRequest::getSnapshotGroupId() const {
  return snapshotGroupId_;
}

void DescribeSnapshotGroupsRequest::setSnapshotGroupId(const std::vector<std::string> &snapshotGroupId) {
  snapshotGroupId_ = snapshotGroupId;
}

long DescribeSnapshotGroupsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSnapshotGroupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> DescribeSnapshotGroupsRequest::getAdditionalAttributes() const {
  return additionalAttributes_;
}

void DescribeSnapshotGroupsRequest::setAdditionalAttributes(const std::vector<std::string> &additionalAttributes) {
  additionalAttributes_ = additionalAttributes;
}

std::string DescribeSnapshotGroupsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeSnapshotGroupsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeSnapshotGroupsRequest::getName() const {
  return name_;
}

void DescribeSnapshotGroupsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int DescribeSnapshotGroupsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeSnapshotGroupsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<std::string> DescribeSnapshotGroupsRequest::getStatus() const {
  return status_;
}

void DescribeSnapshotGroupsRequest::setStatus(const std::vector<std::string> &status) {
  status_ = status;
}

